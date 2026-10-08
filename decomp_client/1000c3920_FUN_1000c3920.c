
void FUN_1000c3920(long param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 == -1) {
      return;
    }
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    uVar5 = 1;
    local_48 = local_40;
    goto LAB_1000c3ca7;
  }
  FUN_10018d830(&local_48,lVar3);
  FUN_10003ffa0(&local_58,&local_48);
  FUN_1000463e0(&local_50,&local_58,param_1 + 0x10,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c39b2;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000c39b2:
  uVar1 = QDir::separator();
  local_70 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(uint *)local_70 + 1) {
    LOCK();
    *(uint *)local_70 = *(uint *)local_70 + 1;
    local_29 = *(uint *)local_70 != 0;
    UNLOCK();
  }
  uVar4 = *(uint *)(local_70 + 4);
  if ((1 < *(uint *)local_70) || ((*(uint *)(local_70 + 8) & 0x7fffffff) < uVar4 + 2)) {
    QString::reallocData((uint)&local_70,SUB41(uVar4 + 2,0));
    uVar4 = *(uint *)(local_70 + 4);
  }
  *(uint *)(local_70 + 4) = uVar4 + 1;
  *(undefined2 *)(local_70 + (long)(int)uVar4 * 2 + *(long *)(local_70 + 0x10)) = uVar1;
  *(undefined2 *)(local_70 + (long)(int)*(uint *)(local_70 + 4) * 2 + *(long *)(local_70 + 0x10)) =
       0;
  if (1 < *(uint *)local_70 + 1) {
    LOCK();
    *(uint *)local_70 = *(uint *)local_70 + 1;
    local_29 = *(uint *)local_70 != 0;
    UNLOCK();
  }
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_70;
  QString::append(&local_68);
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(uint *)local_68.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_68.field0_0x0 = *(uint *)local_68.field0_0x0 + 1;
    local_29 = *(uint *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1db674c);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3ab5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000c3ab5:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3ae5;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1000c3ae5:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3b15;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1000c3b15:
  FUN_1000d8020(param_1,&local_50,&local_48,&local_60);
  FUN_10018d860(&local_80,lVar3);
  FUN_1000d81b0(&local_78,&local_48,&local_80);
  QString::operator=(&local_60,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3b83;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000c3b83:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3bb3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1000c3bb3:
  FUN_1000d8020(param_1,&local_50,&local_48,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3bf7;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000c3bf7:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000c3c27;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1000c3c27:
  if (*(int *)local_48 == -1) {
    return;
  }
  if (*(int *)local_48 != 0) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + -1;
    UNLOCK();
    if (*(int *)local_48 != 0) {
      return;
    }
    local_29 = 0;
  }
  uVar5 = 2;
LAB_1000c3ca7:
  QArrayData::deallocate(local_48,uVar5,8);
  return;
}

