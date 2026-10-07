
undefined8 FUN_1008a20e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = *(long *)(lVar1 + 0x28);
  if (lVar3 == 0) {
    lVar3 = FUN_100884d30(FUN_1008a2150);
    *(long *)(lVar1 + 0x28) = lVar3;
    if (lVar3 == 0) goto LAB_1008a2128;
  }
  iVar2 = FUN_1008852e0(lVar3,param_2);
  if (iVar2 != 0) {
    *(undefined4 *)(lVar1 + 0x48) = 1;
    return 1;
  }
LAB_1008a2128:
  FUN_100887ce0(0xd,0xa9,0x41,"x_crl.c",0x16c);
  return 0;
}

