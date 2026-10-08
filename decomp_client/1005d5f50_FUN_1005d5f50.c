
void FUN_1005d5f50(long param_1)

{
  QString *pQVar1;
  void *pvVar2;
  undefined8 uVar3;
  CPasswordEditWatcher *pCVar4;
  QArrayData *local_30;
  undefined1 local_22;
  
  pvVar2 = operator_new(0x70);
  *(void **)(param_1 + 0x18) = pvVar2;
  uVar3 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_1005d82c0(pvVar2,uVar3);
  pQVar1 = *(QString **)(param_1 + 0x10);
  QMetaObject::tr((char *)&local_30,"",0x1e04cb9);
  CAbstractWizardPage::setTitle(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1005d5fe6;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005d5fe6:
  QLineEdit::setMaxLength((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
  QLineEdit::setMaxLength((int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
  pCVar4 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher
            (pCVar4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),3);
  pCVar4 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher
            (pCVar4,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),3);
  return;
}

