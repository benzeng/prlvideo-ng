
undefined8 FUN_100799de0(undefined8 param_1,long param_2)

{
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100def650(&local_28,*(undefined8 *)(param_2 + 8),1);
  FUN_100def650(&local_30,*(undefined8 *)(param_2 + 0x10),1);
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1dda878);
  QString::arg(&local_40,&local_38,&local_28,0,0x20);
  QString::arg(param_1,&local_40,&local_30,0,0x20);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100799e95;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100799e95:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100799ec5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100799ec5:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100799ef5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100799ef5:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

