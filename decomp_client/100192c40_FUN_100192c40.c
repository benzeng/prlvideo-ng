
undefined1 FUN_100192c40(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xa0) + 4) == 0) {
    uVar4 = 0;
  }
  else if (*(long *)(param_1 + 0xa8) == 0) {
    uVar4 = 0;
  }
  else {
    cVar3 = CAbstractTask::isFinished();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xc0))();
      if (cVar3 == '\0') {
        uVar4 = 0;
      }
      else {
        plVar1 = (long *)(param_1 + 0xa0);
        plVar5 = (long *)0x0;
        if ((*plVar1 != 0) && (plVar5 = (long *)0x0, *(int *)(*plVar1 + 4) != 0)) {
          plVar5 = *(long **)(param_1 + 0xa8);
        }
        (**(code **)(*plVar5 + 0x78))(plVar5,0x80000275);
        piVar2 = (int *)*plVar1;
        uVar4 = 1;
        if (piVar2 != (int *)0x0) {
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((*piVar2 == 0) && ((void *)*plVar1 != (void *)0x0)) {
            operator_delete((void *)*plVar1);
          }
          *(undefined8 *)(param_1 + 0xa8) = 0;
          *plVar1 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

