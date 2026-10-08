
void FUN_10066a9d0(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  *(undefined4 *)(param_1 + 0x48) = param_2;
  CAbstractWizardPage::wizardModel();
  QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
  CAbstractWizardModel::wizardCtrl();
  CWizardController::updateWizardActions();
  if (((-1 < *(int *)(param_1 + 0x48)) &&
      (*(int *)(param_1 + 0x48) <
       *(int *)(*(long *)(param_1 + 0x40) + 0xc) - *(int *)(*(long *)(param_1 + 0x40) + 8))) &&
     (cVar1 = CDownloadedKeyInfo::isActiveHere(), cVar1 == '\0')) {
    CAbstractWizardPage::wizardModel();
    uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    CDownloadedKeyInfo::getKey();
    FUN_10067e730(uVar2,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

