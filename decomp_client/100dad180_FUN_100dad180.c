
void FUN_100dad180(long *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((long)param_1 + 0x14) == -1) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  }
  return;
}

