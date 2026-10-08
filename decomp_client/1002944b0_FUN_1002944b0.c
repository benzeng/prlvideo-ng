
void FUN_1002944b0(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined1 auVar6 [12];
  
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 == 1) {
    *(int *)(param_1 + 7) = (int)param_1[7] + -1;
    lVar3 = QObject::sender();
    if (lVar3 != 0) {
      lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1720,&DAT_1021ef620,0);
      if (lVar3 != 0) {
        QFutureInterfaceBase::waitForResult((int)lVar3 + 0x10);
        lVar3 = QFutureInterfaceBase::mutex();
        if (lVar3 != 0) {
          QMutex::lock();
        }
        iVar2 = QFutureInterfaceBase::resultStoreBase();
        auVar6 = QtPrivate::ResultStoreBase::resultAt(iVar2);
        plVar4 = *(long **)(auVar6._0_8_ + 0x28);
        if (*(int *)(auVar6._0_8_ + 0x20) != 0) {
          plVar4 = (long *)(*plVar4 + *(long *)(*plVar4 + 0x10) + (long)auVar6._8_4_ * 8);
        }
        if (lVar3 != 0) {
          QMutex::unlock();
        }
        plVar4 = (long *)*plVar4;
        cVar1 = CAbstractTask::isFinished();
        pcVar5 = "running";
        if (cVar1 != '\0') {
          pcVar5 = "finished";
        }
        FUN_100df99c0("","prl_client_app",0,
                      "task is %s Parse vm finished, vms to add = %d vmData = %p",pcVar5,
                      (int)param_1[7],plVar4);
        if (plVar4 != (long *)0x0) {
          lVar3 = 0;
          if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
            lVar3 = param_1[4];
          }
          FUN_100293f80(plVar4,lVar3);
        }
        if ((int)param_1[7] == 0) {
          (**(code **)(*param_1 + 0xb0))(param_1,0);
        }
        if (plVar4 != (long *)0x0) {
          if (*plVar4 != 0) {
            _PrlHandle_Free();
          }
          operator_delete(plVar4);
          return;
        }
      }
    }
  }
  return;
}

