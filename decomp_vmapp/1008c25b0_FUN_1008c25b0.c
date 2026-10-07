
void FUN_1008c25b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 local_38 [24];
  
  FUN_1008ceb70(local_38,param_1);
  lVar1 = 0;
  if (param_4 != (long *)0x0) {
    lVar1 = *param_4 + 0x30;
  }
  FUN_1008c21e0(local_38,param_2,param_3,lVar1);
  return;
}

