
char FUN_100059ef0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  param_1 = (undefined8 *)*param_1;
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  cVar3 = (**(code **)(*param_2 + 0x20))(param_2,*param_1);
  LOCK();
  plVar1 = param_2 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar2 == 1) {
    (**(code **)(*param_2 + 0x10))(param_2);
  }
  if (cVar3 != '\0') {
    LOCK();
    plVar1 = param_2 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
  }
  return cVar3;
}

