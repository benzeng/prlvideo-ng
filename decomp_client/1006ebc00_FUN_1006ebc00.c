
void FUN_1006ebc00(QWidget *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QWidget::QWidget(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_102225cd0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102225e80;
  pvVar1 = operator_new(0x70);
  *(void **)(param_1 + 0x30) = pvVar1;
  FUN_1006ec5f0(pvVar1,param_1);
  return;
}

