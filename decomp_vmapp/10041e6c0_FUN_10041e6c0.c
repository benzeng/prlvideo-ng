
undefined8 FUN_10041e6c0(long param_1,long param_2)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  QString local_40;
  undefined1 local_32;
  
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  *(long *)(param_1 + 0x640) = param_2;
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::setNum((ulonglong)&local_40,*(int *)(param_2 + 0x18));
  lVar1 = *(long *)(*(long *)(param_1 + 0x658) + 0x10);
  if (lVar1 != 0) {
    lVar6 = 0;
    do {
      while (lVar5 = lVar1, cVar2 = operator<((QString *)(lVar5 + 0x18),&local_40), cVar2 == '\0') {
        lVar1 = *(long *)(lVar5 + 8);
        lVar6 = lVar5;
        if (*(long *)(lVar5 + 8) == 0) goto LAB_10041e776;
      }
      lVar1 = *(long *)(lVar5 + 0x10);
    } while (*(long *)(lVar5 + 0x10) != 0);
    lVar5 = lVar6;
    if (lVar6 != 0) {
LAB_10041e776:
      cVar2 = operator<(&local_40,(QString *)(lVar5 + 0x18));
      if (cVar2 == '\0') {
        puVar4 = (undefined8 *)FUN_10041ef70(param_1 + 0x658,&local_40);
        pcVar3 = (char *)*puVar4;
        goto LAB_10041e7c3;
      }
    }
  }
  pcVar3 = operator_new(8);
  *(undefined **)pcVar3 = PTR_shared_null_100ba20d0;
  puVar4 = (undefined8 *)FUN_10041ef70(param_1 + 0x658,&local_40);
  *puVar4 = pcVar3;
LAB_10041e7c3:
  QByteArray::append(pcVar3,(int)param_2 + 0xa0);
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return 1;
      }
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return 1;
}

