
char FUN_1004d4470(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  
  uVar2 = *param_2;
  LOCK();
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  UNLOCK();
  cVar4 = (**(code **)(*param_1 + 0x20))(param_1,uVar2);
  LOCK();
  plVar1 = param_1 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if (cVar4 != '\0') {
    LOCK();
    plVar1 = param_1 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  return cVar4;
}

