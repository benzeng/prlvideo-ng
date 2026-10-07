
void FUN_10003c420(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  Data *local_38;
  undefined1 local_29;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("COOKIE","vm",3,"notifyLicenseUpdated");
  }
  local_38 = (Data *)PTR_shared_null_100ba2188;
  QMutex::lock();
  FUN_1000373c0(&local_38,param_1 + 0x30);
  FUN_100036f60(param_1 + 0x30);
  QMutex::unlock();
  iVar2 = *(int *)(local_38 + 0xc) - *(int *)(local_38 + 8);
  while (0 < iVar2) {
    iVar2 = iVar2 + -1;
    puVar1 = (undefined8 *)FUN_10003c6b0(&local_38,iVar2);
    FUN_1004c07d0(param_1,*puVar1,0xf0000020);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_38);
  }
  return;
}

