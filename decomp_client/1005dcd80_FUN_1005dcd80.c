
void FUN_1005dcd80(long param_1)

{
  QString *pQVar1;
  long *plVar2;
  int iVar3;
  void *pvVar4;
  QArrayData *pQVar5;
  QArrayData *local_30;
  undefined1 local_21;
  
  FUN_1005eca90(*(undefined8 *)(param_1 + 0x10));
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_30,"",0x1e0510a);
  CAbstractWizardPage::setTitle(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005dcdfa;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005dcdfa:
  if (DAT_1023109c0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10076b480(pvVar4);
    DAT_102271418 = 1;
    DAT_1023109c0 = pvVar4;
  }
  FUN_10076b4f0(DAT_1023109c0,param_1);
  FUN_1005da6f0(param_1);
  FUN_1005db8e0(param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0xb0);
  pQVar5 = (QArrayData *)
           QString::fromAscii_helper
                     ("QPushButton { margin-left: 10px; min-height: 20; max-height: 20; }",0x42);
  QWidget::setStyleSheet(pQVar1);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005dce9f;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1005dce9f:
  plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 0xb0);
  iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2);
  QWidget::setMinimumSize((int)plVar2,iVar3);
  return;
}

