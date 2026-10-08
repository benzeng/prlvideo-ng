
void FUN_10066ac30(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((((-1 < param_2) &&
       (param_2 < *(int *)(*(long *)(param_1 + 0x40) + 0xc) -
                  *(int *)(*(long *)(param_1 + 0x40) + 8))) &&
      (iVar2 = CDownloadedKeyInfo::getLicenseProduct(), iVar2 == 7)) &&
     (cVar1 = CDownloadedKeyInfo::isTrial(), cVar1 == '\0')) {
    CAbstractWizardPage::wizardModel();
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    cVar1 = CDownloadedKeyInfo::isActiveHere();
    if (cVar1 == '\0') {
      CDownloadedKeyInfo::getKey();
    }
    else {
      local_28 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    FUN_100682780(uVar3,&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return;
}

