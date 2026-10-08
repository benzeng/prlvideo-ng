
long FUN_100be80d0(undefined8 param_1)

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
  lVar2 = FUN_100c5ff30(FUN_100be82a0);
  uVar3 = FUN_100c59ee0();
  lVar4 = FUN_100c58530(uVar3);
  if ((lVar2 == 0) || (lVar4 == 0)) {
    FUN_100c62ee0(0x14,0xb9,0x41,"ssl_cert.c",0x279);
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_100c58d60(lVar4,0x6c,3,param_1);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      lVar5 = FUN_100c90ae0(lVar4,&local_38,0,0);
      if (lVar5 != 0) {
        do {
          if ((lVar6 == 0) && (lVar6 = FUN_100c60010(), lVar6 == 0)) {
            FUN_100c62ee0(0x14,0xb9,0x41,"ssl_cert.c",0x286);
            lVar5 = lVar6;
LAB_100be8279:
            lVar6 = 0;
            if (lVar5 != 0) {
              FUN_100c60790(lVar5,FUN_100c7c730);
              lVar6 = 0;
            }
            break;
          }
          lVar7 = FUN_100c92690(local_38);
          lVar5 = lVar6;
          if ((lVar7 == 0) || (lVar7 = FUN_100c7c750(lVar7), lVar7 == 0)) goto LAB_100be8279;
          iVar1 = FUN_100c60360(lVar2,lVar7);
          if (iVar1 < 0) {
            FUN_100c604e0(lVar2,lVar7);
            FUN_100c604e0(lVar6,lVar7);
          }
          else {
            FUN_100c7c730(lVar7);
          }
          lVar5 = FUN_100c90ae0(lVar4,&local_38,0,0);
        } while (lVar5 != 0);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_100c5ffd0(lVar2);
  }
  if (lVar4 != 0) {
    FUN_100c586e0(lVar4);
  }
  if (local_38 != 0) {
    FUN_100c7cd70();
  }
  if (lVar6 != 0) {
    FUN_100c63270();
  }
  return lVar6;
}

