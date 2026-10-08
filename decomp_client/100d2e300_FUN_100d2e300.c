
void FUN_100d2e300(undefined8 *param_1,QDomDocument *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  QDomNode local_50 [8];
  long *local_48;
  QDomDocument local_40 [15];
  undefined1 local_31;
  
  QDomDocument::QDomDocument(local_40,param_2);
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
    LOCK();
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    UNLOCK();
  }
  local_48 = param_4;
  FUN_100d2dd70(param_1,local_40,&local_48);
  if (param_4 != (long *)0x0) {
    LOCK();
    plVar1 = param_4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*param_4 + 0x10))(param_4);
    }
  }
  QDomDocument::~QDomDocument(local_40);
  *param_1 = &PTR_FUN_10225b670;
  FUN_100d2af40(param_1 + 5);
  piVar2 = (int *)*param_3;
  param_1[8] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  FUN_100d2ab80(local_50,param_2);
  FUN_100d27e80(local_50,param_1 + 8,param_1 + 5);
  QDomNode::~QDomNode(local_50);
  return;
}

