
void FUN_1007eec00(long param_1)

{
  QString *pQVar1;
  undefined *puVar2;
  long lVar3;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022078f0);
  if (lVar3 == 0) {
    return;
  }
  pQVar1 = *(QString **)(param_1 + 0x30);
  QMetaObject::tr((char *)&local_40,"",0x1e19bf1);
  FUN_1002a0af0(&local_48,lVar3);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007eecba;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007eecba:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007eecea;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007eecea:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007eed1a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007eed1a:
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_shared_null_1021e1288;
  CAbstractProgressOperation::setDescription(*(QString **)(param_1 + 0x30));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007eed70;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1007eed70:
  if (*(char *)(param_1 + 0x39) != '\x01') {
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_100867e50(*(undefined8 *)(param_1 + 0x10),1);
  }
  return;
}

