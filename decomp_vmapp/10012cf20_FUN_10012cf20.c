
undefined1 FUN_10012cf20(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_name",0x17);
  local_40 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_40,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
    goto LAB_10012d0d9;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_description",0x1e);
  local_48 = pQVar4;
  cVar1 = FUN_10011d720(param_1,&local_48,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_uuid",0x17);
    local_50 = pQVar5;
    cVar1 = FUN_10011d720(param_1,&local_50,1);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      pQVar6 = (QArrayData *)QString::fromAscii_helper("vm_create_snapshot_creator",0x1a);
      local_58 = pQVar6;
      cVar1 = FUN_10011d720(param_1,&local_58,1);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_10011ed70(param_1);
      }
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10012d07f;
        }
        QArrayData::deallocate(pQVar6,2,8);
      }
    }
LAB_10012d07f:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10012d0ac;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_10012d0ac:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012d0d9;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10012d0d9:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

