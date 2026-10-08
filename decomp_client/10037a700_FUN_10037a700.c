
void FUN_10037a700(QWidget *param_1,QObject *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  QWidget::QWidget(param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10220e850;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220ea00;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(QObject **)(param_1 + 0x38) = param_2;
  param_1[0x41] = (QWidget)0x0;
  QWidget::setAttribute(param_1,0xe,1);
  return;
}

