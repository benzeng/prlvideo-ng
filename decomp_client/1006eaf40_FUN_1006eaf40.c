
void FUN_1006eaf40(QWidget *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  QWidget::QWidget(param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_102225a80;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102225c30;
  pvVar1 = operator_new(0x58);
  *(void **)(param_1 + 0x30) = pvVar1;
  FUN_1006eb170(pvVar1,param_1);
  return;
}

