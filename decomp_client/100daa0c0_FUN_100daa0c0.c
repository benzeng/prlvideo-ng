
undefined4 FUN_100daa0c0(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if ((*(char *)(param_1 + 0xbc) == '2') ||
     (uVar1 = FUN_100da9450(param_1 + 0x84), (uVar1 & 0xf000) == 0xa000)) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_100daafc0(param_1);
    }
    uVar3 = FUN_100dac940(param_2);
    iVar2 = FUN_100da91b0(uVar3);
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

