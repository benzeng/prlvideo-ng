
void FUN_1001c43a0(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1001c40b0();
    return;
  }
  if ((param_2 == 0) &&
     (iVar1 = *(int *)(param_1 + 0x30), *(undefined4 *)(param_1 + 0x30) = 2, iVar1 != 1)) {
    FUN_1001c40b0();
    return;
  }
  return;
}

