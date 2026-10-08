
bool FUN_1009a6ac0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  QArrayData *local_58;
  undefined1 local_50 [12];
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = CDeclarativeWizardPage::pageContentItem();
  if (lVar2 == 0) {
    return false;
  }
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_40);
  QVariant::toString();
  QVariant::~QVariant(&local_40);
  QMetaObject::indexOfEnumerator((char *)&PTR_staticMetaObject_102233d80);
  local_50 = QMetaObject::enumerator(0x2233d80);
  QString::toLatin1();
  iVar1 = QMetaEnum::keyToValue(local_50,(bool *)(local_58 + *(long *)(local_58 + 0x10)));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1009a6b8c;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1009a6b8c:
  bVar4 = iVar1 != -1;
  if (bVar4) {
    uVar3 = FUN_1009983c0(param_1);
    FUN_100992e90(uVar3,iVar1);
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return bVar4;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return bVar4;
}

