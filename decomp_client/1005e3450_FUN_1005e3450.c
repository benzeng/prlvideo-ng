
void FUN_1005e3450(long param_1)

{
  long lVar1;
  QVariant local_38;
  QString local_28;
  undefined1 local_19;
  
  lVar1 = FUN_1005ec990(param_1 + 0x38);
  CDeclarativeWizardPage::pageContentItem();
  QObject::property((char *)&local_38);
  QVariant::toString();
  QString::operator=((QString *)(lVar1 + 0x170),&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005e34d7;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1005e34d7:
  QVariant::~QVariant(&local_38);
  return;
}

