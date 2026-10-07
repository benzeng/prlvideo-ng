
long FUN_1008c5fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_100884e10();
  if (lVar3 == 0) {
    FUN_100887ce0(0x22,0x76,0x41,"v3_alt.c",0x197);
LAB_1008c605f:
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100885600(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar4 = FUN_100885620(param_3,iVar1);
        lVar5 = FUN_1008c60b0(0,param_1,param_2,uVar4,0);
        if (lVar5 == 0) {
          FUN_100885590(lVar3,FUN_1008c53e0);
          goto LAB_1008c605f;
        }
        FUN_1008852e0(lVar3,lVar5);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100885600(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

