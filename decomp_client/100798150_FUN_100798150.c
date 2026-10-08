
undefined8 * FUN_100798150(undefined8 *param_1,long *param_2,QString *param_3,undefined8 *param_4)

{
  Node *pNVar1;
  int *piVar2;
  char cVar3;
  Node *pNVar4;
  int iVar5;
  long *plVar6;
  
  pNVar1 = (Node *)*param_2;
  iVar5 = *(int *)(pNVar1 + 0x20);
  if (iVar5 != 0) {
    plVar6 = *(long **)(pNVar1 + 8);
    do {
      pNVar4 = (Node *)*plVar6;
      if (pNVar4 != pNVar1) goto LAB_1007981a0;
      iVar5 = iVar5 + -1;
      plVar6 = plVar6 + 1;
    } while (iVar5 != 0);
  }
LAB_1007981c1:
  piVar2 = (int *)*param_4;
  *param_1 = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
LAB_1007981a0:
  do {
    cVar3 = operator==((QString *)(pNVar4 + 0x18),param_3);
    if (cVar3 != '\0') {
      piVar2 = *(int **)(pNVar4 + 0x10);
      *param_1 = piVar2;
      if (*piVar2 + 1U < 2) {
        return param_1;
      }
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return param_1;
    }
    pNVar4 = (Node *)QHashData::nextNode(pNVar4);
  } while (pNVar4 != (Node *)*param_2);
  goto LAB_1007981c1;
}

