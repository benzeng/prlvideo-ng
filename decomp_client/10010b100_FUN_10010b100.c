
undefined8 *
FUN_10010b100(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  if ((*(int *)(*param_3 + 4) == 0) || (*(int *)(*param_4 + 4) == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (*(int *)(*param_2 + 4) != 0) {
    QDir::fromNativeSeparators(&local_40);
    QString::operator=(&local_38,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10010b18f;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_10010b18f:
    cVar1 = QString::endsWith(&local_38,0x2f,1);
    if (cVar1 == '\0') {
      QString::append(&local_38,0x2f);
    }
  }
  QString::QString(&local_48,0x2d);
  local_70.field0_0x0 = local_38.field0_0x0;
  if (1 < *(uint *)local_38.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_38.field0_0x0 = *(uint *)local_38.field0_0x0 + 1;
    local_29 = *(uint *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_70);
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(uint *)local_70.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_70.field0_0x0 = *(uint *)local_70.field0_0x0 + 1;
    local_29 = *(uint *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  QString::number((uint)&local_78,param_5);
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(uint *)local_68.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_68.field0_0x0 = *(uint *)local_68.field0_0x0 + 1;
    local_29 = *(uint *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  local_58 = (QArrayData *)local_60.field0_0x0;
  if (1 < *(uint *)local_60.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_60.field0_0x0 = *(uint *)local_60.field0_0x0 + 1;
    local_29 = *(uint *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_60.field0_0x0 + 4);
  if ((1 < *(uint *)local_60.field0_0x0) ||
     ((*(uint *)(local_60.field0_0x0 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_58,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_58 + 4);
  }
  *(uint *)(local_58 + 4) = uVar2 + 1;
  *(undefined2 *)(local_58 + (long)(int)uVar2 * 2 + *(long *)(local_58 + 0x10)) = 0x2e;
  *(undefined2 *)(local_58 + (long)(int)*(uint *)(local_58 + 4) * 2 + *(long *)(local_58 + 0x10)) =
       0;
  if (1 < *(uint *)local_58 + 1) {
    LOCK();
    *(uint *)local_58 = *(uint *)local_58 + 1;
    local_29 = *(uint *)local_58 != 0;
    UNLOCK();
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  QString::append(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b305;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10010b305:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b335;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10010b335:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b365;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10010b365:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b395;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10010b395:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b3c5;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10010b3c5:
  *param_1 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b40d;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10010b40d:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10010b43d;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10010b43d:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
  return param_1;
}

