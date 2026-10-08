
void FUN_1002d9c10(long *param_1)

{
  long *plVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = CAbstractTask::isFinished();
  if (cVar2 != '\0') {
    return;
  }
  piVar3 = (int *)param_1[3];
  if (piVar3 != (int *)0x0) {
    plVar1 = param_1 + 3;
    if ((piVar3[1] != 0) && (param_1[4] != 0)) {
      QWidget::close();
      piVar3 = (int *)*plVar1;
      if (piVar3 == (int *)0x0) goto LAB_1002d9c7a;
    }
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((*piVar3 == 0) && ((void *)*plVar1 != (void *)0x0)) {
      operator_delete((void *)*plVar1);
    }
    param_1[4] = 0;
    *plVar1 = 0;
  }
LAB_1002d9c7a:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

