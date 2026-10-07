
void FUN_1003fad20(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x248))(param_2,0);
  if (*(int *)(DAT_1011c3698 + 0x1948) == 2) {
    FUN_100407230(param_1,param_2);
    return;
  }
  (**(code **)(*param_2 + 0x20))(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001003fad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2);
  return;
}

