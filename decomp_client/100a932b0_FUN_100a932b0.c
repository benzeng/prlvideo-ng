
undefined8 * FUN_100a932b0(undefined8 *param_1,long param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  *param_1 = PTR_shared_null_1021e15e8;
  pNVar1 = *(Node **)(param_2 + 0x90);
  iVar3 = *(int *)(pNVar1 + 0x20);
  pNVar2 = pNVar1;
  if (iVar3 != 0) {
    plVar4 = *(long **)(pNVar1 + 8);
    do {
      pNVar2 = (Node *)*plVar4;
      if ((Node *)*plVar4 != pNVar1) break;
      iVar3 = iVar3 + -1;
      plVar4 = plVar4 + 1;
      pNVar2 = pNVar1;
    } while (iVar3 != 0);
  }
  if (pNVar2 != pNVar1) {
    do {
      uVar5 = 0;
      if (*(long *)(pNVar2 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(pNVar2 + 0x18) + 0x10);
      }
      FUN_100a77860(&local_40,uVar5);
      if (*(int *)(local_40 + 4) != 0) {
        FUN_1000341d0(param_1,&local_40);
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a9337f;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a9337f:
      pNVar2 = (Node *)QHashData::nextNode(pNVar2);
    } while (pNVar2 != *(Node **)(param_2 + 0x90));
  }
  QMutex::unlock();
  return param_1;
}

