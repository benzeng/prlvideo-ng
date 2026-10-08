
void FUN_1007ec4b0(long param_1,char param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x39) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x39) = param_2;
  if (param_2 != '\0') goto LAB_1007ec594;
  pQVar1 = *(QString **)(param_1 + 0x30);
  QMetaObject::tr((char *)&local_30,"",0x1e19a47);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007ec53e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007ec53e:
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_shared_null_1021e1288;
  CAbstractProgressOperation::setDescription(*(QString **)(param_1 + 0x30));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007ec594;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1007ec594:
  FUN_100867e50(*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x39));
  return;
}

