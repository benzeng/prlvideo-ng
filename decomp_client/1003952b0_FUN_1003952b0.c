
void FUN_1003952b0(QWidget *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QWidget::QWidget(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_10220fca0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220fe50;
  pvVar1 = operator_new(0xa8);
  *(void **)(param_1 + 0x30) = pvVar1;
  FUN_100394c10(param_1);
  return;
}

