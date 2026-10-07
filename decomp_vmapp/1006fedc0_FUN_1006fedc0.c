
undefined8 FUN_1006fedc0(long param_1,char *param_2)

{
  mode_t mVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (((*(char *)(param_1 + 0xbc) == '5') ||
      (uVar2 = FUN_1006fe320(param_1 + 0x84), (uVar2 & 0xf000) == 0x4000)) ||
     ((*(char *)(param_1 + 0xbc) == '\0' &&
      (sVar4 = _strlen((char *)(param_1 + 0x20)), *(char *)(sVar4 + 0x1f + param_1) == '/')))) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_1006ffe90(param_1);
    }
    mVar1 = FUN_100700010(param_1);
    uVar5 = FUN_100701810(param_2);
    iVar3 = FUN_1006fe080(uVar5);
    uVar5 = 0xffffffff;
    if (iVar3 != -1) {
      iVar3 = _mkdir(param_2,mVar1);
      uVar5 = 0;
      if (iVar3 == -1) {
        piVar6 = ___error();
        uVar5 = 0xffffffff;
        if (*piVar6 == 0x11) {
          iVar3 = _chmod(param_2,mVar1);
          uVar5 = 1;
          if (iVar3 == -1) {
            uVar5 = 0xffffffff;
          }
        }
      }
    }
  }
  else {
    piVar6 = ___error();
    *piVar6 = 0x16;
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

