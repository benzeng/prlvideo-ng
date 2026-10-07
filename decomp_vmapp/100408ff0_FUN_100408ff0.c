
void FUN_100408ff0(int *param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (-1 < *param_1) {
    uVar1 = FUN_1007dd120(param_2);
    FUN_1008e3970("","MCDException",0,"(!) Error: Throwing exception id=%u (%s).",param_2,uVar1);
    *param_1 = param_2;
    if (param_1 + 2 != param_3) {
      FUN_1004090c0(param_1 + 2,*(undefined8 *)param_3,*(undefined8 *)(param_3 + 2));
      return;
    }
  }
  return;
}

