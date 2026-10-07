
ulong FUN_1005b6f00(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long *local_38;
  
  FUN_1005b6c40(param_1,0);
  *param_1 = &PTR_FUN_100bc6c20;
  QMutex::QMutex((QMutex *)(param_1 + 3),1);
  QDomDocument::QDomDocument((QDomDocument *)(param_1 + 4));
  QDomNode::QDomNode((QDomNode *)(param_1 + 5));
  QDomElement::QDomElement((QDomElement *)(param_1 + 6));
  QDomNode::QDomNode((QDomNode *)(param_1 + 7));
  QDomNode::QDomNode((QDomNode *)(param_1 + 8));
  QDomNode::QDomNode((QDomNode *)(param_1 + 9));
  FUN_1007d6870(param_1 + 10);
  QFileInfo::QFileInfo((QFileInfo *)(param_1 + 0xc));
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = param_1 + 0xf;
  uVar4 = FUN_1005d7340(&local_38,0);
  if (local_38 != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 1);
    uVar4 = (ulong)*puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  plVar3 = (long *)param_1[1];
  param_1[1] = local_38;
  if (plVar3 != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(plVar3 + 1);
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 1);
    uVar2 = *puVar1;
    uVar4 = (ulong)uVar2;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (uVar2 == 1) {
      uVar4 = (**(code **)(*local_38 + 0x10))();
    }
  }
  return uVar4;
}

