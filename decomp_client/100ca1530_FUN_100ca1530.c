
long FUN_100ca1530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_100c60010();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x22,0x76,0x41,"v3_alt.c",0x197);
LAB_100ca15df:
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        uVar4 = FUN_100c60820(param_3,iVar1);
        lVar5 = FUN_100ca1630(0,param_1,param_2,uVar4,0);
        if (lVar5 == 0) {
          FUN_100c60790(lVar3,FUN_100ca0960);
          goto LAB_100ca15df;
        }
        FUN_100c604e0(lVar3,lVar5);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

