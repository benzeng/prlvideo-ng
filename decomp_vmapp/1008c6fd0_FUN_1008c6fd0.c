
undefined8 FUN_1008c6fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = FUN_100885600(param_3);
  iVar3 = 0;
  uVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar2 = FUN_100885620(param_3,iVar3);
      uVar4 = *(undefined8 *)(lVar2 + 0x10);
      lVar2 = FUN_1008c3cc0(0,*(undefined8 *)(lVar2 + 8));
      if (lVar2 == 0) {
        FUN_100887ce0(0x22,0x7d,0x83,"v3_sxnet.c",0x9d);
        return 0;
      }
      iVar1 = FUN_1008c72f0(&local_38,lVar2,uVar4,0xffffffff);
      if (iVar1 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_100885600(param_3);
      uVar4 = local_38;
    } while (iVar3 < iVar1);
  }
  return uVar4;
}

