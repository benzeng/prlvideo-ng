
undefined8 * FUN_100473a50(undefined8 *param_1,long param_2,QString *param_3)

{
  Node *pNVar1;
  char cVar2;
  Node *pNVar3;
  int iVar4;
  long *plVar5;
  
  QMutex::lock();
  *param_1 = PTR_shared_null_100ba2188;
  pNVar1 = *(Node **)(param_2 + 0x18);
  iVar4 = *(int *)(pNVar1 + 0x20);
  pNVar3 = pNVar1;
  if (iVar4 != 0) {
    plVar5 = *(long **)(pNVar1 + 8);
    do {
      pNVar3 = (Node *)*plVar5;
      if ((Node *)*plVar5 != pNVar1) break;
      iVar4 = iVar4 + -1;
      plVar5 = plVar5 + 1;
      pNVar3 = pNVar1;
    } while (iVar4 != 0);
  }
  if (pNVar1 != pNVar3) {
    do {
      cVar2 = QRegExp::exactMatch(param_3);
      if (cVar2 != '\0') {
        FUN_10000c490(param_1,pNVar3 + 0x10);
      }
      pNVar3 = (Node *)QHashData::nextNode(pNVar3);
    } while (*(Node **)(param_2 + 0x18) != pNVar3);
  }
  QMutex::unlock();
  return param_1;
}

