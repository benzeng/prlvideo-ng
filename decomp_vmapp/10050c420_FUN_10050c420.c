
void FUN_10050c420(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_10050c420(param_1,*param_2);
    FUN_10050c420(param_1,param_2[1]);
    pvVar1 = (void *)param_2[4];
    param_2[4] = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

