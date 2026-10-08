
void FUN_100851870(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  void *pvVar1;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      FUN_1006e7970();
      return;
    }
    if (param_3 == 1) {
      FUN_1006e8200(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    }
    if (param_3 == 0) {
      FUN_1006e8260(param_1,param_4[1],param_4[2]);
      return;
    }
  }
  else if ((param_2 == 9) && (param_3 == 0)) {
    pvVar1 = operator_new(0x90);
    FUN_1006e7bf0(pvVar1,*(undefined8 *)param_4[1]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = pvVar1;
    }
  }
  return;
}

