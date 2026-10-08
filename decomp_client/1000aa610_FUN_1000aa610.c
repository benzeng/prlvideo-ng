
undefined8 FUN_1000aa610(undefined8 param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  CVmEventParameter::getData();
  if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_30,*(uint *)(local_30 + 4) + 1,*(uint *)(local_30 + 8) >> 0x1f);
  }
  pQVar1 = local_30 + *(long *)(local_30 + 0x10);
  if (pQVar1 != (QArrayData *)0x0) {
    _strlen((char *)pQVar1);
  }
  QString::fromUtf8_helper((char *)&local_28,(int)pQVar1);
  QString::normalized(param_1,&local_28,1,0);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1000aa6b4;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000aa6b4:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return param_1;
}

