
undefined4 FUN_100daa260(long param_1,char *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if ((*(char *)(param_1 + 0xbc) == '4') ||
     (uVar2 = FUN_100da9450(param_1 + 0x84), (uVar2 & 0xf000) == 0x6000)) {
    if (param_2 == (char *)0x0) {
      param_2 = (char *)FUN_100daafc0(param_1);
    }
    uVar1 = FUN_100dab140(param_1);
    iVar3 = FUN_100da9450(param_1 + 0x169);
    uVar2 = FUN_100da9450(param_1 + 0x171);
    uVar6 = FUN_100dac940(param_2);
    iVar4 = FUN_100da91b0(uVar6);
    uVar5 = 0xffffffff;
    if (iVar4 != -1) {
      iVar3 = _mknod(param_2,uVar1 | 0x6000,iVar3 << 0x18 | uVar2);
      uVar5 = 0;
      if (iVar3 == -1) {
        uVar5 = 0xffffffff;
      }
    }
  }
  else {
    piVar7 = ___error();
    *piVar7 = 0x16;
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

