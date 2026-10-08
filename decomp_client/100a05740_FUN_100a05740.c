
void FUN_100a05740(long *param_1,QString *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_2);
  QFileInfo::completeBaseName();
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::append(&local_58);
  local_50 = (QArrayData *)local_58.field0_0x0;
  if (1 < *(uint *)local_58.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_58.field0_0x0 = *(uint *)local_58.field0_0x0 + 1;
    local_31 = *(uint *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  uVar1 = *(uint *)(local_58.field0_0x0 + 4);
  if ((1 < *(uint *)local_58.field0_0x0) ||
     ((*(uint *)(local_58.field0_0x0 + 8) & 0x7fffffff) < uVar1 + 2)) {
    QString::reallocData((uint)&local_50,SUB41(uVar1 + 2,0));
    uVar1 = *(uint *)(local_50 + 4);
  }
  *(uint *)(local_50 + 4) = uVar1 + 1;
  *(undefined2 *)(local_50 + (long)(int)uVar1 * 2 + *(long *)(local_50 + 0x10)) = 0x2e;
  *(undefined2 *)(local_50 + (long)(int)*(uint *)(local_50 + 4) * 2 + *(long *)(local_50 + 0x10)) =
       0;
  QFileInfo::suffix();
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_50;
  if (1 < *(uint *)local_50 + 1) {
    LOCK();
    *(uint *)local_50 = *(uint *)local_50 + 1;
    local_31 = *(uint *)local_50 != 0;
    UNLOCK();
  }
  QString::append(&local_48);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0586a;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100a0586a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0589a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100a0589a:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a058ca;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100a058ca:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a058fa;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100a058fa:
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_48);
  }
  else {
    (**(code **)(*param_1 + 0x60))(param_1,param_2,&local_48,param_4);
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a0595c;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100a0595c:
  QFileInfo::~QFileInfo(local_40);
  return;
}

