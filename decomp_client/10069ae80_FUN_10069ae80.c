
void FUN_10069ae80(long param_1)

{
  char cVar1;
  void *pvVar2;
  QArrayData *local_28;
  undefined1 local_19;
  
  FUN_100188480(&local_28,*(undefined8 *)(param_1 + 0x28));
  if (DAT_102310838 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1000392c0(pvVar2);
    DAT_102274b18 = 1;
    DAT_102310838 = pvVar2;
  }
  pvVar2 = DAT_102310838;
  cVar1 = FUN_100039390(DAT_102310838,&local_28);
  if (cVar1 == '\0') {
    FUN_100039320(pvVar2,&local_28);
  }
  else {
    FUN_100039330(pvVar2,&local_28);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

