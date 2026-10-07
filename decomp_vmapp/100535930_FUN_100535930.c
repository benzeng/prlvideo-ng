
undefined1 FUN_100535930(long param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined4 local_30;
  undefined1 local_29;
  
  cVar2 = FUN_100535c30(param_1,param_2,&local_30);
  if (cVar2 == '\0') {
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",0,"failed to mount \"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 == -1) {
      return 0;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
    return 0;
  }
  FUN_100535e80(&local_40,*(long *)(param_1 + 0x40) + 0x30,local_30,param_2);
  QString::operator=(param_3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005359ae;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1005359ae:
  if (*(int *)(param_3->field0_0x0 + 4) == 0) {
    if (DAT_1011b55f8 < 1) {
      return 0;
    }
    FUN_1008e3970("","InvSharingHost",1,"getHostPath() failed");
    return 0;
  }
  if (DAT_1011b55f8 < 2) {
    return 1;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  FUN_1008e3970("","InvSharingHost",2,"\"%s\" is accessible as \"%s\"",local_48 + lVar1,
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100535a50;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100535a50:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return 1;
}

