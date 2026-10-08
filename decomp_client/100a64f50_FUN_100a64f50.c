
void FUN_100a64f50(long param_1)

{
  int *piVar1;
  undefined1 local_58 [64];
  
  FUN_100aafe50(local_58,param_1 + 8);
  if (1 < *(int *)(param_1 + 0x58)) {
    *(undefined4 *)(param_1 + 0x58) = 1;
    FUN_100aafe00(local_58);
    _write(*(int *)((long)*(void **)(param_1 + 0x48) + 4),*(void **)(param_1 + 0x48),1);
    FUN_100ab19c0(*(undefined8 *)(param_1 + 0x10),0xffffffff);
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      if ((-1 < *piVar1) && (-1 < piVar1[1])) {
        _close(*piVar1);
        _close(piVar1[1]);
      }
      operator_delete(piVar1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  FUN_100aafde0(local_58);
  return;
}

