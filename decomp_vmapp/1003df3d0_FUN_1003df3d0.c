
void FUN_1003df3d0(undefined8 param_1,long *param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  int iVar3;
  long *plVar4;
  QArrayData *local_40;
  
  pNVar1 = (Node *)*param_2;
  iVar3 = *(int *)(pNVar1 + 0x20);
  if (iVar3 == 0) {
    return;
  }
  plVar4 = *(long **)(pNVar1 + 8);
  while (pNVar2 = (Node *)*plVar4, pNVar2 == pNVar1) {
    iVar3 = iVar3 + -1;
    plVar4 = plVar4 + 1;
    if (iVar3 == 0) {
      return;
    }
  }
  iVar3 = 0;
  do {
    QString::toUtf8();
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Mime type %u: %s",iVar3,
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1003df491;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1003df491:
    pNVar2 = (Node *)QHashData::nextNode(pNVar2);
    iVar3 = iVar3 + 1;
    if (pNVar2 == (Node *)*param_2) {
      return;
    }
  } while( true );
}

