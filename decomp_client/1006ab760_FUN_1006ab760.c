
undefined8 FUN_1006ab760(undefined8 param_1)

{
  int iVar1;
  void *pvVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1e0f240);
  FUN_1001c72e0(&local_40);
  QString::arg(&local_38,&local_30,&local_40,0,0x20);
  if (DAT_102310990 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006ea620(pvVar2);
    DAT_102273501 = 1;
    DAT_102310990 = pvVar2;
  }
  iVar1 = FUN_1006ea680(DAT_102310990);
  QString::arg(param_1,&local_38,(long)iVar1,0,10,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006ab834;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006ab834:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006ab864;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ab864:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

