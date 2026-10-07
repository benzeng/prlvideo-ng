
void FUN_1003f67b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5
                  )

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  FUN_1003f6300(&local_40,param_1,param_2);
  plVar3 = local_40;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  if ((local_40 == (long *)0x0) || (local_40[2] == 0)) {
    FUN_1003f6160(&local_50,param_1,param_2);
    if (local_50 != (long *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_40 = local_50;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar3 = (long *)0x0;
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plVar3 = local_50;
      if ((int)lVar4 == 1) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  lVar4 = 0;
  if (param_5 == 10) {
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[2];
    }
    uVar2 = QString::sprintf((char *)&local_48,"%d",(ulong)param_4);
    FUN_1003f7f40(lVar4,param_3,uVar2);
  }
  else {
    if (plVar3 != (long *)0x0) {
      lVar4 = plVar3[2];
    }
    uVar2 = QString::sprintf((char *)&local_48,"0x%08x",(ulong)param_4);
    FUN_1003f7f40(lVar4,param_3,uVar2);
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003f6904;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003f6904:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return;
}

