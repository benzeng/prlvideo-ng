
undefined * FUN_00410238(undefined *param_1)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = FUN_0040f16c();
  puVar2 = PTR_FUN_0061d008;
  piVar1 = *(int **)(lVar3 + 0x10);
  PTR_FUN_0061d008 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*(long *)(lVar3 + 0x10) == lVar3 + 0x1c) {
      *(long *)(lVar3 + 0x10) = lVar3 + 0x20;
    }
    else {
      *(long *)(lVar3 + 0x10) = lVar3 + 0x1c;
    }
    while (*piVar1 != 0) {
      FUN_0041021c(1);
    }
  }
  return puVar2;
}

