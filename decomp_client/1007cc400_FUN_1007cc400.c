
void FUN_1007cc400(QObject *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined ***)param_1 = &PTR_FUN_10222e1c0;
  if (((*(long *)(param_1 + 0x130) != 0) && (*(int *)(*(long *)(param_1 + 0x130) + 4) != 0)) &&
     (*(long *)(param_1 + 0x138) != 0)) {
    cVar2 = FUN_100a07890();
    if (cVar2 != '\0') {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x130) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x130) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x138);
      }
      FUN_100a07880(uVar3);
    }
  }
  FUN_1007cc540(param_1);
  QDateTime::~QDateTime((QDateTime *)(param_1 + 0x218));
  CSbaInstallation::~CSbaInstallation((CSbaInstallation *)(param_1 + 0x140));
  piVar1 = *(int **)(param_1 + 0x130);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x130) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x130));
    }
  }
  ClientStatistics::~ClientStatistics((ClientStatistics *)(param_1 + 0x10));
  QObject::~QObject(param_1);
  return;
}

