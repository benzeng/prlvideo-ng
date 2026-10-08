
undefined8 FUN_100c7d660(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = FUN_100c5ff30(FUN_100c7d6d0);
    *(long *)(lVar1 + 0x28) = lVar3;
    if (lVar3 == 0) goto LAB_100c7d6a8;
  }
  iVar2 = FUN_100c604e0(lVar3,param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 1;
    return 1;
  }
LAB_100c7d6a8:
  FUN_100c62ee0(0xd,0xa9,0x41,"x_crl.c",0x16c);
  return 0;
}

