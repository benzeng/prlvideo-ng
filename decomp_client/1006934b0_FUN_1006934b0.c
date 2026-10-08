
void FUN_1006934b0(long param_1,undefined8 param_2)

{
  int iVar1;
  Node *pNVar2;
  long *plVar3;
  Node *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_28 = param_2;
  FUN_100693dd0(&local_30,param_1 + 0x10,&local_28);
  iVar1 = *(int *)(local_30 + 0x20);
  if (iVar1 != 0) {
    plVar3 = *(long **)(local_30 + 8);
    do {
      pNVar2 = (Node *)*plVar3;
      if (pNVar2 != local_30) goto LAB_100693500;
      iVar1 = iVar1 + -1;
      plVar3 = plVar3 + 1;
    } while (iVar1 != 0);
  }
LAB_100693522:
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pNVar2 = local_30 + 0x10;
      *(int *)pNVar2 = *(int *)pNVar2 + -1;
      local_19 = *(int *)pNVar2 != 0;
      UNLOCK();
      if ((bool)local_19) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_30);
  }
  return;
LAB_100693500:
  do {
    if (*(long **)(pNVar2 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(pNVar2 + 0x10) + 0x20))();
    }
    pNVar2 = (Node *)QHashData::nextNode(pNVar2);
  } while (pNVar2 != local_30);
  goto LAB_100693522;
}

