
undefined8
FUN_1006fe8c0(long *param_1,undefined8 param_2,undefined **param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  if ((param_4 & 3) == 2) {
    piVar1 = ___error();
    *piVar1 = 0x16;
  }
  else {
    puVar2 = _calloc(1,0x238);
    *param_1 = (long)puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    puVar2[1] = param_2;
    *(undefined4 *)((long)puVar2 + 0x1c) = param_5;
    ppuVar3 = &PTR_FUN_10116d828;
    if (param_3 != (undefined **)0x0) {
      ppuVar3 = param_3;
    }
    *puVar2 = ppuVar3;
    *(uint *)(*param_1 + 0x18) = param_4;
    if ((param_4 & 3) == 0) {
      pcVar4 = FUN_1006fdfb0;
      uVar5 = 0x100;
    }
    else {
      pcVar4 = FUN_1006fe050;
      uVar5 = 0x10;
    }
    uVar5 = FUN_1007013b0(uVar5,pcVar4);
    *(undefined8 *)(*param_1 + 0x230) = uVar5;
    if (*(long *)(*param_1 + 0x230) != 0) {
      return 0;
    }
    _free((void *)*param_1);
  }
  return 0xffffffff;
}

