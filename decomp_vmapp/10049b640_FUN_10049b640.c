
void FUN_10049b640(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_100bc2368;
  lVar5 = param_1[1];
  if (lVar5 != 0) {
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("PROCMON","prl_sharedapps",4,"Stopping process monitor");
      lVar5 = param_1[1];
    }
    (*(code *)PTR__objc_msgSend_100ba25e8)(lVar5,PTR_s_release_100bed2a0);
  }
  bVar3 = false;
  if ((param_1[5] != 0) && (bVar3 = false, *(long *)(param_1[5] + 0x10) != 0)) {
    QMutex::lock();
    bVar3 = true;
  }
  if (param_1[6] != 0) {
    *(undefined8 *)(param_1[6] + 0x10) = 0;
    QWaitCondition::wakeOne();
  }
  if (bVar3) {
    QMutex::unlock();
  }
  plVar2 = (long *)param_1[5];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  QWaitCondition::~QWaitCondition((QWaitCondition *)(param_1 + 4));
  piVar4 = (int *)param_1[3];
  if (*piVar4 != -1) {
    if (*piVar4 != 0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 != 0) {
        return;
      }
      piVar4 = (int *)param_1[3];
    }
    FUN_10049c330(param_1 + 3,piVar4);
  }
  return;
}

