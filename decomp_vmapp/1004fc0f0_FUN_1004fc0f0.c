
undefined8 *
FUN_1004fc0f0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 local_88;
  QString local_80;
  undefined1 local_78 [16];
  QString local_68;
  QString local_60;
  long *local_58;
  int *local_50;
  undefined8 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar4 = QString::compare(param_3,param_2 + 0x30,1);
  if (iVar4 != 0) {
    FUN_1004d9f80(&local_48,param_2,param_3,param_4,param_5);
    *param_1 = local_48;
    return param_1;
  }
  FUN_1004fc830(&local_50,param_2,param_3,param_4,param_5);
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0xa02eac);
  QString::append(&local_68);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fc1ce;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004fc1ce:
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_31 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  FUN_1004d9f80(&local_58,param_2,&local_60,param_4,param_5);
  plVar2 = local_58;
  local_58 = (long *)0x0;
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fc249;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004fc249:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fc280;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1004fc280:
  local_78._8_4_ = (int)PTR_shared_null_100ba20d0;
  local_78._0_8_ = PTR_shared_null_100ba20d0;
  local_78._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  while (cVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,local_78), cVar3 != '\0') {
    local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QMutex::lock();
    lVar5 = FUN_100502100((long *)(param_2 + 0x20),local_78 + 8);
    if (*(long *)(param_2 + 0x20) == lVar5) {
      QMutex::unlock();
      FUN_1005021e0(&local_50,local_78);
    }
    else {
      QString::operator=(&local_80,(QString *)(lVar5 + 0x18));
      QMutex::unlock();
    }
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fc354;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_1004fc354:
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*(int *)local_78._8_8_ != -1) {
    if (*(int *)local_78._8_8_ != 0) {
      LOCK();
      *(int *)local_78._8_8_ = *(int *)local_78._8_8_ + -1;
      local_31 = *(int *)local_78._8_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fc3a4;
    }
    QArrayData::deallocate((QArrayData *)local_78._8_8_,2,8);
  }
LAB_1004fc3a4:
  if (*(int *)local_78._0_8_ != -1) {
    if (*(int *)local_78._0_8_ != 0) {
      LOCK();
      *(int *)local_78._0_8_ = *(int *)local_78._0_8_ + -1;
      local_31 = *(int *)local_78._0_8_ != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fc3d4;
    }
    QArrayData::deallocate((QArrayData *)local_78._0_8_,2,8);
  }
LAB_1004fc3d4:
  FUN_1004dd650(&local_88,&local_50);
  uVar1 = local_88;
  local_88 = 0;
  *param_1 = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  if (*local_50 != -1) {
    if (*local_50 != 0) {
      LOCK();
      *local_50 = *local_50 + -1;
      UNLOCK();
      if (*local_50 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_1005026c0(&local_50,local_50);
  }
  return param_1;
}

