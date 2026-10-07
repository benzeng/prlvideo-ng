
undefined8 FUN_10081b8a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x30);
    if (*plVar1 != 0) {
      FUN_10080ee30();
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      if ((*(int *)(param_1 + 0x18) != 0) && (*plVar1 != 0)) {
        FUN_10080dae0();
      }
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    uVar2 = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_10081e1a0();
    }
  }
  return uVar2;
}

