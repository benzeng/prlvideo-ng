
long FUN_1004dcc10(long *param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  QWidget *pQVar4;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_1004dc960(param_1,param_2,param_3);
    if (lVar1 == 0) {
      uVar2 = FUN_1003b0ad0(param_1[8]);
      lVar3 = FUN_1003e5be0(uVar2,param_2,param_3);
      lVar1 = 0;
      if (lVar3 != 0) {
        lVar1 = FUN_1004595b0(lVar3,param_1[8],0);
        pQVar4 = (QWidget *)(**(code **)(*param_1 + 0x220))(param_1);
        QStackedWidget::addWidget(pQVar4);
      }
    }
  }
  return lVar1;
}

