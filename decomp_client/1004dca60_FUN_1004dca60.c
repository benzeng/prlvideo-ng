
undefined8 FUN_1004dca60(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  QWidget *pQVar2;
  
  uVar1 = FUN_1004595b0(param_2,param_1[8],0);
  pQVar2 = (QWidget *)(**(code **)(*param_1 + 0x220))(param_1);
  QStackedWidget::addWidget(pQVar2);
  return uVar1;
}

