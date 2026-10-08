
void FUN_1001e9970(void)

{
  undefined8 uVar1;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = FUN_100060bb0();
  FUN_1000609c0(uVar1);
  QObject::property((char *)&local_38);
  QVariant::toString();
  FUN_1001e97e0();
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001e99ea;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001e99ea:
  QVariant::~QVariant(&local_38);
  return;
}

