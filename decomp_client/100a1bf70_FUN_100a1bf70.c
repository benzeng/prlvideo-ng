
void FUN_100a1bf70(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  void *pvVar1;
  
  if ((param_2 == 9) && (param_3 == 0)) {
    pvVar1 = operator_new(0x90);
    FUN_100a166e0(pvVar1,*(undefined4 *)param_4[1],param_4[2],param_4[3]);
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = pvVar1;
    }
  }
  return;
}

