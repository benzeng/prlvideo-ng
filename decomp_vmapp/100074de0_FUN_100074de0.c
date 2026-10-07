
void FUN_100074de0(long param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  QArrayData *local_48;
  long *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QMutex::lock();
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x1ab8) == '\0') {
    FUN_1008e3970("","vm",0,"Error: VM refused new client connection. Client will be disconnected");
    plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
    (**(code **)(*plVar3 + 0x118))(plVar3,param_2);
    goto LAB_100074f54;
  }
  *(int *)(lVar1 + 0x1abc) = *(int *)(lVar1 + 0x1abc) + 1;
  FUN_1002af430(*(undefined8 *)(lVar1 + 0x1a38));
  local_38 = (QArrayData *)*param_2;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
  local_40 = param_3;
  FUN_100072e30(param_1,&local_38,&local_40);
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar3 = param_3 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100074ec6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100074ec6:
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_48 = (QArrayData *)*param_2;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_29 = *(int *)local_48 != 0;
    UNLOCK();
  }
  FUN_10009f990(uVar2,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100074f54;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100074f54:
  QMutex::unlock();
  return;
}

