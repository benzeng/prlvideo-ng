
long * FUN_10031b110(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM instance.");
    return (long *)0x0;
  }
  iVar1 = FUN_10018bce0();
  if (iVar1 != 3) {
    return (long *)0x0;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_100188480(&local_30,uVar3);
  plVar2 = (long *)FUN_10025b810(&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031b1b2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10031b1b2:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x80))(plVar2);
    return plVar2;
  }
  uVar3 = FUN_100152280();
  local_38 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
  }
  uVar3 = FUN_1001547d0(uVar3,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10031b250;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10031b250:
  plVar2 = operator_new(0x100);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_10025b440(plVar2,uVar3,0,uVar4);
  CAbstractTask::execute();
  return plVar2;
}

