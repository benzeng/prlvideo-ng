
long FUN_100812960(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  local_38 = 0;
  lVar2 = FUN_100884d30(FUN_100812b30);
  uVar3 = FUN_10087ece0();
  lVar4 = FUN_10087d330(uVar3);
  if ((lVar2 == 0) || (lVar4 == 0)) {
    FUN_100887ce0(0x14,0xb9,0x41,"ssl_cert.c",0x279);
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_10087db60(lVar4,0x6c,3,param_1);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      lVar5 = FUN_1008b5560(lVar4,&local_38,0,0);
      if (lVar5 != 0) {
        do {
          if ((lVar6 == 0) && (lVar6 = FUN_100884e10(), lVar6 == 0)) {
            FUN_100887ce0(0x14,0xb9,0x41,"ssl_cert.c",0x286);
            lVar5 = lVar6;
LAB_100812b09:
            lVar6 = 0;
            if (lVar5 != 0) {
              FUN_100885590(lVar5,FUN_1008a11b0);
              lVar6 = 0;
            }
            break;
          }
          lVar7 = FUN_1008b7110(local_38);
          lVar5 = lVar6;
          if ((lVar7 == 0) || (lVar7 = FUN_1008a11d0(lVar7), lVar7 == 0)) goto LAB_100812b09;
          iVar1 = FUN_100885160(lVar2,lVar7);
          if (iVar1 < 0) {
            FUN_1008852e0(lVar2,lVar7);
            FUN_1008852e0(lVar6,lVar7);
          }
          else {
            FUN_1008a11b0(lVar7);
          }
          lVar5 = FUN_1008b5560(lVar4,&local_38,0,0);
        } while (lVar5 != 0);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_100884dd0(lVar2);
  }
  if (lVar4 != 0) {
    FUN_10087d4e0(lVar4);
  }
  if (local_38 != 0) {
    FUN_1008a17f0();
  }
  if (lVar6 != 0) {
    FUN_100888070();
  }
  return lVar6;
}

