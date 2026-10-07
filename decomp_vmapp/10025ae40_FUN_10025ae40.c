
void FUN_10025ae40(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_100baea50;
  param_1[1] = param_2;
  QMutex::QMutex((QMutex *)(param_1 + 2),0);
  param_1[3] = 0;
  uVar3 = (**(code **)(*param_2 + 0x68))(param_2);
  lVar5 = param_1[1];
  local_50 = (QArrayData *)QString::fromAscii_helper("Hardware",8);
  CBaseNode::ElementToString((CBaseNode *)&local_48,(QString *)(lVar5 + 0x10));
  FUN_100259440(&local_40,uVar3,&local_48);
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar2 = (long *)param_1[3];
  param_1[3] = local_40;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025af57;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10025af57:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10025af87;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10025af87:
  uVar3 = (**(code **)(*(long *)param_1[1] + 0x68))();
  uVar4 = CVmDevice::getIndex();
  uVar3 = FUN_1002a4d90(&DAT_1011c3e48,uVar3,uVar4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  QMutex::lock();
  plVar2 = (long *)param_1[1];
  lVar5 = (**(code **)(*plVar2 + 0x68))(plVar2);
  local_58 = (long)(int)plVar2[0xd] | lVar5 << 0x20;
  puVar6 = (undefined8 *)FUN_10025c5d0(&DAT_1011c37d0,&local_58);
  *puVar6 = param_1;
  QMutex::unlock();
  return;
}

