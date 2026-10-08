
void FUN_10055f1c0(QWidget *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  
  QWidget::QWidget(param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10221bb20;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221bcd0;
  pvVar1 = operator_new(0x38);
  FUN_10055d240(pvVar1,param_1,param_2,param_1);
  *(void **)(param_1 + 0x30) = pvVar1;
  FUN_10055d4f0(pvVar1);
  FUN_10055dc60(pvVar1);
  return;
}

