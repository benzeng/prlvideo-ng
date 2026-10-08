
void FUN_100c27430(long param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

