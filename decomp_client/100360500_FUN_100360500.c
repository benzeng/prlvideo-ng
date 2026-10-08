
undefined8 FUN_100360500(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  QVariant local_50;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100152280();
  QObject::property((char *)&local_40);
  QVariant::toString();
  lVar3 = FUN_1001548f0(uVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100360579;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100360579:
  QVariant::~QVariant(&local_40);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar2 = FUN_10018c280(lVar3);
    QObject::property((char *)&local_50);
    uVar1 = QVariant::toUInt((bool *)&local_50);
    uVar2 = FUN_1003192a0(uVar2,uVar1);
    QVariant::~QVariant(&local_50);
  }
  return uVar2;
}

