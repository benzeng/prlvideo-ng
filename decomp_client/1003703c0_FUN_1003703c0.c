
undefined8 FUN_1003703c0(undefined8 param_1)

{
  undefined8 uVar1;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = FUN_100060bb0();
  FUN_1000609c0(uVar1);
  QObject::property((char *)&local_38);
  QVariant::toString();
  uVar1 = FUN_1003704b0(param_1,&local_28,DAT_100e152b8);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100370445;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100370445:
  QVariant::~QVariant(&local_38);
  return uVar1;
}

