
undefined1 FUN_10012d9e0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_update_snapshot_data_uuid",0x1c);
  local_38 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_38,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_10012db2e;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("vm_update_snapshot_data_name",0x1c);
  local_40 = pQVar4;
  cVar1 = FUN_10011d720(param_1,&local_40,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("vm_update_snapshot_data_description",0x23);
    local_48 = pQVar5;
    cVar1 = FUN_10011d720(param_1,&local_48,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_10011ed70(param_1);
    }
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_29 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10012db01;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_10012db01:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10012db2e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012db2e:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

