
undefined8 FUN_10019c860(undefined8 param_1,long param_2)

{
  QString *pQVar1;
  undefined8 uVar2;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 == 0) {
    return 0;
  }
  pQVar1 = (QString *)CSearchParentHelper::instance();
  QObject::property((char *)&local_40);
  QVariant::toString();
  uVar2 = CSearchParentHelper::getParentForMessage(pQVar1,SUB81(&local_30,0),(QWidget *)0x0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10019c8e5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10019c8e5:
  QVariant::~QVariant(&local_40);
  return uVar2;
}

