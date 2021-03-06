{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Sun Feb  7 16:33:53 2016) by ROOT version5.34/32
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",1,1,700,476);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(-367.0375,26.21403,3303.338,38.25009);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
   c1_n2->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,31.26983);
   gre->SetPointError(0,0,0.1176661);
   gre->SetPoint(1,2211,30.93735);
   gre->SetPointError(1,0,0.166626);
   gre->SetPoint(2,771,30.63303);
   gre->SetPointError(2,0,0.1417621);
   gre->SetPoint(3,51,30.68255);
   gre->SetPointError(3,0,0.1472087);
   gre->SetPoint(4,2674,31.96409);
   gre->SetPointError(4,0,0.1236644);
   
   TH1F *Graph_Graph96 = new TH1F("Graph_Graph96","4266 PCC DGConst area",100,0,2936.3);
   Graph_Graph96->SetMinimum(27.41764);
   Graph_Graph96->SetMaximum(37.04648);
   Graph_Graph96->SetDirectory(0);
   Graph_Graph96->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph96->SetLineColor(ci);
   Graph_Graph96->GetXaxis()->SetTitle("BCID");
   Graph_Graph96->GetXaxis()->SetLabelFont(42);
   Graph_Graph96->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph96->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph96->GetXaxis()->SetTitleFont(42);
   Graph_Graph96->GetYaxis()->SetTitle("area");
   Graph_Graph96->GetYaxis()->SetLabelFont(42);
   Graph_Graph96->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph96->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph96->GetYaxis()->SetTitleFont(42);
   Graph_Graph96->GetZaxis()->SetLabelFont(42);
   Graph_Graph96->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph96->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph96->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph96);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 2");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,28.88354);
   gre->SetPointError(0,0,0.1048388);
   gre->SetPoint(1,2211,28.77894);
   gre->SetPointError(1,0,0.1075421);
   gre->SetPoint(2,771,28.5452);
   gre->SetPointError(2,0,0.1015524);
   gre->SetPoint(3,51,28.38309);
   gre->SetPointError(3,0,0.1005206);
   gre->SetPoint(4,2674,29.7435);
   gre->SetPointError(4,0,0.1164891);
   
   TH1F *Graph_Graph97 = new TH1F("Graph_Graph97","4266 PCC DGConst area  Scan 2",100,0,2936.3);
   Graph_Graph97->SetMinimum(28.12483);
   Graph_Graph97->SetMaximum(30.01773);
   Graph_Graph97->SetDirectory(0);
   Graph_Graph97->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph97->SetLineColor(ci);
   Graph_Graph97->GetXaxis()->SetLabelFont(42);
   Graph_Graph97->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph97->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph97->GetXaxis()->SetTitleFont(42);
   Graph_Graph97->GetYaxis()->SetLabelFont(42);
   Graph_Graph97->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph97->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph97->GetYaxis()->SetTitleFont(42);
   Graph_Graph97->GetZaxis()->SetLabelFont(42);
   Graph_Graph97->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph97->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph97->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph97);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 3");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,28.83448);
   gre->SetPointError(0,0,0.1057667);
   gre->SetPoint(1,2211,28.70569);
   gre->SetPointError(1,0,0.0005891654);
   gre->SetPoint(2,771,28.22357);
   gre->SetPointError(2,0,0.09571554);
   gre->SetPoint(3,51,28.15763);
   gre->SetPointError(3,0,0.09992467);
   gre->SetPoint(4,2674,29.55198);
   gre->SetPointError(4,0,0.1110249);
   
   TH1F *Graph_Graph98 = new TH1F("Graph_Graph98","4266 PCC DGConst area  Scan 3",100,0,2936.3);
   Graph_Graph98->SetMinimum(27.89718);
   Graph_Graph98->SetMaximum(29.82354);
   Graph_Graph98->SetDirectory(0);
   Graph_Graph98->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph98->SetLineColor(ci);
   Graph_Graph98->GetXaxis()->SetLabelFont(42);
   Graph_Graph98->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph98->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph98->GetXaxis()->SetTitleFont(42);
   Graph_Graph98->GetYaxis()->SetLabelFont(42);
   Graph_Graph98->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph98->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph98->GetYaxis()->SetTitleFont(42);
   Graph_Graph98->GetZaxis()->SetLabelFont(42);
   Graph_Graph98->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph98->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph98->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph98);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 4");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,31.70236);
   gre->SetPointError(0,0,0.1192826);
   gre->SetPoint(1,2211,31.46482);
   gre->SetPointError(1,0,0.1150023);
   gre->SetPoint(2,771,31.11724);
   gre->SetPointError(2,0,0.1088663);
   gre->SetPoint(3,51,30.85766);
   gre->SetPointError(3,0,0.1063302);
   gre->SetPoint(4,2674,32.52116);
   gre->SetPointError(4,0,0.1284371);
   
   TH1F *Graph_Graph99 = new TH1F("Graph_Graph99","4266 PCC DGConst area  Scan 4",100,0,2936.3);
   Graph_Graph99->SetMinimum(30.56151);
   Graph_Graph99->SetMaximum(32.83942);
   Graph_Graph99->SetDirectory(0);
   Graph_Graph99->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph99->SetLineColor(ci);
   Graph_Graph99->GetXaxis()->SetLabelFont(42);
   Graph_Graph99->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph99->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph99->GetXaxis()->SetTitleFont(42);
   Graph_Graph99->GetYaxis()->SetLabelFont(42);
   Graph_Graph99->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph99->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph99->GetYaxis()->SetTitleFont(42);
   Graph_Graph99->GetZaxis()->SetLabelFont(42);
   Graph_Graph99->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph99->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph99->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph99);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 5");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,31.37033);
   gre->SetPointError(0,0,0.1674293);
   gre->SetPoint(1,2211,31.25076);
   gre->SetPointError(1,0,0.1543259);
   gre->SetPoint(2,771,30.74589);
   gre->SetPointError(2,0,0.1529994);
   gre->SetPoint(3,51,31.07207);
   gre->SetPointError(3,0,0.1582528);
   gre->SetPoint(4,2674,31.73379);
   gre->SetPointError(4,0,0.1208959);
   
   TH1F *Graph_Graph100 = new TH1F("Graph_Graph100","4266 PCC DGConst area  Scan 5",100,0,2936.3);
   Graph_Graph100->SetMinimum(30.46671);
   Graph_Graph100->SetMaximum(31.98087);
   Graph_Graph100->SetDirectory(0);
   Graph_Graph100->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph100->SetLineColor(ci);
   Graph_Graph100->GetXaxis()->SetLabelFont(42);
   Graph_Graph100->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph100->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph100->GetXaxis()->SetTitleFont(42);
   Graph_Graph100->GetYaxis()->SetLabelFont(42);
   Graph_Graph100->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph100->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph100->GetYaxis()->SetTitleFont(42);
   Graph_Graph100->GetZaxis()->SetLabelFont(42);
   Graph_Graph100->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph100->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph100->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph100);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 6");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,28.491);
   gre->SetPointError(0,0,0.109293);
   gre->SetPoint(1,2211,28.57869);
   gre->SetPointError(1,0,0.1205532);
   gre->SetPoint(2,771,28.04914);
   gre->SetPointError(2,0,0.100124);
   gre->SetPoint(3,51,27.97835);
   gre->SetPointError(3,0,0.1059905);
   gre->SetPoint(4,2674,29.37269);
   gre->SetPointError(4,0,3.8746e-05);
   
   TH1F *Graph_Graph101 = new TH1F("Graph_Graph101","4266 PCC DGConst area  Scan 6",100,0,2936.3);
   Graph_Graph101->SetMinimum(27.72232);
   Graph_Graph101->SetMaximum(29.52276);
   Graph_Graph101->SetDirectory(0);
   Graph_Graph101->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph101->SetLineColor(ci);
   Graph_Graph101->GetXaxis()->SetLabelFont(42);
   Graph_Graph101->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph101->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph101->GetXaxis()->SetTitleFont(42);
   Graph_Graph101->GetYaxis()->SetLabelFont(42);
   Graph_Graph101->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph101->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph101->GetYaxis()->SetTitleFont(42);
   Graph_Graph101->GetZaxis()->SetLabelFont(42);
   Graph_Graph101->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph101->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph101);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 7");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(26);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,32.16322);
   gre->SetPointError(0,0,0.1312944);
   gre->SetPoint(1,2211,31.78767);
   gre->SetPointError(1,0,0.1107373);
   gre->SetPoint(2,771,31.29637);
   gre->SetPointError(2,0,0.1551982);
   gre->SetPoint(3,51,31.49588);
   gre->SetPointError(3,0,0.1669911);
   gre->SetPoint(4,2674,32.97174);
   gre->SetPointError(4,0,0.1342224);
   
   TH1F *Graph_Graph102 = new TH1F("Graph_Graph102","4266 PCC DGConst area  Scan 7",100,0,2936.3);
   Graph_Graph102->SetMinimum(30.9447);
   Graph_Graph102->SetMaximum(33.30244);
   Graph_Graph102->SetDirectory(0);
   Graph_Graph102->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph102->SetLineColor(ci);
   Graph_Graph102->GetXaxis()->SetLabelFont(42);
   Graph_Graph102->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph102->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph102->GetXaxis()->SetTitleFont(42);
   Graph_Graph102->GetYaxis()->SetLabelFont(42);
   Graph_Graph102->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph102->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph102->GetYaxis()->SetTitleFont(42);
   Graph_Graph102->GetZaxis()->SetLabelFont(42);
   Graph_Graph102->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph102->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph102->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph102);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 8");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,28.67321);
   gre->SetPointError(0,0,0.0001547248);
   gre->SetPoint(1,2211,28.45883);
   gre->SetPointError(1,0,1.004689e-05);
   gre->SetPoint(2,771,28.05395);
   gre->SetPointError(2,0,0.004721921);
   gre->SetPoint(3,51,27.93939);
   gre->SetPointError(3,0,0.001223421);
   gre->SetPoint(4,2674,29.06939);
   gre->SetPointError(4,0,0.005090449);
   
   TH1F *Graph_Graph103 = new TH1F("Graph_Graph103","4266 PCC DGConst area  Scan 8",100,0,2936.3);
   Graph_Graph103->SetMinimum(27.82453);
   Graph_Graph103->SetMaximum(29.18811);
   Graph_Graph103->SetDirectory(0);
   Graph_Graph103->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph103->SetLineColor(ci);
   Graph_Graph103->GetXaxis()->SetLabelFont(42);
   Graph_Graph103->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph103->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph103->GetXaxis()->SetTitleFont(42);
   Graph_Graph103->GetYaxis()->SetLabelFont(42);
   Graph_Graph103->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph103->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph103->GetYaxis()->SetTitleFont(42);
   Graph_Graph103->GetZaxis()->SetLabelFont(42);
   Graph_Graph103->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph103->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph103);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 9");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,32.2132);
   gre->SetPointError(0,0,0.1317677);
   gre->SetPoint(1,2211,31.90743);
   gre->SetPointError(1,0,0.1399494);
   gre->SetPoint(2,771,31.91434);
   gre->SetPointError(2,0,0.1158492);
   gre->SetPoint(3,51,31.72686);
   gre->SetPointError(3,0,0.1480864);
   gre->SetPoint(4,2674,33.15687);
   gre->SetPointError(4,0,0.1550994);
   
   TH1F *Graph_Graph104 = new TH1F("Graph_Graph104","4266 PCC DGConst area  Scan 9",100,0,2936.3);
   Graph_Graph104->SetMinimum(31.40545);
   Graph_Graph104->SetMaximum(33.48529);
   Graph_Graph104->SetDirectory(0);
   Graph_Graph104->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph104->SetLineColor(ci);
   Graph_Graph104->GetXaxis()->SetLabelFont(42);
   Graph_Graph104->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph104->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph104->GetXaxis()->SetTitleFont(42);
   Graph_Graph104->GetYaxis()->SetLabelFont(42);
   Graph_Graph104->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph104->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph104->GetYaxis()->SetTitleFont(42);
   Graph_Graph104->GetZaxis()->SetLabelFont(42);
   Graph_Graph104->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph104->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph104->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph104);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst area  Scan 10");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(29);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,28.83778);
   gre->SetPointError(0,0,0.1200803);
   gre->SetPoint(1,2211,28.52146);
   gre->SetPointError(1,0,0.10016);
   gre->SetPoint(2,771,28.35742);
   gre->SetPointError(2,0,0.1017551);
   gre->SetPoint(3,51,28.20292);
   gre->SetPointError(3,0,0.1013556);
   gre->SetPoint(4,2674,29.48801);
   gre->SetPointError(4,0,0.1250283);
   
   TH1F *Graph_Graph105 = new TH1F("Graph_Graph105","4266 PCC DGConst area  Scan 10",100,0,2936.3);
   Graph_Graph105->SetMinimum(27.95042);
   Graph_Graph105->SetMaximum(29.76418);
   Graph_Graph105->SetDirectory(0);
   Graph_Graph105->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph105->SetLineColor(ci);
   Graph_Graph105->GetXaxis()->SetLabelFont(42);
   Graph_Graph105->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph105->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph105->GetXaxis()->SetTitleFont(42);
   Graph_Graph105->GetYaxis()->SetLabelFont(42);
   Graph_Graph105->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph105->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph105->GetYaxis()->SetTitleFont(42);
   Graph_Graph105->GetZaxis()->SetLabelFont(42);
   Graph_Graph105->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph105->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph105->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph105);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.65,0.8,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","4266 PCC DGConst area Scan  1","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 2","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 3","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 4","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 5","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 6","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 7","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 8","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 9","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst area  Scan 10","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2910057,0.94,0.7089943,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("4266 PCC DGConst area");
   pt->Draw();
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
