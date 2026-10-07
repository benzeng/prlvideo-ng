
undefined8 FUN_1005bd5e0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  byte extraout_DL;
  undefined8 uVar3;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  pQVar2 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  local_48 = pQVar1;
  local_40 = pQVar2;
  FUN_1005d6500(param_1 + 0x70,&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd6c6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005bd6c6:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd6f6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005bd6f6:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd721;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005bd721:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd74e;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005bd74e:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd779;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1005bd779:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005bd7a6;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005bd7a6:
  if ((extraout_DL & 1) == 0) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Error: duplicate UID \'%s\' entry!",
                  local_50 + *(long *)(local_50 + 0x10));
    uVar3 = 0x80021006;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005bd839;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
  else {
    uVar3 = 0;
    FUN_1005bdbb0(param_1 + 0x20,param_1 + 0x38,param_2,param_3);
  }
LAB_1005bd839:
  QMutex::unlock();
  return uVar3;
}

