
void * FUN_1003f7b20(long *param_1)

{
  char cVar1;
  void *pvVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(int *)(*param_1 + 4) == 0) {
    return (void *)0x0;
  }
  pvVar2 = operator_new(0x18);
  local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1003f5b60(pvVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003f7b98;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003f7b98:
  local_30 = (QArrayData *)*param_1;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_19 = *(int *)local_30 != 0;
    UNLOCK();
  }
  cVar1 = FUN_1003f5d30(pvVar2,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003f7bee;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003f7bee:
  if (cVar1 == '\0') {
    FUN_1003ecf00(pvVar2);
    operator_delete(pvVar2);
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

