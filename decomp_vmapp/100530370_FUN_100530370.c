
void FUN_100530370(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  if ((code *)param_2[1] != (code *)0x0) {
    (*(code *)param_2[1])(param_3,param_2[2],param_4);
  }
  if (*(int *)(*param_2 + 4) != 0) {
    FUN_10052fd70(param_1,param_2,param_3,(int)param_2[3],param_4);
    return;
  }
  return;
}

