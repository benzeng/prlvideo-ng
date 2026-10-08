
void FUN_100143650(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x34) = param_2;
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x44) = param_2;
  }
  return;
}

