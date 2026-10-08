
undefined8 * FUN_100d8f110(undefined8 *param_1)

{
  QArrayData *pQVar1;
  AnonymousUnion0 local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("/var/log/install.log",0x14);
  local_38 = pQVar1;
  FUN_1000341d0(param_1,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d8f17c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d8f17c:
  if (DAT_10230ffd0 < 3) {
    return param_1;
  }
  pQVar1 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_48.field0,(QChar *)param_1,
             (int)*(undefined8 *)(pQVar1 + 0x10) + (int)pQVar1);
  QString::toUtf8();
  FUN_100df99c0("","cmn_utils",3,"installation log pathes == %s",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d8f21d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100d8f21d:
  if (*(int *)local_48.field1 != -1) {
    if (*(int *)local_48.field1 != 0) {
      LOCK();
      *(int *)local_48.field1 = *(int *)local_48.field1 + -1;
      local_29 = *(int *)local_48.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d8f24d;
    }
    QArrayData::deallocate((QArrayData *)local_48.field1,2,8);
  }
LAB_100d8f24d:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return param_1;
}

