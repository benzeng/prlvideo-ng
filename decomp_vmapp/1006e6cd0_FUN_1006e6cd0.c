
QChar * FUN_1006e6cd0(QChar *param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *(undefined **)param_1 = PTR_shared_null_100ba2188;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("/var/log/install.log",0x14);
  local_38 = pQVar1;
  FUN_10000c490(param_1,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e6d3c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1006e6d3c:
  if (DAT_1011b55f8 < 3) {
    return param_1;
  }
  pQVar1 = (QArrayData *)QString::fromAscii_helper("\n",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_48,param_1,(int)*(undefined8 *)(pQVar1 + 0x10) + (int)pQVar1);
  QString::toUtf8();
  FUN_1008e3970("","cmn_utils",3,"installation log pathes == %s",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e6ddd;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1006e6ddd:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e6e0d;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006e6e0d:
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

