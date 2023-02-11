//
//
//void myprint(String x) {
//  Serial.println(x);
//}
//
////t8s[0],t8s[1],t8s[2],t8s[3],t8s[4],t8s[5],t8s[6],t8s[7],
////R_X > ,R_Y V ,L_Y ^ ,L_X > ,L_roll,R_butt,L_swch,R_swch
//
//int t8s[8]={500};
//int t8ss[8];
//int t8sss[8];
//int t8ssss[8];
//int max_del = 500;
//float sampling = 20;
//
//int get_t8s() {
//  if (sbus.failsafeActive()) {
////    myprint("t8s_fail");
//    return;
//  }
//  int temp = sbus.getChannel(9);
//  if (temp != 1547 || sbus.signalLossActive()) {
////    myprint("break");
//    return;
//  }
//  temp = sbus.getChannel(1);
//  if (temp > 1000 && abs(temp-t8s[0])<max_del ) t8s[0] = temp;
//  temp = sbus.getChannel(2);
//  if (temp > 1000 && abs(temp-t8s[1])<max_del ) t8s[1] = temp;
//  temp = sbus.getChannel(3);
//  if (temp > 1000 && abs(temp-t8s[2])<max_del ) t8s[2] = temp;
//  temp = sbus.getChannel(4);
//  if (temp > 1000 && abs(temp-t8s[3])<max_del ) t8s[3] = temp;
//  temp = sbus.getChannel(5);
//  if (temp == 1005 || temp == 1505 || temp == 2005) t8s[7] = temp;
//  temp = sbus.getChannel(6);
//  if (temp == 1005 || temp == 2005) t8s[5] = temp;
//  temp = sbus.getChannel(7);
//  if (temp == 1005 || temp == 1505 || temp == 2005) t8s[6] = temp;
//  temp = sbus.getChannel(8);
//  if (temp > 1000) t8s[4] = temp;
//
//  for (int i = 0; i < 8; i++) {
//    Serial.print(t8s[i]);
//    Serial.print(",");
//  }
//  Serial.println();
//
//
//  t8s[0] = int((float(t8s[0])-sampling/2-1005)/sampling)*sampling+(sampling/2+1013);
//  t8s[1] = int((float(t8s[1])-sampling/2-1005)/sampling)*sampling+(sampling/2+1013);
//  t8s[2] = int((float(t8s[2])-sampling/2-1005)/sampling)*sampling+(sampling/2+1013);
//  t8s[3] = int((float(t8s[3])-sampling/2-1005)/sampling)*sampling+(sampling/2+1013);
//  t8s[4] = int((float(t8s[4])-sampling/2-1005)/sampling)*sampling+(sampling/2+1013);  
//  
////  if( abs(t8s[0]-t8ssss[0]) < abs(t8s[0]-t8sss[0]) ) t8sss[0]=t8ssss[0];
////  if( abs(t8s[1]-t8ssss[1]) < abs(t8s[1]-t8sss[1]) ) t8sss[1]=t8ssss[1];
////  if( abs(t8s[2]-t8ssss[2]) < abs(t8s[2]-t8sss[2]) ) t8sss[2]=t8ssss[2];
////  if( abs(t8s[3]-t8ssss[3]) < abs(t8s[3]-t8sss[3]) ) t8sss[3]=t8ssss[3];
////  if( abs(t8s[4]-t8ssss[4]) < abs(t8s[4]-t8sss[4]) ) t8sss[4]=t8ssss[4];
//  
//  if( abs(t8s[0]-t8sss[0]) < abs(t8s[0]-t8ss[0]) ) t8ss[0]=t8sss[0];
//  if( abs(t8s[1]-t8sss[1]) < abs(t8s[1]-t8ss[1]) ) t8ss[1]=t8sss[1];
//  if( abs(t8s[2]-t8sss[2]) < abs(t8s[2]-t8ss[2]) ) t8ss[2]=t8sss[2];
//  if( abs(t8s[3]-t8sss[3]) < abs(t8s[3]-t8ss[3]) ) t8ss[3]=t8sss[3];
//  if( abs(t8s[4]-t8sss[4]) < abs(t8s[4]-t8ss[4]) ) t8ss[4]=t8sss[4];
//
//
//
//  mystick[0]=int(map(t8ss[0],1000,2000,0,sampling));
//  mystick[1]=int(map(t8ss[1],2000,1000,0,sampling));
//  mystick[2]=int(map(t8ss[2],1000,2000,0,sampling));
//  mystick[3]=int(map(t8ss[3],1000,2000,0,sampling));
//  mystick[4]=int(map(t8ss[4],1025,2000,0,sampling));
//  mystick[5]=int(map(t8ss[5],2005,1005,0,sampling));
//  mystick[6]=int(map(t8ss[6],1005,2005,0,sampling));
//  mystick[7]=int(map(t8ss[7],1005,2005,0,sampling));
//
//  mystick[0]=map(mystick[0],0,sampling,0,1000);
//  mystick[1]=map(mystick[1],0,sampling,0,1000);
//  mystick[2]=map(mystick[2],0,sampling,0,1000);
//  mystick[3]=map(mystick[3],0,sampling,0,1000);
//  mystick[4]=map(mystick[4],0,sampling,0,1000);
//  mystick[5]=map(mystick[5],0,sampling,0,1000);
//  mystick[6]=map(mystick[6],0,sampling,0,1000);
//  mystick[7]=map(mystick[7],0,sampling,0,1000);
//
//  memcpy(t8ssss, t8sss, sizeof(t8sss[0])*8);
//  memcpy(t8sss, t8ss, sizeof(t8ss[0])*8);
//  memcpy(t8ss, t8s, sizeof(t8s[0])*8);
//}
