
void FUN_10064a460(QString *param_1)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  CPasswordEditWatcher *pCVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar1 = param_1[9].field0_0x0;
  uVar2 = CDeclarativeWizardProxyPage::sourcePage();
  FUN_10064c1f0(pQVar1,uVar2);
  pQVar3 = (QObject *)CDeclarativeWizardProxyPage::sourcePage();
  QObject::installEventFilter(pQVar3);
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1e0ab53);
  CAbstractWizardPage::setTitle(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10064a4f2;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10064a4f2:
  pCVar4 = operator_new(0x28);
  CPasswordEditWatcher::CPasswordEditWatcher(pCVar4,*(undefined8 *)(param_1[9].field0_0x0 + 0x88),5)
  ;
  return;
}

