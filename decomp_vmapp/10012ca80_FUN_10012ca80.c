
undefined4 FUN_10012ca80(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_finish_backup_action",0x27);
  local_30 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_30,0);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10012cae4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10012cae4:
  uVar2 = 0;
  if (cVar1 != '\0') {
    pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_delete_snapshot_finish_backup_action",0x27)
    ;
    local_38 = pQVar3;
    uVar2 = FUN_10011d510(param_1,&local_38);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_21 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_21) {
          return uVar2;
        }
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  return uVar2;
}

