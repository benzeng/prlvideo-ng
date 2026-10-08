
void FUN_1008294a0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      FUN_1003030c0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    }
  }
  else if (param_2 == 9) {
    if (param_3 == 1) {
      pvVar1 = operator_new(0x30);
      FUN_100301cf0(pvVar1,0);
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = pvVar1;
      }
    }
    else if (param_3 == 0) {
      pvVar1 = operator_new(0x30);
      FUN_100301cf0(pvVar1,*(undefined8 *)param_4[1]);
      if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
        *(undefined8 *)*param_4 = pvVar1;
      }
    }
  }
  return;
}

