void xsecsPerBCID_PCC()
{
//=========Macro generated from canvas: can/
//=========  (Mon Nov 20 13:33:56 2017) by ROOT version5.99/05
   TCanvas *can = new TCanvas("can", "",1,1,800,576);
   can->SetHighLightColor(2);
   can->Range(-283.15,8.363512,2548.35,8.515775);
   can->SetFillColor(0);
   can->SetBorderMode(0);
   can->SetBorderSize(2);
   can->SetFrameBorderMode(0);
   can->SetFrameBorderMode(0);
   
   Double_t _fx1006[5] = {
   872,
   41,
   1783,
   2063,
   281};
   Double_t _fy1006[5] = {
   8.47725,
   8.430383,
   8.402403,
   8.423573,
   8.437352};
   Double_t _fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[5] = {
   0.01314751,
   0.01743749,
   0.01351399,
   0.01116021,
   0.01584579};
   TGraphErrors *gre = new TGraphErrors(5,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle(";BCID;#sigma_{Vis} (Barn)");
   gre->SetFillColor(1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00cc00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,0,2265.2);
   Graph_Graph1006->SetMinimum(8.378738);
   Graph_Graph1006->SetMaximum(8.500548);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("BCID");
   Graph_Graph1006->GetXaxis()->SetNdivisions(11);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("#sigma_{Vis} (Barn)");
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   TLatex *   tex = new TLatex(0.93,0.88,"2016  (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.88,"CMS #bf{#scale[0.75]{#it{Preliminary}}}");
tex->SetNDC();
   tex->SetLineWidth(2);
   tex->Draw();
   can->Modified();
   can->cd();
   can->SetSelected(can);
}
