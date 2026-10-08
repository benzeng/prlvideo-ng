
void FUN_1007ec330(long param_1,char param_2)

{
  QString *pQVar1;
  undefined *puVar2;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(char *)(param_1 + 0x38) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x38) = param_2;
  if ((param_2 == '\0') || (*(char *)(param_1 + 0x39) != '\0')) goto LAB_1007ec41e;
  pQVar1 = *(QString **)(param_1 + 0x30);
  QMetaObject::tr((char *)&local_30,"",0x1e19a47);
  CAbstractProgressOperation::setName(pQVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007ec3c8;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007ec3c8:
  CAbstractProgressOperation::setProgress((int)*(undefined8 *)(param_1 + 0x30));
  puVar2 = PTR_shared_null_1021e1288;
  CAbstractProgressOperation::setDescription(*(QString **)(param_1 + 0x30));
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_21 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007ec41e;
    }
    QArrayData::deallocate((QArrayData *)puVar2,2,8);
  }
LAB_1007ec41e:
  FUN_100867e00(*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x38));
  return;
}

