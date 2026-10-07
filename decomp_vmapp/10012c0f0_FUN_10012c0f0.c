
void FUN_10012c0f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,int param_6)

{
  QArrayData *pQVar1;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011fac0(param_1,0x40a,param_2,0);
  *param_1 = &PTR_FUN_100baad78;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_uuid",0x17);
  local_40 = pQVar1;
  FUN_10011da30(param_1,param_3,&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012c17b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012c17b:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_child_sign",0x1d);
  local_48 = pQVar1;
  FUN_10011cae0(param_1,param_4,&local_48);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012c1ce;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10012c1ce:
  if (param_6 != 0) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_finish_backup_action",0x27)
    ;
    local_50 = pQVar1;
    FUN_10011cae0(param_1,param_6,&local_50);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) {
          return;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return;
}

