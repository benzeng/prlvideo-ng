
void FUN_100557720(QWidget *param_1,undefined8 param_2,QString *param_3,undefined8 param_4)

{
  void *pvVar1;
  
  QWidget::QWidget(param_1,param_4,0);
  *(undefined ***)param_1 = &PTR_FUN_10221b680;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221b830;
  pvVar1 = operator_new(0x78);
  FUN_100552b90(pvVar1,param_1,param_2,param_1);
  *(void **)(param_1 + 0x30) = pvVar1;
  QString::operator=((QString *)((long)pvVar1 + 0x58),param_3);
  FUN_100552e40(pvVar1);
  FUN_1005548d0(pvVar1);
  return;
}

