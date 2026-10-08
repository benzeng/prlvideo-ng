
void FUN_10044e1e0(QFrame *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  
  QFrame::QFrame(param_1,param_4,0);
  *(undefined ***)param_1 = &PTR_FUN_102212ef0;
  *(undefined ***)(param_1 + 0x10) = &PTR____cxa_pure_virtual_1022130f8;
  pvVar1 = operator_new(0x60);
  FUN_1004494b0(pvVar1,param_1,param_2,param_3);
  *(void **)(param_1 + 0x30) = pvVar1;
  return;
}

