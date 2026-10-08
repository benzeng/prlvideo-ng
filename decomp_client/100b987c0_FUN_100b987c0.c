
undefined8 FUN_100b987c0(long param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_2c;
  void *local_28;
  
  local_28 = (void *)0x0;
  iVar2 = FUN_100ba1660(param_1 + 0x20);
  if (6 < iVar2 - 1U) {
    uVar5 = FUN_100b9d470(0xfffffffd,0);
    return uVar5;
  }
  if (iVar2 == 5) {
LAB_100b98842:
    FUN_100b98920(param_1);
    if (*(int *)(param_1 + 0x1d8) != 5) {
      return 0;
    }
  }
  else if (iVar2 == 3) {
    if (param_2 != 0) goto LAB_100b98842;
    iVar3 = FUN_100b93810();
    if ((iVar3 == 4) || (iVar3 = FUN_100b93810(), iVar3 == 6)) {
      FUN_100b9a390(param_1,1,3);
      return 0;
    }
  }
  else if (iVar2 == 1) goto LAB_100b98842;
  if (((((*(byte *)(param_1 + 0x1d4) & 2) != 0) || ((*(byte *)(param_1 + 0x18) & 0x10) == 0)) ||
      (iVar2 == 2)) || (iVar2 == 7)) {
    FUN_100b982a0(param_1,0,0);
    return 0;
  }
  FUN_100b982a0(param_1,0,0);
  if (iVar2 == 6) {
    if (DAT_1023118e8 == (code *)0x0) goto LAB_100b98907;
    lVar4 = (*DAT_1023118e8)();
  }
  else {
    lVar4 = FUN_100b9c1d0();
  }
  if (lVar4 != 0) {
    iVar2 = FUN_100b984f0(&local_28,&local_2c,lVar4);
    pvVar1 = local_28;
    if ((iVar2 == 0) || (iVar2 == 100)) {
      FUN_100b982a0(param_1,local_28,local_2c);
      if (pvVar1 != (void *)0x0) {
        _free(pvVar1);
      }
      FUN_100b9c210(lVar4);
      return 0;
    }
    FUN_100b9c210(lVar4);
  }
LAB_100b98907:
  uVar5 = FUN_100b9d560();
  return uVar5;
}

