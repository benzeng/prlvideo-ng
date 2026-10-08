
void FUN_10041c580(undefined8 *param_1,int param_2)

{
  Node *pNVar1;
  long lVar2;
  
  param_1 = (undefined8 *)*param_1;
  if (param_2 < 0) {
    pNVar1 = (Node *)*param_1;
    lVar2 = (long)param_2 + -1;
    do {
      pNVar1 = (Node *)QHashData::previousNode(pNVar1);
      *param_1 = pNVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < -1);
  }
  else if (0 < param_2) {
    pNVar1 = (Node *)*param_1;
    lVar2 = (long)param_2 + 1;
    do {
      pNVar1 = (Node *)QHashData::nextNode(pNVar1);
      *param_1 = pNVar1;
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  return;
}

