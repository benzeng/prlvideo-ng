
undefined1 FUN_100093e10(undefined8 param_1,long *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  uint uVar7;
  long *local_60;
  long *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  uVar7 = param_3 == 0 | 0xbd0;
  lVar6 = DAT_1011c3650 + 0x18;
  uVar2 = (**(code **)(*param_2 + 0x68))(param_2);
  uVar3 = CVmDevice::getIndex();
  CBaseNode::toString(SUB81(&local_48,0),(bool)((char)param_2 + '\x10'));
  FUN_100118d80(&local_40,uVar7,lVar6,uVar2,uVar3,&local_48,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100093ebf;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100093ebf:
  lVar6 = DAT_1011c3650;
  FUN_10011cf50(&local_58);
  cVar5 = '\0';
  if (local_58 != (long *)0x0) {
    cVar5 = (char)local_58[2];
  }
  CBaseNode::toString(SUB81(&local_50,0),(bool)(cVar5 + '\b'));
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_60 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = 0;
    *plVar4 = (long)&PTR_FUN_100bef0d0;
    local_60 = plVar4;
  }
  uVar1 = FUN_100063e20(lVar6,&local_50,uVar7,&local_60,0);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100093fa2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100093fa2:
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar1;
}

