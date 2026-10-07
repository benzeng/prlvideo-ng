
undefined8 FUN_100812b40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  local_38 = 0;
  uVar2 = FUN_100884bf0(param_1,FUN_100812b30);
  uVar3 = FUN_10087ece0();
  lVar4 = FUN_10087d330(uVar3);
  if (lVar4 == 0) {
    FUN_100887ce0(0x14,0xd8,0x41,"ssl_cert.c",0x2c2);
    uVar3 = 0;
  }
  else {
    lVar5 = FUN_10087db60(lVar4,0x6c,3,param_2);
    uVar3 = 0;
    if (lVar5 != 0) {
      lVar5 = FUN_1008b5560(lVar4,&local_38,0,0);
      if (lVar5 != 0) {
        uVar3 = 0;
        do {
          lVar5 = FUN_1008b7110(local_38);
          if ((lVar5 == 0) || (lVar5 = FUN_1008a11d0(lVar5), lVar5 == 0)) goto LAB_100812c3e;
          iVar1 = FUN_100885160(param_1,lVar5);
          if (iVar1 < 0) {
            FUN_1008852e0(param_1,lVar5);
          }
          else {
            FUN_1008a11b0(lVar5);
          }
          lVar5 = FUN_1008b5560(lVar4,&local_38,0,0);
        } while (lVar5 != 0);
      }
      FUN_100888070();
      uVar3 = 1;
    }
LAB_100812c3e:
    FUN_10087d4e0(lVar4);
  }
  if (local_38 != 0) {
    FUN_1008a17f0();
  }
  FUN_100884bf0(param_1,uVar2);
  return uVar3;
}

