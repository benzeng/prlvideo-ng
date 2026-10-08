
void FUN_1003a2a50(long param_1,int param_2)

{
  QSize *pQVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  QWidget *pQVar5;
  int iVar6;
  
  QStackedWidget::currentWidget();
  plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  iVar2 = 0;
  if (plVar3 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3);
  }
  iVar6 = iVar2;
  if (((param_2 == 0) || (iVar6 = param_2, iVar2 == param_2)) &&
     (lVar4 = FUN_10039faa0(param_1,iVar6), lVar4 != 0)) {
    FUN_1003a30a0(param_1,0);
    FUN_1003a3290(param_1);
    FUN_1003a0360(param_1,lVar4);
    FUN_1003a0140();
    pQVar5 = (QWidget *)QWidget::window();
    MacUtils::getToolbarMinimumWidth(pQVar5);
    QWidget::setFixedSize(*(QSize **)(param_1 + 0x38));
    pQVar1 = *(QSize **)(param_1 + 0x10);
    FUN_10039ffd0(param_1,lVar4);
    QWidget::setFixedSize(pQVar1);
  }
  return;
}

