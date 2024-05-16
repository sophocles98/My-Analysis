void plothistos()
{
  TFile *f = new TFile("myanalysis_60.root", "READ");
  TFile *f1 = new TFile("myanalysis_20.root", "READ");
  TFile *f3 = new TFile("myanalysis_40.root", "READ");
  TFile *f4 = new TFile("myanalysis_50.root", "READ");
  TFile *f2 = new TFile("myanalysis_trig.root", "READ");
  
  TH1F *jet_mult_60 = (TH1F*)f->Get("jet_mult");
  TH1F *jet_mult_20 = (TH1F*)f1->Get("jet_mult");
  
  TH1F *bjet_mult_step1_60 = (TH1F*)f->Get("bjet_mult_step1");
  TH1F *bjet_mult_step1_20 = (TH1F*)f1->Get("bjet_mult_step1");
  
  TH1F *jet_mult_step1_60 = (TH1F*)f->Get("jet_mult_step1");
  TH1F *jet_mult_step1_20 = (TH1F*)f1->Get("jet_mult_step1"); 

  TH1F *jet_pt_tot_60 = (TH1F*)f->Get("jet_pt_tot");
  TH1F *jet_eta_tot_60 = (TH1F*)f->Get("jet_eta_tot");
  TH1F *jet_phi_tot_60 = (TH1F*)f->Get("jet_phi_tot");
  TH1F *jet_pt_tot_20 = (TH1F*)f1->Get("jet_pt_tot");
  TH1F *jet_eta_tot_20 = (TH1F*)f1->Get("jet_eta_tot");
  TH1F *jet_phi_tot_20 = (TH1F*)f1->Get("jet_phi_tot");

  TH1F *outg1_pt_60 = (TH1F*)f->Get("outg1_pt");
  TH1F *outg1_eta_60 = (TH1F*)f->Get("outg1_eta");
  TH1F *outg1_phi_60 = (TH1F*)f->Get("outg1_phi");
  TH1F *outg1_m_60 = (TH1F*)f->Get("outg1_m");
  TH1F *outg1_v2_m_60 = (TH1F*)f->Get("outg1_v2_m");
  TH1F *outg1_pt_20 = (TH1F*)f1->Get("outg1_pt");
  TH1F *outg1_eta_20 = (TH1F*)f1->Get("outg1_eta");
  TH1F *outg1_phi_20= (TH1F*)f1->Get("outg1_phi");
  TH1F *outg1_m_20 = (TH1F*)f1->Get("outg1_m");
  TH1F *outg1_v2_m_20 = (TH1F*)f1->Get("outg1_v2_m");
  
  TH1F *outg2_pt_60 = (TH1F*)f->Get("outg2_pt");
  TH1F *outg2_eta_60 = (TH1F*)f->Get("outg2_eta");
  TH1F *outg2_phi_60 = (TH1F*)f->Get("outg2_phi");
  TH1F *outg2_m_60 = (TH1F*)f->Get("outg2_m");
  TH1F *outg2_v2_m_60 = (TH1F*)f->Get("outg2_v2_m");
  TH1F *outg2_pt_20 = (TH1F*)f1->Get("outg2_pt");
  TH1F *outg2_eta_20 = (TH1F*)f1->Get("outg2_eta");
  TH1F *outg2_phi_20 = (TH1F*)f1->Get("outg2_phi");
  TH1F *outg2_m_20 = (TH1F*)f1->Get("outg2_m");
  TH1F *outg2_v2_m_20 = (TH1F*)f1->Get("outg2_v2_m");
  
  TH1F *q1_pt_60 = (TH1F*)f->Get("q1_pt");
  TH1F *q1_eta_60 = (TH1F*)f->Get("q1_eta");
  TH1F *q1_phi_60 = (TH1F*)f->Get("q1_phi");
  TH1F *q1_m_60 = (TH1F*)f->Get("q1_m");
  TH1F *q1_pt_20 = (TH1F*)f1->Get("q1_pt");
  TH1F *q1_eta_20 = (TH1F*)f1->Get("q1_eta");
  TH1F *q1_phi_20 = (TH1F*)f1->Get("q1_phi");
  TH1F *q1_m_20 = (TH1F*)f1->Get("q1_m");
  
  TH1F *q2_pt_60 = (TH1F*)f->Get("q2_pt");
  TH1F *q2_eta_60 = (TH1F*)f->Get("q2_eta");
  TH1F *q2_phi_60 = (TH1F*)f->Get("q2_phi");
  TH1F *q2_m_60 = (TH1F*)f->Get("q2_m");
  TH1F *q2_pt_20 = (TH1F*)f1->Get("q2_pt");
  TH1F *q2_eta_20 = (TH1F*)f1->Get("q2_eta");
  TH1F *q2_phi_20 = (TH1F*)f1->Get("q2_phi");
  TH1F *q2_m_20 = (TH1F*)f1->Get("q2_m");

  TH1F *q3_pt_60 = (TH1F*)f->Get("q3_pt");
  TH1F *q3_eta_60 = (TH1F*)f->Get("q3_eta");
  TH1F *q3_phi_60 = (TH1F*)f->Get("q3_phi");
  TH1F *q3_m_60 = (TH1F*)f->Get("q3_m");
  TH1F *q3_pt_20 = (TH1F*)f1->Get("q3_pt");
  TH1F *q3_eta_20 = (TH1F*)f1->Get("q3_eta");
  TH1F *q3_phi_20 = (TH1F*)f1->Get("q3_phi");
  TH1F *q3_m_20 = (TH1F*)f1->Get("q3_m");

  TH1F *q4_pt_60 = (TH1F*)f->Get("q4_pt");
  TH1F *q4_eta_60 = (TH1F*)f->Get("q4_eta");
  TH1F *q4_phi_60 = (TH1F*)f->Get("q4_phi");
  TH1F *q4_m_60 = (TH1F*)f->Get("q4_m");
  TH1F *q4_pt_20 = (TH1F*)f1->Get("q4_pt");
  TH1F *q4_eta_20 = (TH1F*)f1->Get("q4_eta");
  TH1F *q4_phi_20 = (TH1F*)f1->Get("q4_phi");
  TH1F *q4_m_20 = (TH1F*)f1->Get("q4_m");
  
  TH1F *higgs_pt_60 = (TH1F*)f->Get("higg_pt");
  TH1F *higgs_eta_60 = (TH1F*)f->Get("higg_eta");
  TH1F *higgs_phi_60 = (TH1F*)f->Get("higg_phi");
  TH1F *higgs_m_60 = (TH1F*)f->Get("higg_m");
  TH1F *higgs_pt_20 = (TH1F*)f1->Get("higg_pt");
  TH1F *higgs_eta_20 = (TH1F*)f1->Get("higg_eta");
  TH1F *higgs_phi_20 = (TH1F*)f1->Get("higg_phi");
  TH1F *higgs_m_20 = (TH1F*)f1->Get("higg_m");

  TH1F *ab_pt_60 = (TH1F*)f->Get("ab_pt");
  TH1F *ab_eta_60 = (TH1F*)f->Get("ab_eta");
  TH1F *ab_phi_60 = (TH1F*)f->Get("ab_phi");
  TH1F *ab_m_60 = (TH1F*)f->Get("ab_m");
  TH1F *ab_pt_20 = (TH1F*)f1->Get("ab_pt");
  TH1F *ab_eta_20 = (TH1F*)f1->Get("ab_eta");
  TH1F *ab_phi_20 = (TH1F*)f1->Get("ab_phi");
  TH1F *ab_m_20 = (TH1F*)f1->Get("ab_m");

  TH1F *ab1_pt_60 = (TH1F*)f->Get("ab1_pt");
  TH1F *ab1_eta_60 = (TH1F*)f->Get("ab1_eta");
  TH1F *ab1_phi_60 = (TH1F*)f->Get("ab1_phi");
  TH1F *ab1_m_60 = (TH1F*)f->Get("ab1_m");
  TH1F *ab1_pt_20 = (TH1F*)f1->Get("ab1_pt");
  TH1F *ab1_eta_20 = (TH1F*)f1->Get("ab1_eta");
  TH1F *ab1_phi_20 = (TH1F*)f1->Get("ab1_phi");
  TH1F *ab1_m_20 = (TH1F*)f1->Get("ab1_m");

  TH1F *ab2_pt_60 = (TH1F*)f->Get("ab2_pt");
  TH1F *ab2_eta_60 = (TH1F*)f->Get("ab2_eta");
  TH1F *ab2_phi_60 = (TH1F*)f->Get("ab2_phi");
  TH1F *ab2_m_60 = (TH1F*)f->Get("ab2_m");
  TH1F *ab2_pt_20 = (TH1F*)f1->Get("ab2_pt");
  TH1F *ab2_eta_20 = (TH1F*)f1->Get("ab2_eta");
  TH1F *ab2_phi_20 = (TH1F*)f1->Get("ab2_phi");
  TH1F *ab2_m_20 = (TH1F*)f1->Get("ab2_m");

  TH1F *ab_eta_50 = (TH1F*)f4->Get("ab_eta");
  TH1F *ab_eta_40 = (TH1F*)f3->Get("ab_eta");
  TH1F *ab_pt_50 = (TH1F*)f4->Get("ab_pt");
  TH1F *ab_pt_40 = (TH1F*)f3->Get("ab_pt");
  
  TH1F *dRa12_60 = (TH1F*)f->Get("dRa12");
  TH1F *dRa12_20 = (TH1F*)f1->Get("dRa12");
  TH1F *dRa12_40 = (TH1F*)f3->Get("dRa12");
  TH1F *dRa12_50 = (TH1F*)f4->Get("dRa12");

  TH1F *gq_pt_60 = (TH1F*)f->Get("gq_pt");
  TH1F *gq_eta_60 = (TH1F*)f->Get("gq_eta");
  TH1F *gq_phi_60 = (TH1F*)f->Get("gq_phi");
  TH1F *gq_m_60 = (TH1F*)f->Get("gq_m");
  TH1F *gq_pt_20 = (TH1F*)f1->Get("gq_pt");
  TH1F *gq_eta_20 = (TH1F*)f1->Get("gq_eta");
  TH1F *gq_phi_20 = (TH1F*)f1->Get("gq_phi");
  TH1F *gq_m_20 = (TH1F*)f1->Get("gq_m");

  TH1F *h_dR_bbbar12_60 = (TH1F*)f->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar12_20 = (TH1F*)f1->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar12_40 = (TH1F*)f3->Get("h_dR_bbbar12");
  TH1F *h_dR_bbbar12_50 = (TH1F*)f4->Get("h_dR_bbbar12");

  TH1F *h_invmass_bbbar12_60 = (TH1F*)f->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_20 = (TH1F*)f1->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_40 = (TH1F*)f3->Get("h_invmass_bbbar12");
  TH1F *h_invmass_bbbar12_50 = (TH1F*)f4->Get("h_invmass_bbbar12");

  TH1F *h_dR_bbbar34_60 = (TH1F*)f->Get("h_dR_bbbar34");
  TH1F *h_dR_bbbar34_20 = (TH1F*)f1->Get("h_dR_bbbar34");

  TH1F *h_dR_outg_60 = (TH1F*)f->Get("h_dR_outg");
  TH1F *h_dR_outg_20 = (TH1F*)f1->Get("h_dR_outg");
  
  TH1F *h_deta_outg_60 = (TH1F*)f->Get("h_deta_outg");
  TH1F *h_deta_outg_20 = (TH1F*)f1->Get("h_deta_outg");
  
  TH1F *h_invmass_outg_60 = (TH1F*)f->Get("h_invmass_outg");
  TH1F *h_invmass_outg_20 = (TH1F*)f1->Get("h_invmass_outg");

  TH1F *h_invmass_aboson_60 = (TH1F*)f->Get("h_invmass_aboson");
  TH1F *h_invmass_aboson_20 = (TH1F*)f1->Get("h_invmass_aboson");
  TH1F *invmyc_60 = (TH1F*)f->Get("invmyc");
  TH1F *invmyc_20 = (TH1F*)f1->Get("invmyc");
  TH1F *invmycth_60 = (TH1F*)f->Get("invmycth");
  TH1F *invmycth_20 = (TH1F*)f1->Get("invmycth");

  TH1F *bjet1_pt_step4_60 = (TH1F*)f->Get("h_bjet1_pt_step4");
  TH1F *bjet1_eta_step4_60 = (TH1F*)f->Get("h_bjet1_eta_step4");
  TH1F *bjet1_phi_step4_60 = (TH1F*)f->Get("h_bjet1_phi_step4");
  TH1F *bjet1_pt_step4_20 = (TH1F*)f1->Get("h_bjet1_pt_step4");
  TH1F *bjet1_eta_step4_20 = (TH1F*)f1->Get("h_bjet1_eta_step4");
  TH1F *bjet1_phi_step4_20 = (TH1F*)f1->Get("h_bjet1_phi_step4");

  TH1F *bjet2_pt_step4_60 = (TH1F*)f->Get("h_bjet2_pt_step4");
  TH1F *bjet2_eta_step4_60 = (TH1F*)f->Get("h_bjet2_eta_step4");
  TH1F *bjet2_phi_step4_60 = (TH1F*)f->Get("h_bjet2_phi_step4");
  TH1F *bjet2_pt_step4_20 = (TH1F*)f1->Get("h_bjet2_pt_step4");
  TH1F *bjet2_eta_step4_20 = (TH1F*)f1->Get("h_bjet2_eta_step4");
  TH1F *bjet2_phi_step4_20 = (TH1F*)f1->Get("h_bjet2_phi_step4");

  TH1F *bjet3_pt_step4_60 = (TH1F*)f->Get("h_bjet3_pt_step4");
  TH1F *bjet3_eta_step4_60 = (TH1F*)f->Get("h_bjet3_eta_step4");
  TH1F *bjet3_phi_step4_60 = (TH1F*)f->Get("h_bjet3_phi_step4");
  TH1F *bjet3_pt_step4_20 = (TH1F*)f1->Get("h_bjet3_pt_step4");
  TH1F *bjet3_eta_step4_20 = (TH1F*)f1->Get("h_bjet3_eta_step4");
  TH1F *bjet3_phi_step4_20 = (TH1F*)f1->Get("h_bjet3_phi_step4");

  TH1F *bjet4_pt_step4_60 = (TH1F*)f->Get("h_bjet4_pt_step4");
  TH1F *bjet4_eta_step4_60 = (TH1F*)f->Get("h_bjet4_eta_step4");
  TH1F *bjet4_phi_step4_60 = (TH1F*)f->Get("h_bjet4_phi_step4");
  TH1F *bjet4_pt_step4_20 = (TH1F*)f1->Get("h_bjet4_pt_step4");
  TH1F *bjet4_eta_step4_20 = (TH1F*)f1->Get("h_bjet4_eta_step4");
  TH1F *bjet4_phi_step4_20 = (TH1F*)f1->Get("h_bjet4_phi_step4");

  TH1F *bjet1_pt_step3_60 = (TH1F*)f->Get("h_bjet1_pt_step3");
  TH1F *bjet1_eta_step3_60 = (TH1F*)f->Get("h_bjet1_eta_step3");
  TH1F *bjet1_phi_step3_60 = (TH1F*)f->Get("h_bjet1_phi_step3");
  TH1F *bjet1_pt_step3_20 = (TH1F*)f1->Get("h_bjet1_pt_step3");
  TH1F *bjet1_eta_step3_20 = (TH1F*)f1->Get("h_bjet1_eta_step3");
  TH1F *bjet1_phi_step3_20 = (TH1F*)f1->Get("h_bjet1_phi_step3");

  TH1F *bjet2_pt_step3_60 = (TH1F*)f->Get("h_bjet2_pt_step3");
  TH1F *bjet2_eta_step3_60 = (TH1F*)f->Get("h_bjet2_eta_step3");
  TH1F *bjet2_phi_step3_60 = (TH1F*)f->Get("h_bjet2_phi_step3");
  TH1F *bjet2_pt_step3_20 = (TH1F*)f1->Get("h_bjet2_pt_step3");
  TH1F *bjet2_eta_step3_20= (TH1F*)f1->Get("h_bjet2_eta_step3");
  TH1F *bjet2_phi_step3_20 = (TH1F*)f1->Get("h_bjet2_phi_step3");

  TH1F *bjet3_pt_step3_60 = (TH1F*)f->Get("h_bjet3_pt_step3");
  TH1F *bjet3_eta_step3_60 = (TH1F*)f->Get("h_bjet3_eta_step3");
  TH1F *bjet3_phi_step3_60 = (TH1F*)f->Get("h_bjet3_phi_step3");
  TH1F *bjet3_pt_step3_20 = (TH1F*)f1->Get("h_bjet3_pt_step3");
  TH1F *bjet3_eta_step3_20 = (TH1F*)f1->Get("h_bjet3_eta_step3");
  TH1F *bjet3_phi_step3_20 = (TH1F*)f1->Get("h_bjet3_phi_step3");

  TH1F *bjet4_pt_step3_60 = (TH1F*)f->Get("h_bjet4_pt_step3");
  TH1F *bjet4_eta_step3_60 = (TH1F*)f->Get("h_bjet4_eta_step3");
  TH1F *bjet4_phi_step3_60 = (TH1F*)f->Get("h_bjet4_phi_step3");
  TH1F *bjet4_pt_step3_20 = (TH1F*)f1->Get("h_bjet4_pt_step3");
  TH1F *bjet4_eta_step3_20 = (TH1F*)f1->Get("h_bjet4_eta_step3");
  TH1F *bjet4_phi_step3_20 = (TH1F*)f1->Get("h_bjet4_phi_step3");

  TH1F *jetoutg1_pt_step3_60 = (TH1F*)f->Get("h_jetoutg1_pt_step3");
  TH1F *jetoutg1_eta_step3_60 = (TH1F*)f->Get("h_jetoutg1_eta_step3");
  TH1F *jetoutg1_phi_step3_60 = (TH1F*)f->Get("h_jetoutg1_phi_step3");
  TH1F *jetoutg1_pt_step3_20 = (TH1F*)f1->Get("h_jetoutg1_pt_step3");
  TH1F *jetoutg1_eta_step3_20 = (TH1F*)f1->Get("h_jetoutg1_eta_step3");
  TH1F *jetoutg1_phi_step3_20 = (TH1F*)f1->Get("h_jetoutg1_phi_step3");

  TH1F *jetoutg2_pt_step3_60 = (TH1F*)f->Get("h_jetoutg2_pt_step3");
  TH1F *jetoutg2_eta_step3_60 = (TH1F*)f->Get("h_jetoutg2_eta_step3");
  TH1F *jetoutg2_phi_step3_60 = (TH1F*)f->Get("h_jetoutg2_phi_step3");
  TH1F *jetoutg2_pt_step3_20 = (TH1F*)f1->Get("h_jetoutg2_pt_step3");
  TH1F *jetoutg2_eta_step3_20 = (TH1F*)f1->Get("h_jetoutg2_eta_step3");
  TH1F *jetoutg2_phi_step3_20 = (TH1F*)f1->Get("h_jetoutg2_phi_step3");

  TH1F *jetoutg1_pt_step4_60 = (TH1F*)f->Get("h_jetoutg1_pt_step4");
  TH1F *jetoutg1_eta_step4_60 = (TH1F*)f->Get("h_jetoutg1_eta_step4");
  TH1F *jetoutg1_phi_step4_60 = (TH1F*)f->Get("h_jetoutg1_phi_step4");
  TH1F *jetoutg1_pt_step4_20 = (TH1F*)f1->Get("h_jetoutg1_pt_step4");
  TH1F *jetoutg1_eta_step4_20 = (TH1F*)f1->Get("h_jetoutg1_eta_step4");
  TH1F *jetoutg1_phi_step4_20 = (TH1F*)f1->Get("h_jetoutg1_phi_step4");

  TH1F *jetoutg2_pt_step4_60 = (TH1F*)f->Get("h_jetoutg2_pt_step4");
  TH1F *jetoutg2_eta_step4_60 = (TH1F*)f->Get("h_jetoutg2_eta_step4");
  TH1F *jetoutg2_phi_step4_60 = (TH1F*)f->Get("h_jetoutg2_phi_step4");
  TH1F *jetoutg2_pt_step4_20 = (TH1F*)f1->Get("h_jetoutg2_pt_step4");
  TH1F *jetoutg2_eta_step4_20 = (TH1F*)f1->Get("h_jetoutg2_eta_step4");
  TH1F *jetoutg2_phi_step4_20 = (TH1F*)f1->Get("h_jetoutg2_phi_step4");

  TH1F *dR_outg_step3_60 = (TH1F*)f->Get("h_dR_outg_step3");
  TH1F *dR_outg_step3_20 = (TH1F*)f1->Get("h_dR_outg_step3");
  
  TH1F *invmass_outg_step3_60 = (TH1F*)f->Get("h_invmass_outg_step3");
  TH1F *invmass_outg_step3_20 = (TH1F*)f1->Get("h_invmass_outg_step3");
  
  TH1F *deta_outg_step3_60 = (TH1F*)f->Get("h_deta_outg_step3");
  TH1F *deta_outg_step3_20 = (TH1F*)f1->Get("h_deta_outg_step3");
  
  TH1F *invmass_bjets_step3_60 = (TH1F*)f->Get("h_invmass_bjets_step3");
  TH1F *invmass_bjets_step3_20 = (TH1F*)f1->Get("h_invmass_bjets_step3");

  TH1F *dR_outg_step4_60 = (TH1F*)f->Get("h_dR_outg_step4");
  TH1F *dR_outg_step4_20 = (TH1F*)f1->Get("h_dR_outg_step4");
  
  TH1F *invmass_outg_step4_60 = (TH1F*)f->Get("h_invmass_outg_step4");
  TH1F *invmass_outg_step4_20 = (TH1F*)f1->Get("h_invmass_outg_step4");
  
  TH1F *deta_outg_step4_60 = (TH1F*)f->Get("h_deta_outg_step4");
  TH1F *deta_outg_step4_20 = (TH1F*)f1->Get("h_deta_outg_step4");
  
  TH1F *invmass_bjets_step4_60 = (TH1F*)f->Get("h_invmass_bjets_step4");
  TH1F *invmass_bjets_step4_20 = (TH1F*)f1->Get("h_invmass_bjets_step4");
  
  TH1F *h_ht_step4_60 = (TH1F*)f->Get("h_ht_step4");
  TH1F *h_ht_step4_20 = (TH1F*)f1->Get("h_ht_step4");
  
  TH1F *jetbtag1_step4_60 = (TH1F*)f->Get("jetbtag1_step4");
  TH1F *jetbtag1_step4_20 = (TH1F*)f1->Get("jetbtag1_step4");

  TH1F *h_met_pt = (TH1F*)f2->Get("h_met_pt");
  TH1F *h_met_trig_pt = (TH1F*)f2->Get("h_met_trig_pt");
  TH1F *trigeff = (TH1F*)f2->Get("trigeff");
  TH1F *trigeff_er = (TH1F*)f2->Get("trigeff_er");
  TH1F *trigeff_bion = (TH1F*)f2->Get("trigeff_bion");


  
  bool gev60(false);
  bool gev20(false);
  bool cuts(true);
  bool trig(false);
  bool dra(false);

  
  if (gev60)
    {
      TCanvas *c1 = new TCanvas("c1", "canvas1", 1200, 400);
      c1->Divide(3,1);
  
      c1->cd(1);
      jet_pt_tot_60->Draw();
  
      c1->cd(2);
      jet_eta_tot_60->Draw();
  
      c1->cd(3);
      jet_phi_tot_60->Draw();
  
      c1->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_pt_eta_phi_60.pdf");


  
      TCanvas *c2 = new TCanvas("c2", "canvas2", 1500, 800);
      c2->Divide(4,2);
  
      c2->cd(1);
      outg1_pt_60->Draw();
  
      c2->cd(2);
      outg1_eta_60->Draw();
  
      c2->cd(3);
      outg1_phi_60->Draw();

      c2->cd(4);
      outg1_m_60->Draw();

      c2->cd(5);
      outg2_pt_60->Draw();

      c2->cd(6);
      outg2_eta_60->Draw();

      c2->cd(7);
      outg2_phi_60->Draw();

      c2->cd(8);
      outg2_m_60->Draw();
  
      c2->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_et_phi_m_60.pdf");


  
      TCanvas *c3 = new TCanvas("c3", "canvas3", 1500, 800);
      c3->Divide(4,2);
  
      c3->cd(1);
      q1_pt_60->Draw();
  
      c3->cd(2);
      q1_eta_60->Draw();
  
      c3->cd(3);
      q1_phi_60->Draw();

      c3->cd(4);
      q1_m_60->GetXaxis()->SetNdivisions(4);
      q1_m_60->Draw();

      c3->cd(5);
      q2_pt_60->Draw();

      c3->cd(6);
      q2_eta_60->Draw();

      c3->cd(7);
      q2_phi_60->Draw();

      c3->cd(8);
      q2_m_60->GetXaxis()->SetNdivisions(4);
      q2_m_60->Draw();
  
      c3->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks12_pt_eta_phi_m_60.pdf");



      TCanvas *c4 = new TCanvas("c4", "canvas4", 1500, 800);
      c4->Divide(4,2);
  
      c4->cd(1);
      q3_pt_60->Draw();
  
      c4->cd(2);
      q3_eta_60->Draw();
  
      c4->cd(3);
      q3_phi_60->Draw();

      c4->cd(4);
      q3_m_60->GetXaxis()->SetNdivisions(4);
      q3_m_60->Draw();

      c4->cd(5);
      q4_pt_60->Draw();

      c4->cd(6);
      q4_eta_60->Draw();

      c4->cd(7);
      q4_phi_60->Draw();

      c4->cd(8);
      q4_m_60->GetXaxis()->SetNdivisions(4);
      q4_m_60->Draw();
  
      c4->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks34_pt_eta_phi_m_60.pdf");


  
      TCanvas *c5 = new TCanvas("c5", "canvas5", 900, 700);
      c5->Divide(2,2);
      c5->cd(1);
      higgs_pt_60->Draw();
  
      c5->cd(2);
      higgs_eta_60->Draw();

      c5->cd(3);
      higgs_phi_60->Draw();
  
      c5->cd(4);
      higgs_m_60->Draw();
  
      c5->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_phi_m_60.pdf");


  
      TCanvas *c6 = new TCanvas("c6", "canvas6", 900, 700);
      c6->Divide(2,2);
  
      c6->cd(1);
      ab_pt_60->Draw();
  
      c6->cd(2);
      ab_eta_60->Draw();
  
      c6->cd(3);
      ab_phi_60->Draw();

      c6->cd(4);
      ab_m_60->Draw();
  
      c6->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/aboson_pt_eta_phi_m_60.pdf");


  
      TCanvas *c7 = new TCanvas("c7", "canvas7", 700, 500);
  
      jet_mult_60->Draw();

      c7->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_mult_60.pdf");


  
      TCanvas *c8 = new TCanvas("c8", "canvas8", 900, 700);
      c8->Divide(2,2);
  
      c8->cd(1);
      gq_pt_60->Draw();
  
      c8->cd(2);
      gq_eta_60->Draw();
  
      c8->cd(3);
      gq_phi_60->Draw();

      c8->cd(4);
      gq_m_60->Draw();
  
      c8->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/gq_pt_eta_phi_m_60.pdf");


  
      TCanvas *c9 = new TCanvas("c9", "canvas9", 1500, 800);
      c9->Divide(4,2);
  
      c9->cd(1);
      outg1_pt_60->Draw();
  
      c9->cd(2);
      outg1_eta_60->Draw();
  
      c9->cd(3);
      outg1_phi_60->Draw();

      c9->cd(4);
      outg1_v2_m_60->Draw();

      c9->cd(5);
      outg2_pt_60->Draw();

      c9->cd(6);
      outg2_eta_60->Draw();

      c9->cd(7);
      outg2_phi_60->Draw();

      c9->cd(8);
      outg2_v2_m_60->Draw();
  
      c9->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_eta_phi_mcorrected_60.pdf");


  
      TCanvas *c10 = new TCanvas("c10", "canvas10", 900, 500);
      c10->Divide(2,1);
  
      c10->cd(1);
      h_dR_bbbar12_60->Draw();

      c10->cd(2);
      h_dR_bbbar34_60->Draw();

      c10->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/dR_quarks12_34_60.pdf");



      TCanvas *c11 = new TCanvas("c11", "canvas11", 1200, 400);
      c11->Divide(3,1);
  
      c11->cd(1);
      h_dR_outg_60->Draw();
  
      c11->cd(2);
      h_deta_outg_60->Draw();
   
      c11->cd(3);
      h_invmass_outg_60->Draw();
  
      c11->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgoing_dR_deta_invmass_60.pdf");
    }
  


  if (gev20)
    {
      TCanvas *c12 = new TCanvas("c12", "canvas12", 1200, 400);
      c12->Divide(3,1);
  
      c12->cd(1);
      jet_pt_tot_20->Draw();
  
      c12->cd(2);
      jet_eta_tot_20->Draw();
  
      c12->cd(3);
      jet_phi_tot_20->Draw();
  
      c12->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_pt_eta_phi_20.pdf");


  
      TCanvas *c13 = new TCanvas("c13", "canvas13", 1500, 800);
      c13->Divide(4,2);
  
      c13->cd(1);
      outg1_pt_20->Draw();
  
      c13->cd(2);
      outg1_eta_20->Draw();
  
      c13->cd(3);
      outg1_phi_20->Draw();

      c13->cd(4);
      outg1_m_20->Draw();

      c13->cd(5);
      outg2_pt_20->Draw();

      c13->cd(6);
      outg2_eta_20->Draw();

      c13->cd(7);
      outg2_phi_20->Draw();

      c13->cd(8);
      outg2_m_20->Draw();
  
      c13->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_et_phi_m_20.pdf");


  
      TCanvas *c14 = new TCanvas("c14", "canvas14", 1500, 800);
      c14->Divide(4,2);
  
      c14->cd(1);
      q1_pt_20->Draw();
  
      c14->cd(2);
      q1_eta_20->Draw();
  
      c14->cd(3);
      q1_phi_20->Draw();

      c14->cd(4);
      q1_m_20->GetXaxis()->SetNdivisions(4);
      q1_m_20->Draw();

      c14->cd(5);
      q2_pt_20->Draw();

      c14->cd(6);
      q2_eta_20->Draw();

      c14->cd(7);
      q2_phi_20->Draw();

      c14->cd(8);
      q2_m_20->GetXaxis()->SetNdivisions(4);
      q2_m_20->Draw();
  
      c14->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks12_pt_eta_phi_m_20.pdf");



      TCanvas *c15 = new TCanvas("c15", "canvas15", 1500, 800);
      c15->Divide(4,2);
  
      c15->cd(1);
      q3_pt_20->Draw();
  
      c15->cd(2);
      q3_eta_20->Draw();
  
      c15->cd(3);
      q3_phi_20->Draw();

      c15->cd(4);
      q3_m_20->GetXaxis()->SetNdivisions(4);
      q3_m_20->Draw();

      c15->cd(5);
      q4_pt_20->Draw();

      c15->cd(6);
      q4_eta_20->Draw();

      c15->cd(7);
      q4_phi_20->Draw();

      c15->cd(8);
      q4_m_20->GetXaxis()->SetNdivisions(4);
      q4_m_20->Draw();
  
      c15->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/quarks34_pt_eta_phi_m_20.pdf");


  
      TCanvas *c16 = new TCanvas("c16", "canvas16", 900, 700);
      c16->Divide(2,2);
      c16->cd(1);
      higgs_pt_20->Draw();
  
      c16->cd(2);
      higgs_eta_20->Draw();

      c16->cd(3);
      higgs_phi_20->Draw();
  
      c16->cd(4);
      higgs_m_20->Draw();
  
      c16->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_phi_m_20.pdf");


  
      TCanvas *c17 = new TCanvas("c17", "canvas17", 900, 700);
      c17->Divide(2,2);
  
      c17->cd(1);
      ab_pt_20->Draw();
  
      c17->cd(2);
      ab_eta_20->Draw();
  
      c17->cd(3);
      ab_phi_20->Draw();

      c17->cd(4);
      ab_m_20->Draw();
  
      c17->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/aboson_pt_eta_phi_m_20.pdf");


  
      TCanvas *c18 = new TCanvas("c18", "canvas18", 700, 500);
  
      jet_mult_20->Draw();

      c18->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/jet_mult_20.pdf");


  
      TCanvas *c19 = new TCanvas("c19", "canvas19", 900, 700);
      c19->Divide(2,2);
  
      c19->cd(1);
      gq_pt_20->Draw();
  
      c19->cd(2);
      gq_eta_20->Draw();
  
      c19->cd(3);
      gq_phi_20->Draw();

      c19->cd(4);
      gq_m_20->Draw();
  
      c19->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/gq_pt_eta_phi_m_60.pdf");


  
      TCanvas *c20 = new TCanvas("c20", "canvas20", 1500, 800);
      c20->Divide(4,2);
  
      c20->cd(1);
      outg1_pt_60->Draw();
  
      c20->cd(2);
      outg1_eta_60->Draw();
  
      c20->cd(3);
      outg1_phi_60->Draw();

      c20->cd(4);
      outg1_v2_m_60->Draw();

      c20->cd(5);
      outg2_pt_60->Draw();

      c20->cd(6);
      outg2_eta_60->Draw();

      c20->cd(7);
      outg2_phi_60->Draw();

      c20->cd(8);
      outg2_v2_m_60->Draw();
  
      c20->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outg12_pt_eta_phi_mcorrected_20.pdf");


  
      TCanvas *c21 = new TCanvas("c21", "canvas21", 900, 500);
      c21->Divide(2,1);
  
      c21->cd(1);
      h_dR_bbbar12_20->Draw();

      c21->cd(2);
      h_dR_bbbar34_20->Draw();

      c21->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/dR_quarks12_34_20.pdf");



      TCanvas *c22 = new TCanvas("c22", "canvas22", 1200, 400);
      c22->Divide(3,1);
  
      c22->cd(1);
      h_dR_outg_20->Draw();
  
      c22->cd(2);
      h_deta_outg_20->Draw();
   
      c22->cd(3);
      h_invmass_outg_20->Draw();
  
      c22->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgoing_dR_deta_invmass_20.pdf");
    }
  



  if (cuts)
    {
      TCanvas *c23 = new TCanvas("c23", "canvas23", 1200, 800);
      c23->Divide(3,2);

      c23->cd(1);
      bjet1_pt_step4_60->Draw();
      bjet1_pt_step4_20->Draw("sames");
      bjet1_pt_step4_60->SetLineColor(kBlue);
      bjet1_pt_step4_20->SetLineColor(kRed);
      bjet1_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg43 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg43->AddEntry(bjet1_pt_step4_60, "mA=60 GeV", "L");
      leg43->AddEntry(bjet1_pt_step4_20, "mA=20 GeV", "L");
      leg43->Draw();

      c23->cd(2);
      bjet1_eta_step4_60->Draw();
      bjet1_eta_step4_20->Draw("sames");
      bjet1_eta_step4_60->SetLineColor(kBlue);
      bjet1_eta_step4_20->SetLineColor(kRed);
      bjet1_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg44 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg44->AddEntry(bjet1_eta_step4_60, "mA=60 GeV", "L");
      leg44->AddEntry(bjet1_eta_step4_20, "mA=20 GeV", "L");
      leg44->Draw();
  
      c23->cd(3);
      bjet1_phi_step4_20->SetMinimum(40);
      bjet1_phi_step4_60->Rebin(2);
      bjet1_phi_step4_20->Rebin(2);
      bjet1_phi_step4_60->Draw();
      bjet1_phi_step4_20->Draw("sames");
      bjet1_phi_step4_60->SetLineColor(kBlue);
      bjet1_phi_step4_20->SetLineColor(kRed);
      bjet1_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg45 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg45->AddEntry(bjet1_phi_step4_60, "mA=60 GeV", "L");
      leg45->AddEntry(bjet1_phi_step4_20, "mA=20 GeV", "L");
      leg45->Draw();

      c23->cd(4);
      bjet2_pt_step4_60->Draw();
      bjet2_pt_step4_20->Draw("sames");
      bjet2_pt_step4_60->SetLineColor(kBlue);
      bjet2_pt_step4_20->SetLineColor(kRed);
      bjet2_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg46 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg46->AddEntry(bjet2_pt_step4_60, "mA=60 GeV", "L");
      leg46->AddEntry(bjet2_pt_step4_20, "mA=20 GeV", "L");
      leg46->Draw();

      c23->cd(5);
      bjet2_eta_step4_60->Draw();
      bjet2_eta_step4_20->Draw("sames");
      bjet2_eta_step4_60->SetLineColor(kBlue);
      bjet2_eta_step4_20->SetLineColor(kRed);
      bjet2_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg47 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg47->AddEntry(bjet2_eta_step4_60, "mA=60 GeV", "L");
      leg47->AddEntry(bjet2_eta_step4_20, "mA=20 GeV", "L");
      leg47->Draw();
  
      c23->cd(6);
      bjet2_phi_step4_20->SetMinimum(40);
      bjet2_phi_step4_60->Rebin(2);
      bjet2_phi_step4_20->Rebin(2);
      bjet2_phi_step4_60->Draw();
      bjet2_phi_step4_20->Draw("sames");
      bjet2_phi_step4_60->SetLineColor(kBlue);
      bjet2_phi_step4_20->SetLineColor(kRed);
      bjet2_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg48 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg48->AddEntry(bjet2_phi_step4_60, "mA=60 GeV", "L");
      leg48->AddEntry(bjet2_phi_step4_20, "mA=20 GeV", "L");
      leg48->Draw();
      
      c23->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets12_pt_eta_phi_step4_20-60.pdf");

      

      TCanvas *c24 = new TCanvas("c24", "canvas24", 1200, 800);
      c24->Divide(3,2);
      
      c24->cd(1);
      bjet3_pt_step4_60->Draw();
      bjet3_pt_step4_20->Draw("sames");
      bjet3_pt_step4_60->SetLineColor(kBlue);
      bjet3_pt_step4_20->SetLineColor(kRed);
      bjet3_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg49 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg49->AddEntry(bjet3_pt_step4_60, "mA=60 GeV", "L");
      leg49->AddEntry(bjet3_pt_step4_20, "mA=20 GeV", "L");
      leg49->Draw();

      c24->cd(2);
      bjet3_eta_step4_60->Draw();
      bjet3_eta_step4_20->Draw("sames");
      bjet3_eta_step4_60->SetLineColor(kBlue);
      bjet3_eta_step4_20->SetLineColor(kRed);
      bjet3_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg50 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg50->AddEntry(bjet3_eta_step4_60, "mA=60 GeV", "L");
      leg50->AddEntry(bjet3_eta_step4_20, "mA=20 GeV", "L");
      leg50->Draw();
  
      c24->cd(3);
      bjet3_phi_step4_20->SetMinimum(40);
      bjet3_phi_step4_60->Rebin(2);
      bjet3_phi_step4_20->Rebin(2);
      bjet3_phi_step4_60->Draw();
      bjet3_phi_step4_20->Draw("sames");
      bjet3_phi_step4_60->SetLineColor(kBlue);
      bjet3_phi_step4_20->SetLineColor(kRed);
      bjet3_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg51 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg51->AddEntry(bjet3_phi_step4_60, "mA=60 GeV", "L");
      leg51->AddEntry(bjet3_phi_step4_20, "mA=20 GeV", "L");
      leg51->Draw();

      c24->cd(4);
      bjet4_pt_step4_60->Draw();
      bjet4_pt_step4_20->Draw("sames");
      bjet4_pt_step4_60->SetLineColor(kBlue);
      bjet4_pt_step4_20->SetLineColor(kRed);
      bjet4_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg52 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg52->AddEntry(bjet4_pt_step4_60, "mA=60 GeV", "L");
      leg52->AddEntry(bjet4_pt_step4_20, "mA=20 GeV", "L");
      leg52->Draw();

      c24->cd(5);
      bjet4_eta_step4_60->Draw();
      bjet4_eta_step4_20->Draw("sames");
      bjet4_eta_step4_60->SetLineColor(kBlue);
      bjet4_eta_step4_20->SetLineColor(kRed);
      bjet4_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg53 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg53->AddEntry(bjet4_eta_step4_60, "mA=60 GeV", "L");
      leg53->AddEntry(bjet4_eta_step4_20, "mA=20 GeV", "L");
      leg53->Draw();
  
      c24->cd(6);
      bjet4_phi_step4_60->Rebin(2);
      bjet4_phi_step4_20->Rebin(2);
      bjet4_phi_step4_60->Draw();
      bjet4_phi_step4_20->Draw("sames");
      bjet4_phi_step4_60->SetLineColor(kBlue);
      bjet4_phi_step4_20->SetLineColor(kRed);
      bjet4_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg54 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg54->AddEntry(bjet4_phi_step4_60, "mA=60 GeV", "L");
      leg54->AddEntry(bjet4_phi_step4_20, "mA=20 GeV", "L");
      leg54->Draw();
  
      c24->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets34_pt_eta_phi_step4_20-60.pdf");

 

      TCanvas *c25 = new TCanvas("c25", "canvas25", 1200, 800);
      c25->Divide(3,2);

      c25->cd(1);
      bjet1_pt_step3_60->Draw();
      bjet1_pt_step3_20->Draw("sames");
      bjet1_pt_step3_60->SetLineColor(kBlue);
      bjet1_pt_step3_20->SetLineColor(kRed);
      bjet1_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg55 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg55->AddEntry(bjet1_pt_step3_60, "mA=60 GeV", "L");
      leg55->AddEntry(bjet1_pt_step3_20, "mA=20 GeV", "L");
      leg55->Draw();

      c25->cd(2);
      bjet1_eta_step3_60->Draw();
      bjet1_eta_step3_20->Draw("sames");
      bjet1_eta_step3_60->SetLineColor(kBlue);
      bjet1_eta_step3_20->SetLineColor(kRed);
      bjet1_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg56 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg56->AddEntry(bjet1_eta_step3_60, "mA=60 GeV", "L");
      leg56->AddEntry(bjet1_eta_step3_20, "mA=20 GeV", "L");
      leg56->Draw();

      c25->cd(3);
      bjet1_phi_step3_60->Draw();
      bjet1_phi_step3_20->Draw("sames");
      bjet1_phi_step3_60->SetLineColor(kBlue);
      bjet1_phi_step3_20->SetLineColor(kRed);
      bjet1_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg57 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg57->AddEntry(bjet1_phi_step3_60, "mA=60 GeV", "L");
      leg57->AddEntry(bjet1_phi_step3_20, "mA=20 GeV", "L");
      leg57->Draw();

      c25->cd(4);
      bjet2_pt_step3_60->Draw();
      bjet2_pt_step3_20->Draw("sames");
      bjet2_pt_step3_60->SetLineColor(kBlue);
      bjet2_pt_step3_20->SetLineColor(kRed);
      bjet2_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg58 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg58->AddEntry(bjet2_pt_step3_60, "mA=60 GeV", "L");
      leg58->AddEntry(bjet2_pt_step3_20, "mA=20 GeV", "L");
      leg58->Draw();

      c25->cd(5);
      bjet2_eta_step3_60->Draw();
      bjet2_eta_step3_20->Draw("sames");
      bjet2_eta_step3_60->SetLineColor(kBlue);
      bjet2_eta_step3_20->SetLineColor(kRed);
      bjet2_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg59 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg59->AddEntry(bjet2_eta_step3_60, "mA=60 GeV", "L");
      leg59->AddEntry(bjet2_eta_step3_20, "mA=20 GeV", "L");
      leg59->Draw();

      c25->cd(6);
      bjet2_phi_step3_60->Draw();
      bjet2_phi_step3_20->Draw("sames");
      bjet2_phi_step3_60->SetLineColor(kBlue);
      bjet2_phi_step3_20->SetLineColor(kRed);
      bjet2_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg60 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg60->AddEntry(bjet2_phi_step3_60, "mA=60 GeV", "L");
      leg60->AddEntry(bjet2_phi_step3_20, "mA=20 GeV", "L");
      leg60->Draw();

      c25->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets12_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c26 = new TCanvas("c26", "canvas26", 1200, 800);
      c26->Divide(3,2);

      c26->cd(1);
      bjet3_pt_step3_60->Draw();
      bjet3_pt_step3_20->Draw("sames");
      bjet3_pt_step3_60->SetLineColor(kBlue);
      bjet3_pt_step3_20->SetLineColor(kRed);
      bjet3_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg61 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg61->AddEntry(bjet3_pt_step3_60, "mA=60 GeV", "L");
      leg61->AddEntry(bjet3_pt_step3_20, "mA=20 GeV", "L");
      leg61->Draw();

      c26->cd(2);
      bjet3_eta_step3_60->Draw();
      bjet3_eta_step3_20->Draw("sames");
      bjet3_eta_step3_60->SetLineColor(kBlue);
      bjet3_eta_step3_20->SetLineColor(kRed);
      bjet3_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg62 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg62->AddEntry(bjet3_eta_step3_60, "mA=60 GeV", "L");
      leg62->AddEntry(bjet3_eta_step3_20, "mA=20 GeV", "L");
      leg62->Draw();

      c26->cd(3);
      bjet3_phi_step3_60->Draw();
      bjet3_phi_step3_20->Draw("sames");
      bjet3_phi_step3_60->SetLineColor(kBlue);
      bjet3_phi_step3_20->SetLineColor(kRed);
      bjet3_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg63 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg63->AddEntry(bjet3_phi_step3_60, "mA=60 GeV", "L");
      leg63->AddEntry(bjet3_phi_step3_20, "mA=20 GeV", "L");
      leg63->Draw();

      c26->cd(4);
      bjet4_pt_step3_60->Draw();
      bjet4_pt_step3_20->Draw("sames");
      bjet4_pt_step3_60->SetLineColor(kBlue);
      bjet4_pt_step3_20->SetLineColor(kRed);
      bjet4_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg64 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg64->AddEntry(bjet4_pt_step3_60, "mA=60 GeV", "L");
      leg64->AddEntry(bjet4_pt_step3_20, "mA=20 GeV", "L");
      leg64->Draw();

      c26->cd(5);
      bjet4_eta_step3_60->Draw();
      bjet4_eta_step3_20->Draw("sames");
      bjet4_eta_step3_60->SetLineColor(kBlue);
      bjet4_eta_step3_20->SetLineColor(kRed);
      bjet4_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg65 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg65->AddEntry(bjet4_eta_step3_60, "mA=60 GeV", "L");
      leg65->AddEntry(bjet4_eta_step3_20, "mA=20 GeV", "L");
      leg65->Draw();

      c26->cd(6);
      bjet4_phi_step3_60->Draw();
      bjet4_phi_step3_20->Draw("sames");
      bjet4_phi_step3_60->SetLineColor(kBlue);
      bjet4_phi_step3_20->SetLineColor(kRed);
      bjet4_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg66 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg66->AddEntry(bjet4_phi_step3_60, "mA=60 GeV", "L");
      leg66->AddEntry(bjet4_phi_step3_20, "mA=20 GeV", "L");
      leg66->Draw();
      
      c26->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets34_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c26a = new TCanvas("c26a", "canvas26a", 1600, 800);
      c26a->Divide(4,2);

      c26a->cd(1);
      bjet1_pt_step3_60->Draw();
      bjet1_pt_step3_20->Draw("sames");
      bjet1_pt_step3_60->SetLineColor(kBlue);
      bjet1_pt_step3_20->SetLineColor(kRed);
      bjet1_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg61a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg61a->AddEntry(bjet1_pt_step3_60, "mA=60 GeV", "L");
      leg61a->AddEntry(bjet1_pt_step3_20, "mA=20 GeV", "L");
      leg61a->Draw();

      c26a->cd(2);
      bjet2_pt_step3_60->Draw();
      bjet2_pt_step3_20->Draw("sames");
      bjet2_pt_step3_60->SetLineColor(kBlue);
      bjet2_pt_step3_20->SetLineColor(kRed);
      bjet2_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg62a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg62a->AddEntry(bjet2_pt_step3_60, "mA=60 GeV", "L");
      leg62a->AddEntry(bjet2_pt_step3_20, "mA=20 GeV", "L");
      leg62a->Draw();

      c26a->cd(3);
      bjet3_pt_step3_60->Draw();
      bjet3_pt_step3_20->Draw("sames");
      bjet3_pt_step3_60->SetLineColor(kBlue);
      bjet3_pt_step3_20->SetLineColor(kRed);
      bjet3_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg63a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg63a->AddEntry(bjet3_pt_step3_60, "mA=60 GeV", "L");
      leg63a->AddEntry(bjet3_pt_step3_20, "mA=20 GeV", "L");
      leg63a->Draw();

      c26a->cd(4);
      bjet4_pt_step3_60->Draw();
      bjet4_pt_step3_20->Draw("sames");
      bjet4_pt_step3_60->SetLineColor(kBlue);
      bjet4_pt_step3_20->SetLineColor(kRed);
      bjet4_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg64a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg64a->AddEntry(bjet4_pt_step3_60, "mA=60 GeV", "L");
      leg64a->AddEntry(bjet4_pt_step3_20, "mA=20 GeV", "L");
      leg64a->Draw();

      c26a->cd(5);
      bjet1_eta_step3_60->Draw();
      bjet1_eta_step3_20->Draw("sames");
      bjet1_eta_step3_60->SetLineColor(kBlue);
      bjet1_eta_step3_20->SetLineColor(kRed);
      bjet1_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg65a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg65a->AddEntry(bjet1_eta_step3_60, "mA=60 GeV", "L");
      leg65a->AddEntry(bjet1_eta_step3_20, "mA=20 GeV", "L");
      leg65a->Draw();

      c26a->cd(6);
      bjet2_eta_step3_60->Draw();
      bjet2_eta_step3_20->Draw("sames");
      bjet2_eta_step3_60->SetLineColor(kBlue);
      bjet2_eta_step3_20->SetLineColor(kRed);
      bjet2_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg66a = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg66a->AddEntry(bjet2_eta_step3_60, "mA=60 GeV", "L");
      leg66a->AddEntry(bjet2_eta_step3_20, "mA=20 GeV", "L");
      leg66a->Draw();

      c26a->cd(7);
      bjet3_eta_step3_60->Draw();
      bjet3_eta_step3_20->Draw("sames");
      bjet3_eta_step3_60->SetLineColor(kBlue);
      bjet3_eta_step3_20->SetLineColor(kRed);
      bjet3_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg66b = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg66b->AddEntry(bjet3_eta_step3_60, "mA=60 GeV", "L");
      leg66b->AddEntry(bjet3_eta_step3_20, "mA=20 GeV", "L");
      leg66b->Draw();

      c26a->cd(8);
      bjet4_eta_step3_60->Draw();
      bjet4_eta_step3_20->Draw("sames");
      bjet4_eta_step3_60->SetLineColor(kBlue);
      bjet4_eta_step3_20->SetLineColor(kRed);
      bjet4_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg66c = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg66c->AddEntry(bjet4_eta_step3_60, "mA=60 GeV", "L");
      leg66c->AddEntry(bjet4_eta_step3_20, "mA=20 GeV", "L");
      leg66c->Draw();
      
      c26a->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjets1234_step3_pt_eta_20-60.pdf");

      

      TCanvas *c27 = new TCanvas("c27", "canvas27", 1200, 800);
      c27->Divide(3,2);

      c27->cd(1);
      jetoutg1_pt_step4_60->Draw();
      jetoutg1_pt_step4_20->Draw("sames");
      jetoutg1_pt_step4_60->SetLineColor(kBlue);
      jetoutg1_pt_step4_20->SetLineColor(kRed);
      jetoutg1_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg67 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg67->AddEntry(jetoutg1_pt_step4_60, "mA=60 GeV", "L");
      leg67->AddEntry(jetoutg1_pt_step4_20, "mA=20 GeV", "L");
      leg67->Draw();

      c27->cd(2);
      jetoutg1_eta_step4_60->Draw();
      jetoutg1_eta_step4_20->Draw("sames");
      jetoutg1_eta_step4_60->SetLineColor(kBlue);
      jetoutg1_eta_step4_20->SetLineColor(kRed);
      jetoutg1_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg68 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg68->AddEntry(jetoutg1_eta_step4_60, "mA=60 GeV", "L");
      leg68->AddEntry(jetoutg1_eta_step4_20, "mA=20 GeV", "L");
      leg68->Draw();

      c27->cd(3);
      jetoutg1_phi_step4_20->SetMinimum(40);
      jetoutg1_phi_step4_60->Rebin(2);
      jetoutg1_phi_step4_20->Rebin(2);
      jetoutg1_phi_step4_60->Draw();
      jetoutg1_phi_step4_20->Draw("sames");
      jetoutg1_phi_step4_60->SetLineColor(kBlue);
      jetoutg1_phi_step4_20->SetLineColor(kRed);
      jetoutg1_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg69 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg69->AddEntry(jetoutg1_phi_step4_60, "mA=60 GeV", "L");
      leg69->AddEntry(jetoutg1_phi_step4_20, "mA=20 GeV", "L");
      leg69->Draw();

      c27->cd(4);
      jetoutg2_pt_step4_60->Draw();
      jetoutg2_pt_step4_20->Draw("sames");
      jetoutg2_pt_step4_60->SetLineColor(kBlue);
      jetoutg2_pt_step4_20->SetLineColor(kRed);
      jetoutg2_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg70 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg70->AddEntry(jetoutg2_pt_step4_60, "mA=60 GeV", "L");
      leg70->AddEntry(jetoutg2_pt_step4_20, "mA=20 GeV", "L");
      leg70->Draw();

      c27->cd(5);
      jetoutg2_eta_step4_60->Draw();
      jetoutg2_eta_step4_20->Draw("sames");
      jetoutg2_eta_step4_60->SetLineColor(kBlue);
      jetoutg2_eta_step4_20->SetLineColor(kRed);
      jetoutg2_eta_step4_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg71 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg71->AddEntry(jetoutg2_eta_step4_60, "mA=60 GeV", "L");
      leg71->AddEntry(jetoutg2_eta_step4_20, "mA=20 GeV", "L");
      leg71->Draw();

      c27->cd(6);
      jetoutg2_phi_step4_20->SetMinimum(40);
      jetoutg2_phi_step4_60->Rebin(2);
      jetoutg2_phi_step4_20->Rebin(2);
      jetoutg2_phi_step4_60->Draw();
      jetoutg2_phi_step4_20->Draw("sames");
      jetoutg2_phi_step4_60->SetLineColor(kBlue);
      jetoutg2_phi_step4_20->SetLineColor(kRed);
      jetoutg2_phi_step4_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg72 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg72->AddEntry(jetoutg2_phi_step4_60, "mA=60 GeV", "L");
      leg72->AddEntry(jetoutg2_phi_step4_20, "mA=20 GeV", "L");
      leg72->Draw();
      
      c27->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step4_pt_eta_phi_20-60.pdf");



      TCanvas *c28 = new TCanvas("c28", "canvas28", 1200, 800);
      c28->Divide(3,2);

      c28->cd(1);
      jetoutg1_pt_step3_60->Draw();
      jetoutg1_pt_step3_20->Draw("sames");
      jetoutg1_pt_step3_60->SetLineColor(kBlue);
      jetoutg1_pt_step3_20->SetLineColor(kRed);
      jetoutg1_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg73 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg73->AddEntry(jetoutg1_pt_step3_60, "mA=60 GeV", "L");
      leg73->AddEntry(jetoutg1_pt_step3_20, "mA=20 GeV", "L");
      leg73->Draw();

      c28->cd(2);
      jetoutg1_eta_step3_60->Draw();
      jetoutg1_eta_step3_20->Draw("sames");
      jetoutg1_eta_step3_60->SetLineColor(kBlue);
      jetoutg1_eta_step3_20->SetLineColor(kRed);
      jetoutg1_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg74 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg74->AddEntry(jetoutg1_eta_step3_60, "mA=60 GeV", "L");
      leg74->AddEntry(jetoutg1_eta_step3_20, "mA=20 GeV", "L");
      leg74->Draw();

      c28->cd(3);
      jetoutg1_phi_step3_60->Draw();
      jetoutg1_phi_step3_20->Draw("sames");
      jetoutg1_phi_step3_60->SetLineColor(kBlue);
      jetoutg1_phi_step3_20->SetLineColor(kRed);
      jetoutg1_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg75 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg75->AddEntry(jetoutg1_phi_step3_60, "mA=60 GeV", "L");
      leg75->AddEntry(jetoutg1_phi_step3_20, "mA=20 GeV", "L");
      leg75->Draw();

      c28->cd(4);
      jetoutg2_pt_step3_60->Draw();
      jetoutg2_pt_step3_20->Draw("sames");
      jetoutg2_pt_step3_60->SetLineColor(kBlue);
      jetoutg2_pt_step3_20->SetLineColor(kRed);
      jetoutg2_pt_step3_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg76 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg76->AddEntry(jetoutg2_pt_step3_60, "mA=60 GeV", "L");
      leg76->AddEntry(jetoutg2_pt_step3_20, "mA=20 GeV", "L");
      leg76->Draw();

      c28->cd(5);
      jetoutg2_eta_step3_60->Draw();
      jetoutg2_eta_step3_20->Draw("sames");
      jetoutg2_eta_step3_60->SetLineColor(kBlue);
      jetoutg2_eta_step3_20->SetLineColor(kRed);
      jetoutg2_eta_step3_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg77 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg77->AddEntry(jetoutg2_eta_step3_60, "mA=60 GeV", "L");
      leg77->AddEntry(jetoutg2_eta_step3_20, "mA=20 GeV", "L");
      leg77->Draw();

      c28->cd(6);
      jetoutg2_phi_step3_60->Draw();
      jetoutg2_phi_step3_20->Draw("sames");
      jetoutg2_phi_step3_60->SetLineColor(kBlue);
      jetoutg2_phi_step3_20->SetLineColor(kRed);
      jetoutg2_phi_step3_60->GetXaxis()->SetTitle("Phi");
      TLegend *leg78 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg78->AddEntry(jetoutg2_phi_step3_60, "mA=60 GeV", "L");
      leg78->AddEntry(jetoutg2_phi_step3_20, "mA=20 GeV", "L");
      leg78->Draw();
      
      c28->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step3_pt_eta_phi_20-60.pdf");



      TCanvas *c29 = new TCanvas("c29", "canvas29", 1200, 400);
      c29->Divide(3,1);
  
      c29->cd(1);
      dR_outg_step3_60->Draw();
      dR_outg_step3_20->Draw("sames");
      dR_outg_step3_60->SetLineColor(kBlue);
      dR_outg_step3_20->SetLineColor(kRed);
      dR_outg_step3_60->GetXaxis()->SetTitle("#Delta R_{jj}");
      TLegend *leg79 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg79->AddEntry(dR_outg_step3_60, "mA=60 GeV", "L");
      leg79->AddEntry(dR_outg_step3_20, "mA=20 GeV", "L");
      leg79->Draw();

      c29->cd(3);
      invmass_outg_step3_60->Draw();
      invmass_outg_step3_20->Draw("sames");
      invmass_outg_step3_60->SetLineColor(kBlue);
      invmass_outg_step3_20->SetLineColor(kRed);
      invmass_outg_step3_60->GetXaxis()->SetTitle("M_{jj}");
      TLegend *leg80 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg80->AddEntry(invmass_outg_step3_60, "mA=60 GeV", "L");
      leg80->AddEntry(invmass_outg_step3_20, "mA=20 GeV", "L");
      leg80->Draw();

      c29->cd(2);
      deta_outg_step3_60->Draw();
      deta_outg_step3_20->Draw("sames");
      deta_outg_step3_60->SetLineColor(kBlue);
      deta_outg_step3_20->SetLineColor(kRed);
      deta_outg_step3_60->GetXaxis()->SetTitle("|#Delta #eta_{jj}|");
      TLegend *leg81 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg81->AddEntry(deta_outg_step3_60, "mA=60 GeV", "L");
      leg81->AddEntry(deta_outg_step3_20, "mA=20 GeV", "L");
      leg81->Draw();
      
      c29->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step3_dr_deta_inv_20-60.pdf");



      TCanvas *c30 = new TCanvas("c30", "canvas30", 1200, 400);
      c30->Divide(3,1);
  
      c30->cd(1);
      dR_outg_step4_60->Draw();
      dR_outg_step4_20->Draw("sames");
      dR_outg_step4_60->SetLineColor(kBlue);
      dR_outg_step4_20->SetLineColor(kRed);
      dR_outg_step4_60->GetXaxis()->SetTitle("#Delta R_{jj}");
      TLegend *leg82 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg82->AddEntry(dR_outg_step4_60, "mA=60 GeV", "L");
      leg82->AddEntry(dR_outg_step4_20, "mA=20 GeV", "L");
      leg82->Draw();

      c30->cd(2);
      deta_outg_step4_60->Draw();
      deta_outg_step4_20->Draw("sames");
      deta_outg_step4_60->SetLineColor(kBlue);
      deta_outg_step4_20->SetLineColor(kRed);
      deta_outg_step4_60->GetXaxis()->SetTitle("|#Delta #eta_{jj}|");
      TLegend *leg84 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg84->AddEntry(deta_outg_step4_60, "mA=60 GeV", "L");
      leg84->AddEntry(deta_outg_step4_20, "mA=20 GeV", "L");
      leg84->Draw();

      c30->cd(3);
      invmass_outg_step4_60->Draw();
      invmass_outg_step4_20->Draw("sames");
      invmass_outg_step4_60->SetLineColor(kBlue);
      invmass_outg_step4_20->SetLineColor(kRed);
      invmass_outg_step4_60->GetXaxis()->SetTitle("M_{jj}");
      TLegend *leg83 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg83->AddEntry(invmass_outg_step4_60, "mA=60 GeV", "L");
      leg83->AddEntry(invmass_outg_step4_20, "mA=20 GeV", "L");
      leg83->Draw();
      
      c30->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/outgjet12_step4_dr_deta_inv_20-60.pdf");
   


      TCanvas *c31 = new TCanvas("c31", "canvas31", 800, 400);
      c31->Divide(2,1);

      c31->cd(2);
      bjet_mult_step1_60->SetMaximum(20000);
      bjet_mult_step1_20->SetMaximum(20000);
      bjet_mult_step1_60->Draw();
      bjet_mult_step1_20->Draw("sames");
      bjet_mult_step1_60->SetLineColor(kBlue);
      bjet_mult_step1_20->SetLineColor(kRed);
      bjet_mult_step1_60->GetXaxis()->SetTitle("bJet multiplicity");
      TLegend *leg85 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg85->AddEntry(bjet_mult_step1_60, "mA=60 GeV", "L");
      leg85->AddEntry(bjet_mult_step1_20, "mA=20 GeV", "L");
      leg85->Draw();

      c31->cd(1);
      jet_mult_step1_60->SetMaximum(16000);
      jet_mult_step1_20->SetMaximum(16000);
      jet_mult_step1_60->Draw();
      jet_mult_step1_20->Draw("sames");
      jet_mult_step1_60->SetLineColor(kBlue);
      jet_mult_step1_20->SetLineColor(kRed);
      jet_mult_step1_60->GetXaxis()->SetTitle("Jet multiplicity");
      TLegend *leg86 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg86->AddEntry(jet_mult_step1_60, "mA=60 GeV", "L");
      leg86->AddEntry(jet_mult_step1_20, "mA=20 GeV", "L");
      leg86->Draw();

      c31->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjet_mult_20-60.pdf");



      TCanvas *c32 = new TCanvas("c32", "canvas32", 800, 400);
      c32->Divide(2,1);

      c32->cd(1);
      invmass_bjets_step4_60->Draw();
      invmass_bjets_step4_20->Draw("sames");
      invmass_bjets_step4_60->SetLineColor(kBlue);
      invmass_bjets_step4_20->SetLineColor(kRed);
      invmass_bjets_step4_60->GetXaxis()->SetTitle("M_{bbbb}");
      TLegend *leg87 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg87->AddEntry(invmass_bjets_step4_60, "mA=60 GeV", "L");
      leg87->AddEntry(invmass_bjets_step4_20, "mA=20 GeV", "L");
      leg87->Draw();

      c32->cd(2);
      h_ht_step4_60->Draw();
      h_ht_step4_20->Draw("sames");
      h_ht_step4_60->SetLineColor(kBlue);
      h_ht_step4_20->SetLineColor(kRed);
      h_ht_step4_60->GetXaxis()->SetTitle("H_{T} (GeV)");
      TLegend *leg88 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg88->AddEntry(h_ht_step4_60, "mA=60 GeV", "L");
      leg88->AddEntry(h_ht_step4_20, "mA=20 GeV", "L");
      leg88->Draw();

      c32->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjet_inv_ht_step4_20-60.pdf");

      
  
      TCanvas *c33 = new TCanvas("c33", "canvas33", 800, 400);
      c33->Divide(2,1);
      
      c33->cd(1);
      higgs_pt_60->Draw();
      higgs_pt_20->Draw("sames");
      higgs_pt_60->SetLineColor(kBlue);
      higgs_pt_20->SetLineColor(kRed);
      higgs_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      gPad->SetLogy();
      TLegend *leg90 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg90->AddEntry(higgs_pt_60, "mA=60 GeV", "L");
      leg90->AddEntry(higgs_pt_20, "mA=20 GeV", "L");
      leg90->Draw();

      c33->cd(2);
      higgs_eta_60->Draw();
      higgs_eta_20->Draw("sames");
      higgs_eta_60->SetLineColor(kBlue);
      higgs_eta_20->SetLineColor(kRed);
      higgs_eta_60->GetXaxis()->SetTitle("#eta");
      gPad->SetLogy();
      TLegend *leg90a = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg90a->AddEntry(higgs_eta_60, "mA=60 GeV", "L");
      leg90a->AddEntry(higgs_eta_20, "mA=20 GeV", "L");
      leg90a->Draw();
  
      c33->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/higgs_pt_eta_logy_20-60_generator.pdf");
  


      TCanvas *c34= new TCanvas("c34", "canvas34", 800, 400);
      c34->Divide(2,1);

      c34->cd(1);
      bjet1_pt_step4_60->SetMaximum(320);
      bjet1_pt_step4_60->Draw();
      bjet2_pt_step4_60->Draw("sames");
      jetoutg1_pt_step4_60->Draw("sames");
      jetoutg2_pt_step4_60->Draw("sames");
      bjet1_pt_step4_60->SetLineColor(kGreen);
      bjet2_pt_step4_60->SetLineColor(kBlack);
      jetoutg1_pt_step4_60->SetLineColor(kBlue);
      jetoutg2_pt_step4_60->SetLineColor(kPink);
      bjet1_pt_step4_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg91 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg91->SetHeader("m_{A} = 60 GeV");
      leg91->AddEntry(bjet1_pt_step4_60, "b_1", "L");
      leg91->AddEntry(bjet2_pt_step4_60, "b_2", "L");
      leg91->AddEntry(jetoutg1_pt_step4_60, "q_1", "L");
      leg91->AddEntry(jetoutg2_pt_step4_60, "q_2", "L");
      leg91->Draw();

      c34->cd(2);
      bjet1_pt_step4_20->SetMaximum(200);
      bjet1_pt_step4_20->Draw();
      bjet2_pt_step4_20->Draw("sames");
      jetoutg1_pt_step4_20->Draw("sames");
      jetoutg2_pt_step4_20->Draw("sames");
      bjet1_pt_step4_20->SetLineColor(kGreen);
      bjet2_pt_step4_20->SetLineColor(kBlack);
      jetoutg1_pt_step4_20->SetLineColor(kBlue);
      jetoutg2_pt_step4_20->SetLineColor(kPink);
      bjet1_pt_step4_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg92 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg92->SetHeader("m_{A} = 20 GeV");
      leg92->AddEntry(bjet1_pt_step4_20, "b_1", "L");
      leg92->AddEntry(bjet2_pt_step4_20, "b_2", "L");
      leg92->AddEntry(jetoutg1_pt_step4_20, "q_1", "L");
      leg92->AddEntry(jetoutg2_pt_step4_20, "q_2", "L");
      leg92->Draw();

      c34->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/b12_q12_pt_detector_20-60.pdf");



      TCanvas *c35 = new TCanvas("c35", "canvas35", 400, 400);
      c35->SetLogy();
      jetbtag1_step4_60->Draw();
      jetbtag1_step4_20->Draw("sames");
      jetbtag1_step4_60->SetLineColor(kBlue);
      jetbtag1_step4_20->SetLineColor(kRed);
      jetbtag1_step4_60->GetXaxis()->SetTitle("Jet btag1");
      TLegend *leg89 = new TLegend(0.59, 0.5, 0.89, 0.65);
      leg89->AddEntry(jetbtag1_step4_60, "mA=60 GeV", "L");
      leg89->AddEntry(jetbtag1_step4_20, "mA=20 GeV", "L");
      leg89->Draw();

      c35->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/bjet_btag1_step4_20-60.pdf");



      
      TCanvas *c36 = new TCanvas("c36", "canvas36", 800, 800);
      c36->Divide(2,2);

      c36->cd(3);
      q1_pt_60->SetStats(kFALSE);
      q2_pt_60->SetStats(kFALSE);
      outg1_pt_60->SetStats(kFALSE);
      outg2_pt_60->SetStats(kFALSE);
      q1_pt_60->SetMaximum(3000);
      q1_pt_60->Draw();
      q2_pt_60->Draw("sames");
      outg1_pt_60->Draw("sames");
      outg2_pt_60->Draw("sames");
      q1_pt_60->SetLineColor(kGreen);
      q2_pt_60->SetLineColor(kBlack);
      outg1_pt_60->SetLineColor(kBlue);
      outg2_pt_60->SetLineColor(kPink);
      q1_pt_60->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg93 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg93->SetHeader("m_{A} = 60 GeV");
      leg93->AddEntry(q1_pt_60, "b_1", "L");
      leg93->AddEntry(q2_pt_60, "b_2", "L");
      leg93->AddEntry(outg1_pt_60, "q_1", "L");
      leg93->AddEntry(outg2_pt_60, "q_2", "L");
      leg93->Draw();

      c36->cd(4);
      q1_pt_20->SetStats(kFALSE);
      q2_pt_20->SetStats(kFALSE);
      outg1_pt_20->SetStats(kFALSE);
      outg2_pt_20->SetStats(kFALSE);
      q1_pt_20->SetMaximum(3000);
      q1_pt_20->Draw();
      q2_pt_20->Draw("sames");
      outg1_pt_20->Draw("sames");
      outg2_pt_20->Draw("sames");
      q1_pt_20->SetLineColor(kGreen);
      q2_pt_20->SetLineColor(kBlack);
      outg1_pt_20->SetLineColor(kBlue);
      outg2_pt_20->SetLineColor(kPink);
      q1_pt_20->GetXaxis()->SetTitle("P_{T} (GeV)");
      TLegend *leg94 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg94->SetHeader("m_{A} = 20 GeV");
      leg94->AddEntry(q1_pt_20, "b_1", "L");
      leg94->AddEntry(q2_pt_20, "b_2", "L");
      leg94->AddEntry(outg1_pt_20, "q_1", "L");
      leg94->AddEntry(outg2_pt_20, "q_2", "L");
      leg94->Draw();

      c36->cd(1);
      q1_eta_60->SetStats(kFALSE);
      q2_eta_60->SetStats(kFALSE);
      outg1_eta_60->SetStats(kFALSE);
      outg2_eta_60->SetStats(kFALSE);
      q1_eta_60->Draw();
      q2_eta_60->Draw("sames");
      outg1_eta_60->Draw("sames");
      outg2_eta_60->Draw("sames");
      q1_eta_60->SetLineColor(kGreen);
      q2_eta_60->SetLineColor(kBlack);
      outg1_eta_60->SetLineColor(kBlue);
      outg2_eta_60->SetLineColor(kPink);
      q1_eta_60->GetXaxis()->SetTitle("#eta");
      TLegend *leg95 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg95->SetHeader("m_{A} = 60 GeV");
      leg95->AddEntry(q1_eta_60, "b_1", "L");
      leg95->AddEntry(q2_eta_60, "b_2", "L");
      leg95->AddEntry(outg1_eta_60, "q_1", "L");
      leg95->AddEntry(outg2_eta_60, "q_2", "L");
      leg95->Draw();

      c36->cd(2);
      q1_eta_20->SetStats(kFALSE);
      q2_eta_20->SetStats(kFALSE);
      outg1_eta_20->SetStats(kFALSE);
      outg2_eta_20->SetStats(kFALSE);
      q1_eta_20->Draw();
      q2_eta_20->Draw("sames");
      outg1_eta_20->Draw("sames");
      outg2_eta_20->Draw("sames");
      q1_eta_20->SetLineColor(kGreen);
      q2_eta_20->SetLineColor(kBlack);
      outg1_eta_20->SetLineColor(kBlue);
      outg2_eta_20->SetLineColor(kPink);
      q1_eta_20->GetXaxis()->SetTitle("#eta");
      TLegend *leg96 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg96->SetHeader("m_{A} = 20 GeV");
      leg96->AddEntry(q1_eta_20, "b_1", "L");
      leg96->AddEntry(q2_eta_20, "b_2", "L");
      leg96->AddEntry(outg1_eta_20, "q_1", "L");
      leg96->AddEntry(outg2_eta_20, "q_2", "L");
      leg96->Draw();

      c36->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/b12_q12_pt_eta_generator_20-60.pdf");
    }


  if (trig)
    {
      //h_met_trig_pt->Rebin(4);
      //h_met_pt->Rebin(4);
      //trigeff_bion->Rebin(4);


        TCanvas *c37 = new TCanvas ("c37","c37",800,400);
	c37->Divide(2,1);

	c37->cd(1);
	h_met_pt->Draw();

	c37->cd(2);
	h_met_trig_pt->Draw();
	

	c37->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig.pdf");



	TCanvas *c38 = new TCanvas ("c38","c38",400,400);

	gPad->SetGridx();
	gPad->SetGridy();
	TGraphAsymmErrors *er = new TGraphAsymmErrors();
	er->BayesDivide(h_met_trig_pt,h_met_pt);
	er->GetXaxis()->SetTitle("MET (GeV)");
	er->GetYaxis()->SetTitle(" Efficiency ");
	er->SetTitle("trigger efficiency");
	er->SetMarkerStyle(kFullCircle);
	er->Draw("AP");
	for (int i = 0; i < er->GetN(); ++i) {
	  Double_t x, y;
	  er->GetPoint(i, x, y);
	  Double_t yerr_low = er->GetErrorYlow(i);
	  Double_t yerr_high = er->GetErrorYhigh(i);
	  TString errorText = Form("#sigma_{y}=%.8f", (yerr_low + yerr_high)/2);
	  TLatex *text = new TLatex(x, y + 0.02, errorText.Data());
	  text->SetTextAlign(22);
	  text->SetTextSize(0.02);
	  text->Draw("same");
	}

	c38->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig_error.pdf");


	
	TCanvas *c38a = new TCanvas ("c38a","c38a",400,400);
	gPad->SetGridx();
	gPad->SetGridy();
	trigeff_er->Draw("sames");
	trigeff_er->GetXaxis()->SetTitle("MET (GeV)");
	trigeff_er->GetYaxis()->SetTitle(" Efficiency ");
	trigeff_er->SetTitle("trigger efficiency");

	c38a->SaveAs("/Users/sophoclestsakiropoulos/Analysis/Plots/met_trig_error_myc.pdf");


	TCanvas *c38b = new TCanvas ("c38b","c38b",400,400);
	gPad->SetGridx();
	gPad->SetGridy();
	trigeff_bion->Draw("sames");
	trigeff_bion->GetXaxis()->SetTitle("MET (GeV)");
	trigeff_bion->GetYaxis()->SetTitle(" Efficiency ");
	trigeff_bion->SetTitle("trigger efficiency");
	

    }

  
  if (dra)
    {
      
      TCanvas *c39 = new TCanvas ("c39","c39",600,600);

      h_invmass_aboson_60->Draw();
      h_invmass_aboson_20->Draw("sames");
      h_invmass_aboson_60->SetLineColor(kBlue);
      h_invmass_aboson_20->SetLineColor(kRed);
      TLegend *leg97 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg97->SetHeader("Invariant Mass");
      leg97->AddEntry(h_invmass_aboson_60, "60 GeV", "L");
      leg97->AddEntry(h_invmass_aboson_20, "20 GeV", "L");
      leg97->Draw();


      
      TCanvas *c40 = new TCanvas ("c40","c40",600,600);

      dRa12_60->Draw();
      dRa12_20->Draw("sames");
      dRa12_20->SetLineColor(kRed);
      dRa12_60->SetLineColor(kBlue);
      TLegend *leg98 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg98->SetHeader("Angular Distance");
      leg98->AddEntry(dRa12_60, "60 GeV", "L");
      leg98->AddEntry(dRa12_20, "20 GeV", "L");
      leg98->Draw();

      
  
      TCanvas *c41 = new TCanvas ("c41","c41",1500,500);
      c41->Divide(3,1);

      c41->cd(1);
      ab1_pt_60->Draw();
      ab1_pt_20->Draw("sames");
      ab1_pt_20->SetLineColor(kRed);
      ab1_pt_60->SetLineColor(kBlue);
      TLegend *leg100 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg100->SetHeader("A1 P_{t}");
      leg100->AddEntry(ab1_pt_60, "60 GeV", "L");
      leg100->AddEntry(ab1_pt_20, "20 GeV", "L");
      leg100->Draw();

      c41->cd(2);
      ab2_pt_60->Draw();
      ab2_pt_20->Draw("sames");
      ab2_pt_20->SetLineColor(kRed);
      ab2_pt_60->SetLineColor(kBlue);
      TLegend *leg101 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg101->SetHeader("A2 P_{t}");
      leg101->AddEntry(ab2_pt_60, "60 GeV", "L");
      leg101->AddEntry(ab2_pt_20, "20 GeV", "L");
      leg101->Draw();

      c41->cd(3);
      ab_pt_60->Draw();
      ab_pt_20->Draw("sames");
      ab_pt_20->SetLineColor(kRed);
      ab_pt_60->SetLineColor(kBlue);
      TLegend *leg102 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg102->SetHeader("A P_{t}");
      leg102->AddEntry(ab_pt_60, "60 GeV", "L");
      leg102->AddEntry(ab_pt_20, "20 GeV", "L");
      leg102->Draw();


      
      TCanvas *c42 = new TCanvas ("c42","c42",600,600); 
      
      invmyc_60->Draw();
      invmyc_20->Draw("sames");
      invmyc_60->SetLineColor(kBlue);
      invmyc_20->SetLineColor(kRed);
      TLegend *leg103 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg103->SetHeader("Invariant Mass");
      leg103->AddEntry(invmyc_60, "60 GeV", "L");
      leg103->AddEntry(invmyc_20, "20 GeV", "L");
      leg103->Draw();


      
      TCanvas *c43 = new TCanvas ("c43","c43",600,600); 
      
      invmycth_60->Draw();
      invmycth_20->Draw("sames");
      invmycth_60->SetLineColor(kBlue);
      invmycth_20->SetLineColor(kRed);
      TLegend *leg104 = new TLegend(0.55, 0.5, 0.83, 0.7);
      leg104->SetHeader("A P_{t}");
      leg104->AddEntry(invmycth_60, "60 GeV", "L");
      leg104->AddEntry(invmycth_20, "20 GeV", "L");
      leg104->Draw();

    }
}
