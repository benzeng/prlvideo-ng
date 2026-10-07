
undefined8 * FUN_10012d650(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_backup_params",0x20);
  local_38 = pQVar2;
  cVar1 = FUN_10011d720(param_2,&local_38,1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012d6bc;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10012d6bc:
  if (cVar1 == '\0') {
    *param_1 = PTR_shared_null_100ba20d0;
  }
  else {
    pQVar2 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_backup_params",0x20);
    local_40 = pQVar2;
    FUN_10011cdb0(param_1,param_2,&local_40);
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_29 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_29) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar2,2,8);
    }
  }
  return param_1;
}

