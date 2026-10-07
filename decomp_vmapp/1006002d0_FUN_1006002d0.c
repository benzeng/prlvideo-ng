
undefined8 * FUN_1006002d0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  char cVar2;
  long *plVar3;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_100ba20d0;
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  plVar3 = (long *)0x0;
  if (*param_2 != 0) {
    plVar3 = *(long **)(*param_2 + 0x10);
  }
  cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,&local_30);
  if (cVar2 == '\0') {
    FUN_1008e3970("Backup","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "BackupFileListBuilder.cpp",0x35d,"diskDscrCopyPath");
    *param_1 = puVar1;
    goto LAB_1006003b9;
  }
  QString::fromUtf8_helper((char *)&local_28,0xa4eb09);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10060035a;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10060035a:
  *param_1 = local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_19 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
LAB_1006003b9:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

