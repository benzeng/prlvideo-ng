
void FUN_100ba3a50(int *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 6) {
    if (*(long *)(param_1 + 2) != 0) {
      uVar1 = 0;
      do {
        FUN_100ba3950(*(undefined8 *)(*(long *)(param_1 + 8) + uVar1 * 8));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(ulong *)(param_1 + 2));
    }
    if (*(long *)(param_1 + 4) != 0) {
      _free(*(void **)(param_1 + 8));
    }
    _free(param_1);
    return;
  }
  return;
}

