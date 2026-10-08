
void FUN_100143620(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    FUN_100142fa0();
    return;
  }
  return;
}

