
undefined4 FUN_100daa340(long param_1,char *param_2)

{
  mode_t mVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if ((*(char *)(param_1 + 0xbc) == '6') ||
     (uVar2 = FUN_100da9450(param_1 + 0x84), (uVar2 & 0xf000) == 0x1000)) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_100daafc0(param_1);
    }
    mVar1 = FUN_100dab140(param_1);
    uVar5 = FUN_100dac940(param_2);
    iVar3 = FUN_100da91b0(uVar5);
    uVar4 = 0xffffffff;
    if (iVar3 != -1) {
      iVar3 = _mkfifo(param_2,mVar1);
      uVar4 = 0;
      if (iVar3 == -1) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    piVar6 = ___error();
    *piVar6 = 0x16;
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

