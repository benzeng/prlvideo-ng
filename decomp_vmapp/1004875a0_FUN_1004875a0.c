
undefined4
FUN_1004875a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  QArrayData *pQVar5;
  long *local_50;
  QArrayData *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_100ba20d0;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("FAKE_SESSION_UUID",0x11);
  param_5 = (long *)*param_5;
  if (param_5 != (long *)0x0) {
    LOCK();
    *(int *)(param_5 + 1) = (int)param_5[1] + 1;
    UNLOCK();
  }
  local_50 = param_5;
  local_48 = pQVar5;
  uVar4 = FUN_100486cb0(param_1,&local_48,param_2,param_3,param_4,0x3800,&local_50,&local_40,
                        FUN_100487780,2);
  if (param_5 != (long *)0x0) {
    LOCK();
    plVar1 = param_5 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_5 + 0x10))(param_5);
    }
  }
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100487689;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100487689:
  puVar3 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return uVar4;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
  return uVar4;
}

