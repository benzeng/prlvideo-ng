
undefined4 FUN_1006fef90(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if ((*(char *)(param_1 + 0xbc) == '2') ||
     (uVar1 = FUN_1006fe320(param_1 + 0x84), (uVar1 & 0xf000) == 0xa000)) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_1006ffe90(param_1);
    }
    uVar3 = FUN_100701810(param_2);
    iVar2 = FUN_1006fe080(uVar3);
    uVar5 = 0xffffffff;
    if ((iVar2 != -1) &&
       ((iVar2 = _unlink(param_2), iVar2 != -1 || (piVar4 = ___error(), *piVar4 == 2)))) {
      pcVar6 = (char *)(param_1 + 0xbd);
      if (*(char **)(param_1 + 0x228) != (char *)0x0) {
        pcVar6 = *(char **)(param_1 + 0x228);
      }
      iVar2 = _symlink(pcVar6,param_2);
      uVar5 = 0;
      if (iVar2 == -1) {
        uVar5 = 0xffffffff;
      }
    }
  }
  else {
    piVar4 = ___error();
    *piVar4 = 0x16;
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

