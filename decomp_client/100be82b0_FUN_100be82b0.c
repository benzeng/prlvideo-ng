
undefined8 FUN_100be82b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  local_38 = 0;
  uVar2 = FUN_100c5fdf0(param_1,FUN_100be82a0);
  uVar3 = FUN_100c59ee0();
  lVar4 = FUN_100c58530(uVar3);
  if (lVar4 == 0) {
    FUN_100c62ee0(0x14,0xd8,0x41,"ssl_cert.c",0x2c2);
    uVar3 = 0;
  }
  else {
    lVar5 = FUN_100c58d60(lVar4,0x6c,3,param_2);
    uVar3 = 0;
    if (lVar5 != 0) {
      lVar5 = FUN_100c90ae0(lVar4,&local_38,0,0);
      if (lVar5 != 0) {
        uVar3 = 0;
        do {
          lVar5 = FUN_100c92690(local_38);
          if ((lVar5 == 0) || (lVar5 = FUN_100c7c750(lVar5), lVar5 == 0)) goto LAB_100be83ae;
          iVar1 = FUN_100c60360(param_1,lVar5);
          if (iVar1 < 0) {
            FUN_100c604e0(param_1,lVar5);
          }
          else {
            FUN_100c7c730(lVar5);
          }
          lVar5 = FUN_100c90ae0(lVar4,&local_38,0,0);
        } while (lVar5 != 0);
      }
      FUN_100c63270();
      uVar3 = 1;
    }
LAB_100be83ae:
    FUN_100c586e0(lVar4);
  }
  if (local_38 != 0) {
    FUN_100c7cd70();
  }
  FUN_100c5fdf0(param_1,uVar2);
  return uVar3;
}

