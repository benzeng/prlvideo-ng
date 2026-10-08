
undefined1 FUN_1009a7970(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    CDeclarativeWizardPage::pageContentItem();
    QObject::property((char *)&local_38);
    QVariant::toString();
    QVariant::~QVariant(&local_38);
    iVar1 = QString::compare_helper
                      (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                       "KeepInWindows",0xffffffff,1);
    if (iVar1 == 0) {
      uVar3 = FUN_1009983c0(param_1);
      FUN_1009931b0(uVar3,0);
    }
    else {
      iVar1 = QString::compare_helper
                        (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                         "TransferToMac",0xffffffff,1);
      if (iVar1 == 0) {
        uVar3 = FUN_1009983c0(param_1);
        FUN_1009931b0(uVar3,1);
      }
    }
    uVar4 = 1;
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return 1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  return uVar4;
}

