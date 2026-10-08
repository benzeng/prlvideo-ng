
undefined8 * FUN_1000466a0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if ((DAT_102311dc8 != '\0') || (iVar2 = ___cxa_guard_acquire(&DAT_102311dc8), iVar2 == 0))
  goto LAB_1000467f9;
  local_30 = (QArrayData *)QString::fromLatin1_helper("%1.%2.%3",8);
  QString::arg(&local_28,&local_30,0xc,0,10,0x20);
  QString::arg(&local_20,&local_28,0xa28f,0,10,0x20);
  QString::arg(&DAT_102311dc0,&local_20,0,0,10,0x20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100046773;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_100046773:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000467a3;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1000467a3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1000467d3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1000467d3:
  ___cxa_atexit(FUN_100054e40,&DAT_102311dc0,0x100000000);
  ___cxa_guard_release(&DAT_102311dc8);
LAB_1000467f9:
  piVar1 = DAT_102311dc0;
  *param_1 = DAT_102311dc0;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

