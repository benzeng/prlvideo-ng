
void FUN_1005e1310(long param_1)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  QString local_28;
  undefined1 local_19;
  
  pQVar2 = *(QString **)(param_1 + 0x10);
  iVar1 = *(int *)&pQVar2[2].field0_0x0;
  if (iVar1 == 8) {
    QMetaObject::tr((char *)&local_40,"",0x1e05308);
    CAbstractWizardPage::setTitle(pQVar2);
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1005e149f;
  }
  if (iVar1 != 6) {
    return;
  }
  QMetaObject::tr((char *)&local_28,"",0x1dc6c8f);
  uVar3 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  lVar4 = FUN_1005b87b0(uVar3);
  if (lVar4 != 0) {
    FUN_10018f890(lVar4);
    EnumUtils::OsVerToString((uint)&local_30);
    QString::fromUtf8_helper((char *)&local_38,0x1e31adc);
    QString::append(&local_38);
    QString::append(&local_28);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005e1441;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1005e1441:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005e1471;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1005e1471:
  CAbstractWizardPage::setTitle(*(QString **)(param_1 + 0x10));
  if (*(int *)local_28.field0_0x0 == -1) {
    return;
  }
  local_40 = (QArrayData *)local_28.field0_0x0;
  if (*(int *)local_28.field0_0x0 != 0) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
    UNLOCK();
    if (*(int *)local_28.field0_0x0 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_1005e149f:
  QArrayData::deallocate(local_40,2,8);
  return;
}

