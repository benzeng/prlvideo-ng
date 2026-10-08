
undefined4 FUN_100525b40(void)

{
  undefined4 uVar1;
  QVariant local_30;
  QString local_20;
  undefined1 local_11;
  
  QObject::property((char *)&local_30);
  QVariant::toString();
  uVar1 = Help::helpTopicFromString(&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      local_11 = *(int *)local_20.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100525ba9;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
LAB_100525ba9:
  QVariant::~QVariant(&local_30);
  return uVar1;
}

