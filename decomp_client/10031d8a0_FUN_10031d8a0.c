
void FUN_10031d8a0(long param_1,char param_2)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  int local_30;
  undefined1 local_29;
  
  FUN_10031c7c0(param_1,0);
  piVar1 = *(int **)(param_1 + 0x168);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_29) && (pvVar2 = *(void **)(param_1 + 0x168), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  cVar3 = FUN_10031b640(param_1,0);
  if ((param_2 == '\0') && (cVar3 == '\x01')) {
    return;
  }
  local_30 = 0;
  cVar3 = FUN_10033fc40(*(undefined8 *)(param_1 + 0xd8),&local_30,0);
  iVar4 = local_30;
  if (cVar3 == '\0') {
    iVar4 = 1;
    if ((((*(long *)(param_1 + 0x150) == 0) || (*(int *)(*(long *)(param_1 + 0x150) + 4) == 0)) ||
        (*(long *)(param_1 + 0x158) == 0)) || (cVar3 = CAbstractTask::isFinished(), cVar3 != '\0'))
    goto LAB_10031d9a8;
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x150) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x158);
    }
    iVar4 = FUN_100224f70(uVar5);
  }
  if (iVar4 == 3) {
    cVar3 = FUN_100330ac0(*(undefined8 *)(param_1 + 0x98));
    if (cVar3 != '\0') {
      return;
    }
    iVar4 = 1;
    if (param_2 != '\0') {
      iVar4 = 1;
      FUN_100330c70(*(undefined8 *)(param_1 + 0x98),1,1);
    }
  }
LAB_10031d9a8:
  local_48 = 3;
  local_40 = 0;
  local_44 = 0;
  local_3c = 0xffff;
  local_38 = 0;
  local_34 = 0;
  FUN_10033f580(*(undefined8 *)(param_1 + 0xd8),iVar4,&local_48);
  return;
}

