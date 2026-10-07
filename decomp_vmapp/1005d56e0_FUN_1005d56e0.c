
void FUN_1005d56e0(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (param_1[2] != 0) {
    lVar1 = *param_1;
    plVar2 = (long *)param_1[1];
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    param_1[2] = 0;
    while (plVar2 != param_1) {
      plVar4 = (long *)plVar2[1];
      QDomNode::~QDomNode((QDomNode *)(plVar2 + 3));
      QDomNode::~QDomNode((QDomNode *)(plVar2 + 2));
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}

