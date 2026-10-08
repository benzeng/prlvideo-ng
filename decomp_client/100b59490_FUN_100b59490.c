
void FUN_100b59490(void)

{
  Node *pNVar1;
  int iVar2;
  Node *pNVar3;
  Node *pNVar4;
  long *plVar5;
  
  QMutex::lock();
  pNVar4 = DAT_1023118a8;
  if (1 < *(int *)(DAT_1023118a8 + 0x10) + 1U) {
    LOCK();
    *(int *)(DAT_1023118a8 + 0x10) = *(int *)(DAT_1023118a8 + 0x10) + 1;
    UNLOCK();
  }
  pNVar3 = pNVar4;
  if ((((byte)pNVar4[0x28] & 1) == 0) && (1 < *(uint *)(pNVar4 + 0x10))) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_100b5a810,0xb5a800,0x18);
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar4 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        UNLOCK();
        if (*(int *)pNVar1 != 0) goto LAB_100b59531;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
LAB_100b59531:
  iVar2 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar2 != 0) {
    plVar5 = *(long **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar3) break;
      iVar2 = iVar2 + -1;
      plVar5 = plVar5 + 1;
      pNVar4 = pNVar3;
    } while (iVar2 != 0);
  }
  for (; pNVar4 != pNVar3; pNVar4 = (Node *)QHashData::nextNode(pNVar4)) {
    (**(code **)**(undefined8 **)(pNVar4 + 0x10))();
  }
  if (*(int *)(pNVar3 + 0x10) != -1) {
    if (*(int *)(pNVar3 + 0x10) != 0) {
      LOCK();
      pNVar4 = pNVar3 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      UNLOCK();
      if (*(int *)pNVar4 != 0) goto LAB_100b595be;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar3);
  }
LAB_100b595be:
  QMutex::unlock();
  return;
}

