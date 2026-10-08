
void FUN_100d2db80(undefined8 *param_1,QDomDocument *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  QDomDocument local_20 [8];
  
  QDomDocument::QDomDocument(local_20,param_2);
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
  local_28 = param_3;
  FUN_100d2d710(param_1,local_20,&local_28);
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar1 = param_3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  QDomDocument::~QDomDocument(local_20);
  *param_1 = &PTR_FUN_10225b590;
  return;
}

