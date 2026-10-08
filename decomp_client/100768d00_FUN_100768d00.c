
void FUN_100768d00(long param_1)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
  uVar3 = FUN_1007637b0(*(undefined8 *)(param_1 + 0x38),3);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100763140(uVar3,uVar4);
  if (lVar2 < 1) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_1007669f0(*(undefined8 *)(param_1 + 0x58));
    bVar1 = bVar1 ^ 1;
  }
  FUN_100763120(uVar3,bVar1);
  QMetaObject::tr((char *)&local_30,"",0x1e154bd);
  FUN_1007630d0(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768dc9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100768dc9:
  if (lVar2 < 1) {
    QMetaObject::tr((char *)&local_58,"",0x1e15496);
    FUN_100763030(uVar3,&local_58);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100768f5d;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100768f5d:
    QMetaObject::tr((char *)&local_60,"",0x1e158ca);
    FUN_100763080(uVar3,&local_60);
    if (*(int *)local_60 == -1) {
      return;
    }
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_21 = 0;
    }
    goto LAB_100768fab;
  }
  QMetaObject::tr((char *)&local_40,"",0x1e15899);
  FUN_100def650(&local_48,lVar2,1);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  FUN_100763030(uVar3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768e57;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100768e57:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768e87;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100768e87:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100768eb7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100768eb7:
  local_50 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_100763080(uVar3,&local_50);
  if (*(int *)local_50 == -1) {
    return;
  }
  local_60 = local_50;
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return;
    }
    local_21 = 0;
  }
LAB_100768fab:
  QArrayData::deallocate(local_60,2,8);
  return;
}

