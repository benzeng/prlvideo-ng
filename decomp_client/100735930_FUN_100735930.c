
void FUN_100735930(long param_1,int param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x20) == param_2) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x30) + 0x20) = param_2;
  FUN_100734d90();
  FUN_100856ee0(param_1,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20));
  return;
}

