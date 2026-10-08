
void FUN_100208780(long *param_1,int param_2)

{
  int iVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long *plVar5;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 0) {
    if (((param_1[9] != 0) && (*(int *)(param_1[9] + 4) != 0)) &&
       (plVar5 = (long *)param_1[10], plVar5 != (long *)0x0)) {
      if (param_2 == 0) {
        pQVar2 = (QObject *)FUN_100426920();
        piVar3 = (int *)0x0;
        if (pQVar2 != (QObject *)0x0) {
          piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
        }
        piVar4 = (int *)param_1[3];
        if (piVar4 != piVar3) {
          if (piVar3 != (int *)0x0) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            UNLOCK();
            piVar4 = (int *)param_1[3];
          }
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if ((*piVar4 == 0) && ((void *)param_1[3] != (void *)0x0)) {
              operator_delete((void *)param_1[3]);
            }
          }
          param_1[3] = (long)piVar3;
          param_1[4] = (long)pQVar2;
        }
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            operator_delete(piVar3);
          }
        }
        iVar1 = FUN_1004230a0();
        if ((iVar1 == 2) || (iVar1 = FUN_1004230a0(), iVar1 == 3)) {
          plVar5 = (long *)0x0;
          if ((param_1[9] != 0) && (plVar5 = (long *)0x0, *(int *)(param_1[9] + 4) != 0)) {
            plVar5 = (long *)param_1[10];
          }
          (**(code **)(*plVar5 + 0x1b0))(plVar5,0);
          (**(code **)(*param_1 + 0x98))(param_1,0);
          return;
        }
        *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_1[10] + 0xa0);
      }
      else {
        (**(code **)(*plVar5 + 0x1b0))(plVar5,param_2);
      }
    }
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  }
  return;
}

