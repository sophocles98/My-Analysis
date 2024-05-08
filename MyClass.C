#define MyClass_cxx
#include "MyClass.h"
#include <iostream>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <fstream>
#include <string>
#include <vector>
#include <Math/Vector4D.h>
#include <TLorentzVector.h>
#include "TLorentzVector.h"
#include <Math/Vector4Dfwd.h>
#include <Math/GenVector/PtEtaPhiM4D.h>

using namespace std;
using namespace ROOT::Math;

float getDeltaR(TLorentzVector vec_1, TLorentzVector vec_2);

void MyClass::Loop()
{
  if (fChain == 0)
    {
      return;
    }

  bool verbose(false);
  bool masscal(false);

  
  Int_t nentries = Int_t(fChain->GetEntries());
  cout << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "Total number of event in the file: " << nentries << endl;


  // -----------------------------------------------------------------HISTOGRAMS-----------------------------------------------------------------

  
  TH1F *jet_pt_tot = new TH1F("jet_pt_tot","jet_pt", 100, 20,300);
  TH1F *jet_eta_tot = new TH1F("jet_eta_tot","jet_eta", 100, -6,6);
  TH1F *jet_phi_tot = new TH1F("jet_phi_tot","jet_phi", 100, -5,5);
  
  TH1F *h_en_mult = new TH1F("en_mult", "electrons", 5, 0, 5);
  TH1F *h_mn_mult = new TH1F("mn_mult", "muons", 5, 0, 5);
  TH1F *h_lepton_mult = new TH1F("lepton_mult", "leptons", 5, 0, 5);
  TH1F *h_jet_mult = new TH1F("jet_mult", "Jets", 10, 0, 10);
  TH1F *h_bjet_mult_step1 = new TH1F("bjet_mult_step1", "bjet_mult_step1", 10, 0, 10);
  TH1F *h_jet_mult_step1 = new TH1F("jet_mult_step1", "jet_mult_step1", 10, 0, 10);
  
  TH1F *h_jet1_pt = new TH1F("h_jet1_pt", "jet1_pt", 100, 20, 500);
  TH1F *h_jet1_eta = new TH1F("h_jet1_eta", "jet1_eta", 100, -6, 6);
  TH1F *h_jet1_phi = new TH1F("h_jet1_phi", "jet1_phi", 100, -5,5);
  TH1F *h_jet1_m = new TH1F("h_jet1_m", "jet1_m", 100, 0, 60);
  
  TH1F *h_jet2_pt = new TH1F("h_jet2_pt", "jet2_pt", 100, 20, 500);
  TH1F *h_jet2_eta = new TH1F("h_jet2_eta", "jet2_eta", 100, -6, 6);
  TH1F *h_jet2_phi = new TH1F("h_jet2_phi", "jet2_phi", 100, -5,5);
  TH1F *h_jet2_m = new TH1F("h_jet2_m", "jet2_m", 100, 0, 60);
  
  TH1F *h_jet3_pt = new TH1F("h_jet3_pt", "jet3_pt", 100, 20, 200);
  TH1F *h_jet3_eta = new TH1F("h_jet3_eta", "jet3_eta", 100, -6, 6);
  TH1F *h_jet3_phi = new TH1F("h_jet3_phi", "jet3_phi", 100, -5,5);
  TH1F *h_jet3_m = new TH1F("h_jet3_m", "jet3_m", 100, 0, 60);
  
  TH1F *h_jet4_pt = new TH1F("h_jet4_pt", "jet4_pt", 100, 20, 150);
  TH1F *h_jet4_eta = new TH1F("h_jet4_eta", "jet4_eta", 100, -6, 6);
  TH1F *h_jet4_phi = new TH1F("h_jet4_phi", "jet4_phi", 100, -5,5);
  TH1F *h_jet4_m = new TH1F("h_jet4_m", "jet4_m", 100, 0, 60);

  TH1F *h_bjet1_pt_step4 = new TH1F("h_bjet1_pt_step4", "bjet1_pt_step4", 100, 20, 350);
  TH1F *h_bjet1_eta_step4 = new TH1F("h_bjet1_eta_step4", "bjet1_eta_step4", 100, -6, 6);
  TH1F *h_bjet1_phi_step4 = new TH1F("h_bjet1_phi_step4", "bjet1_phi_step4", 100, -5,5);
  TH1F *h_bjet1_m_step4 = new TH1F("h_bjet1_m_step4", "bjet1_m_step4", 100, 0, 60);

  TH1F *h_bjet2_pt_step4 = new TH1F("h_bjet2_pt_step4", "bjet2_pt_step4", 100, 20, 250);
  TH1F *h_bjet2_eta_step4 = new TH1F("h_bjet2_eta_step4", "bjet2_eta_step4", 100, -6, 6);
  TH1F *h_bjet2_phi_step4 = new TH1F("h_bjet2_phi_step4", "bjet2_phi_step4", 100, -5,5);
  TH1F *h_bjet2_m_step4 = new TH1F("h_bjet2_m_step4", "bjet2_m_step4", 100, 0, 40);

  TH1F *h_bjet3_pt_step4 = new TH1F("h_bjet3_pt_step4", "bjet3_pt_step4", 100, 20, 150);
  TH1F *h_bjet3_eta_step4 = new TH1F("h_bjet3_eta_step4", "bjet3_eta_step4", 100, -6, 6);
  TH1F *h_bjet3_phi_step4 = new TH1F("h_bjet3_phi_step4", "bjet3_phi_step4", 100, -5,5);
  TH1F *h_bjet3_m_step4 = new TH1F("h_bjet3_m_step4_step4", "bjet3_m_step4", 100, 0, 40);

  TH1F *h_bjet4_pt_step4 = new TH1F("h_bjet4_pt_step4", "bjet4_pt_step4", 100, 20, 100);
  TH1F *h_bjet4_eta_step4 = new TH1F("h_bjet4_eta_step4", "bjet4_eta_step4", 100, -6, 6);
  TH1F *h_bjet4_phi_step4 = new TH1F("h_bjet4_phi_step4", "bjet4_phi_step4", 100, -5,5);
  TH1F *h_bjet4_m_step4 = new TH1F("h_bjet4_m_step4", "bjet4_m_step4", 100, 0, 30);

  TH1F *h_jetoutg1_pt_step4 = new TH1F("h_jetoutg1_pt_step4", "jetoutg1_pt_step4", 100, 20, 400);
  TH1F *h_jetoutg1_eta_step4 = new TH1F("h_jetoutg1_eta_step4", "jetoutg1_eta_step4", 100, -6, 6);
  TH1F *h_jetoutg1_phi_step4 = new TH1F("h_jetoutg1_phi_step4", "jetoutg1_phi_step4", 100, -5,5);
  TH1F *h_jetoutg1_m_step4 = new TH1F("h_jetoutg1_m_step4_step4", "jetoutg1_m_step4", 100, 0, 60);

  TH1F *h_jetoutg2_pt_step4 = new TH1F("h_jetoutg2_pt_step4", "jetoutg2_pt_step4", 100, 20, 200);
  TH1F *h_jetoutg2_eta_step4 = new TH1F("h_jetoutg2_eta_step4", "jetoutg2_eta_step4", 100, -6, 6);
  TH1F *h_jetoutg2_phi_step4 = new TH1F("h_jetoutg2_phi_step4", "jetoutg2_phi_step4", 100, -5,5);
  TH1F *h_jetoutg2_m_step4 = new TH1F("h_jetoutg2_m_step4", "jetoutg2_m_step4", 100, 0, 50);

  TH1F *h_bjet1_pt_step3 = new TH1F("h_bjet1_pt_step3", "bjet1_pt_step3", 100, 20, 350);
  TH1F *h_bjet1_eta_step3 = new TH1F("h_bjet1_eta_step3", "bjet1_eta_step3", 100, -6, 6);
  TH1F *h_bjet1_phi_step3 = new TH1F("h_bjet1_phi_step3", "bjet1_phi_step3", 100, -5,5);
  TH1F *h_bjet1_m_step3 = new TH1F("h_bjet1_m_step3", "bjet1_m_step3", 100, 0, 60);

  TH1F *h_bjet2_pt_step3 = new TH1F("h_bjet2_pt_step3", "bjet2_pt_step3", 100, 20, 250);
  TH1F *h_bjet2_eta_step3 = new TH1F("h_bjet2_eta_step3", "bjet2_eta_step3", 100, -6, 6);
  TH1F *h_bjet2_phi_step3 = new TH1F("h_bjet2_phi_step3", "bjet2_phi_step3", 100, -5,5);
  TH1F *h_bjet2_m_step3 = new TH1F("h_bjet2_m_step3", "bjet2_m_step3", 100, 0, 60);

  TH1F *h_bjet3_pt_step3 = new TH1F("h_bjet3_pt_step3", "bjet3_pt_step3", 100, 20, 150);
  TH1F *h_bjet3_eta_step3 = new TH1F("h_bjet3_eta_step3", "bjet3_eta_step3", 100, -6, 6);
  TH1F *h_bjet3_phi_step3 = new TH1F("h_bjet3_phi_step3", "bjet3_phi_step3", 100, -5,5);
  TH1F *h_bjet3_m_step3 = new TH1F("h_bjet3_m_step3", "bjet3_m_step3", 100, 0, 40);

  TH1F *h_bjet4_pt_step3 = new TH1F("h_bjet4_pt_step3", "bjet4_pt_step3", 100, 20, 150);
  TH1F *h_bjet4_eta_step3 = new TH1F("h_bjet4_eta_step3", "bjet4_eta_step3", 100, -6, 6);
  TH1F *h_bjet4_phi_step3 = new TH1F("h_bjet4_phi_step3", "bjet4_phi_step3", 100, -5,5);
  TH1F *h_bjet4_m_step3 = new TH1F("h_bjet4_m_step3", "bjet4_m_step3", 100, 0, 40);

  TH1F *h_jetoutg1_pt_step3 = new TH1F("h_jetoutg1_pt_step3", "jetoutg1_pt_step3", 100, 20, 400);
  TH1F *h_jetoutg1_eta_step3 = new TH1F("h_jetoutg1_eta_step3", "jetoutg1_eta_step3", 100, -6, 6);
  TH1F *h_jetoutg1_phi_step3 = new TH1F("h_jetoutg1_phi_step3", "jetoutg1_phi_step3", 100, -5,5);
  TH1F *h_jetoutg1_m_step3 = new TH1F("h_jetoutg1_m_step3", "jetoutg1_m_step3", 100, 0, 60);

  TH1F *h_jetoutg2_pt_step3 = new TH1F("h_jetoutg2_pt_step3", "jetoutg2_pt_step3", 100, 20, 200);
  TH1F *h_jetoutg2_eta_step3 = new TH1F("h_jetoutg2_eta_step3", "jetoutg2_eta_step3", 100, -6, 6);
  TH1F *h_jetoutg2_phi_step3 = new TH1F("h_jetoutg2_phi_step3", "jetoutg2_phi_step3", 100, -5,5);
  TH1F *h_jetoutg2_m_step3 = new TH1F("h_jetoutg2_m_step3", "jetoutg2_m_step3", 100, 0, 50);

  TH1F *h_dR_jet_en_before = new TH1F("h_dR_jet_en_before", "dR_jet_en_before", 100, 0, 8);
  TH1F *h_dR_jet_mn_before = new TH1F("h_dR_jet_mn_before", "dR_jet_mn_before", 100, 0, 8);
  TH1F *h_dR_jet_en_after = new TH1F("h_dR_jet_en_after", "dR_jet_en_after", 100, 0, 8);
  TH1F *h_dR_jet_mn_after = new TH1F("h_dR_jet_mn_after", "dR_jet_mn_after", 100, 0, 8);

  TH1F *h_dR_bbbar12 = new TH1F("h_dR_bbbar12", "h_dR_bbbar12", 100, 0, 7);
  TH1F *h_dR_bbbar34 = new TH1F("h_dR_bbbar34", "h_dR_bbbar34", 100, 0, 7);

  TH1F *h_dR_outg = new TH1F("h_dR_outg", "h_dR_outg", 100, 0, 11);
  TH1F *h_deta_outg = new TH1F("h_deta_outg", "h_deta_outg", 100, 0, 10);
  TH1F *h_invmass_outg = new TH1F("h_invmass_outg", "h_invmass_outg", 100, 0, 3000);

  TH1F *h_en1_pt = new TH1F("h_en1_pt", "en1_pt", 100, 0, 500);
  TH1F *h_en1_eta = new TH1F("h_en1_eta", "en1_eta", 100, -6, 6);
  TH1F *h_en1_phi = new TH1F("h_en1_phi", "en1_phi", 100, -5,5);
  
  TH1F *h_en2_pt = new TH1F("h_en2_pt", "en2_pt", 100, 0, 500);
  TH1F *h_en2_eta = new TH1F("h_en2_eta", "en2_eta", 100, -6, 6);
  TH1F *h_en2_phi = new TH1F("h_en2_phi", "en2_phi", 100, -5,5);
  
  TH1F *h_mn1_pt = new TH1F("h_mn1_pt", "mn1_pt", 100, 0, 500);
  TH1F *h_mn1_eta = new TH1F("h_mn1_eta", "mn1_eta", 100, -6, 6);
  TH1F *h_mn1_phi = new TH1F("h_mn1_phi", "muon1 phi", 100, -5,5);
  
  TH1F *h_mn2_pt = new TH1F("h_mn2_pt", "mn2_pt", 100, 0, 500);
  TH1F *h_mn2_eta = new TH1F("h_mn2_eta", "mn2_eta", 100, -6, 6);
  TH1F *h_mn2_phi = new TH1F("h_mn2_phi", "muon2 phi", 100, -5,5);
  
  TH1F *h_en_mult_after = new TH1F("en_mult_after", "electrons", 5, 0, 5);
  TH1F *h_mn_mult_after = new TH1F("mn_mult_after", "muons", 5, 0, 5);
  TH1F *h_jet_mult_after = new TH1F("jet_mult_after", "Jets", 10, 0, 10);
  TH1F *h_fjet_mult_after = new TH1F("fjet_mult_after", "fjets", 10, 0, 10);
  TH1F *h_sv_mult_after = new TH1F("sv_mult_after", "SV's", 10, 0, 10);

  TH1F *higg_pt = new TH1F("higg_pt", "h_pt", 100, 0, 450);
  TH1F *higg_eta = new TH1F("higg_eta", "h_eta", 100, -8, 8);
  TH1F *higg_phi = new TH1F("higg_phi", "h_phi", 100, -5,5);
  TH1F *higg_m = new TH1F("higg_m", "h_m", 100, 124.6, 125.4);

  TH1F *z_pt = new TH1F("zb_pt", "zbo_pt", 100, 0, 300);
  TH1F *z_eta = new TH1F("zb_eta", "zbo_eta", 100, -10, 10);
  TH1F *z_phi = new TH1F("zb_phi", "zbo_phi", 100, -5,5);
  TH1F *z_m = new TH1F("zb_m", "zbo_m", 100, 70, 110);
  
  TH1F *a_pt = new TH1F("ab_pt", "a_pt", 100, 0, 300);
  TH1F *a_eta = new TH1F("ab_eta", "a_eta", 100, -8, 8);
  TH1F *a_phi = new TH1F("ab_phi", "a_phi", 100, -5,5); 
  TH1F *a_m = new TH1F("ab_m", "a_m", 100, 10, 70); // 20GEV 19.995, 20.005 - 60GEV 59.995, 60.005

  TH1F *a1_pt = new TH1F("ab1_pt", "a1_pt", 100, 0, 200); // 20GEV 0, 300 - 60GEV 0, 200
  TH1F *a1_eta = new TH1F("ab1_eta", "a1_eta", 100, -8, 8);
  TH1F *a1_phi = new TH1F("ab1_phi", "a1_phi", 100, -5,5);
  TH1F *a1_m = new TH1F("ab1_m", "a1_m", 100, 59.995, 60.005); // 20GEV 19.995, 20.005 - 60GEV 59.995, 60.005
  TH1F *a2_pt = new TH1F("ab2_pt", "a2_pt", 100, 0, 200); // 20GEV 0, 300 - 60GEV 0, 200
  TH1F *a2_eta = new TH1F("ab2_eta", "a2_eta", 100, -8, 8);
  TH1F *a2_phi = new TH1F("ab2_phi", "a2_phi", 100, -5,5);
  TH1F *a2_m = new TH1F("ab2_m", "a2_m", 100, 59.995, 60.005); // 20GEV 19.995, 20.005 - 60GEV 59.995, 60.005
  TH1F *dRa12 = new TH1F("dRa12", "dRa12", 100, 0, 7);
  
  TH1F *gq_pt = new TH1F("gq_pt", "gq_pt", 100, 0, 300);
  TH1F *gq_eta = new TH1F("gq_eta", "gq_eta", 100, -10, 10);
  TH1F *gq_phi = new TH1F("gq_phi", "gq_phi", 100, -5,5);
  TH1F *gq_m = new TH1F("gq_m", "gq_m", 100, -1, 5);

  TH1F *outg1_pt = new TH1F("outg1_pt", "outgo1_pt", 100, 20, 400);
  TH1F *outg1_eta = new TH1F("outg1_eta", "outgo1_eta", 100, -6, 6);
  TH1F *outg1_phi = new TH1F("outg1_phi", "outgo1_phi", 100, -5,5);
  TH1F *outg1_m = new TH1F("outg1_m", "outgo1_m", 100, -2, 2);
  TH1F *outg1_v2_m = new TH1F("outg1_v2_m", "outgo1_v2_m", 100, 0, 2);

  TH1F *outg2_pt = new TH1F("outg2_pt", "outgo2_pt", 100, 20, 400);
  TH1F *outg2_eta = new TH1F("outg2_eta", "outgo2_eta", 100, -6, 6);
  TH1F *outg2_phi = new TH1F("outg2_phi", "outgo2_phi", 100, -5,5);
  TH1F *outg2_m = new TH1F("outg2_m", "outgo2_m", 100, -2, 2);
  TH1F *outg2_v2_m = new TH1F("outg2_v2_m", "outgo2_v2_m", 100, 0, 2);

  TH1F *prod1_pt = new TH1F("q1_pt", "q1_pt", 100, 0, 200);
  TH1F *prod1_eta = new TH1F("q1_eta", "q1_eta", 100, -6, 6);
  TH1F *prod1_phi = new TH1F("q1_phi", "q1_phi", 100, -5,5);
  TH1F *prod1_m = new TH1F("q1_m", "q1_m", 100, 4.2138, 4.2142);

  TH1F *prod2_pt = new TH1F("q2_pt", "q2_pt", 100, 0, 200);
  TH1F *prod2_eta = new TH1F("q2_eta", "q2_eta", 100, -6, 6);
  TH1F *prod2_phi = new TH1F("q2_phi", "q2_phi", 100, -5,5);
  TH1F *prod2_m = new TH1F("q2_m", "q2_m", 100, 4.2138, 4.2142);

  TH1F *prod3_pt = new TH1F("q3_pt", "q3_pt", 100, 0, 200);
  TH1F *prod3_eta = new TH1F("q3_eta", "q3_eta", 100, -6, 6);
  TH1F *prod3_phi = new TH1F("q3_phi", "q3_phi", 100, -5,5);
  TH1F *prod3_m = new TH1F("q3_m", "q3_m", 100, 4.2138, 4.2142);

  TH1F *prod4_pt = new TH1F("q4_pt", "q4_pt", 100, 0, 200);
  TH1F *prod4_eta = new TH1F("q4_eta", "q4_eta", 100, -6, 6);
  TH1F *prod4_phi = new TH1F("q4_phi", "q4_phi", 100, -5,5);
  TH1F *prod4_m = new TH1F("q4_m", "q4_m", 100, 4.2138, 4.2142);
  
  TH1F *h_invmass_bbbar12 = new TH1F("invmass_bbbar12", "invmass_bbbar12 ", 100, 59.99, 60.01); //  20gev 19.99, 20.01 60gev 59.99 60.01
  TH1F *h_invmass_aboson = new TH1F("h_invmass_aboson", "h_invmass_aboson", 100, 124, 126);

  TH1F *h_dR_outg_step3 = new TH1F("h_dR_outg_step3", "h_dR_outg_step3", 80, 0, 10);
  TH1F *h_invmass_outg_step3 = new TH1F("h_invmass_outg_step3", "h_invmass_outg_step3", 80, 0, 2000);
  TH1F *h_deta_outg_step3 = new TH1F("h_deta_outg_step3", "h_deta_outg_step3", 80, 0, 10);
  TH1F *h_invmass_bjets_step3 = new TH1F("h_invmass_bjets_step3", "h_invmass_bjets_step3", 100, 0, 2000);

  TH1F *h_dR_outg_step4 = new TH1F("h_dR_outg_step4", "h_dR_outg_step4", 80, 0, 10);
  TH1F *h_invmass_outg_step4 = new TH1F("h_invmass_outg_step4", "h_invmass_outg_step4", 80, 0, 2000);
  TH1F *h_deta_outg_step4 = new TH1F("h_deta_outg_step4", "h_deta_outg_step4", 80, 0, 10);
  TH1F *h_invmass_bjets_step4 = new TH1F("h_invmass_bjets_step4", "h_invmass_bjets_step4", 100, 0, 1000);
  
  TH1F *jetbtag0_step4 = new TH1F("jetbtag0_step4", "jetbtag0_step4", 100, 0, 1);
  TH1F *jetbtag1_step4 = new TH1F("jetbtag1_step4", "jetbtag1_step4", 100, 0, 1);
  TH1F *h_ht_step4 = new TH1F("h_ht_step4", "h_ht_step4", 100, 0, 1200);

  TH1F *h_met_pt = new TH1F("h_met_pt", "h_met_pt", 100, 0, 400);
  TH1F *h_met_trig_pt = new TH1F("h_met_trig_pt", "h_met_trig_pt", 100, 0, 400);


  

  // ------------------------------------------------------------------COUNTERS------------------------------------------------------------------

  
  
  Int_t n_event_lepton_test = 0;
  Int_t n_event_jet_test = 0;
  Int_t n_event_bjet_3 = 0;
  Int_t n_event_inv_dr_det = 0;
  
  Int_t numberhiggs = 0;
  Int_t numberz = 0;
  Int_t numbergq = 0;
  Int_t numbera = 0;
  

  
  // --------------------------------------------------------------LOOP STARTS HERE--------------------------------------------------------------


  
  for (Int_t jentry = 0; jentry < nentries; jentry++) 
    {
      GetEntry(jentry);


      if (verbose)
	{
	  cout << endl;
	  cout << "Event number: " << jentry << endl;
	}

      
      vector<TLorentzVector> vec_gengq; //quarks or gluons
      vector<TLorentzVector> vec_genq1; // first b quark
      vector<TLorentzVector> vec_genq2; // second b quark
      vector<TLorentzVector> vec_gena1; // first a-boson
      vector<TLorentzVector> vec_gena2; // second a-boson
      TLorentzVector prod1; // first b quark
      TLorentzVector prod2; // second b quark
      TLorentzVector prod3; // third b quark
      TLorentzVector prod4; // forth b quark
      TLorentzVector outg1; // first outgoing quark
      TLorentzVector outg2; // second outgoing quark
      TLorentzVector a1; // first a-boson
      TLorentzVector a2; // second a-boson
      
      Int_t a = 0;
      Int_t b = 0;

      

  // -------------------------------------------------------------Loop over particles------------------------------------------------------------

      
      
      for (Int_t imc = 0; imc < nmcparticles; imc++)
	{

	  
	  if (verbose) // IT'S A PRINTOUT IF VERBOSE IS TRUE
	    {
	      if(jentry < 3) 
		{
		  cout << " imcparticle " << imc << ": is a " << mc_id[imc] << ", has a mother at: " << mc_momidx[imc] <<  "("<<mc_mom[imc] << ")" <<", status "<<mc_status[imc] << " and a 4-vector momentum p = (" << mc_en[imc] << ", " << mc_px[imc] << ", " << mc_py[imc] << ", " << mc_pz[imc] << " ) " << endl;
		}
	    } // END OF PRINTOUT

	  
	  if(mc_id[imc] == 25) // higgs id = 25
	    {      
	      numberhiggs++;
	      TLorentzVector pH;
	      pH.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
	      float ptH = pH.Pt();
	      float etaH = pH.Eta();
	      float phiH = pH.Phi();
	      float mH = pH.M();
	      higg_pt->Fill(ptH);
	      higg_eta->Fill(etaH);
	      higg_phi->Fill(phiH);
	      higg_m->Fill(mH);
	    } // end of higgs recognition


	  
	  if(mc_id[imc] == 23 || abs(mc_id[imc]) == 24) // Z, W boson id = 23, 24
	    {	      
	      numberz++;
	      TLorentzVector pz;
	      pz.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
	      float ptz = pz.Pt();
	      float etaz = pz.Eta();
	      float phiz = pz.Phi();
	      float mz = pz.M();
	      z_pt->Fill(ptz); 
	      z_eta->Fill(etaz);
	      z_phi->Fill(phiz);
	      z_m->Fill(mz);
	    } // end of Z, W recognition 

	  

	  if(mc_id[imc] == 36) // A-bosons id = 36
	    {  
	      numbera++;
	      TLorentzVector pa;
	      pa.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
	      float pta = pa.Pt();
	      float etaa = pa.Eta();
	      float phia = pa.Phi();
	      float ma = pa.M();
	      a_pt->Fill(pta); 
	      a_eta->Fill(etaa);
	      a_phi->Fill(phia);
	      a_m->Fill(ma);

	      
	      if (a == 0) // seperate the first A-boson
		{
		  a1.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		  float a1pt = a1.Pt();
		  float a1eta = a1.Eta();
		  float a1phi = a1.Phi();
		  float a1m = a1.M();
		  a1_pt->Fill(a1pt);
		  a1_eta->Fill(a1eta);
		  a1_phi->Fill(a1phi);
		  a1_m->Fill(a1m);
		  vec_gena1.push_back(a1);
		  a++;
		  continue;
		}

	      
	      if (a == 1) // seperate the secend A-boson
		{	  
		  a2.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		  float a2pt = a2.Pt();
		  float a2eta = a2.Eta();
		  float a2phi = a2.Phi();
		  float a2m = a2.M();
		  a2_pt->Fill(a2pt);
		  a2_eta->Fill(a2eta);
		  a2_phi->Fill(a2phi);
		  a2_m->Fill(a2m);
		  vec_gena2.push_back(a2);
		  a = 0;
		}
	    } // end of A-bosons recognition 

	  
	  
	  if (((abs(mc_id[imc]) >= 1 && abs(mc_id[imc]) <= 5) || abs(mc_id[imc]) == 21) && mc_status[imc] == 23 || mc_status[imc] == 1) // gluon id = 21 quark id (-5, -1) U (1, 5)
	    {	      
	      numbergq++;
	      TLorentzVector gq;
	      gq.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
	      float ptgq = gq.Pt();
	      float etagq = gq.Eta();
	      float phigq = gq.Phi();
	      float mgq = gq.M();
	      gq_pt->Fill(ptgq); 
	      gq_eta->Fill(etagq);
	      gq_phi->Fill(phigq);
	      gq_m->Fill(mgq);     
	      vec_gengq.push_back(gq);

	      
	      if (imc == 3) // found the first outgoing quark
		{
		  outg1.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		  float ptoutg1 = outg1.Pt();
		  float etaoutg1 = outg1.Eta();
		  float phioutg1 = outg1.Phi();
		  float moutg1 = outg1.M();
		  //float moutg1 = mc_en[imc] * mc_en[imc] - (mc_px[imc] * mc_px[imc] + mc_py[imc] * mc_py[imc] + mc_pz[imc] * mc_pz[imc]);
		  double_t moutg1_v2 = sqrt(mc_en[imc] * mc_en[imc] - (mc_px[imc] * mc_px[imc] + mc_py[imc] * mc_py[imc] + mc_pz[imc] * mc_pz[imc])); // M^2 = E^2 - Px^2 - Py^2 - Pz^2
		  double_t moutg1_v22 = - (mc_px[imc] * mc_px[imc] + mc_py[imc] * mc_py[imc] + mc_pz[imc] * mc_pz[imc]); // M^2 = E^2 - Px^2 - Py^2 - Pz^2

		  
		  if (masscal) // IT'S A PRINTOUT IF MASSCAL IS TRUE
		    {
		      cout << "E^2 = " << mc_en[imc] * mc_en[imc] << ", -p^2 = " << moutg1_v22 << " and m = " << moutg1_v2 << endl;
		      cout << "Comparing ROOT's calculation of Mass: " << moutg1 << " with my calculation " << moutg1_v2 << endl;
		      cout << endl;
		    } // END OF PRINTOUT

		  
		  outg1_pt->Fill(ptoutg1); 
		  outg1_eta->Fill(etaoutg1);
		  outg1_phi->Fill(phioutg1);
		  outg1_m->Fill(moutg1);
		  outg1_v2_m->Fill(moutg1_v2);
		}

	      
	      if (imc == 4) // found the second outgoing quark
		{
		  outg2.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		  float ptoutg2 = outg2.Pt();
		  float etaoutg2 = outg2.Eta();
		  float phioutg2 = outg2.Phi();
		  float moutg2 = outg2.M();
		  //float moutg2 = mc_en[imc] * mc_en[imc] - (mc_px[imc] * mc_px[imc] + mc_py[imc] * mc_py[imc] + mc_pz[imc] * mc_pz[imc]);
		  float moutg2_v2 = sqrt(mc_en[imc] * mc_en[imc] - (mc_px[imc] * mc_px[imc] + mc_py[imc] * mc_py[imc] + mc_pz[imc] * mc_pz[imc])); // M^2 = E^2 - Px^2 - Py^2 - Pz^2
		  outg2_pt->Fill(ptoutg2); 
		  outg2_eta->Fill(etaoutg2);
		  outg2_phi->Fill(phioutg2);
		  outg2_m->Fill(moutg2);
		  outg2_v2_m->Fill(moutg2_v2);
		}

	      
	      if (abs(mc_id[imc]) == 5 && mc_momidx[imc] == 5) // found the two bbbar quarks with mom the first A-boson, momidx of A = 5, 6
		{

		  
		  if (mc_id[imc] == 5) // b quark
		    { 
		      prod1.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		      float ptprod1 = prod1.Pt();
		      float etaprod1 = prod1.Eta();
		      float phiprod1 = prod1.Phi();
		      float mprod1 = prod1.M();
		      prod1_pt->Fill(ptprod1); 
		      prod1_eta->Fill(etaprod1);
		      prod1_phi->Fill(phiprod1);
		      prod1_m->Fill(mprod1);
		      vec_genq1.push_back(prod1);
		      b++;
		      continue;
		    }

	  
		  if (mc_id[imc] == -5) // bbar quark
		    { 
		      prod2.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		      float ptprod2 = prod2.Pt();
		      float etaprod2 = prod2.Eta();
		      float phiprod2 = prod2.Phi();
		      float mprod2 = prod2.M();
		      prod2_pt->Fill(ptprod2); 
		      prod2_eta->Fill(etaprod2);
		      prod2_phi->Fill(phiprod2);
		      prod2_m->Fill(mprod2);
		      vec_genq2.push_back(prod2);
		      float invmass_bbbar12 = sqrt((vec_genq1[0].E() + vec_genq2[0].E()) * (vec_genq1[0].E() + vec_genq2[0].E()) - (vec_genq1[0].Px() + vec_genq2[0].Px()) * (vec_genq1[0].Px() + vec_genq2[0].Px()) - (vec_genq1[0].Py() + vec_genq2[0].Py()) * (vec_genq1[0].Py() + vec_genq2[0].Py()) - (vec_genq1[0].Pz() + vec_genq2[0].Pz()) * (vec_genq1[0].Pz() + vec_genq2[0].Pz()));
		      h_invmass_bbbar12->Fill(invmass_bbbar12);
		      b = 0;
		    }
		}
	      

	      if (abs(mc_id[imc]) == 5 && mc_momidx[imc] == 6) // found the two bbbar quarks with mom the second A-boson
		{
		  
		  if (mc_id[imc] == 5)
		    
		    { // b quark
		      prod3.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		      float ptprod3 = prod3.Pt();
		      float etaprod3 = prod3.Eta();
		      float phiprod3 = prod3.Phi();
		      float mprod3 = prod3.M();
		      prod3_pt->Fill(ptprod3); 
		      prod3_eta->Fill(etaprod3);
		      prod3_phi->Fill(phiprod3);
		      prod3_m->Fill(mprod3);
		    }


		  if (mc_id[imc] == -5)
		    
		    { // bbar quark
		      prod4.SetPxPyPzE(mc_px[imc], mc_py[imc], mc_pz[imc], mc_en[imc]);
		      float ptprod4 = prod4.Pt();
		      float etaprod4 = prod4.Eta();
		      float phiprod4 = prod4.Phi();
		      float mprod4 = prod4.M();
		      prod4_pt->Fill(ptprod4); 
		      prod4_eta->Fill(etaprod4);
		      prod4_phi->Fill(phiprod4);
		      prod4_m->Fill(mprod4);
		    }
		} // end bbbar quarks 
	    } // end quark-gluon recognition 
	} // end imc particle loop


      float invmass_aboson = sqrt((vec_gena1[0].E() + vec_gena2[0].E()) * (vec_gena1[0].E() + vec_gena2[0].E()) - (vec_gena1[0].Px() + vec_gena2[0].Px()) * (vec_gena1[0].Px() + vec_gena2[0].Px()) - (vec_gena1[0].Py() + vec_gena2[0].Py()) * (vec_gena1[0].Py() + vec_gena2[0].Py()) - (vec_gena1[0].Pz() + vec_gena2[0].Pz()) * (vec_gena1[0].Pz() + vec_gena2[0].Pz()));
      h_invmass_aboson->Fill(invmass_aboson); // invariant mass of A-bosons

      
      float invmass_outg = sqrt((mc_en[3] + mc_en[4]) * (mc_en[3] + mc_en[4]) - (mc_px[3] + mc_px[4]) * (mc_px[3] + mc_px[4]) - (mc_py[3] + mc_py[4]) * (mc_py[3] + mc_py[4]) - (mc_pz[3] + mc_pz[4]) * (mc_pz[3] + mc_pz[4]));
      h_invmass_outg->Fill(invmass_outg); // invariant mass of outgoing quakrs

      
      float deta_outg = abs(outg1.Eta() - outg2.Eta());
      h_deta_outg->Fill(deta_outg); // deta between outgoings quarks

      
      float dR_outg = getDeltaR(outg1, outg2); 
      h_dR_outg->Fill(dR_outg); // dR between outgoings quakrs

      
      float dR_bbar1 = getDeltaR(prod1, prod2); 
      h_dR_bbbar12->Fill(dR_bbar1); // dR between the first bbbar pair

      
      float dR_bbar2 = getDeltaR(prod3, prod4);
      h_dR_bbbar34->Fill(dR_bbar2); // dR between the second bbbar pair

      
      float dR_aboson = getDeltaR(a1, a2); // dR between the A-bosons
      dRa12->Fill(dR_aboson);

      
      vector<TLorentzVector> vec_muons;
      vector<TLorentzVector> vec_ele;
      vector<TLorentzVector> vec_leptons; 
      vector<TLorentzVector> vec_jet; // Jet
      vector<TLorentzVector> vec_bjet; // b quark Jet
      vector<TLorentzVector> vec_outg; // outgoing quark Jet

      

  // ---------------------------------------------------------------Loop over muons--------------------------------------------------------------


      
      for (int i = 0; i < mn; i++)
	{
	  TLorentzVector p_muon;
	  p_muon.SetPxPyPzE(mn_px[i], mn_py[i], mn_pz[i], mn_en[i]);

	  if (p_muon.Pt() < 20. || std::fabs(p_muon.Eta()) > 2.4) // cuts
	    {
	      continue;
	    }
	  // id + Isolation
	  if (mn_passId[i] && mn_passIso[i])
	    {
	      vec_muons.push_back(p_muon);
	      vec_leptons.push_back(p_muon);
	    }
	} // end mn loop

      

  // -------------------------------------------------------------Loop over electrons------------------------------------------------------------
      

      
      for (Int_t i = 0; i < en; i++)
	{
	  TLorentzVector p_electron;
	  p_electron.SetPxPyPzE(en_px[i], en_py[i], en_pz[i], en_en[i]);

	  if (p_electron.Pt() < 20. || std::fabs(p_electron.Eta()) > 2.4 ) // cuts
	    {
	      continue;
	    }
	  if (en_passId[i] && en_passIso[i])
	    {
	      vec_ele.push_back(p_electron);
	      vec_leptons.push_back(p_electron);
	    }
	} // end en loop


      
  // ---------------------------------------------------------------Loop over jets--------------------------------------------------------------

      
      
      for (Int_t j = 0; j < jet; j++)
	{
	  bool overlap = false;
	  TLorentzVector p_jet;
	  p_jet.SetPxPyPzE(jet_px[j],jet_py[j] ,jet_pz[j],jet_en[j]);
	  float jeta = p_jet.Eta();
	  float jpt = p_jet.Pt();
	  float jphi = p_jet.Phi();

	  
	  
	  if (p_jet.Pt() < 20.) // cuts
	    {
	      continue;
	    }
	  
	  for (Int_t mn_count = 0; mn_count < vec_muons.size(); mn_count++)
	    {
	      float dR1 = getDeltaR(p_jet, vec_muons[mn_count]);
	      h_dR_jet_mn_before->Fill(dR1);
	      if (dR1 < 0.4)
		{
		  overlap = true;
		}
	    }

	  
	  for (Int_t en_count = 0; en_count < vec_ele.size(); en_count++)
	    {
	      float dR1 = getDeltaR(p_jet, vec_ele[en_count]);
	      h_dR_jet_en_before->Fill(dR1);
	      if (getDeltaR(p_jet, vec_ele[en_count]) < 0.4)
		{
		  overlap = true;
		}
	    }

	  
	  if (!overlap)
	    {
	      vec_jet.push_back(p_jet);
	      if (jet_btag0[j] > 0.4941)
	      	{
	      	  vec_bjet.push_back(p_jet);
		}
	      else
	      	{
	      	  vec_outg.push_back(p_jet);
	      	}
	    }

	  
	  jet_pt_tot->Fill(jpt);
	  jet_eta_tot->Fill(jeta);
	  jet_phi_tot->Fill(jphi);

	  
	} // end of jet loop


      
      h_en_mult->Fill(vec_ele.size());
      h_mn_mult->Fill(vec_muons.size());
      h_lepton_mult->Fill(vec_ele.size() + vec_muons.size());
      h_jet_mult->Fill(vec_jet.size());


      
      bool hasMETtrigger1=(triggerType>>11)&0x1;
      bool hasMETtrigger2=(triggerType>>12)&0x1;

      h_met_pt->Fill(met_pt);
      //cout << hasMETtrigger1 << " " << hasMETtrigger2 << endl;
      if (hasMETtrigger1||hasMETtrigger2)
	{
	  h_met_trig_pt->Fill(met_pt); //MET after Trigger requirement
	}

      // ----------------------------------------------------------START EVENT SELECTION CRITERIA----------------------------------------------------------
      // -----------------------------------------------------------------Step 1: Nlep = 0-----------------------------------------------------------------

      
      
      if (vec_leptons.size() != 0)
	{
	  continue;
	}
      n_event_lepton_test++;
      
      if (vec_ele.size() > 0)
	{
	  h_en1_pt->Fill(vec_ele[0].Pt());
	  h_en1_eta->Fill(vec_ele[0].Eta());
	  h_en1_phi->Fill(vec_ele[0].Phi());
	}
      
      if (vec_ele.size() > 1)
	{
	  h_en2_pt->Fill(vec_ele[1].Pt());
	  h_en2_eta->Fill(vec_ele[1].Eta());
	  h_en2_phi->Fill(vec_ele[1].Phi());
	}
      
      if (vec_muons.size() > 0)
	{
	  h_mn1_pt->Fill(vec_muons[0].Pt());
	  h_mn1_eta->Fill(vec_muons[0].Eta());
	  h_mn1_phi->Fill(vec_muons[0].Phi());
	}
      
      if (vec_muons.size() > 1)
	{
	  h_mn2_pt->Fill(vec_muons[1].Pt());
	  h_mn2_eta->Fill(vec_muons[1].Eta());
	  h_mn2_phi->Fill(vec_muons[1].Phi());
	}
      
      h_bjet_mult_step1->Fill(vec_bjet.size());
      h_jet_mult_step1->Fill(vec_jet.size());

      
      
  //---------------------------------------------------------------------JET CUTS---------------------------------------------------------------------
  // --------------------------------------------------------------Step 2: Jet size >= 5--------------------------------------------------------------

      

      if (vec_jet.size() < 3)
	{
	  continue;
	}
      
      h_jet1_pt->Fill(vec_jet[0].Pt());
      h_jet1_eta->Fill(vec_jet[0].Eta());
      h_jet1_phi->Fill(vec_jet[0].Phi());
      h_jet1_m->Fill(vec_jet[0].M());
      
      h_jet2_pt->Fill(vec_jet[1].Pt());
      h_jet2_eta->Fill(vec_jet[1].Eta());
      h_jet2_phi->Fill(vec_jet[1].Phi());
      h_jet2_m->Fill(vec_jet[1].M());
      
      h_jet3_pt->Fill(vec_jet[2].Pt());
      h_jet3_eta->Fill(vec_jet[2].Eta());   
      h_jet3_phi->Fill(vec_jet[2].Phi());
      h_jet3_m->Fill(vec_jet[2].M());

      
      if (vec_jet.size() > 3) // if the 4th jet exists
	{
	  h_jet4_pt->Fill(vec_jet[3].Pt());
	  h_jet4_eta->Fill(vec_jet[3].Eta());
	  h_jet4_phi->Fill(vec_jet[3].Phi());
	  h_jet4_m->Fill(vec_jet[3].M());
	}

      
      if (vec_jet.size() < 5)
	{
	  continue;
	}
      n_event_jet_test++;


      
  // -------------------------------------------------------Step 3: bJet size >= 3 outgJet >=2--------------------------------------------------------


      
      if (vec_bjet.size() < 3 || vec_outg.size() < 2)
	{
	  continue;
	}
      n_event_bjet_3++;
      

      h_bjet1_pt_step3->Fill(vec_bjet[0].Pt());
      h_bjet1_eta_step3->Fill(vec_bjet[0].Eta());
      h_bjet1_phi_step3->Fill(vec_bjet[0].Phi());
      h_bjet1_m_step3->Fill(vec_bjet[0].M());
      
      h_bjet2_pt_step3->Fill(vec_bjet[1].Pt());
      h_bjet2_eta_step3->Fill(vec_bjet[1].Eta());
      h_bjet2_phi_step3->Fill(vec_bjet[1].Phi());
      h_bjet2_m_step3->Fill(vec_bjet[1].M());
      
      h_bjet3_pt_step3->Fill(vec_bjet[2].Pt());
      h_bjet3_eta_step3->Fill(vec_bjet[2].Eta());
      h_bjet3_phi_step3->Fill(vec_bjet[2].Phi());
      h_bjet3_m_step3->Fill(vec_bjet[2].M());

       if (vec_bjet.size() > 3)
	{
	  h_bjet4_pt_step3->Fill(vec_bjet[3].Pt());
	  h_bjet4_eta_step3->Fill(vec_bjet[3].Eta());
	  h_bjet4_phi_step3->Fill(vec_bjet[3].Phi());
	  h_bjet4_m_step3->Fill(vec_bjet[3].M());
	}
			
      h_jetoutg1_pt_step3->Fill(vec_outg[0].Pt());
      h_jetoutg1_eta_step3->Fill(vec_outg[0].Eta());
      h_jetoutg1_phi_step3->Fill(vec_outg[0].Phi());
      h_jetoutg1_m_step3->Fill(vec_outg[0].M());
      
      h_jetoutg2_pt_step3->Fill(vec_outg[1].Pt());
      h_jetoutg2_eta_step3->Fill(vec_outg[1].Eta());
      h_jetoutg2_phi_step3->Fill(vec_outg[1].Phi());
      h_jetoutg2_m_step3->Fill(vec_outg[1].M());


      float dRoutg_step3 = getDeltaR(vec_outg[0], vec_outg[1]); 
      h_dR_outg_step3->Fill(dRoutg_step3); // dR between outgoings at step 3

      
      float invmass_outg_step3 = sqrt((vec_outg[0].E() + vec_outg[1].E()) * (vec_outg[0].E() + vec_outg[1].E()) - (vec_outg[0].Px() + vec_outg[1].Px()) * (vec_outg[0].Px() + vec_outg[1].Px()) - (vec_outg[0].Py() + vec_outg[1].Py()) * (vec_outg[0].Py() + vec_outg[1].Py()) - (vec_outg[0].Pz() + vec_outg[1].Pz()) * (vec_outg[0].Pz() + vec_outg[1].Pz()));
      h_invmass_outg_step3->Fill(invmass_outg_step3); // invariant mass outgoings at step 3


      
      float invmass_bjets_step3 = sqrt((vec_bjet[0].E() + vec_bjet[1].E() + vec_bjet[2].E() + vec_bjet[3].E()) * (vec_bjet[0].E() + vec_bjet[1].E() + vec_bjet[2].E() + vec_bjet[3].E()) - (vec_bjet[0].Px() + vec_bjet[1].Px() + vec_bjet[2].Px() + vec_bjet[3].Px()) * (vec_bjet[0].Px() + vec_bjet[1].Px() + vec_bjet[2].Px() + vec_bjet[3].Px()) - (vec_bjet[0].Py() + vec_bjet[1].Py() + vec_bjet[2].Py() + vec_bjet[3].Py()) * (vec_bjet[0].Py() + vec_bjet[1].Py() + vec_bjet[2].Py() + vec_bjet[3].Py()) - (vec_bjet[0].Pz() + vec_bjet[1].Pz() + vec_bjet[2].Pz() + vec_bjet[3].Pz()) * (vec_bjet[0].Pz() + vec_bjet[1].Pz() + vec_bjet[2].Pz() + vec_bjet[3].Pz()));
      h_invmass_bjets_step3->Fill(invmass_bjets_step3); // invariant mass bjets at step 3
      
      
      
      float deta_outg_step3 = abs(vec_outg[0].Eta() - vec_outg[1].Eta()); 
      h_deta_outg_step3->Fill(deta_outg_step3); // deta between outgoings quarks at step 3

      

  // -------------------------------------------------Step 4: M(jj) > 250, ΔR(jj) > 0.6, |Δη| > 2.5---------------------------------------------------


      
      if (invmass_outg_step3 <= 250 || deta_outg_step3 <= 2.5 || dRoutg_step3 <= 0.6)
      	{
      	  continue;
      	}

	
      n_event_inv_dr_det++;

      
      h_bjet1_pt_step4->Fill(vec_bjet[0].Pt());
      h_bjet1_eta_step4->Fill(vec_bjet[0].Eta());
      h_bjet1_phi_step4->Fill(vec_bjet[0].Phi());
      h_bjet1_m_step4->Fill(vec_bjet[0].M());
      
      h_bjet2_pt_step4->Fill(vec_bjet[1].Pt());
      h_bjet2_eta_step4->Fill(vec_bjet[1].Eta());
      h_bjet2_phi_step4->Fill(vec_bjet[1].Phi());
      h_bjet2_m_step4->Fill(vec_bjet[1].M());
      
      h_bjet3_pt_step4->Fill(vec_bjet[2].Pt());
      h_bjet3_eta_step4->Fill(vec_bjet[2].Eta());
      h_bjet3_phi_step4->Fill(vec_bjet[2].Phi());
      h_bjet3_m_step4->Fill(vec_bjet[2].M());

      if (vec_bjet.size() > 3)
	{
	  h_bjet4_pt_step4->Fill(vec_bjet[3].Pt());
	  h_bjet4_eta_step4->Fill(vec_bjet[3].Eta());
          h_bjet4_phi_step4->Fill(vec_bjet[3].Phi());
	  h_bjet4_m_step4->Fill(vec_bjet[3].M());
	}
			
      h_jetoutg1_pt_step4->Fill(vec_outg[0].Pt());
      h_jetoutg1_eta_step4->Fill(vec_outg[0].Eta());
      h_jetoutg1_phi_step4->Fill(vec_outg[0].Phi());
      h_jetoutg1_m_step4->Fill(vec_outg[0].M());
      
      h_jetoutg2_pt_step4->Fill(vec_outg[1].Pt());
      h_jetoutg2_eta_step4->Fill(vec_outg[1].Eta());
      h_jetoutg2_phi_step4->Fill(vec_outg[1].Phi());
      h_jetoutg2_m_step4->Fill(vec_outg[1].M());
			
      
      h_mn_mult_after->Fill(vec_muons.size());
      h_en_mult_after->Fill(vec_ele.size());
      h_jet_mult_after->Fill(vec_jet.size());


      
      float sum_ht_step4 = 0.0; // ht = sum pt of all jets at step 4
      for (int j = 0; j < jet; j++)
	{
	  sum_ht_step4 += vec_jet[j].Pt();
	}
      for (int l = 0; l < vec_outg.size(); l++)
	{
	  jetbtag0_step4->Fill(jet_btag0[l]);
	  jetbtag1_step4->Fill(jet_btag1[l]);
	}
      h_ht_step4->Fill(sum_ht_step4);


    
      h_invmass_bjets_step4->Fill(invmass_bjets_step3); // invariant mass bjets at step 4
      h_invmass_outg_step4->Fill(invmass_outg_step3); // invariant mass outgoings at step 4
      h_deta_outg_step4->Fill(deta_outg_step3); // deta between outgoings quarks at step 4
      h_dR_outg_step4->Fill(dRoutg_step3); // dR between outgoings at step 4

      
      
    } // end event jentry loop


  
  // ---------------------------------------------------------------EVENT FLOW TABLE------------------------------------------------------------------

  
  cout << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "                                                         EVENT FLOW TABLE:                                                         " << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "Step 1 (Nlep=0)                                                                     : " << n_event_lepton_test << "      with eff1   : " << (n_event_lepton_test + 0.)/(nentries + 0.) << endl;
  cout << "Step 2 (Nj>=5)                                                                      : " << n_event_jet_test <<    "      with eff2   : " << (n_event_jet_test + 0.)/(nentries + 0.) << endl;
  cout << "Step 3 (Nbjets>=3)                                                                  : " << n_event_bjet_3 << "       with eff3   : " << (n_event_bjet_3 + 0.)/(nentries + 0.) << endl;
  cout << "Step 4 (mjj > 250 GeV, DRjj > 0.6 and |dh| > 2.5)                                   : " << n_event_inv_dr_det << "       with eff4   : " << (n_event_inv_dr_det +0.)/(nentries + 0.) << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "-----------------------------------------------------------------------------------------------------------------------------------" << endl; 

  

  // -----------------------------------------------------------------SAVE RESULTS--------------------------------------------------------------------


  
  //TString output_filename="histos_m20.root";
  TFile *f = new TFile("myanalysis_trig.root", "RECREATE");

  
  jet_pt_tot->Write();
  jet_eta_tot->Write();
  jet_phi_tot->Write();
  
  h_en_mult->Write();
  h_mn_mult->Write();
  h_lepton_mult->Write();
  h_jet_mult->Write();
  
  h_en1_pt->Write();
  h_en1_eta->Write();
  h_en1_phi->Write();
  
  h_en2_pt->Write();
  h_en2_eta->Write();
  h_en2_phi->Write();
  
  h_mn1_pt->Write();
  h_mn1_eta->Write();
  h_mn1_phi->Write();
  
  h_mn2_pt->Write();
  h_mn2_eta->Write();
  h_mn2_phi->Write();
  
  h_jet1_pt->Write();
  h_jet1_eta->Write();
  h_jet1_phi->Write();
  h_jet1_m->Write();
  
  h_jet2_pt->Write();
  h_jet2_eta->Write();
  h_jet2_phi->Write();
  h_jet2_m->Write();
  
  h_jet3_pt->Write();
  h_jet3_eta->Write();
  h_jet3_phi->Write();
  h_jet3_m->Write();
  
  h_jet4_pt->Write();
  h_jet4_eta->Write();
  h_jet4_phi->Write();
  h_jet4_m->Write();
  
  h_mn_mult_after->Write();
  h_en_mult_after->Write();
  h_jet_mult_after->Write();
  h_bjet_mult_step1->Write();
  h_jet_mult_step1->Write();
  
  h_dR_jet_en_before->Write();
  h_dR_jet_mn_before->Write();
  h_dR_jet_en_after->Write();
  h_dR_jet_mn_after->Write();

  h_dR_bbbar12->Write();
  h_dR_bbbar34->Write();

  h_dR_outg->Write();
  h_deta_outg->Write();
  h_invmass_outg->Write();

  higg_pt->Write();
  higg_eta->Write();
  higg_phi->Write();
  higg_m->Write();

  z_pt->Write();
  z_eta->Write();
  z_phi->Write();
  z_m->Write();

  a_pt->Write();
  a_eta->Write();
  a_phi->Write();
  a_m->Write();

  a1_pt->Write();
  a1_eta->Write();
  a1_phi->Write();
  a1_m->Write();
  a2_pt->Write();
  a2_eta->Write();
  a2_phi->Write();
  a2_m->Write();
  dRa12->Write();

  gq_pt->Write();
  gq_eta->Write();
  gq_phi->Write();
  gq_m->Write();

  outg1_pt->Write();
  outg1_eta->Write();
  outg1_phi->Write();
  outg1_m->Write();
  outg1_v2_m->Write();
  
  outg2_pt->Write();
  outg2_eta->Write();
  outg2_phi->Write();
  outg2_m->Write();
  outg2_v2_m->Write();

  prod1_pt->Write();
  prod1_eta->Write();
  prod1_phi->Write();
  prod1_m->Write();

  prod2_pt->Write();
  prod2_eta->Write();
  prod2_phi->Write();
  prod2_m->Write();

  prod3_pt->Write();
  prod3_eta->Write();
  prod3_phi->Write();
  prod3_m->Write();
  
  prod4_pt->Write();
  prod4_eta->Write();
  prod4_phi->Write();
  prod4_m->Write();
			   
  h_bjet1_pt_step4->Write();
  h_bjet1_eta_step4->Write();
  h_bjet1_phi_step4->Write();
  h_bjet1_m_step4->Write();

  h_bjet2_pt_step4->Write();
  h_bjet2_eta_step4->Write();
  h_bjet2_phi_step4->Write();
  h_bjet2_m_step4->Write();
			   
  h_bjet3_pt_step4->Write();
  h_bjet3_eta_step4->Write();
  h_bjet3_phi_step4->Write();
  h_bjet3_m_step4->Write();
			   
  h_bjet4_pt_step4->Write();
  h_bjet4_eta_step4->Write();
  h_bjet4_phi_step4->Write();
  h_bjet4_m_step4->Write();
			
  h_jetoutg1_pt_step4->Write();
  h_jetoutg1_eta_step4->Write();
  h_jetoutg1_phi_step4->Write();
  h_jetoutg1_m_step4->Write();

  h_jetoutg2_pt_step4->Write();
  h_jetoutg2_eta_step4->Write();
  h_jetoutg2_phi_step4->Write();
  h_jetoutg2_m_step4->Write();

  h_bjet1_pt_step3->Write();
  h_bjet1_eta_step3->Write();
  h_bjet1_phi_step3->Write();
  h_bjet1_m_step3->Write();

  h_bjet2_pt_step3->Write();
  h_bjet2_eta_step3->Write();
  h_bjet2_phi_step3->Write();
  h_bjet2_m_step3->Write();
			   
  h_bjet3_pt_step3->Write();
  h_bjet3_eta_step3->Write();
  h_bjet3_phi_step3->Write();
  h_bjet3_m_step3->Write();

  h_bjet4_pt_step3->Write();
  h_bjet4_eta_step3->Write();
  h_bjet4_phi_step3->Write();
  h_bjet4_m_step3->Write();
			
  h_jetoutg1_pt_step3->Write();
  h_jetoutg1_eta_step3->Write();
  h_jetoutg1_phi_step3->Write();
  h_jetoutg1_m_step3->Write();

  h_jetoutg2_pt_step3->Write();
  h_jetoutg2_eta_step3->Write();
  h_jetoutg2_phi_step3->Write();
  h_jetoutg2_m_step3->Write();

  h_dR_outg_step3->Write();
  h_invmass_outg_step3->Write();
  h_deta_outg_step3->Write();
  h_invmass_bjets_step3->Write();

  h_invmass_bbbar12->Write();
  h_invmass_aboson->Write();

  h_dR_outg_step4->Write();
  h_ht_step4->Write();
  h_invmass_bjets_step4->Write();
  h_deta_outg_step4->Write();
  h_invmass_outg_step4->Write();
  jetbtag0_step4->Write();
  jetbtag1_step4->Write();

  h_met_pt->Write();
  h_met_trig_pt->Write();



  f->Close();


  
} // end void::loop



float getDeltaR(TLorentzVector vec_1, TLorentzVector vec_2)
{
  float delta_phi;
  float delta_eta;
  delta_phi = vec_1.Phi() - vec_2.Phi();
  delta_eta = vec_1.Eta() - vec_2.Eta();
  return sqrt(delta_phi * delta_phi + delta_eta * delta_eta);
}

 
