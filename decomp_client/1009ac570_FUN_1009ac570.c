
bool FUN_1009ac570(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  QArrayData *local_38;
  Data_conflict local_30;
  uint local_28;
  undefined1 local_19;
  
  lVar3 = CDeclarativeWizardPage::pageContentItem();
  if (lVar3 == 0) {
    local_28 = 0x80000000;
    local_30.field7 = 0;
    bVar4 = false;
    goto LAB_1009ac651;
  }
  CDeclarativeWizardPage::pageContentItem();
  QObject::property(&local_30.field0);
  if ((local_28 & 0x3fffffff) == 0) {
    bVar4 = false;
    goto LAB_1009ac651;
  }
  QVariant::toString();
  iVar2 = QString::compare_helper
                    (local_38 + *(long *)(local_38 + 0x10),*(undefined4 *)(local_38 + 4),
                     "usePasscode",0xffffffff,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009ac619;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009ac619:
  if (iVar2 == 0) {
    bVar4 = false;
  }
  else {
    cVar1 = QHostAddress::isNull();
    if (cVar1 == '\0') {
      bVar4 = *(char *)(param_1 + 99) == '\0';
    }
    else {
      bVar4 = false;
    }
  }
LAB_1009ac651:
  QVariant::~QVariant((QVariant *)&local_30);
  return bVar4;
}

