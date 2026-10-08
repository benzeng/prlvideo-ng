
void FUN_10066ad60(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_38;
  undefined1 local_29;
  
  if ((-1 < param_2) &&
     (param_2 < *(int *)(*(long *)(param_1 + 0x40) + 0xc) - *(int *)(*(long *)(param_1 + 0x40) + 8))
     ) {
    iVar2 = CDownloadedKeyInfo::getLicenseProduct();
    CAbstractWizardPage::wizardModel();
    uVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022241f0);
    if (iVar2 != 7) {
      FUN_100680ba0(uVar3);
      return;
    }
    cVar1 = CDownloadedKeyInfo::isActiveHere();
    if (cVar1 == '\0') {
      CDownloadedKeyInfo::getKey();
    }
    else {
      local_38 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    FUN_1006807c0(uVar3,&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}

