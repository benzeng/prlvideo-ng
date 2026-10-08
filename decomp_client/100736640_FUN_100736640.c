
void FUN_100736640(long param_1,int param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x28) == param_2) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x30) + 0x28) = param_2;
  FUN_1008575c0(param_1);
  FUN_100735fe0(*(undefined8 *)(param_1 + 0x30));
  return;
}

