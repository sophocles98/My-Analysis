void plothistos()
{
  TFile *f = new TFile("myanalysis_60.root", "READ");
  TFile *f1 = new TFile("myanalysis_20.root", "READ");
  TFile *f3 = new TFile("myanalysis_40.root", "READ");
  TFile *f4 = new TFile("myanalysis_50.root", "READ");
  TFile *f2 = new TFile("myanalysis_trig.root", "READ");
  TFile *f5 = new TFile("myanalysis_trig2.root", "READ");

  // Multiplicities
  // 60 GeV
  TH1F *jet_mult_60 = (TH1F*)f->Get("jet_mult");
  TH1F *bjet_mult_step1_60 = (TH1F*)f->Get("bjet_mult_step1");
  TH1F *jet_mult_step1_60 = (TH1F*)f->Get("jet_mult_step1");

  
  // 20 GeV
  TH1F *jet_mult_20 = (TH1F*)f1->Get("jet_mult"); 
  TH1F *bjet_mult_step1_20 = (TH1F*)f1->Get("bjet_mult_step1");
  TH1F *jet_mult_step1_20 = (TH1F*)f1->Get("jet_mult_step1"); 
  //---------------------------------------------------------------------------------//

  
  // Jet: Pt,Eta, Phi
  // 60 GeV
  TH1F *jet_pt_tot_60 = (TH1F*)f->Get("jet_pt_tot");
  TH1F *jet_eta_tot_60 = (TH1F*)f->Get("jet_eta_tot");
  TH1F *jet_phi_tot_60 = (TH1F*)f->Get("jet_phi_tot");
  
  // 20 GeV
  TH1F *jet_pt_tot_20 = (TH1F*)f1->Get("jet_pt_tot");
  TH1F *jet_eta_tot_20 = (TH1F*)f1->Get("jet_eta_tot");
  TH1F *jet_phi_tot_20 = (TH1F*)f1->Get("jet_phi_tot");
  //---------------------------------------------------------------------------------//

  
  // Outgoing 1: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *outg1_pt_60 = (TH1F*)f->Get("outg1_pt");
  TH1F *outg1_eta_60 = (TH1F*)f->Get("outg1_eta");
  TH1F *outg1_phi_60 = (TH1F*)f->Get("outg1_phi");
  TH1F *outg1_m_60 = (TH1F*)f->Get("outg1_m");
  TH1F *outg1_v2_m_60 = (TH1F*)f->Get("outg1_v2_m");
  
  // 60 GeV
  TH1F *outg1_pt_20 = (TH1F*)f1->Get("outg1_pt");
  TH1F *outg1_eta_20 = (TH1F*)f1->Get("outg1_eta");
  TH1F *outg1_phi_20= (TH1F*)f1->Get("outg1_phi");
  TH1F *outg1_m_20 = (TH1F*)f1->Get("outg1_m");
  TH1F *outg1_v2_m_20 = (TH1F*)f1->Get("outg1_v2_m");
  //---------------------------------------------------------------------------------//

  
  // Outgoing 2: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *outg2_pt_60 = (TH1F*)f->Get("outg2_pt");
  TH1F *outg2_eta_60 = (TH1F*)f->Get("outg2_eta");
  TH1F *outg2_phi_60 = (TH1F*)f->Get("outg2_phi");
  TH1F *outg2_m_60 = (TH1F*)f->Get("outg2_m");
  TH1F *outg2_v2_m_60 = (TH1F*)f->Get("outg2_v2_m");
  
  // 20 GeV
  TH1F *outg2_pt_20 = (TH1F*)f1->Get("outg2_pt");
  TH1F *outg2_eta_20 = (TH1F*)f1->Get("outg2_eta");
  TH1F *outg2_phi_20 = (TH1F*)f1->Get("outg2_phi");
  TH1F *outg2_m_20 = (TH1F*)f1->Get("outg2_m");
  TH1F *outg2_v2_m_20 = (TH1F*)f1->Get("outg2_v2_m");
  //---------------------------------------------------------------------------------//

  
  // bQuark 1: Pt, Eta, Phi, M - before btag
  // 60 GeV
  TH1F *q1_pt_60 = (TH1F*)f->Get("q1_pt");
  TH1F *q1_eta_60 = (TH1F*)f->Get("q1_eta");
  TH1F *q1_phi_60 = (TH1F*)f->Get("q1_phi");
  TH1F *q1_m_60 = (TH1F*)f->Get("q1_m");
  
  // 20 GeV
  TH1F *q1_pt_20 = (TH1F*)f1->Get("q1_pt");
  TH1F *q1_eta_20 = (TH1F*)f1->Get("q1_eta");
  TH1F *q1_phi_20 = (TH1F*)f1->Get("q1_phi");
  TH1F *q1_m_20 = (TH1F*)f1->Get("q1_m");
  //---------------------------------------------------------------------------------//

  
  // bQuark 2: Pt, Eta, Phi, M - before btag
  // 60 GeV
  TH1F *q2_pt_60 = (TH1F*)f->Get("q2_pt");
  TH1F *q2_eta_60 = (TH1F*)f->Get("q2_eta");
  TH1F *q2_phi_60 = (TH1F*)f->Get("q2_phi");
  TH1F *q2_m_60 = (TH1F*)f->Get("q2_m");
  
  // 20 GeV
  TH1F *q2_pt_20 = (TH1F*)f1->Get("q2_pt");
  TH1F *q2_eta_20 = (TH1F*)f1->Get("q2_eta");
  TH1F *q2_phi_20 = (TH1F*)f1->Get("q2_phi");
  TH1F *q2_m_20 = (TH1F*)f1->Get("q2_m");
  //---------------------------------------------------------------------------------//

  
  // bQuark 3: Pt, Eta, Phi, M - before btag
  // 60 GeV
  TH1F *q3_pt_60 = (TH1F*)f->Get("q3_pt");
  TH1F *q3_eta_60 = (TH1F*)f->Get("q3_eta");
  TH1F *q3_phi_60 = (TH1F*)f->Get("q3_phi");
  TH1F *q3_m_60 = (TH1F*)f->Get("q3_m");
  
  // 20 GeV
  TH1F *q3_pt_20 = (TH1F*)f1->Get("q3_pt");
  TH1F *q3_eta_20 = (TH1F*)f1->Get("q3_eta");
  TH1F *q3_phi_20 = (TH1F*)f1->Get("q3_phi");
  TH1F *q3_m_20 = (TH1F*)f1->Get("q3_m");
  //---------------------------------------------------------------------------------//

  
  // bQuark 4: Pt, Eta, Phi, M - before btag
  // 60 GeV
  TH1F *q4_pt_60 = (TH1F*)f->Get("q4_pt");
  TH1F *q4_eta_60 = (TH1F*)f->Get("q4_eta");
  TH1F *q4_phi_60 = (TH1F*)f->Get("q4_phi");
  TH1F *q4_m_60 = (TH1F*)f->Get("q4_m");
  
  // 20 GeV
  TH1F *q4_pt_20 = (TH1F*)f1->Get("q4_pt");
  TH1F *q4_eta_20 = (TH1F*)f1->Get("q4_eta");
  TH1F *q4_phi_20 = (TH1F*)f1->Get("q4_phi");
  TH1F *q4_m_20 = (TH1F*)f1->Get("q4_m");
  //---------------------------------------------------------------------------------//

  
  // Higgs: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *higgs_pt_60 = (TH1F*)f->Get("higg_pt");
  TH1F *higgs_eta_60 = (TH1F*)f->Get("higg_eta");
  TH1F *higgs_phi_60 = (TH1F*)f->Get("higg_phi");
  TH1F *higgs_m_60 = (TH1F*)f->Get("higg_m");
  
  // 20 GeV
  TH1F *higgs_pt_20 = (TH1F*)f1->Get("higg_pt");
  TH1F *higgs_eta_20 = (TH1F*)f1->Get("higg_eta");
  TH1F *higgs_phi_20 = (TH1F*)f1->Get("higg_phi");
  TH1F *higgs_m_20 = (TH1F*)f1->Get("higg_m");
  //---------------------------------------------------------------------------------//

  
  // A-Bosons: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *ab_pt_60 = (TH1F*)f->Get("ab_pt");
  TH1F *ab_eta_60 = (TH1F*)f->Get("ab_eta");
  TH1F *ab_phi_60 = (TH1F*)f->Get("ab_phi");
  TH1F *ab_m_60 = (TH1F*)f->Get("ab_m");
  
  // 20 GeV
  TH1F *ab_pt_20 = (TH1F*)f1->Get("ab_pt");
  TH1F *ab_eta_20 = (TH1F*)f1->Get("ab_eta");
  TH1F *ab_phi_20 = (TH1F*)f1->Get("ab_phi");
  TH1F *ab_m_20 = (TH1F*)f1->Get("ab_m");
  
  // 50 Gev
  TH1F *ab_eta_50 = (TH1F*)f4->Get("ab_eta");
  TH1F *ab_pt_50 = (TH1F*)f4->Get("ab_pt");
  
  // 40 GeV
  TH1F *ab_eta_40 = (TH1F*)f3->Get("ab_eta");
  TH1F *ab_pt_40 = (TH1F*)f3->Get("ab_pt");
  //---------------------------------------------------------------------------------//

  
  // A-Boson 1: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *ab1_pt_60 = (TH1F*)f->Get("ab1_pt");
  TH1F *ab1_eta_60 = (TH1F*)f->Get("ab1_eta");
  TH1F *ab1_phi_60 = (TH1F*)f->Get("ab1_phi");
  TH1F *ab1_m_60 = (TH1F*)f->Get("ab1_m");
  
  // 20 GeV
  TH1F *ab1_pt_20 = (TH1F*)f1->Get("ab1_pt");
  TH1F *ab1_eta_20 = (TH1F*)f1->Get("ab1_eta");
  TH1F *ab1_phi_20 = (TH1F*)f1->Get("ab1_phi");
  TH1F *ab1_m_20 = (TH1F*)f1->Get("ab1_m");
  //---------------------------------------------------------------------------------//

  
  // A-Boson 2: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *ab2_pt_60 = (TH1F*)f->Get("ab2_pt");
  TH1F *ab2_eta_60 = (TH1F*)f->Get("ab2_eta");
  TH1F *ab2_phi_60 = (TH1F*)f->Get("ab2_phi");
  TH1F *ab2_m_60 = (TH1F*)f->Get("ab2_m");
  
  // 20GeV
  TH1F *ab2_pt_20 = (TH1F*)f1->Get("ab2_pt");
  TH1F *ab2_eta_20 = (TH1F*)f1->Get("ab2_eta");
  TH1F *ab2_phi_20 = (TH1F*)f1->Get("ab2_phi");
  TH1F *ab2_m_20 = (TH1F*)f1->Get("ab2_m");
  //---------------------------------------------------------------------------------//

  
  // Quark - gluon: Pt, Eta, Phi, M
  // 60 GeV
  TH1F *gq_pt_60 = (TH1F*)f->Get("gq_pt");
  TH1F *gq_eta_60 = (TH1F*)f->Get("gq_eta");
  TH1F *gq_phi_60 = (TH1F*)f->Get("gq_phi");
  TH1F *gq_m_60 = (TH1F*)f->Get("gq_m");
  
  // 20 GeV
  TH1F *gq_pt_20 = (TH1F*)f1->Get("gq_pt");
  TH1F *gq_eta_20 = (TH1F*)f1->Get("gq_eta");
  TH1F *gq_phi_20 = (TH1F*)f1->Get("gq_phi");
  TH1F *gq_m_20 = (TH1F*)f1->Get("gq_m");
  //---------------------------------------------------------------------------------//

  
  // ΔR, Δη
  // A - Bosons
  TH1F *dRa12_60 = (TH1F*)f->Get("dRa12");
  TH1F *dRa12_20 = (TH1F*)f1->Get("dRa12");
  TH1F *dRa12_50 = (TH1F*)f4->Get("dRa12");
  TH1F *dRa12_40 = (TH1F*)f3->Get("dRa12");
  
  // bbbar quakrs
  TH1F *h_dR_bbbar12_40 = (TH1F*)f3->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar12_50 = (TH1F*)f4->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar34_60 = (TH1F*)f->Get("h_dR_bbbar34");
  TH1F *h_dR_bbbar34_20 = (TH1F*)f1->Get("h_dR_bbbar34");
  TH1F *h_dR_bbbar12_60 = (TH1F*)f->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar12_20 = (TH1F*)f1->Get("h_dR_bbbar12");

  
  // outgoing quarks
  TH1F *h_dR_outg_60 = (TH1F*)f->Get("h_dR_outg");
  TH1F *h_dR_outg_20 = (TH1F*)f1->Get("h_dR_outg");
  TH1F *h_deta_outg_60 = (TH1F*)f->Get("h_deta_outg");
  TH1F *h_deta_outg_20 = (TH1F*)f1->Get("h_deta_outg");
  TH1F *dR_outg_step3_60 = (TH1F*)f->Get("h_dR_outg_step3");
  TH1F *dR_outg_step3_20 = (TH1F*)f1->Get("h_dR_outg_step3");  
  TH1F *deta_outg_step3_60 = (TH1F*)f->Get("h_deta_outg_step3");
  TH1F *deta_outg_step3_20 = (TH1F*)f1->Get("h_deta_outg_step3");
  TH1F *dR_outg_step4_60 = (TH1F*)f->Get("h_dR_outg_step4");
  TH1F *dR_outg_step4_20 = (TH1F*)f1->Get("h_dR_outg_step4");
  TH1F *deta_outg_step4_60 = (TH1F*)f->Get("h_deta_outg_step4");
  TH1F *deta_outg_step4_20 = (TH1F*)f1->Get("h_deta_outg_step4");
  //---------------------------------------------------------------------------------//

  
  // Invariant Mass
  // bbbar quarks
  TH1F *h_invmass_bbbar12_60 = (TH1F*)f->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_20 = (TH1F*)f1->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_40 = (TH1F*)f3->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_50 = (TH1F*)f4->Get("h_invmass_bbbar12");
  
  // Outgoing quarks
  TH1F *h_invmass_outg_60 = (TH1F*)f->Get("h_invmass_outg");
  TH1F *h_invmass_outg_20 = (TH1F*)f1->Get("h_invmass_outg");
  
  // A - Bosons
  TH1F *h_invmass_aboson_60 = (TH1F*)f->Get("h_invmass_aboson");
  TH1F *h_invmass_aboson_20 = (TH1F*)f1->Get("h_invmass_aboson");

  // ΔR bbbar and a-boson
  TH1F *invmas60_gen = (TH1F*)f->Get("invmas60_gen");
  TH1F *invmas20_gen = (TH1F*)f->Get("invmas20_gen");
  TH1F *invmasbb_gen = (TH1F*)f->Get("invmasbb_gen");

  //---------------------------------------------------------------------------------//

  
  // Step 4: Pt, Eta, Phi, Invariant Mass
  // bJet 1
  // 60 GeV
  TH1F *bjet1_pt_step4_60 = (TH1F*)f->Get("h_bjet1_pt_step4");
  TH1F *bjet1_eta_step4_60 = (TH1F*)f->Get("h_bjet1_eta_step4");
  TH1F *bjet1_phi_step4_60 = (TH1F*)f->Get("h_bjet1_phi_step4");
  
  // 20 GeV
  TH1F *bjet1_pt_step4_20 = (TH1F*)f1->Get("h_bjet1_pt_step4");
  TH1F *bjet1_eta_step4_20 = (TH1F*)f1->Get("h_bjet1_eta_step4");
  TH1F *bjet1_phi_step4_20 = (TH1F*)f1->Get("h_bjet1_phi_step4");
  
  // bJet 2
  // 60 GeV
  TH1F *bjet2_pt_step4_60 = (TH1F*)f->Get("h_bjet2_pt_step4");
  TH1F *bjet2_eta_step4_60 = (TH1F*)f->Get("h_bjet2_eta_step4");
  TH1F *bjet2_phi_step4_60 = (TH1F*)f->Get("h_bjet2_phi_step4");
  
  // 20 GeV
  TH1F *bjet2_pt_step4_20 = (TH1F*)f1->Get("h_bjet2_pt_step4");
  TH1F *bjet2_eta_step4_20 = (TH1F*)f1->Get("h_bjet2_eta_step4");
  TH1F *bjet2_phi_step4_20 = (TH1F*)f1->Get("h_bjet2_phi_step4");
  
  // bJet 3
  // 60 GeV
  TH1F *bjet3_pt_step4_60 = (TH1F*)f->Get("h_bjet3_pt_step4");
  TH1F *bjet3_eta_step4_60 = (TH1F*)f->Get("h_bjet3_eta_step4");
  TH1F *bjet3_phi_step4_60 = (TH1F*)f->Get("h_bjet3_phi_step4");
  
  // 20 GeV
  TH1F *bjet3_pt_step4_20 = (TH1F*)f1->Get("h_bjet3_pt_step4");
  TH1F *bjet3_eta_step4_20 = (TH1F*)f1->Get("h_bjet3_eta_step4");
  TH1F *bjet3_phi_step4_20 = (TH1F*)f1->Get("h_bjet3_phi_step4");
  
  // bJet 4
  // 60 GeV
  TH1F *bjet4_pt_step4_60 = (TH1F*)f->Get("h_bjet4_pt_step4");
  TH1F *bjet4_eta_step4_60 = (TH1F*)f->Get("h_bjet4_eta_step4");
  TH1F *bjet4_phi_step4_60 = (TH1F*)f->Get("h_bjet4_phi_step4");
  
  // 20 GeV
  TH1F *bjet4_pt_step4_20 = (TH1F*)f1->Get("h_bjet4_pt_step4");
  TH1F *bjet4_eta_step4_20 = (TH1F*)f1->Get("h_bjet4_eta_step4");
  TH1F *bjet4_phi_step4_20 = (TH1F*)f1->Get("h_bjet4_phi_step4");

  // Outgoing 1
  // 60 GeV
  TH1F *jetoutg1_pt_step4_60 = (TH1F*)f->Get("h_jetoutg1_pt_step4");
  TH1F *jetoutg1_eta_step4_60 = (TH1F*)f->Get("h_jetoutg1_eta_step4");
  TH1F *jetoutg1_phi_step4_60 = (TH1F*)f->Get("h_jetoutg1_phi_step4");

  // 20 GeV
  TH1F *jetoutg1_pt_step4_20 = (TH1F*)f1->Get("h_jetoutg1_pt_step4");
  TH1F *jetoutg1_eta_step4_20 = (TH1F*)f1->Get("h_jetoutg1_eta_step4");
  TH1F *jetoutg1_phi_step4_20 = (TH1F*)f1->Get("h_jetoutg1_phi_step4");

  // Outgoing 2
  // 60 GeV
  TH1F *jetoutg2_pt_step4_60 = (TH1F*)f->Get("h_jetoutg2_pt_step4");
  TH1F *jetoutg2_eta_step4_60 = (TH1F*)f->Get("h_jetoutg2_eta_step4");
  TH1F *jetoutg2_phi_step4_60 = (TH1F*)f->Get("h_jetoutg2_phi_step4");

  // 20 GeV
  TH1F *jetoutg2_pt_step4_20 = (TH1F*)f1->Get("h_jetoutg2_pt_step4");
  TH1F *jetoutg2_eta_step4_20 = (TH1F*)f1->Get("h_jetoutg2_eta_step4");
  TH1F *jetoutg2_phi_step4_20 = (TH1F*)f1->Get("h_jetoutg2_phi_step4");

  // Invariant mass bbbar
  TH1F *invmass_bjets_step4_60 = (TH1F*)f->Get("h_invmass_bjets_step4");
  TH1F *invmass_bjets_step4_20 = (TH1F*)f1->Get("h_invmass_bjets_step4");
  TH1F *invmass_outg_step4_60 = (TH1F*)f->Get("h_invmass_outg_step4");
  TH1F *invmass_outg_step4_20 = (TH1F*)f1->Get("h_invmass_outg_step4");
  //---------------------------------------------------------------------------------//

  
  // Step 3: Pt, Eta, Phi, Invariant Mass
  // bJet 1
  // 60 GeV
  TH1F *bjet1_pt_step3_60 = (TH1F*)f->Get("h_bjet1_pt_step3");
  TH1F *bjet1_eta_step3_60 = (TH1F*)f->Get("h_bjet1_eta_step3");
  TH1F *bjet1_phi_step3_60 = (TH1F*)f->Get("h_bjet1_phi_step3");
  
  // 20 GeV
  TH1F *bjet1_pt_step3_20 = (TH1F*)f1->Get("h_bjet1_pt_step3");
  TH1F *bjet1_eta_step3_20 = (TH1F*)f1->Get("h_bjet1_eta_step3");
  TH1F *bjet1_phi_step3_20 = (TH1F*)f1->Get("h_bjet1_phi_step3");
  
  // bJet 2
  // 60 GeV
  TH1F *bjet2_pt_step3_60 = (TH1F*)f->Get("h_bjet2_pt_step3");
  TH1F *bjet2_eta_step3_60 = (TH1F*)f->Get("h_bjet2_eta_step3");
  TH1F *bjet2_phi_step3_60 = (TH1F*)f->Get("h_bjet2_phi_step3");
  
  // 20 GeV
  TH1F *bjet2_pt_step3_20 = (TH1F*)f1->Get("h_bjet2_pt_step3");
  TH1F *bjet2_eta_step3_20= (TH1F*)f1->Get("h_bjet2_eta_step3");
  TH1F *bjet2_phi_step3_20 = (TH1F*)f1->Get("h_bjet2_phi_step3");
  
  // bJet 3
  // 60 GeV
  TH1F *bjet3_pt_step3_60 = (TH1F*)f->Get("h_bjet3_pt_step3");
  TH1F *bjet3_eta_step3_60 = (TH1F*)f->Get("h_bjet3_eta_step3");
  TH1F *bjet3_phi_step3_60 = (TH1F*)f->Get("h_bjet3_phi_step3");
  
  // 20GeV
  TH1F *bjet3_pt_step3_20 = (TH1F*)f1->Get("h_bjet3_pt_step3");
  TH1F *bjet3_eta_step3_20 = (TH1F*)f1->Get("h_bjet3_eta_step3");
  TH1F *bjet3_phi_step3_20 = (TH1F*)f1->Get("h_bjet3_phi_step3");
  
  // bJet 4
  // 60 GeV
  TH1F *bjet4_pt_step3_60 = (TH1F*)f->Get("h_bjet4_pt_step3");
  TH1F *bjet4_eta_step3_60 = (TH1F*)f->Get("h_bjet4_eta_step3");
  TH1F *bjet4_phi_step3_60 = (TH1F*)f->Get("h_bjet4_phi_step3");
  
  // 20 GeV
  TH1F *bjet4_pt_step3_20 = (TH1F*)f1->Get("h_bjet4_pt_step3");
  TH1F *bjet4_eta_step3_20 = (TH1F*)f1->Get("h_bjet4_eta_step3");
  TH1F *bjet4_phi_step3_20 = (TH1F*)f1->Get("h_bjet4_phi_step3");

  // Outgoing 1
  // 60 GeV
  TH1F *jetoutg1_pt_step3_60 = (TH1F*)f->Get("h_jetoutg1_pt_step3");
  TH1F *jetoutg1_eta_step3_60 = (TH1F*)f->Get("h_jetoutg1_eta_step3");
  TH1F *jetoutg1_phi_step3_60 = (TH1F*)f->Get("h_jetoutg1_phi_step3");
  // 20 GeV
  TH1F *jetoutg1_pt_step3_20 = (TH1F*)f1->Get("h_jetoutg1_pt_step3");
  TH1F *jetoutg1_eta_step3_20 = (TH1F*)f1->Get("h_jetoutg1_eta_step3");
  TH1F *jetoutg1_phi_step3_20 = (TH1F*)f1->Get("h_jetoutg1_phi_step3");

  // Outgoing 2
  // 60 GeV
  TH1F *jetoutg2_pt_step3_60 = (TH1F*)f->Get("h_jetoutg2_pt_step3");
  TH1F *jetoutg2_eta_step3_60 = (TH1F*)f->Get("h_jetoutg2_eta_step3");
  TH1F *jetoutg2_phi_step3_60 = (TH1F*)f->Get("h_jetoutg2_phi_step3");

  // 20 GeV
  TH1F *jetoutg2_pt_step3_20 = (TH1F*)f1->Get("h_jetoutg2_pt_step3");
  TH1F *jetoutg2_eta_step3_20 = (TH1F*)f1->Get("h_jetoutg2_eta_step3");
  TH1F *jetoutg2_phi_step3_20 = (TH1F*)f1->Get("h_jetoutg2_phi_step3");

  // Invariant mass
  TH1F *invmass_outg_step3_60 = (TH1F*)f->Get("h_invmass_outg_step3");
  TH1F *invmass_outg_step3_20 = (TH1F*)f1->Get("h_invmass_outg_step3");
  TH1F *invmass_bjets_step3_60 = (TH1F*)f->Get("h_invmass_bjets_step3");
  TH1F *invmass_bjets_step3_20 = (TH1F*)f1->Get("h_invmass_bjets_step3");
  //---------------------------------------------------------------------------------//

  
  // Other variables
  TH1F *h_ht_step4_60 = (TH1F*)f->Get("h_ht_step4");
  TH1F *h_ht_step4_20 = (TH1F*)f1->Get("h_ht_step4");
  TH1F *jetbtag1_step4_60 = (TH1F*)f->Get("jetbtag1_step4");
  TH1F *jetbtag1_step4_20 = (TH1F*)f1->Get("jetbtag1_step4");
  //---------------------------------------------------------------------------------//

  
  // Trigger Analysis
  TH1F *h_met_pt = (TH1F*)f2->Get("h_met_pt");
  TH1F *h_met_trig_pt = (TH1F*)f2->Get("h_met_trig_pt");
  TH1F *trigeff = (TH1F*)f2->Get("trigeff");
  TH1F *trigeff_er = (TH1F*)f2->Get("trigeff_er");
  TH1F *trigeff_bion = (TH1F*)f2->Get("trigeff_bion");
  TH1F *h_met_trig_pt_20 = (TH1F*)f5->Get("h_met_trig_pt_20");
  TH1F *h_met_trig_pt_20_40 = (TH1F*)f5->Get("h_met_trig_pt_20_40");
  TH1F *h_met_trig_pt_40 = (TH1F*)f5->Get("h_met_trig_pt_40");
  TH1F *h_met_pt_20 = (TH1F*)f5->Get("h_met_pt_20");
  TH1F *h_met_pt_20_40 = (TH1F*)f5->Get("h_met_pt_20_40");
  TH1F *h_met_pt_40 = (TH1F*)f5->Get("h_met_pt_40");
  TH1F *h_nvtx_trig = (TH1F*)f2->Get("h_nvtx_trig");
  TH1F *h_nvtx = (TH1F*)f2->Get("h_nvtx");
  TH1F *h_nvtx_trig170 = (TH1F*)f2->Get("h_nvtx_trig170");
  TH1F *h_nvtx170 = (TH1F*)f2->Get("h_nvtx170");
  TH1F *h_nvtx_trig150 = (TH1F*)f2->Get("h_nvtx_trig150");
  TH1F *h_nvtx150 = (TH1F*)f2->Get("h_nvtx150");
  TH1F *h_nvtx_trig120 = (TH1F*)f2->Get("h_nvtx_trig120");
  TH1F *h_nvtx120 = (TH1F*)f2->Get("h_nvtx120");
  TH1F *h_nvtx_trig100 = (TH1F*)f2->Get("h_nvtx_trig100");
  TH1F *h_nvtx100 = (TH1F*)f2->Get("h_nvtx100");
  TH1F *h_nvtx_trig80 = (TH1F*)f2->Get("h_nvtx_trig80");
  TH1F *h_nvtx80 = (TH1F*)f2->Get("h_nvtx80");

  //---------------------------------------------------------------------------------//


  // Background ZNuNu
  TH1F *bjet_mult_step1_60znn = (TH1F*)f5->Get("bjet_mult_step1");
  TH1F *jet_mult_step1_60znn = (TH1F*)f5->Get("jet_mult_step1");
  TH1F *h_dR_outg_60znn = (TH1F*)f5->Get("h_dR_outg");
  TH1F *h_deta_outg_60znn = (TH1F*)f5->Get("h_deta_outg");
  TH1F *h_invmass_outg_60znn = (TH1F*)f5->Get("h_invmass_outg");
  TH1F *invmass_outg_step3_60znn = (TH1F*)f5->Get("h_invmass_outg_step3");
  TH1F *deta_outg_step3_60znn = (TH1F*)f5->Get("h_deta_outg_step3");
  TH1F *dR_outg_step3_60znn = (TH1F*)f5->Get("h_dR_outg_step3");
  TH1F *invmass_outg_step4_60znn = (TH1F*)f5->Get("h_invmass_outg_step4");
  TH1F *deta_outg_step4_60znn = (TH1F*)f5->Get("h_deta_outg_step4");
  TH1F *dR_outg_step4_60znn = (TH1F*)f5->Get("h_dR_outg_step4");
  TH1F *jetoutg1_pt_step4_60znn = (TH1F*)f5->Get("h_jetoutg1_pt_step4");
  TH1F *jetoutg1_eta_step4_60znn = (TH1F*)f5->Get("h_jetoutg1_eta_step4");
  TH1F *jetoutg1_phi_step4_60znn = (TH1F*)f5->Get("h_jetoutg1_phi_step4");
  TH1F *jetoutg2_pt_step4_60znn = (TH1F*)f5->Get("h_jetoutg2_pt_step4");
  TH1F *jetoutg2_eta_step4_60znn = (TH1F*)f5->Get("h_jetoutg2_eta_step4");
  TH1F *jetoutg2_phi_step4_60znn = (TH1F*)f5->Get("h_jetoutg2_phi_step4");
  TH1F *bjet1_pt_step4_60znn = (TH1F*)f5->Get("h_bjet1_pt_step4");
  TH1F *bjet2_pt_step4_60znn = (TH1F*)f5->Get("h_bjet2_pt_step4");
  TH1F *bjet3_pt_step4_60znn = (TH1F*)f5->Get("h_bjet3_pt_step4");
  TH1F *bjet4_pt_step4_60znn = (TH1F*)f5->Get("h_bjet4_pt_step4");
  TH1F *bjet1_eta_step4_60znn = (TH1F*)f5->Get("h_bjet1_eta_step4");
  TH1F *bjet2_eta_step4_60znn = (TH1F*)f5->Get("h_bjet2_eta_step4");
  TH1F *bjet3_eta_step4_60znn = (TH1F*)f5->Get("h_bjet3_eta_step4");
  TH1F *bjet4_eta_step4_60znn = (TH1F*)f5->Get("h_bjet4_eta_step4");
  TH1F *invmass_bjets_step4_60znn = (TH1F*)f5->Get("h_invmass_bjets_step4");
  TH1F *h_ht_step4_60znn = (TH1F*)f5->Get("h_ht_step4");
  TH1F *jetbtag1_step4_60znn = (TH1F*)f5->Get("jetbtag1_step4");
  TH1F *jet_pt_tot_60znn = (TH1F*)f5->Get("jet_pt_tot");
  TH1F *jet_eta_tot_60znn = (TH1F*)f5->Get("jet_eta_tot");
  TH1F *jet_phi_tot_60znn = (TH1F*)f5->Get("jet_phi_tot");
  TH1F *jet_mult_60znn = (TH1F*)f5->Get("jet_mult"); 


  bool gev60(false);
  bool gev20(false);
  bool cuts(false);
  bool eff(false);
  bool trig(true);
  
  
  if (gev60)
    {
      TCanvas *c1 = new TCanvas("c1", "canvas1", 1200, 400);
      c1->Divide(3,1);
  
      c1->cd(1);
      jet_pt_tot_60->Draw();
      jet_pt_tot_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      jet_pt_tot_60->GetYaxis()->SetTitle("Events");
  
      c1->cd(2);
      jet_eta_tot_60->Draw();
      jet_eta_tot_60->GetXaxis()->SetTitle("#eta");
      jet_eta_tot_60->GetYaxis()->SetTitle("Events");
  
      c1->cd(3);
      jet_phi_tot_60->Draw();
      jet_phi_tot_60->GetXaxis()->SetTitle("Phi");
      jet_phi_tot_60->GetYaxis()->SetTitle("Events");
  
      //c1->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_pt_eta_phi_60.pdf");


  
      TCanvas *c2 = new TCanvas("c2", "canvas2", 1500, 800);
      c2->Divide(4,2);
  
      c2->cd(1);
      outg1_pt_60->Draw();
      outg1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_60->GetYaxis()->SetTitle("Events");
  
      c2->cd(2);
      outg1_eta_60->Draw();
      outg1_eta_60->GetXaxis()->SetTitle("#eta");
      outg1_eta_60->GetYaxis()->SetTitle("Events");

      c2->cd(3);
      outg1_phi_60->Draw();
      outg1_phi_60->GetXaxis()->SetTitle("Phi");
      outg1_phi_60->GetYaxis()->SetTitle("Events");

      c2->cd(4);
      /* outg1_m_60->Draw(); */
      /* outg1_m_60->GetXaxis()->SetTitle("Mass (GeV)"); */
      /* outg1_m_60->GetYaxis()->SetTitle("Events"); */
      outg1_v2_m_60->Draw();
      outg1_v2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg1_v2_m_60->GetYaxis()->SetTitle("Events");


      c2->cd(5);
      outg2_pt_60->Draw();
      outg2_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg2_pt_60->GetYaxis()->SetTitle("Events");

      c2->cd(6);
      outg2_eta_60->Draw();
      outg2_eta_60->GetXaxis()->SetTitle("#eta");
      outg2_eta_60->GetYaxis()->SetTitle("Events");

      c2->cd(7);
      outg2_phi_60->Draw();
      outg2_phi_60->GetXaxis()->SetTitle("Phi");
      outg2_phi_60->GetYaxis()->SetTitle("Events");

      c2->cd(8);
      /* outg2_m_60->Draw(); */
      /* outg2_m_60->GetXaxis()->SetTitle("Mass (GeV)"); */
      /* outg2_m_60->GetYaxis()->SetTitle("Events"); */
      outg2_v2_m_60->Draw();
      outg2_v2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg2_v2_m_60->GetYaxis()->SetTitle("Events");


  
      //c2->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_et_phi_m_60.pdf");


  
      TCanvas *c3 = new TCanvas("c3", "canvas3", 1500, 800);
      c3->Divide(4,2);
  
      c3->cd(1);
      q1_pt_60->Draw();
      q1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q1_pt_60->GetYaxis()->SetTitle("Events");
  
      c3->cd(2);
      q1_eta_60->Draw();
      q1_eta_60->GetXaxis()->SetTitle("#eta");
      q1_eta_60->GetYaxis()->SetTitle("Events");
  
      c3->cd(3);
      q1_phi_60->Draw();
      q1_phi_60->GetXaxis()->SetTitle("Phi");
      q1_phi_60->GetYaxis()->SetTitle("Events");

      c3->cd(4);
      q1_m_60->GetXaxis()->SetNdivisions(4);
      q1_m_60->Draw();
      q1_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q1_m_60->GetYaxis()->SetTitle("Events");

      c3->cd(5);
      q2_pt_60->Draw();
      q2_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q2_pt_60->GetYaxis()->SetTitle("Events");
      
      c3->cd(6);
      q2_eta_60->Draw();
      q2_eta_60->GetXaxis()->SetTitle("#eta");
      q2_eta_60->GetYaxis()->SetTitle("Events");

      c3->cd(7);
      q2_phi_60->Draw();
      q2_phi_60->GetXaxis()->SetTitle("Phi");
      q2_phi_60->GetYaxis()->SetTitle("Events");
      
      c3->cd(8);
      q2_m_60->GetXaxis()->SetNdivisions(4);
      q2_m_60->Draw();
      q1_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q1_m_60->GetYaxis()->SetTitle("Events");
  
      //c3->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks12_pt_eta_phi_m_60.pdf");



      TCanvas *c4 = new TCanvas("c4", "canvas4", 1500, 800);
      c4->Divide(4,2);
  
      c4->cd(1);
      q3_pt_60->Draw();
      q3_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q3_pt_60->GetYaxis()->SetTitle("Events");  

      c4->cd(2);
      q3_eta_60->Draw();
      q3_eta_60->GetXaxis()->SetTitle("#eta");
      q3_eta_60->GetYaxis()->SetTitle("Events");
  
      c4->cd(3);
      q3_phi_60->Draw();
      q3_phi_60->GetXaxis()->SetTitle("Phi");
      q3_phi_60->GetYaxis()->SetTitle("Events");

      c4->cd(4);
      q3_m_60->GetXaxis()->SetNdivisions(4);
      q3_m_60->Draw();
      q3_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q3_m_60->GetYaxis()->SetTitle("Events");

      c4->cd(5);
      q4_pt_60->Draw();
      q4_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q4_pt_60->GetYaxis()->SetTitle("Events");  

      c4->cd(6);
      q4_eta_60->Draw();
      q4_eta_60->GetXaxis()->SetTitle("#eta");
      q4_eta_60->GetYaxis()->SetTitle("Events");

      c4->cd(7);
      q4_phi_60->Draw();
      q4_phi_60->GetXaxis()->SetTitle("Phi");
      q4_phi_60->GetYaxis()->SetTitle("Events");

      c4->cd(8);
      q4_m_60->GetXaxis()->SetNdivisions(4);
      q4_m_60->Draw();
      q4_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q4_m_60->GetYaxis()->SetTitle("Events");
  
      //c4->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks34_pt_eta_phi_m_60.pdf");


  
      TCanvas *c5 = new TCanvas("c5", "canvas5", 900, 700);
      c5->Divide(2,2);
      
      c5->cd(1);
      higgs_pt_60->Draw();
      higgs_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      higgs_pt_60->GetYaxis()->SetTitle("Events");  
  
      c5->cd(2);
      higgs_eta_60->Draw();
      higgs_eta_60->GetXaxis()->SetTitle("#eta");
      higgs_eta_60->GetYaxis()->SetTitle("Events");

      c5->cd(3);
      higgs_phi_60->Draw();
      higgs_phi_60->GetXaxis()->SetTitle("Phi");
      higgs_phi_60->GetYaxis()->SetTitle("Events");
  
      c5->cd(4);
      higgs_m_60->Draw();
      higgs_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      higgs_m_60->GetYaxis()->SetTitle("Events");
  
      //c5->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_phi_m_60.pdf");


  
      TCanvas *c6 = new TCanvas("c6", "canvas6", 900, 700);
      c6->Divide(2,2);
  
      c6->cd(1);
      ab_pt_60->Draw();
      ab_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      ab_pt_60->GetYaxis()->SetTitle("Events");  
  
      c6->cd(2);
      ab_eta_60->Draw();
      ab_eta_60->GetXaxis()->SetTitle("#eta");
      ab_eta_60->GetYaxis()->SetTitle("Events");
 
      c6->cd(3);
      ab_phi_60->Draw();
      ab_phi_60->GetXaxis()->SetTitle("Phi");
      ab_phi_60->GetYaxis()->SetTitle("Events");

      c6->cd(4);
      ab_m_60->Draw();
      ab_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      ab_m_60->GetYaxis()->SetTitle("Events");
  
      //c6->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/aboson_pt_eta_phi_m_60.pdf");


  
      TCanvas *c7 = new TCanvas("c7", "canvas7", 700, 500);
  
      jet_mult_60->Draw();
      jet_mult_60->GetXaxis()->SetTitle("Multiplicity");
      jet_mult_60->GetYaxis()->SetTitle("Events");

      //c7->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_mult_60.pdf");


  
      TCanvas *c8 = new TCanvas("c8", "canvas8", 900, 700);
      c8->Divide(2,2);
  
      c8->cd(1);
      gq_pt_60->Draw();
      gq_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      gq_pt_60->GetYaxis()->SetTitle("Events");  
  
      c8->cd(2);
      gq_eta_60->Draw();
      gq_eta_60->GetXaxis()->SetTitle("#eta");
      gq_eta_60->GetYaxis()->SetTitle("Events");
 
      c8->cd(3);
      gq_phi_60->Draw();
      gq_phi_60->GetXaxis()->SetTitle("Phi");
      gq_phi_60->GetYaxis()->SetTitle("Events");

      c8->cd(4);
      gq_m_60->Draw();
      gq_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      gq_m_60->GetYaxis()->SetTitle("Events");

      //c8->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/gq_pt_eta_phi_m_60.pdf");


  
      TCanvas *c9 = new TCanvas("c9", "canvas9", 900, 500);
      c9->Divide(2,1);
  
      c9->cd(1);
      h_dR_bbbar12_60->Draw();
      h_dR_bbbar12_60->GetXaxis()->SetTitle("|#Delta R_{bb}|");
      h_dR_bbbar12_60->GetYaxis()->SetTitle("Events");

      c9->cd(2);
      h_dR_bbbar34_60->Draw();
      h_dR_bbbar34_60->GetXaxis()->SetTitle("#Delta R_{bb}|");
      h_dR_bbbar34_60->GetYaxis()->SetTitle("Events");

      //c9->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/dR_quarks12_34_60.pdf");



      TCanvas *c10 = new TCanvas("c10", "canvas10", 1200, 400);
      c10->Divide(3,1);
  
      c10->cd(1);
      h_dR_outg_60->Draw();
      h_dR_outg_60->GetXaxis()->SetTitle("|#DeltaR(jj)|");
      h_dR_outg_60->GetYaxis()->SetTitle("Events");
  
      c10->cd(2);
      h_deta_outg_60->Draw();
      h_deta_outg_60->GetXaxis()->SetTitle("|#Delta#eta(jj)|");
      h_deta_outg_60->GetYaxis()->SetTitle("Events");
  
      c10->cd(3);
      h_invmass_outg_60->Draw();
      h_invmass_outg_60->GetXaxis()->SetTitle("M(jj) (GeV)");
      h_invmass_outg_60->GetYaxis()->SetTitle("Events");

      //c10->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgoing_dR_deta_invmass_60.pdf");
    }
  


  if (gev20)
    {
      TCanvas *c11 = new TCanvas("c11", "canvas11", 1200, 400);
      c11->Divide(3,1);
  
      c11->cd(1);
      jet_pt_tot_20->Draw();
      jet_pt_tot_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      jet_pt_tot_20->GetYaxis()->SetTitle("Events");
  
      c11->cd(2);
      jet_eta_tot_20->Draw();
      jet_eta_tot_20->GetXaxis()->SetTitle("#eta");
      jet_eta_tot_20->GetYaxis()->SetTitle("Events");
  
      c11->cd(3);
      jet_phi_tot_20->Draw();
      jet_phi_tot_20->GetXaxis()->SetTitle("Phi");
      jet_phi_tot_20->GetYaxis()->SetTitle("Events");
  
      //c11->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_pt_eta_phi_20.pdf");


  
      TCanvas *c12 = new TCanvas("c12", "canvas12", 1500, 800);
      c12->Divide(4,2);
  
      c12->cd(1);
      outg1_pt_20->Draw();
      outg1_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_20->GetYaxis()->SetTitle("Events");
  
      c12->cd(2);
      outg1_eta_20->Draw();
      outg1_eta_20->GetXaxis()->SetTitle("#eta");
      outg1_eta_20->GetYaxis()->SetTitle("Events");

      c12->cd(3);
      outg1_phi_20->Draw();
      outg1_phi_20->GetXaxis()->SetTitle("Phi");
      outg1_phi_20->GetYaxis()->SetTitle("Events");

      c12->cd(4);
      /* outg1_m_20->Draw(); */
      /* outg1_m_20->GetXaxis()->SetTitle("Mass (GeV)"); */
      /* outg1_m_20->GetYaxis()->SetTitle("Events"); */
      outg1_v2_m_20->Draw();
      outg1_v2_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      outg1_v2_m_20->GetYaxis()->SetTitle("Events");


      c12->cd(5);
      outg2_pt_20->Draw();
      outg2_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg2_pt_20->GetYaxis()->SetTitle("Events");

      c12->cd(6);
      outg2_eta_20->Draw();
      outg2_eta_20->GetXaxis()->SetTitle("#eta");
      outg2_eta_20->GetYaxis()->SetTitle("Events");

      c12->cd(7);
      outg2_phi_20->Draw();
      outg2_phi_20->GetXaxis()->SetTitle("Phi");
      outg2_phi_20->GetYaxis()->SetTitle("Events");

      c12->cd(8);
      /* outg2_m_20->Draw(); */
      /* outg2_m_20->GetXaxis()->SetTitle("Mass (GeV)"); */
      /* outg2_m_20->GetYaxis()->SetTitle("Events"); */
      outg1_v2_m_20->Draw();
      outg1_v2_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      outg1_v2_m_20->GetYaxis()->SetTitle("Events");

      //c12->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_et_phi_m_20.pdf");


  
      TCanvas *c13 = new TCanvas("c13", "canvas13", 1500, 800);
      c13->Divide(4,2);
  
      c13->cd(1);
      q1_pt_20->Draw();
      q1_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      q1_pt_20->GetYaxis()->SetTitle("Events");
  
      c13->cd(2);
      q1_eta_20->Draw();
      q1_eta_20->GetXaxis()->SetTitle("#eta");
      q1_eta_20->GetYaxis()->SetTitle("Events");
  
      c13->cd(3);
      q1_phi_20->Draw();
      q1_phi_20->GetXaxis()->SetTitle("Phi");
      q1_phi_20->GetYaxis()->SetTitle("Events");

      c13->cd(4);
      q1_m_20->GetXaxis()->SetNdivisions(4);
      q1_m_20->Draw();
      q1_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      q1_m_20->GetYaxis()->SetTitle("Events");

      c13->cd(5);
      q2_pt_20->Draw();
      q2_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      q2_pt_20->GetYaxis()->SetTitle("Events");
      
      c13->cd(6);
      q2_eta_20->Draw();
      q2_eta_20->GetXaxis()->SetTitle("#eta");
      q2_eta_20->GetYaxis()->SetTitle("Events");

      c13->cd(7);
      q2_phi_20->Draw();
      q2_phi_20->GetXaxis()->SetTitle("Phi");
      q2_phi_20->GetYaxis()->SetTitle("Events");
      
      c13->cd(8);
      q2_m_20->GetXaxis()->SetNdivisions(4);
      q2_m_20->Draw();
      q1_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      q1_m_20->GetYaxis()->SetTitle("Events");
  
      //c13->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks12_pt_eta_phi_m_20.pdf");



      TCanvas *c14 = new TCanvas("c14", "canvas14", 1500, 800);
      c14->Divide(4,2);
  
      c14->cd(1);
      q3_pt_20->Draw();
      q3_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      q3_pt_20->GetYaxis()->SetTitle("Events");  

      c14->cd(2);
      q3_eta_20->Draw();
      q3_eta_20->GetXaxis()->SetTitle("#eta");
      q3_eta_20->GetYaxis()->SetTitle("Events");
  
      c14->cd(3);
      q3_phi_20->Draw();
      q3_phi_20->GetXaxis()->SetTitle("Phi");
      q3_phi_20->GetYaxis()->SetTitle("Events");

      c14->cd(4);
      q3_m_20->GetXaxis()->SetNdivisions(4);
      q3_m_20->Draw();
      q3_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      q3_m_20->GetYaxis()->SetTitle("Events");

      c14->cd(5);
      q4_pt_20->Draw();
      q4_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      q4_pt_20->GetYaxis()->SetTitle("Events");  

      c14->cd(6);
      q4_eta_20->Draw();
      q4_eta_20->GetXaxis()->SetTitle("#eta");
      q4_eta_20->GetYaxis()->SetTitle("Events");

      c14->cd(7);
      q4_phi_20->Draw();
      q4_phi_20->GetXaxis()->SetTitle("Phi");
      q4_phi_20->GetYaxis()->SetTitle("Events");

      c14->cd(8);
      q4_m_20->GetXaxis()->SetNdivisions(4);
      q4_m_20->Draw();
      q4_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      q4_m_20->GetYaxis()->SetTitle("Events");
  
      //c14->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks34_pt_eta_phi_m_20.pdf");


  
      TCanvas *c15 = new TCanvas("c15", "canvas15", 900, 700);
      c15->Divide(2,2);
      
      c15->cd(1);
      higgs_pt_20->Draw();
      higgs_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      higgs_pt_20->GetYaxis()->SetTitle("Events");  
  
      c15->cd(2);
      higgs_eta_20->Draw();
      higgs_eta_20->GetXaxis()->SetTitle("#eta");
      higgs_eta_20->GetYaxis()->SetTitle("Events");

      c15->cd(3);
      higgs_phi_20->Draw();
      higgs_phi_20->GetXaxis()->SetTitle("Phi");
      higgs_phi_20->GetYaxis()->SetTitle("Events");
  
      c15->cd(4);
      higgs_m_20->Draw();
      higgs_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      higgs_m_20->GetYaxis()->SetTitle("Events");
  
      //c15->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_phi_m_20.pdf");


  
      TCanvas *c16 = new TCanvas("c16", "canvas16", 900, 700);
      c16->Divide(2,2);
  
      c16->cd(1);
      ab_pt_20->Draw();
      ab_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      ab_pt_20->GetYaxis()->SetTitle("Events");  
  
      c16->cd(2);
      ab_eta_20->Draw();
      ab_eta_20->GetXaxis()->SetTitle("#eta");
      ab_eta_20->GetYaxis()->SetTitle("Events");
 
      c16->cd(3);
      ab_phi_20->Draw();
      ab_phi_20->GetXaxis()->SetTitle("Phi");
      ab_phi_20->GetYaxis()->SetTitle("Events");

      c16->cd(4);
      ab_m_20->Draw();
      ab_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      ab_m_20->GetYaxis()->SetTitle("Events");
  
      //c16->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/aboson_pt_eta_phi_m_20.pdf");


  
      TCanvas *c17 = new TCanvas("c17", "canvas17", 700, 500);
  
      jet_mult_20->Draw();
      jet_mult_20->GetXaxis()->SetTitle("Multiplicity");
      jet_mult_20->GetYaxis()->SetTitle("Events");

      //c17->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_mult_20.pdf");


  
      TCanvas *c18 = new TCanvas("c18", "canvas18", 900, 700);
      c18->Divide(2,2);
  
      c18->cd(1);
      gq_pt_20->Draw();
      gq_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      gq_pt_20->GetYaxis()->SetTitle("Events");  
  
      c18->cd(2);
      gq_eta_20->Draw();
      gq_eta_20->GetXaxis()->SetTitle("#eta");
      gq_eta_20->GetYaxis()->SetTitle("Events");
 
      c18->cd(3);
      gq_phi_20->Draw();
      gq_phi_20->GetXaxis()->SetTitle("Phi");
      gq_phi_20->GetYaxis()->SetTitle("Events");

      c18->cd(4);
      gq_m_20->Draw();
      gq_m_20->GetXaxis()->SetTitle("Mass (GeV)");
      gq_m_20->GetYaxis()->SetTitle("Events");
  
      //c18->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/gq_pt_eta_phi_m_20.pdf");


  
      TCanvas *c19 = new TCanvas("c19", "canvas19", 900, 500);
      c19->Divide(2,1);
  
      c19->cd(1);
      h_dR_bbbar12_20->Draw();
      h_dR_bbbar12_20->GetXaxis()->SetTitle("|#DeltaR(bb)|");
      h_dR_bbbar12_20->GetYaxis()->SetTitle("Events");

      c19->cd(2);
      h_dR_bbbar34_20->Draw();
      h_dR_bbbar34_20->GetXaxis()->SetTitle("|#DeltaR(bb)|");
      h_dR_bbbar34_20->GetYaxis()->SetTitle("Events");

      //c19->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/dR_quarks12_34_20.pdf");



      TCanvas *c20 = new TCanvas("c20", "canvas20", 1200, 400);
      c20->Divide(3,1);
  
      c20->cd(1);
      h_dR_outg_20->Draw();
      h_dR_outg_20->GetXaxis()->SetTitle("|#DeltaR(jj)|");
      h_dR_outg_20->GetYaxis()->SetTitle("Events");
  
      c20->cd(2);
      h_deta_outg_20->Draw();
      h_deta_outg_20->GetXaxis()->SetTitle("|#Delta#eta(jj)|");
      h_deta_outg_20->GetYaxis()->SetTitle("Events");
  
      c20->cd(3);
      h_invmass_outg_20->Draw();
      h_invmass_outg_20->GetXaxis()->SetTitle("M(jj) (GeV)");
      h_invmass_outg_20->GetYaxis()->SetTitle("Events");
  
      //c20->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgoing_dR_deta_invmass_20.pdf");
    } 



  if (cuts)
    {
      TCanvas *c21 = new TCanvas("c21", "canvas21", 1200, 800);
      c21->Divide(3,2);
      
      c21->cd(1);
      bjet1_pt_step4_60->Draw();
      bjet1_pt_step4_20->Draw("sames");
      bjet1_pt_step4_60->SetLineColor(kBlue);
      bjet1_pt_step4_20->SetLineColor(kRed);
      bjet1_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet1_pt_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg1 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg1->SetHeader("bjet1 P_{T}");
      leg1->AddEntry(bjet1_pt_step4_60, "m_{A}=60 GeV", "L");
      leg1->AddEntry(bjet1_pt_step4_20, "m_{A}=20 GeV", "L");
      leg1->Draw();

      c21->cd(2);
      bjet1_eta_step4_60->Draw();
      bjet1_eta_step4_20->Draw("sames");
      bjet1_eta_step4_60->SetLineColor(kBlue);
      bjet1_eta_step4_20->SetLineColor(kRed);
      bjet1_eta_step4_60->GetXaxis()->SetTitle("#eta");
      bjet1_eta_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg2 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg2->SetHeader("bjet1 #eta");
      leg2->AddEntry(bjet1_eta_step4_60, "m_{A}=60 GeV", "L");
      leg2->AddEntry(bjet1_eta_step4_20, "m_{A}=20 GeV", "L");
      leg2->Draw();
  
      c21->cd(3);
      bjet1_phi_step4_60->Draw();
      bjet1_phi_step4_20->Draw("sames");
      bjet1_phi_step4_60->SetLineColor(kBlue);
      bjet1_phi_step4_20->SetLineColor(kRed);
      bjet1_phi_step4_60->GetXaxis()->SetTitle("Phi");
      bjet1_phi_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg3 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg3->SetHeader("bjet1 Phi");
      leg3->AddEntry(bjet1_phi_step4_60, "m_{A}=60 GeV", "L");
      leg3->AddEntry(bjet1_phi_step4_20, "m_{A}=20 GeV", "L");
      leg3->Draw();

      c21->cd(4);
      bjet2_pt_step4_60->Draw();
      bjet2_pt_step4_20->Draw("sames");
      bjet2_pt_step4_60->SetLineColor(kBlue);
      bjet2_pt_step4_20->SetLineColor(kRed);
      bjet2_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg4 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg4->SetHeader("bjet2 P_{T}");
      leg4->AddEntry(bjet2_pt_step4_60, "m_{A}=60 GeV", "L");
      leg4->AddEntry(bjet2_pt_step4_20, "m_{A}=20 GeV", "L");
      leg4->Draw();

      c21->cd(5);
      bjet2_eta_step4_60->Draw();
      bjet2_eta_step4_20->Draw("sames");
      bjet2_eta_step4_60->SetLineColor(kBlue);
      bjet2_eta_step4_20->SetLineColor(kRed);
      bjet2_eta_step4_60->GetXaxis()->SetTitle("#eta");
      bjet2_eta_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg5 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg5->SetHeader("bjet2 #eta");
      leg5->AddEntry(bjet2_eta_step4_60, "m_{A}=60 GeV", "L");
      leg5->AddEntry(bjet2_eta_step4_20, "m_{A}=20 GeV", "L");
      leg5->Draw();
  
      c21->cd(6);
      bjet2_phi_step4_60->Draw();
      bjet2_phi_step4_20->Draw("sames");
      bjet2_phi_step4_60->SetLineColor(kBlue);
      bjet2_phi_step4_20->SetLineColor(kRed);
      bjet2_phi_step4_60->GetXaxis()->SetTitle("Phi");
      bjet2_phi_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg6 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg6->SetHeader("bjet2 Phi");
      leg6->AddEntry(bjet2_phi_step4_60, "m_{A}=60 GeV", "L");
      leg6->AddEntry(bjet2_phi_step4_20, "m_{A}=20 GeV", "L");
      leg6->Draw();
      
      //c21->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets12_pt_eta_phi_step4_20-60.pdf");

      

      TCanvas *c22 = new TCanvas("c22", "canvas22", 1200, 800);
      c22->Divide(3,2);
      
      c22->cd(1);
      bjet3_pt_step4_60->Draw();
      bjet3_pt_step4_20->Draw("sames");
      bjet3_pt_step4_60->SetLineColor(kBlue);
      bjet3_pt_step4_20->SetLineColor(kRed);
      bjet3_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet3_pt_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg7 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg7->SetHeader("bjet3 P_{T}");
      leg7->AddEntry(bjet3_pt_step4_60, "m_{A}=60 GeV", "L");
      leg7->AddEntry(bjet3_pt_step4_20, "m_{A}=20 GeV", "L");
      leg7->Draw();

      c22->cd(2);
      bjet3_eta_step4_60->Draw();
      bjet3_eta_step4_20->Draw("sames");
      bjet3_eta_step4_60->SetLineColor(kBlue);
      bjet3_eta_step4_20->SetLineColor(kRed);
      bjet3_eta_step4_60->GetXaxis()->SetTitle("#eta");
      bjet3_eta_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg8 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg8->SetHeader("bjet3 #eta");
      leg8->AddEntry(bjet3_eta_step4_60, "m_{A}=60 GeV", "L");
      leg8->AddEntry(bjet3_eta_step4_20, "m_{A}=20 GeV", "L");
      leg8->Draw();
  
      c22->cd(3);
      bjet3_phi_step4_60->Draw();
      bjet3_phi_step4_20->Draw("sames");
      bjet3_phi_step4_60->SetLineColor(kBlue);
      bjet3_phi_step4_20->SetLineColor(kRed);
      bjet3_phi_step4_60->GetXaxis()->SetTitle("Phi");
      bjet3_phi_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg9 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg9->SetHeader("bjet3 Phi");
      leg9->AddEntry(bjet3_phi_step4_60, "m_{A}=60 GeV", "L");
      leg9->AddEntry(bjet3_phi_step4_20, "m_{A}=20 GeV", "L");
      leg9->Draw();

      c22->cd(4);
      bjet4_pt_step4_60->Draw();
      bjet4_pt_step4_20->Draw("sames");
      bjet4_pt_step4_60->SetLineColor(kBlue);
      bjet4_pt_step4_20->SetLineColor(kRed);
      bjet4_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet4_pt_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg10 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg10->SetHeader("bjet4 #P_{T}");
      leg10->AddEntry(bjet4_pt_step4_60, "m_{A}=60 GeV", "L");
      leg10->AddEntry(bjet4_pt_step4_20, "m_{A}=20 GeV", "L");
      leg10->Draw();

      c22->cd(5);
      bjet4_eta_step4_60->Draw();
      bjet4_eta_step4_20->Draw("sames");
      bjet4_eta_step4_60->SetLineColor(kBlue);
      bjet4_eta_step4_20->SetLineColor(kRed);
      bjet4_eta_step4_60->GetXaxis()->SetTitle("#eta");
      bjet4_eta_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg11 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg11->SetHeader("bjet4 #eta");
      leg11->AddEntry(bjet4_eta_step4_60, "m_{A}=60 GeV", "L");
      leg11->AddEntry(bjet4_eta_step4_20, "m_{A}=20 GeV", "L");
      leg11->Draw();
  
      c22->cd(6);
      bjet4_phi_step4_60->Draw();
      bjet4_phi_step4_20->Draw("sames");
      bjet4_phi_step4_60->SetLineColor(kBlue);
      bjet4_phi_step4_20->SetLineColor(kRed);
      bjet4_phi_step4_60->GetXaxis()->SetTitle("Phi");
      bjet4_phi_step4_60->GetYaxis()->SetTitle("Events");
      TLegend *leg12 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg12->SetHeader("bjet4 Phi");
      leg12->AddEntry(bjet4_phi_step4_60, "m_{A}=60 GeV", "L");
      leg12->AddEntry(bjet4_phi_step4_20, "m_{A}=20 GeV", "L");
      leg12->Draw();
  
      //c22->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets34_pt_eta_phi_step4_20-60.pdf");

 

      TCanvas *c23 = new TCanvas("c23", "canvas23", 1200, 800);
      c23->Divide(3,2);
      
      c23->cd(1);
      bjet1_pt_step3_60->Draw();
      bjet1_pt_step3_20->Draw("sames");
      bjet1_pt_step3_60->SetLineColor(kBlue);
      bjet1_pt_step3_20->SetLineColor(kRed);
      bjet1_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet1_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg13 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg13->SetHeader("bjet1 P_{T}");
      leg13->AddEntry(bjet1_pt_step3_60, "m_{A}=60 GeV", "L");
      leg13->AddEntry(bjet1_pt_step3_20, "m_{A}=20 GeV", "L");
      leg13->Draw();

      c23->cd(2);
      bjet1_eta_step3_60->Draw();
      bjet1_eta_step3_20->Draw("sames");
      bjet1_eta_step3_60->SetLineColor(kBlue);
      bjet1_eta_step3_20->SetLineColor(kRed);
      bjet1_eta_step3_60->GetXaxis()->SetTitle("#eta");
      bjet1_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg14 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg14->SetHeader("bjet1 #eta");
      leg14->AddEntry(bjet1_eta_step3_60, "m_{A}=60 GeV", "L");
      leg14->AddEntry(bjet1_eta_step3_20, "m_{A}=20 GeV", "L");
      leg14->Draw();

      c23->cd(3);
      bjet1_phi_step3_60->Draw();
      bjet1_phi_step3_20->Draw("sames");
      bjet1_phi_step3_60->SetLineColor(kBlue);
      bjet1_phi_step3_20->SetLineColor(kRed);
      bjet1_phi_step3_60->GetXaxis()->SetTitle("Phi");
      bjet1_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg15 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg15->SetHeader("bjet1 Phi");
      leg15->AddEntry(bjet1_phi_step3_60, "m_{A}=60 GeV", "L");
      leg15->AddEntry(bjet1_phi_step3_20, "m_{A}=20 GeV", "L");
      leg15->Draw();

      c23->cd(4);
      bjet2_pt_step3_60->Draw();
      bjet2_pt_step3_20->Draw("sames");
      bjet2_pt_step3_60->SetLineColor(kBlue);
      bjet2_pt_step3_20->SetLineColor(kRed);
      bjet2_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet2_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg16 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg16->SetHeader("bjet2 P_{T}");
      leg16->AddEntry(bjet2_pt_step3_60, "m_{A}=60 GeV", "L");
      leg16->AddEntry(bjet2_pt_step3_20, "m_{A}=20 GeV", "L");
      leg16->Draw();

      c23->cd(5);
      bjet2_eta_step3_60->Draw();
      bjet2_eta_step3_20->Draw("sames");
      bjet2_eta_step3_60->SetLineColor(kBlue);
      bjet2_eta_step3_20->SetLineColor(kRed);
      bjet2_eta_step3_60->GetXaxis()->SetTitle("#eta");
      bjet2_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg17 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg17->SetHeader("bjet2 #eta");
      leg17->AddEntry(bjet2_eta_step3_60, "mA=60 GeV", "L");
      leg17->AddEntry(bjet2_eta_step3_20, "mA=20 GeV", "L");
      leg17->Draw();

      c23->cd(6);
      bjet2_phi_step3_60->Draw();
      bjet2_phi_step3_20->Draw("sames");
      bjet2_phi_step3_60->SetLineColor(kBlue);
      bjet2_phi_step3_20->SetLineColor(kRed);
      bjet2_phi_step3_60->GetXaxis()->SetTitle("Phi");
      bjet2_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg18 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg18->SetHeader("bjet2 Phi");
      leg18->AddEntry(bjet2_phi_step3_60, "m_{A}=60 GeV", "L");
      leg18->AddEntry(bjet2_phi_step3_20, "m_{A}=20 GeV", "L");
      leg18->Draw();

      //c23->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets12_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c24 = new TCanvas("c24", "canvas24", 1200, 800);
      c24->Divide(3,2);

      c24->cd(1);
      bjet3_pt_step3_60->Draw();
      bjet3_pt_step3_20->Draw("sames");
      bjet3_pt_step3_60->SetLineColor(kBlue);
      bjet3_pt_step3_20->SetLineColor(kRed);
      bjet3_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet3_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg19 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg19->SetHeader("bjet3 P_{T}");
      leg19->AddEntry(bjet3_pt_step3_60, "m_{A}=60 GeV", "L");
      leg19->AddEntry(bjet3_pt_step3_20, "m_{A}=20 GeV", "L");
      leg19->Draw();

      c24->cd(2);
      bjet3_eta_step3_60->Draw();
      bjet3_eta_step3_20->Draw("sames");
      bjet3_eta_step3_60->SetLineColor(kBlue);
      bjet3_eta_step3_20->SetLineColor(kRed);
      bjet3_eta_step3_60->GetXaxis()->SetTitle("#eta");
      bjet3_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg20 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg20->SetHeader("bjet3 #eta");
      leg20->AddEntry(bjet3_eta_step3_60, "m_{A}=60 GeV", "L");
      leg20->AddEntry(bjet3_eta_step3_20, "m_{A}=20 GeV", "L");
      leg20->Draw();

      c24->cd(3);
      bjet3_phi_step3_60->Draw();
      bjet3_phi_step3_20->Draw("sames");
      bjet3_phi_step3_60->SetLineColor(kBlue);
      bjet3_phi_step3_20->SetLineColor(kRed);
      bjet3_phi_step3_60->GetXaxis()->SetTitle("Phi");
      bjet3_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg21 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg21->SetHeader("bjet3 Phi");
      leg21->AddEntry(bjet3_phi_step3_60, "m_{A}=60 GeV", "L");
      leg21->AddEntry(bjet3_phi_step3_20, "m_{A}=20 GeV", "L");
      leg21->Draw();

      c24->cd(4);
      bjet4_pt_step3_60->Draw();
      bjet4_pt_step3_20->Draw("sames");
      bjet4_pt_step3_60->SetLineColor(kBlue);
      bjet4_pt_step3_20->SetLineColor(kRed);
      bjet4_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet4_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg22 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg22->SetHeader("bjet4 P_{T}");
      leg22->AddEntry(bjet4_pt_step3_60, "m_{A}=60 GeV", "L");
      leg22->AddEntry(bjet4_pt_step3_20, "m_{A}=20 GeV", "L");
      leg22->Draw();

      c24->cd(5);
      bjet4_eta_step3_60->Draw();
      bjet4_eta_step3_20->Draw("sames");
      bjet4_eta_step3_60->SetLineColor(kBlue);
      bjet4_eta_step3_20->SetLineColor(kRed);
      bjet4_eta_step3_60->GetXaxis()->SetTitle("#eta");
      bjet4_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg23 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg23->SetHeader("bjet4 #eta");
      leg23->AddEntry(bjet4_eta_step3_60, "m_{A}=60 GeV", "L");
      leg23->AddEntry(bjet4_eta_step3_20, "m_{A}=20 GeV", "L");
      leg23->Draw();

      c24->cd(6);
      bjet4_phi_step3_60->Draw();
      bjet4_phi_step3_20->Draw("sames");
      bjet4_phi_step3_60->SetLineColor(kBlue);
      bjet4_phi_step3_20->SetLineColor(kRed);
      bjet4_phi_step3_60->GetXaxis()->SetTitle("Phi");
      bjet4_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg24 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg24->SetHeader("bjet4 Phi");
      leg24->AddEntry(bjet4_phi_step3_60, "m_{A}=60 GeV", "L");
      leg24->AddEntry(bjet4_phi_step3_20, "m_{A}=20 GeV", "L");
      leg24->Draw();
      
      //c24->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets34_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c25 = new TCanvas("c25", "canvas25", 1600, 800);
      c25->Divide(4,2);

      c25->cd(1);
      bjet1_pt_step4_60znn->Scale(1./bjet1_pt_step4_60znn->Integral());
      bjet1_pt_step4_60->Scale(1./bjet1_pt_step4_60->Integral());
      bjet1_pt_step4_20->Scale(1./bjet1_pt_step4_20->Integral());
      bjet1_pt_step4_60znn->Draw("hist");
      bjet1_pt_step4_60->Draw("hist sames");
      bjet1_pt_step4_20->Draw("hist sames");
      bjet1_pt_step4_60->SetLineColor(kRed);
      bjet1_pt_step4_60->SetLineStyle(1);
      bjet1_pt_step4_20->SetLineColor(kRed);
      bjet1_pt_step4_20->SetLineStyle(2);
      bjet1_pt_step4_60znn->SetLineColor(kBlack);
      bjet1_pt_step4_60znn->SetTitle("bjet1 Momentum P_{T}");
      bjet1_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet1_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg25 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg25->SetHeader("bjet1 P_{T}");
      leg25->AddEntry(bjet1_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg25->AddEntry(bjet1_pt_step4_60, "m_{A}=60 GeV", "L");
      leg25->AddEntry(bjet1_pt_step4_20, "m_{A}=20 GeV", "L");
      leg25->Draw();

      c25->cd(2);
      bjet2_pt_step4_60znn->Scale(1./bjet2_pt_step4_60znn->Integral());
      bjet2_pt_step4_60->Scale(1./bjet2_pt_step4_60->Integral());
      bjet2_pt_step4_20->Scale(1./bjet2_pt_step4_20->Integral());
      bjet2_pt_step4_60znn->Draw("hist");
      bjet2_pt_step4_60->Draw("hist sames");
      bjet2_pt_step4_20->Draw("hist sames");
      bjet2_pt_step4_60->SetLineColor(kRed);
      bjet2_pt_step4_60->SetLineStyle(1);
      bjet2_pt_step4_20->SetLineColor(kRed);
      bjet2_pt_step4_20->SetLineStyle(2);
      bjet2_pt_step4_60znn->SetLineColor(kBlack);
      bjet2_pt_step4_60znn->SetTitle("bjet2 Momentum P_{T}");
      bjet2_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet2_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg26 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg26->SetHeader("bjet2 P_{T}");
      leg26->AddEntry(bjet2_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg26->AddEntry(bjet2_pt_step4_60, "m_{A}=60 GeV", "L");
      leg26->AddEntry(bjet2_pt_step4_20, "m_{A}=20 GeV", "L");
      leg26->Draw();

      c25->cd(3);
      bjet3_pt_step4_60znn->Scale(1./bjet3_pt_step4_60znn->Integral());
      bjet3_pt_step4_60->Scale(1./bjet3_pt_step4_60->Integral());
      bjet3_pt_step4_20->Scale(1./bjet3_pt_step4_20->Integral());
      bjet3_pt_step4_60znn->Draw("hist");
      bjet3_pt_step4_60->Draw("hist sames");
      bjet3_pt_step4_20->Draw("hist sames");
      bjet3_pt_step4_60->SetLineColor(kRed);
      bjet3_pt_step4_60->SetLineStyle(1);
      bjet3_pt_step4_20->SetLineColor(kRed);
      bjet3_pt_step4_20->SetLineStyle(2);
      bjet3_pt_step4_60znn->SetLineColor(kBlack);
      bjet3_pt_step4_60znn->SetTitle("bjet3 Momentum P_{T}");
      bjet3_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet3_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg27 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg27->SetHeader("bjet3 P_{T}");
      leg27->AddEntry(bjet3_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg27->AddEntry(bjet3_pt_step4_60, "m_{A}=60 GeV", "L");
      leg27->AddEntry(bjet3_pt_step4_20, "m_{A}=20 GeV", "L");
      leg27->Draw();

      c25->cd(4);
      bjet4_pt_step4_60znn->Scale(1./bjet4_pt_step4_60znn->Integral());
      bjet4_pt_step4_60->Scale(1./bjet4_pt_step4_60->Integral());
      bjet4_pt_step4_20->Scale(1./bjet4_pt_step4_20->Integral());
      bjet4_pt_step4_60znn->Draw("hist");
      bjet4_pt_step4_60->Draw("hist sames");
      bjet4_pt_step4_20->Draw("hist sames");
      bjet4_pt_step4_60->SetLineColor(kRed);
      bjet4_pt_step4_60->SetLineStyle(1);
      bjet4_pt_step4_20->SetLineColor(kRed);
      bjet4_pt_step4_20->SetLineStyle(2);
      bjet4_pt_step4_60znn->SetLineColor(kBlack);
      bjet4_pt_step4_60znn->SetTitle("bjet4 Momentum P_{T}");
      bjet4_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      bjet4_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg28 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg28->SetHeader("bjet4 P_{T}");
      leg28->AddEntry(bjet4_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg28->AddEntry(bjet4_pt_step4_60, "m_{A}=60 GeV", "L");
      leg28->AddEntry(bjet4_pt_step4_20, "m_{A}=20 GeV", "L");
      leg28->Draw();

      c25->cd(5);
      bjet1_eta_step4_60znn->Scale(1./bjet1_eta_step4_60znn->Integral());
      bjet1_eta_step4_60->Scale(1./bjet1_eta_step4_60->Integral());
      bjet1_eta_step4_20->Scale(1./bjet1_eta_step4_20->Integral());
      bjet1_eta_step4_60znn->Draw("hist");
      bjet1_eta_step4_60->Draw("hist sames");
      bjet1_eta_step4_20->Draw("hist sames");
      bjet1_eta_step4_60->SetLineColor(kRed);
      bjet1_eta_step4_60->SetLineStyle(1);
      bjet1_eta_step4_20->SetLineColor(kRed);
      bjet1_eta_step4_20->SetLineStyle(2);
      bjet1_eta_step4_60znn->SetLineColor(kBlack);
      bjet1_eta_step4_60znn->SetTitle("bjet1 Pseudorapidity #eta");
      bjet1_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      bjet1_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg29 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg29->SetHeader("bjet1 #eta");
      leg29->AddEntry(bjet1_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg29->AddEntry(bjet1_pt_step4_60, "m_{A}=60 GeV", "L");
      leg29->AddEntry(bjet1_pt_step4_20, "m_{A}=20 GeV", "L");
      leg29->Draw();

      c25->cd(6);
      bjet2_eta_step4_60znn->Scale(1./bjet2_eta_step4_60znn->Integral());
      bjet2_eta_step4_60->Scale(1./bjet2_eta_step4_60->Integral());
      bjet2_eta_step4_20->Scale(1./bjet2_eta_step4_20->Integral());
      bjet2_eta_step4_60znn->Draw("hist");
      bjet2_eta_step4_60->Draw("hist sames");
      bjet2_eta_step4_20->Draw("hist sames");
      bjet2_eta_step4_60->SetLineColor(kRed);
      bjet2_eta_step4_60->SetLineStyle(1);
      bjet2_eta_step4_20->SetLineColor(kRed);
      bjet2_eta_step4_20->SetLineStyle(2);
      bjet2_eta_step4_60znn->SetLineColor(kBlack);
      bjet2_eta_step4_60znn->SetTitle("bjet2 Pseudorapidity #eta");
      bjet2_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      bjet2_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg30 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg30->SetHeader("bjet2 #eta");
      leg30->AddEntry(bjet2_eta_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg30->AddEntry(bjet2_eta_step4_60, "m_{A}=60 GeV", "L");
      leg30->AddEntry(bjet2_eta_step4_20, "m_{A}=20 GeV", "L");
      leg30->Draw();

      c25->cd(7);
      bjet3_eta_step4_60znn->Scale(1./bjet3_eta_step4_60znn->Integral());
      bjet3_eta_step4_60->Scale(1./bjet3_eta_step4_60->Integral());
      bjet3_eta_step4_20->Scale(1./bjet3_eta_step4_20->Integral());
      bjet3_eta_step4_60znn->Draw("hist");
      bjet3_eta_step4_60->Draw("hist sames");
      bjet3_eta_step4_20->Draw("hist sames");
      bjet3_eta_step4_60->SetLineColor(kRed);
      bjet3_eta_step4_60->SetLineStyle(1);
      bjet3_eta_step4_20->SetLineColor(kRed);
      bjet3_eta_step4_20->SetLineStyle(2);
      bjet3_eta_step4_60znn->SetLineColor(kBlack);
      bjet3_eta_step4_60znn->SetTitle("bjet3 Pseudorapidity #eta");
      bjet3_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      bjet3_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg31 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg31->SetHeader("bjet3 #eta");
      leg31->AddEntry(bjet3_eta_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg31->AddEntry(bjet3_eta_step4_60, "m_{A}=60 GeV", "L");
      leg31->AddEntry(bjet3_eta_step4_20, "m_{A}=20 GeV", "L");
      leg31->Draw();

      c25->cd(8);
      bjet4_eta_step4_60znn->Scale(1./bjet4_eta_step4_60znn->Integral());
      bjet4_eta_step4_60->Scale(1./bjet4_eta_step4_60->Integral());
      bjet4_eta_step4_20->Scale(1./bjet4_eta_step4_20->Integral());
      bjet4_eta_step4_60znn->Draw("hist");
      bjet4_eta_step4_60->Draw("hist sames");
      bjet4_eta_step4_20->Draw("hist sames");
      bjet4_eta_step4_60->SetLineColor(kRed);
      bjet4_eta_step4_60->SetLineStyle(1);
      bjet4_eta_step4_20->SetLineColor(kRed);
      bjet4_eta_step4_20->SetLineStyle(2);
      bjet4_eta_step4_60znn->SetLineColor(kBlack);
      bjet4_eta_step4_60znn->SetTitle("bjet4 Pseudorapidity #eta");
      bjet4_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      bjet4_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg32 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg32->SetHeader("bjet4 #eta");
      leg32->AddEntry(bjet4_eta_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg32->AddEntry(bjet4_eta_step4_60, "m_{A}=60 GeV", "L");
      leg32->AddEntry(bjet4_eta_step4_20, "m_{A}=20 GeV", "L");
      leg32->Draw();
      
      c25->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets1234_step4_pt_eta_20-60.pdf");

      

      TCanvas *c26 = new TCanvas("c26", "canvas26", 1200, 800);
      c26->Divide(3,2);

      c26->cd(1);
      jetoutg1_pt_step4_60znn->Scale(1./jetoutg1_pt_step4_60znn->Integral());
      jetoutg1_pt_step4_60->Scale(1./jetoutg1_pt_step4_60->Integral());
      jetoutg1_pt_step4_20->Scale(1./jetoutg1_pt_step4_20->Integral());
      jetoutg1_pt_step4_60znn->Draw("hist");
      jetoutg1_pt_step4_60->Draw("hist sames");
      jetoutg1_pt_step4_20->Draw("hist sames");
      jetoutg1_pt_step4_60->SetLineColor(kRed);
      jetoutg1_pt_step4_60->SetLineStyle(1);
      jetoutg1_pt_step4_20->SetLineColor(kRed);
      jetoutg1_pt_step4_20->SetLineStyle(2);
      jetoutg1_pt_step4_60znn->SetLineColor(kBlack);
      jetoutg1_pt_step4_60znn->SetTitle("Outgoing1 Momentum P_{T}");
      jetoutg1_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      jetoutg1_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg33 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg33->SetHeader("Outg1 P_{T}");
      leg33->AddEntry(jetoutg1_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg33->AddEntry(jetoutg1_pt_step4_60, "m_{A}=60 GeV", "L");
      leg33->AddEntry(jetoutg1_pt_step4_20, "m_{A}=20 GeV", "L");
      leg33->Draw();

      c26->cd(2);
      jetoutg1_eta_step4_60znn->Scale(1./jetoutg1_eta_step4_60znn->Integral());
      jetoutg1_eta_step4_60->Scale(1./jetoutg1_eta_step4_60->Integral());
      jetoutg1_eta_step4_20->Scale(1./jetoutg1_eta_step4_20->Integral());
      jetoutg1_eta_step4_60znn->Draw("hist");
      jetoutg1_eta_step4_60->Draw("hist sames");
      jetoutg1_eta_step4_20->Draw("hist sames");
      jetoutg1_eta_step4_60->SetLineColor(kRed);
      jetoutg1_eta_step4_60->SetLineStyle(1);
      jetoutg1_eta_step4_20->SetLineColor(kRed);
      jetoutg1_eta_step4_20->SetLineStyle(2);
      jetoutg1_eta_step4_60znn->SetLineColor(kBlack);
      jetoutg1_eta_step4_60znn->SetTitle("Outgoing1 Pseudprapidity #eta");
      jetoutg1_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      jetoutg1_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg34 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg34->SetHeader("Outg1 #eta");
      leg34->AddEntry(jetoutg1_eta_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg34->AddEntry(jetoutg1_eta_step4_60, "m_{A}=60 GeV", "L");
      leg34->AddEntry(jetoutg1_eta_step4_20, "m_{A}=20 GeV", "L");
      leg34->Draw();

      c26->cd(3);
      jetoutg1_phi_step4_60znn->Rebin(2);
      jetoutg1_phi_step4_60->Rebin(2);
      jetoutg1_phi_step4_20->Rebin(2);
      jetoutg1_phi_step4_60znn->Scale(1./jetoutg1_phi_step4_60znn->Integral());
      jetoutg1_phi_step4_60->Scale(1./jetoutg1_phi_step4_60->Integral());
      jetoutg1_phi_step4_20->Scale(1./jetoutg1_phi_step4_20->Integral());
      jetoutg1_phi_step4_60znn->Draw("hist");
      jetoutg1_phi_step4_60->Draw("hist sames");
      jetoutg1_phi_step4_20->Draw("hist sames");
      jetoutg1_phi_step4_60->SetLineColor(kRed);
      jetoutg1_phi_step4_60->SetLineStyle(1);
      jetoutg1_phi_step4_20->SetLineColor(kRed);
      jetoutg1_phi_step4_20->SetLineStyle(2);
      jetoutg1_phi_step4_60znn->SetLineColor(kBlack);
      jetoutg1_phi_step4_60znn->SetTitle("Outgoing1 Phi");
      jetoutg1_phi_step4_60znn->GetXaxis()->SetTitle("Phi");
      jetoutg1_phi_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg35 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg35->SetHeader("Outg1 Phi");
      leg35->AddEntry(jetoutg1_phi_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg35->AddEntry(jetoutg1_phi_step4_60, "m_{A}=60 GeV", "L");
      leg35->AddEntry(jetoutg1_phi_step4_20, "m_{A}=20 GeV", "L");
      leg35->Draw();

      c26->cd(4);
      jetoutg2_pt_step4_60znn->Scale(1./jetoutg2_pt_step4_60znn->Integral());
      jetoutg2_pt_step4_60->Scale(1./jetoutg2_pt_step4_60->Integral());
      jetoutg2_pt_step4_20->Scale(1./jetoutg2_pt_step4_20->Integral());
      jetoutg2_pt_step4_60znn->Draw("hist");
      jetoutg2_pt_step4_60->Draw("hist sames");
      jetoutg2_pt_step4_20->Draw("hist sames");
      jetoutg2_pt_step4_60->SetLineColor(kRed);
      jetoutg2_pt_step4_60->SetLineStyle(1);
      jetoutg2_pt_step4_20->SetLineColor(kRed);
      jetoutg2_pt_step4_20->SetLineStyle(2);
      jetoutg2_pt_step4_60znn->SetLineColor(kBlack);
      jetoutg2_pt_step4_60znn->SetTitle("Outgoing2 Momentum P_{T}");
      jetoutg2_pt_step4_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      jetoutg2_pt_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg36 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg36->SetHeader("Outg2 P_{T}");
      leg36->AddEntry(jetoutg2_pt_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg36->AddEntry(jetoutg2_pt_step4_60, "m_{A}=60 GeV", "L");
      leg36->AddEntry(jetoutg2_pt_step4_20, "m_{A}=20 GeV", "L");
      leg36->Draw();

      c26->cd(5);
      jetoutg2_eta_step4_60znn->Scale(1./jetoutg2_eta_step4_60znn->Integral());
      jetoutg2_eta_step4_60->Scale(1./jetoutg2_eta_step4_60->Integral());
      jetoutg2_eta_step4_20->Scale(1./jetoutg2_eta_step4_20->Integral());
      jetoutg2_eta_step4_60znn->Draw("hist");
      jetoutg2_eta_step4_60->Draw("hist sames");
      jetoutg2_eta_step4_20->Draw("hist sames");
      jetoutg2_eta_step4_60->SetLineColor(kRed);
      jetoutg2_eta_step4_60->SetLineStyle(1);
      jetoutg2_eta_step4_20->SetLineColor(kRed);
      jetoutg2_eta_step4_20->SetLineStyle(2);
      jetoutg2_eta_step4_60znn->SetLineColor(kBlack);
      jetoutg2_eta_step4_60znn->SetTitle("Outgoing2 Pseudprapidity #eta");
      jetoutg2_eta_step4_60znn->GetXaxis()->SetTitle("#eta");
      jetoutg2_eta_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg37 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg37->SetHeader("Outg2 #eta");
      leg37->AddEntry(jetoutg2_eta_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg37->AddEntry(jetoutg2_eta_step4_60, "m_{A}=60 GeV", "L");
      leg37->AddEntry(jetoutg2_eta_step4_20, "m_{A}=20 GeV", "L");
      leg37->Draw();

      c26->cd(6);
      jetoutg2_phi_step4_60znn->Rebin(2);
      jetoutg2_phi_step4_60->Rebin(2);
      jetoutg2_phi_step4_20->Rebin(2);
      jetoutg2_phi_step4_60znn->Scale(1./jetoutg2_phi_step4_60znn->Integral());
      jetoutg2_phi_step4_60->Scale(1./jetoutg2_phi_step4_60->Integral());
      jetoutg2_phi_step4_20->Scale(1./jetoutg2_phi_step4_20->Integral());
      jetoutg2_phi_step4_60znn->Draw("hist");
      jetoutg2_phi_step4_60->Draw("hist sames");
      jetoutg2_phi_step4_20->Draw("hist sames");
      jetoutg2_phi_step4_60->SetLineColor(kRed);
      jetoutg2_phi_step4_60->SetLineStyle(1);
      jetoutg2_phi_step4_20->SetLineColor(kRed);
      jetoutg2_phi_step4_20->SetLineStyle(2);
      jetoutg2_phi_step4_60znn->SetLineColor(kBlack);
      jetoutg2_phi_step4_60znn->SetTitle("Outgoing2 Phi");
      jetoutg2_phi_step4_60znn->GetXaxis()->SetTitle("Phi");
      jetoutg2_phi_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg38 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg38->SetHeader("Outg2 Phi");
      leg38->AddEntry(jetoutg2_phi_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg38->AddEntry(jetoutg2_phi_step4_60, "m_{A}=60 GeV", "L");
      leg38->AddEntry(jetoutg2_phi_step4_20, "m_{A}=20 GeV", "L");
      leg38->Draw();
      
      c26->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step4_pt_eta_phi_20-60.pdf");



      TCanvas *c27 = new TCanvas("c27", "canvas27", 1200, 800);
      c27->Divide(3,2);

      c27->cd(1);
      jetoutg1_pt_step3_60->Draw();
      jetoutg1_pt_step3_20->Draw("sames");
      jetoutg1_pt_step3_60->SetLineColor(kBlue);
      jetoutg1_pt_step3_20->SetLineColor(kRed);
      jetoutg1_pt_step3_60->SetTitle("Outgoing1 P_{T}");
      jetoutg1_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      jetoutg1_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg39 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg39->SetHeader("outg1 P_{T}");
      leg39->AddEntry(jetoutg1_pt_step3_60, "m_{A}=60 GeV", "L");
      leg39->AddEntry(jetoutg1_pt_step3_20, "m_{A}=20 GeV", "L");
      leg39->Draw();

      c27->cd(2);
      jetoutg1_eta_step3_60->Draw();
      jetoutg1_eta_step3_20->Draw("sames");
      jetoutg1_eta_step3_60->SetLineColor(kBlue);
      jetoutg1_eta_step3_20->SetLineColor(kRed);
      jetoutg1_eta_step3_60->SetTitle("Outgoing1 Pseudorapidity #eta");
      jetoutg1_eta_step3_60->GetXaxis()->SetTitle("#eta");
      jetoutg1_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg40 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg40->SetHeader("outg1 #eta");
      leg40->AddEntry(jetoutg1_eta_step3_60, "m_{A}=60 GeV", "L");
      leg40->AddEntry(jetoutg1_eta_step3_20, "m_{A}=20 GeV", "L");
      leg40->Draw();

      c27->cd(3);
      jetoutg1_phi_step3_60->Draw();
      jetoutg1_phi_step3_20->Draw("sames");
      jetoutg1_phi_step3_60->SetLineColor(kBlue);
      jetoutg1_phi_step3_20->SetLineColor(kRed);
      jetoutg1_phi_step3_60->SetTitle("Outgoing1 Phi");
      jetoutg1_phi_step3_60->GetXaxis()->SetTitle("Phi");
      jetoutg1_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg41 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg41->SetHeader("outg1 Phi");
      leg41->AddEntry(jetoutg1_phi_step3_60, "m_{A}=60 GeV", "L");
      leg41->AddEntry(jetoutg1_phi_step3_20, "m_{A}=20 GeV", "L");
      leg41->Draw();

      c27->cd(4);
      jetoutg2_pt_step3_60->Draw();
      jetoutg2_pt_step3_20->Draw("sames");
      jetoutg2_pt_step3_60->SetLineColor(kBlue);
      jetoutg2_pt_step3_20->SetLineColor(kRed);
      jetoutg2_pt_step3_60->SetTitle("Outgoing2 P_{T}");
      jetoutg2_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      jetoutg2_pt_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg42 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg42->SetHeader("outg1 P_{T}");
      leg42->AddEntry(jetoutg2_pt_step3_60, "m_{A}=60 GeV", "L");
      leg42->AddEntry(jetoutg2_pt_step3_20, "m_{A}=20 GeV", "L");
      leg42->Draw();

      c27->cd(5);
      jetoutg2_eta_step3_60->Draw();
      jetoutg2_eta_step3_20->Draw("sames");
      jetoutg2_eta_step3_60->SetLineColor(kBlue);
      jetoutg2_eta_step3_20->SetLineColor(kRed);
      jetoutg2_eta_step3_60->SetTitle("Outgoing2 Pseudorapidity #eta");
      jetoutg2_eta_step3_60->GetXaxis()->SetTitle("#eta");
      jetoutg2_eta_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg43 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg43->SetHeader("outg2 #eta");
      leg43->AddEntry(jetoutg2_eta_step3_60, "m_{A}=60 GeV", "L");
      leg43->AddEntry(jetoutg2_eta_step3_20, "m_{A}=20 GeV", "L");
      leg43->Draw();

      c27->cd(6);
      jetoutg2_phi_step3_60->Draw();
      jetoutg2_phi_step3_20->Draw("sames");
      jetoutg2_phi_step3_60->SetLineColor(kBlue);
      jetoutg2_phi_step3_20->SetLineColor(kRed);
      jetoutg2_phi_step3_60->SetTitle("Outgoing2 Phi");
      jetoutg2_phi_step3_60->GetXaxis()->SetTitle("Phi");
      jetoutg2_phi_step3_60->GetYaxis()->SetTitle("Events");
      TLegend *leg44 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg44->SetHeader("outg2 Phi");
      leg44->AddEntry(jetoutg2_phi_step3_60, "m_{A}=60 GeV", "L");
      leg44->AddEntry(jetoutg2_phi_step3_20, "m_{A}=20 GeV", "L");
      leg44->Draw();
      
      //c27->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c28 = new TCanvas("c28", "canvas28", 1200, 400);
      c28->Divide(3,1);
  
      c28->cd(1);
      dR_outg_step3_60znn->Scale(1./dR_outg_step3_60znn->Integral());
      dR_outg_step3_20->Scale(1./dR_outg_step3_20->Integral());
      dR_outg_step3_60->Scale(1./dR_outg_step3_60->Integral());
      dR_outg_step3_60znn->Draw("hist");
      dR_outg_step3_20->Draw("hist sames");
      dR_outg_step3_60->Draw("hist sames");
      dR_outg_step3_60->SetLineColor(kRed);
      dR_outg_step3_60->SetLineStyle(1);
      dR_outg_step3_20->SetLineColor(kRed);
      dR_outg_step3_20->SetLineStyle(2);
      dR_outg_step3_60znn->SetLineColor(kBlack);
      dR_outg_step3_60znn->SetTitle("Anglular Distance #DeltaR(jj)");
      dR_outg_step3_60znn->GetXaxis()->SetTitle("#DeltaR(jj)");
      dR_outg_step3_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg45 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg45->SetHeader("#DeltaR(jj)");
      leg45->AddEntry(dR_outg_step3_60znn, "Z #rightarrow #nu#nu", "L");
      leg45->AddEntry(dR_outg_step3_60, "m_{A}=60 GeV", "L");
      leg45->AddEntry(dR_outg_step3_20, "m_{A}=20 GeV", "L");
      leg45->Draw();

      c28->cd(2);
      deta_outg_step3_60znn->Scale(1./deta_outg_step3_60znn->Integral());
      deta_outg_step3_20->Scale(1./deta_outg_step3_20->Integral());
      deta_outg_step3_60->Scale(1./deta_outg_step3_60->Integral());
      deta_outg_step3_60znn->Draw("hist");
      deta_outg_step3_20->Draw("hist sames");
      deta_outg_step3_60->Draw("hist sames");
      deta_outg_step3_60->SetLineColor(kRed);
      deta_outg_step3_60->SetLineStyle(1);
      deta_outg_step3_20->SetLineColor(kRed);
      deta_outg_step3_20->SetLineStyle(2);
      deta_outg_step3_60znn->SetLineColor(kBlack);
      deta_outg_step3_60znn->SetTitle("|#Delta#eta(jj)|");
      deta_outg_step3_60znn->GetXaxis()->SetTitle("|#Delta#eta(jj)|");
      deta_outg_step3_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg46 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg46->SetHeader("|#Delta#eta(jj)|");
      leg46->AddEntry(deta_outg_step3_60znn, "Z #rightarrow #nu#nu", "L");
      leg46->AddEntry(deta_outg_step3_60, "m_{A}=60 GeV", "L");
      leg46->AddEntry(deta_outg_step3_20, "m_{A}=20 GeV", "L");
      leg46->Draw();
      
      c28->cd(3);
      invmass_outg_step3_60znn->Scale(1./invmass_outg_step3_60znn->Integral());
      invmass_outg_step3_20->Scale(1./invmass_outg_step3_20->Integral());
      invmass_outg_step3_60->Scale(1./invmass_outg_step3_60->Integral());
      invmass_outg_step3_60znn->Draw("hist");
      invmass_outg_step3_20->Draw("hist sames");
      invmass_outg_step3_60->Draw("hist sames");
      invmass_outg_step3_60->SetLineColor(kRed);
      invmass_outg_step3_60->SetLineStyle(1);
      invmass_outg_step3_20->SetLineColor(kRed);
      invmass_outg_step3_20->SetLineStyle(2);
      invmass_outg_step3_60znn->SetLineColor(kBlack);
      invmass_outg_step3_60znn->SetTitle("Invariant Mass M(jj)");
      invmass_outg_step3_60znn->GetXaxis()->SetTitle("M(jj) (GeV)");
      invmass_outg_step3_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg47 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg47->SetHeader("M(jj)");
      leg47->AddEntry(invmass_outg_step3_60znn, "Z #rightarrow #nu#nu", "L");
      leg47->AddEntry(invmass_outg_step3_60, "m_{A}=60 GeV", "L");
      leg47->AddEntry(invmass_outg_step3_20, "m_{A}=20 GeV", "L");
      leg47->Draw();

      //c28->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step3_dr_deta_inv_20-60.pdf");



      TCanvas *c29 = new TCanvas("c29", "canvas29", 1200, 400);
      c29->Divide(3,1);
  
      c29->cd(1);
      dR_outg_step4_60znn->Scale(1./dR_outg_step4_60znn->Integral());
      dR_outg_step4_20->Scale(1./dR_outg_step4_20->Integral());
      dR_outg_step4_60->Scale(1./dR_outg_step4_60->Integral());
      dR_outg_step4_60znn->Draw("hist");
      dR_outg_step4_60->Draw("hist sames");
      dR_outg_step4_20->Draw("hist sames");
      dR_outg_step4_60->SetLineColor(kRed);
      dR_outg_step4_60->SetLineStyle(1);
      dR_outg_step4_20->SetLineColor(kRed);
      dR_outg_step4_20->SetLineStyle(2);
      dR_outg_step4_60znn->SetLineColor(kBlack);
      dR_outg_step4_60znn->SetTitle("Angular Distance #DeltaR(jj)");
      dR_outg_step4_60znn->GetXaxis()->SetTitle("#DeltaR(jj)");
      dR_outg_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg48 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg48->SetHeader("#DeltaR(jj)");
      leg48->AddEntry(dR_outg_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg48->AddEntry(dR_outg_step4_60, "m_{A}=60 GeV", "L");
      leg48->AddEntry(dR_outg_step4_20, "m_{A}=20 GeV", "L");
      leg48->Draw();

      c29->cd(2);
      deta_outg_step4_60znn->Scale(1./deta_outg_step4_60znn->Integral());
      deta_outg_step4_20->Scale(1./deta_outg_step4_20->Integral());
      deta_outg_step4_60->Scale(1./deta_outg_step4_60->Integral());
      deta_outg_step4_60znn->Draw("hist");
      deta_outg_step4_60->Draw("hist sames");
      deta_outg_step4_20->Draw("hist sames");
      deta_outg_step4_60->SetLineColor(kRed);
      deta_outg_step4_60->SetLineStyle(1);
      deta_outg_step4_20->SetLineColor(kRed);
      deta_outg_step4_20->SetLineStyle(2);
      deta_outg_step4_60znn->SetLineColor(kBlack);
      deta_outg_step4_60znn->SetTitle("Pseudorapidity |#Delta#eta(jj)|");
      deta_outg_step4_60znn->GetXaxis()->SetTitle("|#Delta#eta(jj)|");
      deta_outg_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg49 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg49->SetHeader("|#Delta#eta(jj)|");
      leg49->AddEntry(deta_outg_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg49->AddEntry(deta_outg_step4_60, "m_{A}=60 GeV", "L");
      leg49->AddEntry(deta_outg_step4_20, "m_{A}=20 GeV", "L");
      leg49->Draw();

      c29->cd(3);
      invmass_outg_step4_60znn->Scale(1./invmass_outg_step4_60znn->Integral());
      invmass_outg_step4_20->Scale(1./invmass_outg_step4_20->Integral());
      invmass_outg_step4_60->Scale(1./invmass_outg_step4_60->Integral());
      invmass_outg_step4_60znn->Draw("hist");
      invmass_outg_step4_60->Draw("hist sames");
      invmass_outg_step4_20->Draw("hist sames");
      invmass_outg_step4_60->SetLineColor(kRed);
      invmass_outg_step4_60->SetLineStyle(1);
      invmass_outg_step4_20->SetLineColor(kRed);
      invmass_outg_step4_20->SetLineStyle(2);
      invmass_outg_step4_60znn->SetLineColor(kBlack);
      invmass_outg_step4_60znn->SetTitle("Invariant Mass M(jj)");
      invmass_outg_step4_60znn->GetXaxis()->SetTitle("M(jj) (GeV)");
      invmass_outg_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg50 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg50->SetHeader("M(jj)");
      leg50->AddEntry(invmass_outg_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg50->AddEntry(invmass_outg_step4_60, "m_{A}=60 GeV", "L");
      leg50->AddEntry(invmass_outg_step4_20, "m_{A}=20 GeV", "L");
      leg50->Draw();
      
      //c29->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step4_dr_deta_inv_20-60.pdf");
   


      TCanvas *c30 = new TCanvas("c30", "canvas30", 1200, 400);
      c30->Divide(3,1);
  
      c30->cd(1);
      h_dR_outg_60->Draw();
      h_dR_outg_20->Draw("sames");
      h_dR_outg_60->SetLineColor(kBlue);
      h_dR_outg_20->SetLineColor(kRed);
      h_dR_outg_60->SetTitle("Angular Distance #DeltaR(jj)");
      h_dR_outg_60->GetXaxis()->SetTitle("#DeltaR(jj)");
      h_dR_outg_60->GetYaxis()->SetTitle("Events");
      TLegend *leg51 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg51->SetHeader("#DeltaR(jj)");
      leg51->AddEntry(h_dR_outg_60, "m_{A}=60 GeV", "L");
      leg51->AddEntry(h_dR_outg_20, "m_{A}=20 GeV", "L");
      leg51->Draw();

      c30->cd(2);
      h_deta_outg_60->Draw();
      h_deta_outg_20->Draw("sames");
      h_deta_outg_60->SetLineColor(kBlue);
      h_deta_outg_20->SetLineColor(kRed);
      h_deta_outg_60->SetTitle("|#Delta#eta(jj)|");
      h_deta_outg_60->GetXaxis()->SetTitle("|#Delta#eta(jj)|");
      h_deta_outg_60->GetYaxis()->SetTitle("Events");
      TLegend *leg52 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg52->SetHeader("|#Delta#eta(jj)|");
      leg52->AddEntry(h_deta_outg_60, "m_{A}=60 GeV", "L");
      leg52->AddEntry(h_deta_outg_20, "m_{A}=20 GeV", "L");
      leg52->Draw();

      c30->cd(3);
      h_invmass_outg_60->Draw();
      h_invmass_outg_20->Draw("sames");
      h_invmass_outg_60->SetLineColor(kBlue);
      h_invmass_outg_20->SetLineColor(kRed);
      h_invmass_outg_60->SetTitle("Invariant Mass M(jj)");
      h_invmass_outg_60->GetXaxis()->SetTitle("M(jj) (GeV)");
      h_invmass_outg_60->GetYaxis()->SetTitle("Events");
      TLegend *leg53 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg53->SetHeader("M(jj)");
      leg53->AddEntry(h_invmass_outg_60, "m_{A}=60 GeV", "L");
      leg53->AddEntry(h_invmass_outg_20, "m_{A}=20 GeV", "L");
      leg53->Draw();

      //c30->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg_dr_deta_inv_20-60.pdf");


      
      TCanvas *c31 = new TCanvas("c31", "canvas31", 800, 400);
      c31->Divide(2,1);

      c31->cd(2);
      bjet_mult_step1_60znn->Scale(1./bjet_mult_step1_60znn->Integral());
      bjet_mult_step1_60->Scale(1./bjet_mult_step1_60->Integral());
      bjet_mult_step1_20->Scale(1./bjet_mult_step1_20->Integral());
      bjet_mult_step1_60znn->Draw("hist");
      bjet_mult_step1_20->Draw("hist sames");
      bjet_mult_step1_60->Draw("hist sames");
      bjet_mult_step1_60->SetLineColor(kRed);
      bjet_mult_step1_60->SetLineStyle(1);
      bjet_mult_step1_20->SetLineColor(kRed);
      bjet_mult_step1_20->SetLineStyle(2);
      bjet_mult_step1_60znn->SetLineColor(kBlack);
      //bjet_mult_step1_60znn->SetFillColor(kBlack);
      bjet_mult_step1_60znn->SetTitle("bJet Multiplicity");
      bjet_mult_step1_60znn->GetXaxis()->SetTitle("bJet Multiplicity");
      bjet_mult_step1_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg54 = new TLegend(0.59, 0.5, 0.89, 0.65);
      //leg54->SetHeader(" ");
      leg54->AddEntry(bjet_mult_step1_60znn, "Z #rightarrow #nu#nu", "L");
      leg54->AddEntry(bjet_mult_step1_60, "m_{A}=60 GeV", "L");
      leg54->AddEntry(bjet_mult_step1_20, "m_{A}=20 GeV", "L");
      leg54->Draw();

      c31->cd(1);
      jet_mult_step1_60znn->Scale(1./jet_mult_step1_60znn->Integral());
      jet_mult_step1_60->Scale(1./jet_mult_step1_60->Integral());
      jet_mult_step1_20->Scale(1./jet_mult_step1_20->Integral());
      jet_mult_step1_60znn->Draw("hist");
      jet_mult_step1_20->Draw("hist sames");
      jet_mult_step1_60->Draw("hist sames");
      jet_mult_step1_60->SetLineColor(kRed);
      jet_mult_step1_60->SetLineStyle(1);
      jet_mult_step1_20->SetLineColor(kRed);
      jet_mult_step1_20->SetLineStyle(2);
      jet_mult_step1_60znn->SetLineColor(kBlack);
      jet_mult_step1_60znn->SetTitle("Jet Multiplicity");
      jet_mult_step1_60znn->GetXaxis()->SetTitle("Jet Multiplicity");
      jet_mult_step1_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg55 = new TLegend(0.59, 0.5, 0.89, 0.65);
      //leg55->SetHeader(" ");
      leg55->AddEntry(jet_mult_step1_60znn, "Z #rightarrow #nu#nu", "L");
      leg55->AddEntry(jet_mult_step1_60, "m_{A}=60 GeV", "L");
      leg55->AddEntry(jet_mult_step1_20, "m_{A}=20 GeV", "L");
      leg55->Draw();

      //c31->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjet_mult_20-60.pdf");

      
      TCanvas *c32 = new TCanvas("c32", "canvas32", 1200, 400);
      c32->Divide(3,1);

      c32->cd(1);
      invmass_bjets_step4_60znn->Scale(1./invmass_bjets_step4_60znn->Integral());
      invmass_bjets_step4_60->Scale(1./invmass_bjets_step4_60->Integral());
      invmass_bjets_step4_20->Scale(1./invmass_bjets_step4_20->Integral());
      invmass_bjets_step4_60->Draw("hist");
      invmass_bjets_step4_60znn->Draw("hist sames");
      invmass_bjets_step4_20->Draw("hist sames");
      invmass_bjets_step4_60->SetLineColor(kRed);
      invmass_bjets_step4_60->SetLineStyle(1);
      invmass_bjets_step4_20->SetLineColor(kRed);
      invmass_bjets_step4_20->SetLineStyle(2);
      invmass_bjets_step4_60znn->SetLineColor(kBlack);
      invmass_bjets_step4_60->SetTitle("bJets Invariant Mass M(bbbb)");
      invmass_bjets_step4_60->GetXaxis()->SetTitle("M(bbbb) (GeV)");
      invmass_bjets_step4_60->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg56 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg56->SetHeader("M(bbbb)");
      leg56->AddEntry(invmass_bjets_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg56->AddEntry(invmass_bjets_step4_60, "mA=60 GeV", "L");
      leg56->AddEntry(invmass_bjets_step4_20, "mA=20 GeV", "L");
      leg56->Draw();

      c32->cd(2);
      h_ht_step4_60znn->Scale(1./h_ht_step4_60znn->Integral());
      h_ht_step4_60->Scale(1./h_ht_step4_60->Integral());
      h_ht_step4_20->Scale(1./h_ht_step4_20->Integral());
      h_ht_step4_60znn->Draw("hist");
      h_ht_step4_60->Draw("hist sames");
      h_ht_step4_20->Draw("hist sames");
      h_ht_step4_60->SetLineColor(kRed);
      h_ht_step4_60->SetLineStyle(1);
      h_ht_step4_20->SetLineColor(kRed);
      h_ht_step4_20->SetLineStyle(2);
      h_ht_step4_60znn->SetLineColor(kBlack);
      h_ht_step4_60znn->SetTitle("Scalar Sum of Momentum H_{T}");
      h_ht_step4_60znn->GetXaxis()->SetTitle("H_{T} (GeV)");
      h_ht_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg57 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg57->SetHeader("H_{T}");
      leg57->AddEntry(h_ht_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg57->AddEntry(h_ht_step4_60, "mA=60 GeV", "L");
      leg57->AddEntry(h_ht_step4_20, "mA=20 GeV", "L");
      leg57->Draw();

      c32->cd(3);
      c32->SetLogy();
      jetbtag1_step4_60znn->Scale(1./jetbtag1_step4_60znn->Integral());
      jetbtag1_step4_60->Scale(1./jetbtag1_step4_60->Integral());
      jetbtag1_step4_20->Scale(1./jetbtag1_step4_20->Integral());
      jetbtag1_step4_60znn->Draw("hist");
      jetbtag1_step4_60->Draw("hist sames");
      jetbtag1_step4_20->Draw("hist sames");
      jetbtag1_step4_60->SetLineColor(kRed);
      jetbtag1_step4_60->SetLineStyle(1);
      jetbtag1_step4_20->SetLineColor(kRed);
      jetbtag1_step4_20->SetLineStyle(2);
      jetbtag1_step4_60znn->SetLineColor(kBlack);
      jetbtag1_step4_60znn->SetTitle("Jet btag1");
      jetbtag1_step4_60znn->GetXaxis()->SetTitle("Jet btag1");
      jetbtag1_step4_60znn->GetYaxis()->SetTitle("Normalized to 1");
      TLegend *leg58 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg58->SetHeader("Jet btag1");
      leg58->AddEntry(jetbtag1_step4_60znn, "Z #rightarrow #nu#nu", "L");
      leg58->AddEntry(jetbtag1_step4_60, "mA=60 GeV", "L");
      leg58->AddEntry(jetbtag1_step4_20, "mA=20 GeV", "L");
      leg58->Draw();

      //c32->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjet_inv_ht_btag_step4_20-60.pdf");

      
  
      TCanvas *c33 = new TCanvas("c33", "canvas33", 800, 400);
      c33->Divide(2,1);
      
      c33->cd(1);
      higgs_pt_60->Draw();
      higgs_pt_20->Draw("sames");
      higgs_pt_60->SetLineColor(kBlue);
      higgs_pt_20->SetLineColor(kRed);
      higgs_pt_60->SetTitle("Higgs Momentum P_{T}");
      higgs_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      higgs_pt_60->GetYaxis()->SetTitle("Events");
      gPad->SetLogy();
      TLegend *leg59 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg59->SetHeader("Higgs P_{T}");
      leg59->AddEntry(higgs_pt_60, "m_{A}=60 GeV", "L");
      leg59->AddEntry(higgs_pt_20, "m_{A}=20 GeV", "L");
      leg59->Draw();

      c33->cd(2);
      higgs_eta_60->Draw();
      higgs_eta_20->Draw("sames");
      higgs_eta_60->SetLineColor(kBlue);
      higgs_eta_20->SetLineColor(kRed);
      higgs_eta_60->SetTitle("Higgs Pseudorapidity #eta");
      higgs_eta_60->GetXaxis()->SetTitle("#eta");
      higgs_eta_60->GetYaxis()->SetTitle("Events");
      gPad->SetLogy();
      TLegend *leg60 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg60->SetHeader("Higgs #eta");
      leg60->AddEntry(higgs_eta_60, "m_{A}=60 GeV", "L");
      leg60->AddEntry(higgs_eta_20, "m_{A}=20 GeV", "L");
      leg60->Draw();
  
      //c33->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_logy_20-60_generator.pdf");
  


      TCanvas *c34 = new TCanvas("c34", "canvas34", 1200, 400);
      c34->Divide(3,1);
  
      c34->cd(1);
      jet_pt_tot_60znn->Scale(1./jet_pt_tot_60znn->Integral());
      jet_pt_tot_60->Scale(1./jet_pt_tot_60->Integral());
      jet_pt_tot_20->Scale(1./jet_pt_tot_20->Integral());
      jet_pt_tot_60znn->Draw("hist");
      jet_pt_tot_60->Draw("hist sames");
      jet_pt_tot_20->Draw("hist sames");
      jet_pt_tot_60znn->SetTitle("Jets Momentum P_{T}");
      jet_pt_tot_60znn->GetXaxis()->SetTitle("P_{T} (GeV)");
      jet_pt_tot_60znn->GetYaxis()->SetTitle("Normalized to 1");
      jet_pt_tot_60->SetLineColor(kRed);
      jet_pt_tot_60->SetLineStyle(1);
      jet_pt_tot_20->SetLineColor(kRed);
      jet_pt_tot_20->SetLineStyle(2);
      jet_pt_tot_60znn->SetLineColor(kBlack);
      TLegend *leg61 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg61->SetHeader("Jets P_{T}");
      leg61->AddEntry(jet_pt_tot_60znn, "Z #rightarrow #nu#nu", "L");
      leg61->AddEntry(jet_pt_tot_60, "m_{A}=60 GeV", "L");
      leg61->AddEntry(jet_pt_tot_20, "m_{A}=20 GeV", "L");
      leg61->Draw();

      c34->cd(2);
      jet_eta_tot_60znn->Scale(1./jet_eta_tot_60znn->Integral());
      jet_eta_tot_60->Scale(1./jet_eta_tot_60->Integral());
      jet_eta_tot_20->Scale(1./jet_eta_tot_20->Integral());
      jet_eta_tot_60znn->Draw("hist");
      jet_eta_tot_60->Draw("hist sames");
      jet_eta_tot_20->Draw("hist sames");
      jet_eta_tot_60znn->SetTitle("Jets Pseudorapidity #eta");
      jet_eta_tot_60znn->GetXaxis()->SetTitle("#eta");
      jet_eta_tot_60znn->GetYaxis()->SetTitle("Normalized to 1");
      jet_eta_tot_60->SetLineColor(kRed);
      jet_eta_tot_60->SetLineStyle(1);
      jet_eta_tot_20->SetLineColor(kRed);
      jet_eta_tot_20->SetLineStyle(2);
      jet_eta_tot_60znn->SetLineColor(kBlack);
      TLegend *leg62 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg62->SetHeader("Jets #eta");
      leg62->AddEntry(jet_eta_tot_60znn, "Z #rightarrow #nu#nu", "L");
      leg62->AddEntry(jet_eta_tot_60, "m_{A}=60 GeV", "L");
      leg62->AddEntry(jet_eta_tot_20, "m_{A}=20 GeV", "L");
      leg62->Draw();
  
      c34->cd(3);
      jet_phi_tot_60znn->Scale(1./jet_phi_tot_60znn->Integral());
      jet_phi_tot_60->Scale(1./jet_phi_tot_60->Integral());
      jet_phi_tot_20->Scale(1./jet_phi_tot_20->Integral());
      jet_phi_tot_60znn->Draw("hist");
      jet_phi_tot_60->Draw("hist sames");
      jet_phi_tot_20->Draw("hist sames");
      jet_phi_tot_60znn->SetTitle("Jets Phi");
      jet_phi_tot_60znn->GetXaxis()->SetTitle("Phi");
      jet_phi_tot_60znn->GetYaxis()->SetTitle("Normalized to 1");
      jet_phi_tot_60->SetLineColor(kRed);
      jet_phi_tot_60->SetLineStyle(1);
      jet_phi_tot_20->SetLineColor(kRed);
      jet_phi_tot_20->SetLineStyle(2);
      jet_phi_tot_60znn->SetLineColor(kBlack);
      TLegend *leg63 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg63->SetHeader("Jets Phi");
      leg63->AddEntry(jet_phi_tot_60znn, "Z #rightarrow #nu#nu", "L");
      leg63->AddEntry(jet_phi_tot_60, "m_{A}=60 GeV", "L");
      leg63->AddEntry(jet_phi_tot_20, "m_{A}=20 GeV", "L");
      leg63->Draw();

      //c34->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_pt_eta_phi_60-20.pdf");



      TCanvas *c35 = new TCanvas("c35", "canvas35", 700, 500);

      jet_mult_60znn->Scale(1./jet_mult_60znn->Integral());
      jet_mult_60->Scale(1./jet_mult_60->Integral());
      jet_mult_20->Scale(1./jet_mult_20->Integral());
      jet_mult_60znn->Draw("hist");
      jet_mult_20->Draw("hist sames");
      jet_mult_60->Draw("hist sames");
      jet_mult_60znn->GetXaxis()->SetTitle("Multiplicity");
      jet_mult_60znn->GetYaxis()->SetTitle("Normalized to 1");
      jet_mult_60->SetLineColor(kRed);
      jet_mult_60->SetLineStyle(1);
      jet_mult_20->SetLineColor(kRed);
      jet_mult_20->SetLineStyle(2);
      jet_mult_60znn->SetLineColor(kBlack);
      TLegend *leg64 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg64->SetHeader("Jet Multiplicity");
      leg64->AddEntry(jet_mult_60znn, "Z #rightarrow #nu#nu", "L");
      leg64->AddEntry(jet_mult_60, "m_{A}=60 GeV", "L");
      leg64->AddEntry(jet_mult_20, "m_{A}=20 GeV", "L");
      leg64->Draw();

      //c35->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_mult_60.pdf");
      

      
      TCanvas *c36 = new TCanvas("c36", "canvas36", 800, 800);
      c36->Divide(2,2);

      c36->cd(1);
      /* q1_eta_60->SetStats(kFALSE); */
      /* q2_eta_60->SetStats(kFALSE); */
      /* outg1_eta_60->SetStats(kFALSE); */
      /* outg2_eta_60->SetStats(kFALSE); */
      q1_eta_60->Draw();
      q2_eta_60->Draw("sames");
      outg1_eta_60->Draw("sames");
      outg2_eta_60->Draw("sames");
      q1_eta_60->SetLineColor(kGreen);
      q2_eta_60->SetLineColor(kBlack);
      outg1_eta_60->SetLineColor(kBlue);
      outg2_eta_60->SetLineColor(kPink);
      q1_eta_60->SetTitle("Pseudorapidity #eta");
      q1_eta_60->GetXaxis()->SetTitle("#eta");
      q1_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg65 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg65->SetHeader("m_{A} = 60 GeV");
      leg65->AddEntry(q1_eta_60, "bquark 1", "L");
      leg65->AddEntry(q2_eta_60, "bquark 2", "L");
      leg65->AddEntry(outg1_eta_60, "outgoing 1", "L");
      leg65->AddEntry(outg2_eta_60, "outgoing 2", "L");
      leg65->Draw();

      c36->cd(2);
      /* q1_eta_20->SetStats(kFALSE); */
      /* q2_eta_20->SetStats(kFALSE); */
      /* outg1_eta_20->SetStats(kFALSE); */
      /* outg2_eta_20->SetStats(kFALSE); */
      q1_eta_20->Draw();
      q2_eta_20->Draw("sames");
      outg1_eta_20->Draw("sames");
      outg2_eta_20->Draw("sames");
      q1_eta_20->SetLineColor(kGreen);
      q2_eta_20->SetLineColor(kBlack);
      outg1_eta_20->SetLineColor(kBlue);
      outg2_eta_20->SetLineColor(kPink);
      q1_eta_20->SetTitle("Pseudorapidity #eta");
      q1_eta_20->GetXaxis()->SetTitle("#eta");
      q1_eta_20->GetYaxis()->SetTitle("Events");
      TLegend *leg66 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg66->SetHeader("m_{A} = 20 GeV");
      leg66->AddEntry(q1_eta_20, "bquark 1", "L");
      leg66->AddEntry(q2_eta_20, "bquark 2", "L");
      leg66->AddEntry(outg1_eta_20, "outgoing 1", "L");
      leg66->AddEntry(outg2_eta_20, "outgoing 2", "L");
      leg66->Draw();

      c36->cd(3);
      /* q1_pt_60->SetStats(kFALSE); */
      /* q2_pt_60->SetStats(kFALSE); */
      /* outg1_pt_60->SetStats(kFALSE); */
      /* outg2_pt_60->SetStats(kFALSE); */
      outg1_pt_60->Draw();
      outg2_pt_60->Draw("sames");
      q1_pt_60->Draw("sames");
      q2_pt_60->Draw("sames");
      q1_pt_60->SetLineColor(kGreen);
      q2_pt_60->SetLineColor(kBlack);
      outg1_pt_60->SetLineColor(kBlue);
      outg2_pt_60->SetLineColor(kPink);
      outg1_pt_60->SetTitle("Momentum P_{T}");
      outg1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg67 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg67->SetHeader("m_{A} = 60 GeV");
      leg67->AddEntry(q1_pt_60, "bquark 1", "L");
      leg67->AddEntry(q2_pt_60, "bquark 2", "L");
      leg67->AddEntry(outg1_pt_60, "outgoing 1", "L");
      leg67->AddEntry(outg2_pt_60, "outgoing 2", "L");
      leg67->Draw();

      c36->cd(4);
      /* q1_pt_20->SetStats(kFALSE); */
      /* q2_pt_20->SetStats(kFALSE); */
      /* outg1_pt_20->SetStats(kFALSE); */
      /* outg2_pt_20->SetStats(kFALSE); */
      outg1_pt_20->Draw();
      outg2_pt_20->Draw("sames");
      q1_pt_20->Draw("sames");
      q2_pt_20->Draw("sames");
      q1_pt_20->SetLineColor(kGreen);
      q2_pt_20->SetLineColor(kBlack);
      outg1_pt_20->SetLineColor(kBlue);
      outg2_pt_20->SetLineColor(kPink);
      outg1_pt_20->SetTitle("Momentum P_{T}");
      outg1_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_20->GetYaxis()->SetTitle("Events");
      TLegend *leg68 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg68->SetHeader("m_{A} = 20 GeV");
      leg68->AddEntry(q1_pt_20, "bquark 1", "L");
      leg68->AddEntry(q2_pt_20, "bquark 2", "L");
      leg68->AddEntry(outg1_pt_20, "outgoing 1", "L");
      leg68->AddEntry(outg2_pt_20, "outgoing 2", "L");
      leg68->Draw();

      //c36->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/b12_q12_pt_eta_generator_20-60.pdf");

      

      TCanvas *c37 = new TCanvas("c37", "canvas37", 900, 700);
      c37->Divide(2,2);
      
      c37->cd(1);
      higgs_pt_60->Draw();
      higgs_pt_20->Draw("sames");
      higgs_pt_60->SetLineColor(kBlue);
      higgs_pt_20->SetLineColor(kRed);
      higgs_pt_60->SetTitle("Higgs Momentum P_{T}");
      higgs_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      higgs_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg69 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg69->SetHeader("P_{T}");
      leg69->AddEntry(higgs_pt_60, "m_{A}=60GeV", "L");
      leg69->AddEntry(higgs_pt_20, "m_{A}=20GeV", "L");
      leg69->Draw();
  
      c37->cd(2);
      higgs_eta_60->Draw();
      higgs_eta_20->Draw("sames");
      higgs_eta_60->SetLineColor(kBlue);
      higgs_eta_20->SetLineColor(kRed);
      higgs_eta_60->SetTitle("Higgs Pseudorapidity #eta");
      higgs_eta_60->GetXaxis()->SetTitle("#eta");
      higgs_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg70 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg70->SetHeader("#eta");
      leg70->AddEntry(higgs_eta_60, "m_{A}=60GeV", "L");
      leg70->AddEntry(higgs_eta_20, "m_{A}=20GeV", "L");
      leg70->Draw();

      c37->cd(3);
      higgs_phi_60->Draw();
      higgs_phi_20->Draw("sames");
      higgs_phi_60->SetLineColor(kBlue);
      higgs_phi_20->SetLineColor(kRed);
      higgs_phi_60->SetTitle("Higgs Phi");
      higgs_phi_60->GetXaxis()->SetTitle("Phi");
      higgs_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg71 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg71->SetHeader("Phi");
      leg71->AddEntry(higgs_phi_60, "m_{A}=60GeV", "L");
      leg71->AddEntry(higgs_phi_20, "m_{A}=20GeV", "L");
      leg71->Draw();
  
      c37->cd(4);
      higgs_m_60->Draw();
      higgs_m_20->Draw("sames");
      higgs_m_60->SetLineColor(kBlue);
      higgs_m_20->SetLineColor(kRed);
      higgs_m_60->SetTitle("Higgs Mass");
      higgs_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      higgs_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg72 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg72->SetHeader("Mass");
      leg72->AddEntry(higgs_m_60, "m_{A}=60GeV", "L");
      leg72->AddEntry(higgs_m_20, "m_{A}=20GeV", "L");
      leg72->Draw();
  
      //c37->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_phi_m_20-60.pdf");



      TCanvas *c38 = new TCanvas("c38", "canvas38", 900, 700);
      c38->Divide(2,2);
  
      c38->cd(1);
      ab_pt_60->Draw();
      ab_pt_20->Draw("sames");
      ab_pt_60->SetLineColor(kBlue);
      ab_pt_20->SetLineColor(kRed);
      ab_pt_60->SetTitle("A-Boson Momentum P_{T}");
      ab_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      ab_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg73 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg73->SetHeader("P_{T}");
      leg73->AddEntry(ab_pt_60, "m_{A}=60GeV", "L");
      leg73->AddEntry(ab_pt_20, "m_{A}=20GeV", "L");
      leg73->Draw();
  
      c38->cd(2);
      ab_eta_20->Draw();
      ab_eta_60->Draw("sames");
      ab_eta_60->SetLineColor(kBlue);
      ab_eta_20->SetLineColor(kRed);
      ab_eta_20->SetTitle("A-Boson Pseudorapidity #eta");
      ab_eta_20->GetXaxis()->SetTitle("#eta");
      ab_eta_20->GetYaxis()->SetTitle("Events");
      TLegend *leg74 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg74->SetHeader("#eta");
      leg74->AddEntry(ab_eta_60, "m_{A}=60GeV", "L");
      leg74->AddEntry(ab_eta_20, "m_{A}=20GeV", "L");
      leg74->Draw();
 
      c38->cd(3);
      ab_phi_60->Draw();
      ab_phi_20->Draw("sames");
      ab_phi_60->SetLineColor(kBlue);
      ab_phi_20->SetLineColor(kRed);
      ab_phi_60->SetTitle("A-Boson Phi");
      ab_phi_60->GetXaxis()->SetTitle("Phi");
      ab_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg75 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg75->SetHeader("Phi");
      leg75->AddEntry(ab_phi_60, "m_{A}=60GeV", "L");
      leg75->AddEntry(ab_phi_20, "m_{A}=20GeV", "L");
      leg75->Draw();

      c38->cd(4);
      ab_m_60->Draw();
      ab_m_20->Draw("sames");
      ab_m_60->SetLineColor(kBlue);
      ab_m_20->SetLineColor(kRed);
      ab_m_60->SetTitle("A-Boson Mass");
      ab_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      ab_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg76 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg76->SetHeader("Mass");
      leg76->AddEntry(ab_m_60, "m_{A}=60GeV", "L");
      leg76->AddEntry(ab_m_20, "m_{A}=20GeV", "L");
      leg76->Draw();

      //c37->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/aboson_pt_eta_phi_m_20-60.pdf");



      TCanvas *c39 = new TCanvas("c39", "canvas39", 800, 400);
      c39->Divide(2,1);

      c39->cd(1);
      dRa12_60->Draw();
      dRa12_20->Draw("sames");
      dRa12_60->SetLineColor(kBlue);
      dRa12_20->SetLineColor(kRed);
      dRa12_60->SetTitle("A-Bosons Angular Distance #DeltaR(jj)");
      dRa12_60->GetXaxis()->SetTitle("#DeltaR(jj)");
      dRa12_60->GetYaxis()->SetTitle("Events");
      TLegend *leg77 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg77->SetHeader("#DeltaR(jj)");
      leg77->AddEntry(dRa12_60, "m_{A}=60 GeV", "L");
      leg77->AddEntry(dRa12_20, "m_{A}=20 GeV", "L");
      leg77->Draw();

      c39->cd(2);
      h_dR_bbbar12_20->Draw();
      h_dR_bbbar12_60->Draw("sames");
      h_dR_bbbar12_60->SetLineColor(kBlue);
      h_dR_bbbar12_20->SetLineColor(kRed);
      h_dR_bbbar12_20->SetTitle("bquark12 Angular Distance #DeltaR(jj)");
      h_dR_bbbar12_20->GetXaxis()->SetTitle("#DeltaR(jj)");
      h_dR_bbbar12_20->GetYaxis()->SetTitle("Events");
      TLegend *leg78 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg78->SetHeader("#DeltaR(jj)");
      leg78->AddEntry(dRa12_60, "m_{A}=60 GeV", "L");
      leg78->AddEntry(dRa12_20, "m_{A}=20 GeV", "L");
      leg78->Draw();

      //c39->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/dr_aa_bb_60-20.pdf");



      TCanvas *c40 = new TCanvas("c39", "canvas39", 800, 400);
      c40->Divide(4,2);

      c40->cd(1);
      q1_pt_60->Draw();
      q1_pt_20->Draw("sames");
      q1_pt_60->SetLineColor(kBlue);
      q1_pt_20->SetLineColor(kRed);
      q1_pt_60->SetTitle("bquark1 Momentum P_{T}");
      q1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q1_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg79 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg79->SetHeader("P_{T}");
      leg79->AddEntry(q1_pt_60, "m_{A}=60 GeV", "L");
      leg79->AddEntry(q1_pt_20, "m_{A}=20 GeV", "L");
      leg79->Draw();

      c40->cd(2);
      q1_eta_60->Draw();
      q1_eta_20->Draw("sames");
      q1_eta_60->SetLineColor(kBlue);
      q1_eta_20->SetLineColor(kRed);
      q1_eta_60->SetTitle("bquark1 Pseudorapidity #eta");
      q1_eta_60->GetXaxis()->SetTitle("#eta");
      q1_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg80 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg80->SetHeader("#eta");
      leg80->AddEntry(q1_eta_60, "m_{A}=60 GeV", "L");
      leg80->AddEntry(q1_eta_20, "m_{A}=20 GeV", "L");
      leg80->Draw();
      
      c40->cd(3);
      q1_phi_60->Draw();
      q1_phi_20->Draw("sames");
      q1_phi_60->SetLineColor(kBlue);
      q1_phi_20->SetLineColor(kRed);
      q1_phi_60->SetTitle("bquark1 Phi");
      q1_phi_60->GetXaxis()->SetTitle("Phi");
      q1_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg81 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg81->SetHeader("Phi");
      leg81->AddEntry(q1_phi_60, "m_{A}=60 GeV", "L");
      leg81->AddEntry(q1_phi_20, "m_{A}=20 GeV", "L");
      leg81->Draw();

      c40->cd(4);
      q1_m_60->Draw();
      q1_m_20->Draw("sames");
      q1_m_60->SetLineColor(kBlue);
      q1_m_20->SetLineColor(kRed);
      q1_m_60->SetTitle("bquark1 Mass");
      q1_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q1_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg82 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg82->SetHeader("#eta");
      leg82->AddEntry(q1_m_60, "m_{A}=60 GeV", "L");
      leg82->AddEntry(q1_m_20, "m_{A}=20 GeV", "L");
      leg82->Draw();

      c40->cd(5);
      q2_pt_60->Draw();
      q2_pt_20->Draw("sames");
      q2_pt_60->SetLineColor(kBlue);
      q2_pt_20->SetLineColor(kRed);
      q2_pt_60->SetTitle("bquark2 Momentum P_{T}");
      q2_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q2_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg83 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg83->SetHeader("P_{T}");
      leg83->AddEntry(q2_pt_60, "m_{A}=60 GeV", "L");
      leg83->AddEntry(q2_pt_20, "m_{A}=20 GeV", "L");
      leg83->Draw();

      c40->cd(6);
      q2_eta_60->Draw();
      q2_eta_20->Draw("sames");
      q2_eta_60->SetLineColor(kBlue);
      q2_eta_20->SetLineColor(kRed);
      q2_eta_60->SetTitle("bquark2 Pseudorapidity #eta");
      q2_eta_60->GetXaxis()->SetTitle("#eta");
      q2_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg84 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg84->SetHeader("#eta");
      leg84->AddEntry(q2_eta_60, "m_{A}=60 GeV", "L");
      leg84->AddEntry(q2_eta_20, "m_{A}=20 GeV", "L");
      leg84->Draw();
      
      c40->cd(7);
      q2_phi_60->Draw();
      q2_phi_20->Draw("sames");
      q2_phi_60->SetLineColor(kBlue);
      q2_phi_20->SetLineColor(kRed);
      q2_phi_60->SetTitle("bquark2 Phi");
      q2_phi_60->GetXaxis()->SetTitle("Phi");
      q2_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg85 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg85->SetHeader("Phi");
      leg85->AddEntry(q2_phi_60, "m_{A}=60 GeV", "L");
      leg85->AddEntry(q2_phi_20, "m_{A}=20 GeV", "L");
      leg85->Draw();

      c40->cd(8);
      q2_m_60->Draw();
      q2_m_20->Draw("sames");
      q2_m_60->SetLineColor(kBlue);
      q2_m_20->SetLineColor(kRed);
      q2_m_60->SetTitle("bquark2 Mass");
      q2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q2_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg86 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg86->SetHeader("#eta");
      leg86->AddEntry(q2_m_60, "m_{A}=60 GeV", "L");
      leg86->AddEntry(q2_m_20, "m_{A}=20 GeV", "L");
      leg86->Draw();

      //c40->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bq12_pt_eta_phi_m_60-20.pdf");



      TCanvas *c41 = new TCanvas("c41", "canvas41", 800, 400);
      c41->Divide(4,2);

      c41->cd(1);
      q3_pt_60->Draw();
      q3_pt_20->Draw("sames");
      q3_pt_60->SetLineColor(kBlue);
      q3_pt_20->SetLineColor(kRed);
      q3_pt_60->SetTitle("bquark3 Momentum P_{T}");
      q3_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q3_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg87 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg87->SetHeader("P_{T}");
      leg87->AddEntry(q3_pt_60, "m_{A}=60 GeV", "L");
      leg87->AddEntry(q3_pt_20, "m_{A}=20 GeV", "L");
      leg87->Draw();

      c41->cd(2);
      q3_eta_60->Draw();
      q3_eta_20->Draw("sames");
      q3_eta_60->SetLineColor(kBlue);
      q3_eta_20->SetLineColor(kRed);
      q3_eta_60->SetTitle("bquark3 Pseudorapidity #eta");
      q3_eta_60->GetXaxis()->SetTitle("#eta");
      q3_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg88 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg88->SetHeader("#eta");
      leg88->AddEntry(q3_eta_60, "m_{A}=60 GeV", "L");
      leg88->AddEntry(q3_eta_20, "m_{A}=20 GeV", "L");
      leg88->Draw();
      
      c41->cd(3);
      q3_phi_60->Draw();
      q3_phi_20->Draw("sames");
      q3_phi_60->SetLineColor(kBlue);
      q3_phi_20->SetLineColor(kRed);
      q3_phi_60->SetTitle("bquark3 Phi");
      q3_phi_60->GetXaxis()->SetTitle("Phi");
      q3_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg90 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg90->SetHeader("Phi");
      leg90->AddEntry(q3_phi_60, "m_{A}=60 GeV", "L");
      leg90->AddEntry(q3_phi_20, "m_{A}=20 GeV", "L");
      leg90->Draw();

      c41->cd(4);
      q3_m_60->Draw();
      q3_m_20->Draw("sames");
      q3_m_60->SetLineColor(kBlue);
      q3_m_20->SetLineColor(kRed);
      q3_m_60->SetTitle("bquark3 Mass");
      q3_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q3_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg91 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg91->SetHeader("#eta");
      leg91->AddEntry(q2_m_60, "m_{A}=60 GeV", "L");
      leg91->AddEntry(q2_m_20, "m_{A}=20 GeV", "L");
      leg91->Draw();

      c41->cd(5);
      q4_pt_60->Draw();
      q4_pt_20->Draw("sames");
      q4_pt_60->SetLineColor(kBlue);
      q4_pt_20->SetLineColor(kRed);
      q4_pt_60->SetTitle("bquark4 Momentum P_{T}");
      q4_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      q4_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg92 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg92->SetHeader("P_{T}");
      leg92->AddEntry(q4_pt_60, "m_{A}=60 GeV", "L");
      leg92->AddEntry(q4_pt_20, "m_{A}=20 GeV", "L");
      leg92->Draw();

      c41->cd(6);
      q4_eta_60->Draw();
      q4_eta_20->Draw("sames");
      q4_eta_60->SetLineColor(kBlue);
      q4_eta_20->SetLineColor(kRed);
      q4_eta_60->SetTitle("bquark4 Pseudorapidity #eta");
      q4_eta_60->GetXaxis()->SetTitle("#eta");
      q4_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg93 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg93->SetHeader("#eta");
      leg93->AddEntry(q4_eta_60, "m_{A}=60 GeV", "L");
      leg93->AddEntry(q4_eta_20, "m_{A}=20 GeV", "L");
      leg93->Draw();
      
      c41->cd(7);
      q4_phi_60->Draw();
      q4_phi_20->Draw("sames");
      q4_phi_60->SetLineColor(kBlue);
      q4_phi_20->SetLineColor(kRed);
      q4_phi_60->SetTitle("bquark4 Phi");
      q4_phi_60->GetXaxis()->SetTitle("Phi");
      q4_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg94 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg94->SetHeader("Phi");
      leg94->AddEntry(q4_phi_60, "m_{A}=60 GeV", "L");
      leg94->AddEntry(q4_phi_20, "m_{A}=20 GeV", "L");
      leg94->Draw();

      c41->cd(8);
      q4_m_60->Draw();
      q4_m_20->Draw("sames");
      q4_m_60->SetLineColor(kBlue);
      q4_m_20->SetLineColor(kRed);
      q4_m_60->SetTitle("bquark4 Mass");
      q4_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      q4_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg95 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg95->SetHeader("#eta");
      leg95->AddEntry(q4_m_60, "m_{A}=60 GeV", "L");
      leg95->AddEntry(q4_m_20, "m_{A}=20 GeV", "L");
      leg95->Draw();

      //c41->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bq34_pt_eta_phi_m_60-20.pdf");



      TCanvas *c42 = new TCanvas("c42", "canvas42", 800, 400);
      c42->Divide(4,2);
      
      c42->cd(1);
      outg1_pt_60->Draw();
      outg1_pt_20->Draw("sames");
      outg1_pt_60->SetLineColor(kBlue);
      outg1_pt_20->SetLineColor(kRed);
      outg1_pt_60->SetTitle("Outgoing1 Momentum P_{T}");
      outg1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg96 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg96->SetHeader("P_{T}");
      leg96->AddEntry(outg1_pt_60, "m_{A}=60 GeV", "L");
      leg96->AddEntry(outg1_pt_20, "m_{A}=20 GeV", "L");
      leg96->Draw();

      c42->cd(2);
      outg1_eta_60->Draw();
      outg1_eta_20->Draw("sames");
      outg1_eta_60->SetLineColor(kBlue);
      outg1_eta_20->SetLineColor(kRed);
      outg1_eta_60->SetTitle("Outgoing1 Pseudorapidity #eta");
      outg1_eta_60->GetXaxis()->SetTitle("#eta");
      outg1_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg97 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg97->SetHeader("#eta");
      leg97->AddEntry(outg1_eta_60, "m_{A}=60 GeV", "L");
      leg97->AddEntry(outg1_eta_20, "m_{A}=20 GeV", "L");
      leg97->Draw();
      
      c42->cd(3);
      outg1_phi_60->Draw();
      outg1_phi_20->Draw("sames");
      outg1_phi_60->SetLineColor(kBlue);
      outg1_phi_20->SetLineColor(kRed);
      outg1_phi_60->SetTitle("Outgoing1 Phi");
      outg1_phi_60->GetXaxis()->SetTitle("Phi");
      outg1_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg98 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg98->SetHeader("Phi");
      leg98->AddEntry(outg1_phi_60, "m_{A}=60 GeV", "L");
      leg98->AddEntry(outg1_phi_20, "m_{A}=20 GeV", "L");
      leg98->Draw();

      c42->cd(4);
      outg1_v2_m_60->Draw();
      outg1_v2_m_20->Draw("sames");
      outg1_v2_m_60->SetLineColor(kBlue);
      outg1_v2_m_20->SetLineColor(kRed);
      outg1_v2_m_60->SetTitle("Outgoing1 Mass");
      outg1_v2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg1_v2_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg99 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg99->SetHeader("#eta");
      leg99->AddEntry(outg1_v2_m_60, "m_{A}=60 GeV", "L");
      leg99->AddEntry(outg1_v2_m_20, "m_{A}=20 GeV", "L");
      leg99->Draw();

      c42->cd(5);
      outg2_pt_60->Draw();
      outg2_pt_20->Draw("sames");
      outg2_pt_60->SetLineColor(kBlue);
      outg2_pt_20->SetLineColor(kRed);
      outg2_pt_60->SetTitle("Outgoing2 Momentum P_{T}");
      outg2_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg2_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg100 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg100->SetHeader("P_{T}");
      leg100->AddEntry(outg2_pt_60, "m_{A}=60 GeV", "L");
      leg100->AddEntry(outg2_pt_20, "m_{A}=20 GeV", "L");
      leg100->Draw();

      c42->cd(6);
      outg2_eta_60->Draw();
      outg2_eta_20->Draw("sames");
      outg2_eta_60->SetLineColor(kBlue);
      outg2_eta_20->SetLineColor(kRed);
      outg2_eta_60->SetTitle("Outgoing2 Pseudorapidity #eta");
      outg2_eta_60->GetXaxis()->SetTitle("#eta");
      outg2_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg101 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg101->SetHeader("#eta");
      leg101->AddEntry(outg2_eta_60, "m_{A}=60 GeV", "L");
      leg101->AddEntry(outg2_eta_20, "m_{A}=20 GeV", "L");
      leg101->Draw();
      
      c42->cd(7);
      outg2_phi_60->Draw();
      outg2_phi_20->Draw("sames");
      outg2_phi_60->SetLineColor(kBlue);
      outg2_phi_20->SetLineColor(kRed);
      outg2_phi_60->SetTitle("Outgoing2 Phi");
      outg2_phi_60->GetXaxis()->SetTitle("Phi");
      outg2_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg102 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg102->SetHeader("Phi");
      leg102->AddEntry(outg2_phi_60, "m_{A}=60 GeV", "L");
      leg102->AddEntry(outg2_phi_20, "m_{A}=20 GeV", "L");
      leg102->Draw();

      c42->cd(8);
      outg2_v2_m_60->Draw();
      outg2_v2_m_20->Draw("sames");
      outg2_v2_m_60->SetLineColor(kBlue);
      outg2_v2_m_20->SetLineColor(kRed);
      outg2_v2_m_60->SetTitle("Outgoing2 Mass");
      outg2_v2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg2_v2_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg103 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg103->SetHeader("#eta");
      leg103->AddEntry(outg2_v2_m_60, "m_{A}=60 GeV", "L");
      leg103->AddEntry(outg2_v2_m_20, "m_{A}=20 GeV", "L");
      leg103->Draw();

      //c42->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bq12_pt_eta_phi_m_60-20.pdf");



      TCanvas *c43 = new TCanvas("c43", "canvas43", 800, 400);
      c43->Divide(4,2);
      
      c43->cd(1);
      outg1_pt_60->Draw();
      outg1_pt_20->Draw("sames");
      outg1_pt_60->SetLineColor(kBlue);
      outg1_pt_20->SetLineColor(kRed);
      outg1_pt_60->SetTitle("Outgoing1 Momentum P_{T}");
      outg1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg1_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg104 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg104->SetHeader("P_{T}");
      leg104->AddEntry(outg1_pt_60, "m_{A}=60 GeV", "L");
      leg104->AddEntry(outg1_pt_20, "m_{A}=20 GeV", "L");
      leg104->Draw();

      c43->cd(2);
      outg1_eta_60->Draw();
      outg1_eta_20->Draw("sames");
      outg1_eta_60->SetLineColor(kBlue);
      outg1_eta_20->SetLineColor(kRed);
      outg1_eta_60->SetTitle("Outgoing1 Pseudorapidity #eta");
      outg1_eta_60->GetXaxis()->SetTitle("#eta");
      outg1_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg105 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg105->SetHeader("#eta");
      leg105->AddEntry(outg1_eta_60, "m_{A}=60 GeV", "L");
      leg105->AddEntry(outg1_eta_20, "m_{A}=20 GeV", "L");
      leg105->Draw();
      
      c43->cd(3);
      outg1_phi_60->Draw();
      outg1_phi_20->Draw("sames");
      outg1_phi_60->SetLineColor(kBlue);
      outg1_phi_20->SetLineColor(kRed);
      outg1_phi_60->SetTitle("Outgoing1 Phi");
      outg1_phi_60->GetXaxis()->SetTitle("Phi");
      outg1_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg106 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg106->SetHeader("Phi");
      leg106->AddEntry(outg1_phi_60, "m_{A}=60 GeV", "L");
      leg106->AddEntry(outg1_phi_20, "m_{A}=20 GeV", "L");
      leg106->Draw();

      c43->cd(4);
      outg1_m_60->Draw();
      outg1_m_20->Draw("sames");
      outg1_m_60->SetLineColor(kBlue);
      outg1_m_20->SetLineColor(kRed);
      outg1_m_60->SetTitle("Outgoing1 Mass");
      outg1_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg1_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg107 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg107->SetHeader("#eta");
      leg107->AddEntry(outg1_m_60, "m_{A}=60 GeV", "L");
      leg107->AddEntry(outg1_m_20, "m_{A}=20 GeV", "L");
      leg107->Draw();

      c43->cd(5);
      outg2_pt_60->Draw();
      outg2_pt_20->Draw("sames");
      outg2_pt_60->SetLineColor(kBlue);
      outg2_pt_20->SetLineColor(kRed);
      outg2_pt_60->SetTitle("Outgoing2 Momentum P_{T}");
      outg2_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      outg2_pt_60->GetYaxis()->SetTitle("Events");
      TLegend *leg108 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg108->SetHeader("P_{T}");
      leg108->AddEntry(outg2_pt_60, "m_{A}=60 GeV", "L");
      leg108->AddEntry(outg2_pt_20, "m_{A}=20 GeV", "L");
      leg108->Draw();

      c43->cd(6);
      outg2_eta_60->Draw();
      outg2_eta_20->Draw("sames");
      outg2_eta_60->SetLineColor(kBlue);
      outg2_eta_20->SetLineColor(kRed);
      outg2_eta_60->SetTitle("Outgoing2 Pseudorapidity #eta");
      outg2_eta_60->GetXaxis()->SetTitle("#eta");
      outg2_eta_60->GetYaxis()->SetTitle("Events");
      TLegend *leg109 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg109->SetHeader("#eta");
      leg109->AddEntry(outg2_eta_60, "m_{A}=60 GeV", "L");
      leg109->AddEntry(outg2_eta_20, "m_{A}=20 GeV", "L");
      leg109->Draw();
      
      c43->cd(7);
      outg2_phi_60->Draw();
      outg2_phi_20->Draw("sames");
      outg2_phi_60->SetLineColor(kBlue);
      outg2_phi_20->SetLineColor(kRed);
      outg2_phi_60->SetTitle("Outgoing2 Phi");
      outg2_phi_60->GetXaxis()->SetTitle("Phi");
      outg2_phi_60->GetYaxis()->SetTitle("Events");
      TLegend *leg110 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg110->SetHeader("Phi");
      leg110->AddEntry(outg2_phi_60, "m_{A}=60 GeV", "L");
      leg110->AddEntry(outg2_phi_20, "m_{A}=20 GeV", "L");
      leg110->Draw();

      c43->cd(8);
      outg2_m_60->Draw();
      outg2_m_20->Draw("sames");
      outg2_m_60->SetLineColor(kBlue);
      outg2_m_20->SetLineColor(kRed);
      outg2_m_60->SetTitle("Outgoing2 Mass");
      outg2_m_60->GetXaxis()->SetTitle("Mass (GeV)");
      outg2_m_60->GetYaxis()->SetTitle("Events");
      TLegend *leg111 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg111->SetHeader("#eta");
      leg111->AddEntry(outg2_m_60, "m_{A}=60 GeV", "L");
      leg111->AddEntry(outg2_m_20, "m_{A}=20 GeV", "L");
      leg111->Draw();

      //c43->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bq12_pt_eta_phi_m_60-20.pdf");
    }


  if (eff)
    {
      h_met_trig_pt->Rebin(4);
      h_met_pt->Rebin(4); // 100 bins -> 25 bins (0, 400)
      trigeff_bion->Rebin(4); // 100 ->  25 bins (0, 400)

      

      TCanvas *c44 = new TCanvas ("c44","c44",800,400);
      c44->Divide(2,1);

      c44->cd(1);
      h_met_pt->Draw();
      h_met_pt->SetTitle("MET");
      h_met_pt->GetXaxis()->SetTitle("MET (GeV)");
      h_met_pt->GetYaxis()->SetTitle("Events");

      c44->cd(2);
      h_met_trig_pt->Draw();
      h_met_trig_pt->SetTitle("MET after Trigger");
      h_met_trig_pt->GetXaxis()->SetTitle("MET (GeV)");
      h_met_trig_pt->GetYaxis()->SetTitle("Events");
	
      //c44->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig.pdf");



      TCanvas *c45 = new TCanvas ("c45","c45",400,400);

      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *er = new TGraphAsymmErrors();
      er->BayesDivide(h_met_trig_pt, h_met_pt);
      er->GetXaxis()->SetTitle("MET (GeV)");
      er->GetYaxis()->SetTitle(" Efficiency ");
      er->SetTitle("Trigger Efficiency");
      er->SetMarkerStyle(kFullCircle);
      er->Draw("AP");
      /* for (int i = 0; i < er->GetN(); ++i) */
      /*   { */
      /*     Double_t x, y; */
      /*     er->GetPoint(i, x, y); */
      /*     Double_t yerr_low = er->GetErrorYlow(i); */
      /*     Double_t yerr_high = er->GetErrorYhigh(i); */
      /*     TString errorText = Form("#sigma_{y}=%.8f", (yerr_low + yerr_high)/2); */
      /*     TLatex *text = new TLatex(x, y + 0.02, errorText.Data()); */
      /*     text->SetTextAlign(22); */
      /*     text->SetTextSize(0.02); */
      /*     text->Draw("same"); */
      /*   } */

      //c45->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig_error.pdf");


	
      TCanvas *c46 = new TCanvas ("c46","c46",400,400);
      gPad->SetGridx();
      gPad->SetGridy();
      trigeff_er->Draw();
      trigeff_er->GetXaxis()->SetTitle("MET (GeV)");
      trigeff_er->GetYaxis()->SetTitle(" Efficiency ");
      trigeff_er->SetTitle("Trigger Efficiency");

      //c46->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig_error_myc.pdf");

      

      TCanvas *c47 = new TCanvas ("c47","c47",400,400);
      gPad->SetGridx();
      gPad->SetGridy();
      trigeff_bion->Draw("sames");
      trigeff_bion->GetXaxis()->SetTitle("MET (GeV)");
      trigeff_bion->GetYaxis()->SetTitle(" Efficiency ");
      trigeff_bion->SetTitle("trigger efficiency");

      //c47->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig_error_bion.pdf");
    }


  if (trig)
    {
      h_nvtx_trig170->Rebin(4);
      h_nvtx170->Rebin(4);
      h_nvtx_trig150->Rebin(4);
      h_nvtx150->Rebin(4);
      h_nvtx_trig120->Rebin(4);
      h_nvtx120->Rebin(4);
      h_nvtx_trig100->Rebin(4);
      h_nvtx100->Rebin(4);
      h_nvtx_trig80->Rebin(4);
      h_nvtx80->Rebin(4);
      /* h_met_trig_pt_20->Rebin(4); */
      /* h_met_trig_pt_20_40->Rebin(4); */
      /* h_met_trig_pt_40->Rebin(4); */
      /* h_met_pt_20->Rebin(4); */
      /* h_met_pt_20_40->Rebin(4); */
      /* h_met_pt_40->Rebin(4); */
      // Already filled with 25 bins, no need for more or less
      // [0] / (1 + exp(-[1] * (x - [2])))

      
      TCanvas *c48 = new TCanvas ("c48","c48",400,400);

      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff1 = new TGraphAsymmErrors();
      eff1->SetMaximum(1.1);
      eff1->BayesDivide(h_met_trig_pt_20, h_met_pt_20);
      eff1->GetXaxis()->SetTitle("MET (GeV)");
      eff1->GetYaxis()->SetTitle(" Efficiency ");
      eff1->SetTitle("Trigger Efficiency");
      eff1->SetMarkerStyle(20);
      eff1->SetMarkerColor(kBlue);
      eff1->Draw("AP");
      TGraphAsymmErrors *eff2 = new TGraphAsymmErrors();
      eff2->BayesDivide(h_met_trig_pt_20_40, h_met_pt_20_40);
      eff2->GetXaxis()->SetTitle("MET (GeV)");
      eff2->GetYaxis()->SetTitle(" Efficiency ");
      eff2->SetTitle("Trigger Efficiency");
      eff2->SetMarkerStyle(21);
      eff2->SetMarkerColor(kRed);
      eff2->Draw("P SAME");
      TGraphAsymmErrors *eff3 = new TGraphAsymmErrors();
      eff3->BayesDivide(h_met_trig_pt_40, h_met_pt_40);
      eff3->GetXaxis()->SetTitle("MET (GeV)");
      eff3->GetYaxis()->SetTitle(" Efficiency ");
      eff3->SetTitle("Trigger Efficiency");
      eff3->SetMarkerStyle(22);
      eff3->SetMarkerColor(kGreen);
      eff3->Draw("P SAME");
      TLegend *leg106 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg106->SetHeader("Efficiency");
      leg106->AddEntry(eff1, "nvtx <= 20", "P");
      leg106->AddEntry(eff2, "20 < nvtx < 40", "P");
      leg106->AddEntry(eff3, "nvtx >= 40", "P");
      leg106->Draw();

      //c48->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/eff_nvtx_20_40.pdf");



      TCanvas *c49 = new TCanvas ("c49","c49",1200,800);
      c49->Divide(3,2);

      c49->cd(1);
      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff4 = new TGraphAsymmErrors();
      eff4->SetMaximum(1.1);
      eff4->BayesDivide(h_nvtx_trig170, h_nvtx170);
      eff4->GetXaxis()->SetTitle("nvtx");
      eff4->GetYaxis()->SetTitle("Efficiency");
      eff4->SetTitle("Trigger Efficiency for MET >= 170 GeV");
      eff4->SetMarkerStyle(20);
      eff4->SetMarkerColor(kBlue);
      eff4->Draw("AP");

      c49->cd(2);
      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff5 = new TGraphAsymmErrors();
      eff5->SetMaximum(1.1);
      eff5->BayesDivide(h_nvtx_trig150, h_nvtx150);
      eff5->GetXaxis()->SetTitle("nvtx");
      eff5->GetYaxis()->SetTitle("Efficiency");
      eff5->SetTitle("Trigger Efficiency for MET >= 150 GeV");
      eff5->SetMarkerStyle(20);
      eff5->SetMarkerColor(kBlue);
      eff5->Draw("AP");

      c49->cd(3);
      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff6 = new TGraphAsymmErrors();
      eff6->SetMaximum(1.1);
      eff6->BayesDivide(h_nvtx_trig120, h_nvtx120);
      eff6->GetXaxis()->SetTitle("nvtx");
      eff6->GetYaxis()->SetTitle("Efficiency");
      eff6->SetTitle("Trigger Efficiency for MET >= 120 GeV");
      eff6->SetMarkerStyle(20);
      eff6->SetMarkerColor(kBlue);
      eff6->Draw("AP");

      c49->cd(4);
      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff7 = new TGraphAsymmErrors();
      eff7->SetMaximum(1.1);
      eff7->BayesDivide(h_nvtx_trig100, h_nvtx100);
      eff7->GetXaxis()->SetTitle("nvtx");
      eff7->GetYaxis()->SetTitle("Efficiency");
      eff7->SetTitle("Trigger Efficiency for MET >= 100 GeV");
      eff7->SetMarkerStyle(20);
      eff7->SetMarkerColor(kBlue);
      eff7->Draw("AP");

      c49->cd(5);
      gPad->SetGridx();
      gPad->SetGridy();
      TGraphAsymmErrors *eff8 = new TGraphAsymmErrors();
      eff8->SetMaximum(1.1);
      eff8->BayesDivide(h_nvtx_trig80, h_nvtx80);
      eff8->GetXaxis()->SetTitle("nvtx");
      eff8->GetYaxis()->SetTitle("Efficiency");
      eff8->SetTitle("Trigger Efficiency for MET >= 80 GeV");
      eff8->SetMarkerStyle(20);
      eff8->SetMarkerColor(kBlue);
      eff8->Draw("AP");
      
      //c49->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/eff_nvtx_170.pdf");
    }
}


