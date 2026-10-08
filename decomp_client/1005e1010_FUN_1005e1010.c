
void FUN_1005e1010(long param_1)

{
  QString *pQVar1;
  void *pvVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pvVar2 = operator_new(0x30);
  *(void **)(param_1 + 0x18) = pvVar2;
  uVar3 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1005e1bb0(pvVar2,uVar3);
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Virtual_Machine_Creation_10226f078);
  CAbstractWizardPage::setTitle(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e10a9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005e10a9:
  CProgressIndicator::setVerticalLayout(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0));
  CProgressIndicator::setIndicatorSize((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18));
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x18);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1de3dc2);
  CProgressIndicator::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005e1132;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005e1132:
  CProgressIndicator::setType(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),0);
  return;
}

