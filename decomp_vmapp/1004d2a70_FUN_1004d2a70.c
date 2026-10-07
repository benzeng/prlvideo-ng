
undefined8 * FUN_1004d2a70(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  Node *pNVar2;
  long lVar3;
  int iVar4;
  Node *pNVar5;
  long *plVar6;
  undefined4 local_48 [2];
  long *local_40;
  
  *param_1 = PTR_shared_null_100ba2188;
  QMutex::lock();
  pNVar2 = *(Node **)(param_2 + 0x20);
  iVar4 = *(int *)(pNVar2 + 0x20);
  pNVar5 = pNVar2;
  if (iVar4 != 0) {
    plVar6 = *(long **)(pNVar2 + 8);
    do {
      pNVar5 = (Node *)*plVar6;
      if ((Node *)*plVar6 != pNVar2) break;
      iVar4 = iVar4 + -1;
      plVar6 = plVar6 + 1;
      pNVar5 = pNVar2;
    } while (iVar4 != 0);
  }
  for (; pNVar5 != pNVar2; pNVar5 = (Node *)QHashData::nextNode(pNVar5)) {
    local_48[0] = *(undefined4 *)(pNVar5 + 0xc);
    plVar6 = *(long **)(pNVar5 + 0x10);
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_40 = plVar6;
    if (plVar6[2] == param_3) {
      FUN_1004d7150(param_1,local_48);
    }
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  QMutex::unlock();
  return param_1;
}

