
void FUN_100d2ced0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_10225b4b0;
  QDomNode::~QDomNode((QDomNode *)(param_1 + 4));
  QDomNode::~QDomNode((QDomNode *)(param_1 + 3));
  QDomDocument::~QDomDocument((QDomDocument *)(param_1 + 2));
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  return;
}

