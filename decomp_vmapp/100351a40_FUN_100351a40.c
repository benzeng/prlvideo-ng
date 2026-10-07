
void FUN_100351a40(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    operator_delete__((void *)(*(long *)(param_1 + 0x10) + -8));
    return;
  }
  return;
}

