void DrawGraphs()
{
  counter++;
  eventsAndCrysNtuple->GetEntry(counter);

  cout<<"moving to the event: "<< lv1a <<endl;

  the_event = IntToString(lv1a);
  can.Clear();
  can.Divide(width,height);
  can.Update();
  SMGeom.getWindow(windCry, ic, mX, nY);
  for(int k=0 ; k<width*height ; k++){
    string xtal = IntToString(windCry[k]);
    string name = "Graph_ev"+IntToString(lv1a)+"_ic";
    name+=xtal;
    name+="_FED";
    name+=IntToString(fed);

    TGraph* gra = (TGraph*) f.Get(name.c_str());
  int canvas_num = width*height - (k%height)*width - width + 1 + k/height;
  //cout<<name<<endl;
  can.cd(canvas_num);
  if( gra != NULL ){
    gra->GetXaxis()->SetTitle("sample");
    gra->GetYaxis()->SetTitle("adc");
    gra->Draw("A*");
    can.Update();
  }
  //else{gPad->Clear();}
}
can.cd((width*height+1)/2);
can.Update();
//return the_event;

}
