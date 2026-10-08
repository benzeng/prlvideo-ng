
void FUN_1000973c0(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_28;
  undefined1 local_1a;
  
  lVar3 = QObject::sender();
  lVar4 = QStackedWidget::currentWidget();
  pQVar1 = param_1[6].field0_0x0;
  if (lVar4 == *(long *)(pQVar1 + 8)) {
    if (lVar3 != *(long *)(pQVar1 + 0x10)) {
      return;
    }
    param_1[9].field0_0x0 = (QTypedArrayData<unsigned_short> *)0x640000000c;
    param_1[10].field0_0x0 = param_1[0x111].field0_0x0;
    FUN_1000901c0(param_1[7].field0_0x0,param_1 + 9);
    return;
  }
  lVar5 = -1;
  if (lVar4 == *(long *)(pQVar1 + 0x30)) {
    lVar5 = 100;
    if (lVar3 != *(long *)(pQVar1 + 0x38)) {
      lVar5 = -1;
    }
    lVar6 = 0x65;
    if (lVar3 != *(long *)(pQVar1 + 0x40)) {
      lVar6 = lVar5;
    }
    lVar5 = 0x66;
    if (lVar3 != *(long *)(pQVar1 + 0x48)) {
      lVar5 = lVar6;
    }
  }
  if (lVar4 == *(long *)(pQVar1 + 0x60)) {
    lVar6 = 100;
    if (lVar3 != *(long *)(pQVar1 + 0x68)) {
      lVar6 = lVar5;
    }
    lVar5 = 0x66;
    if (lVar3 != *(long *)(pQVar1 + 0x78)) {
      lVar5 = lVar6;
    }
  }
  if (((lVar4 != *(long *)(pQVar1 + 0x88)) || (uVar2 = 0, lVar3 != *(long *)(pQVar1 + 0x90))) &&
     (uVar2 = (undefined4)lVar5, lVar5 == -1)) {
    return;
  }
  *(undefined4 *)&param_1[9].field0_0x0 = 9;
  *(undefined4 *)((long)&param_1[9].field0_0x0 + 4) = uVar2;
  QMetaObject::tr((char *)&local_28,(char *)&PTR_staticMetaObject_1021f7fc0,0x1dbad6c);
  QWidget::setWindowTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1000974d9;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000974d9:
  QStackedWidget::setCurrentWidget(*(QWidget **)param_1[6].field0_0x0);
  *(undefined4 *)((long)&param_1[8].field0_0x0 + 4) = 0;
  param_1[10].field0_0x0 = param_1[0x111].field0_0x0;
  FUN_1000901c0(param_1[7].field0_0x0,param_1 + 9);
  return;
}

