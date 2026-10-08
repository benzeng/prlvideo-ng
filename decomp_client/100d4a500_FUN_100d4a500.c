
int FUN_100d4a500(long param_1,QString *param_2)

{
  char *pcVar1;
  int iVar2;
  QArrayData *local_48;
  QString local_40;
  char *local_38;
  undefined1 local_29;
  
  local_38 = (char *)0x0;
  iVar2 = _PrlVm_ToString(*(undefined8 *)(param_1 + 8),&local_38);
  pcVar1 = local_38;
  if (iVar2 < 0) {
    FUN_100df99c0("","PrlSdkUtils",0,"TR00055.23:\t0x%x",iVar2);
    return iVar2;
  }
  if (local_38 != (char *)0x0) {
    _strlen(local_38);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar1);
  QString::normalized(&local_40,&local_48,1,0);
  QString::operator=(param_2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4a5aa;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100d4a5aa:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return iVar2;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return iVar2;
}

