
void FUN_100829740(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  void *pvVar1;
  
  if ((param_2 == 9) && (param_3 == 0)) {
    pvVar1 = operator_new(0x10);
    FUN_100304e70(pvVar1);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = pvVar1;
    }
  }
  return;
}

