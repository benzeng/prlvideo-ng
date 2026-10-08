
void FUN_100ac6250(long param_1)

{
  if ((*(int *)(param_1 + 0xab8) == 0) && (*(int *)(param_1 + 0xab4) == 0)) {
    return;
  }
  _SetFrontProcessWithOptions((int *)(param_1 + 0xab4),1);
  FUN_100ae3300(param_1,param_1 + 0x988);
  return;
}

