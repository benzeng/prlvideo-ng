
void FUN_100463200(QThread *param_1)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  bool bVar9;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc1200;
  cVar2 = QThread::isRunning();
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0x44) == -1) {
      QSemaphore::release((int)param_1 + 0x20);
    }
    else {
      _notify_cancel();
    }
    QThread::wait((ulong)param_1);
  }
  pvVar7 = *(void **)(param_1 + 0x28);
  pvVar3 = *(void **)(param_1 + 0x30);
  pvVar4 = pvVar3;
  pvVar8 = pvVar3;
  if (pvVar3 != pvVar7) {
    uVar5 = 0;
    uVar6 = 1;
    do {
      plVar1 = *(long **)((long)pvVar7 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0xa0))(plVar1);
        pvVar7 = *(void **)(param_1 + 0x28);
        pvVar3 = *(void **)(param_1 + 0x30);
      }
      bVar9 = uVar6 < (ulong)((long)pvVar3 - (long)pvVar7 >> 3);
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar9);
    pvVar4 = pvVar7;
    pvVar8 = pvVar7;
    if (pvVar3 != pvVar7) {
      pvVar4 = (void *)((long)pvVar3 + (~((long)pvVar3 + (-8 - (long)pvVar7)) & 0xfffffffffffffff8U)
                       );
      *(void **)(param_1 + 0x30) = pvVar4;
    }
  }
  if (pvVar8 != (void *)0x0) {
    if (pvVar4 != pvVar8) {
      *(ulong *)(param_1 + 0x30) =
           (~((long)pvVar4 + (-8 - (long)pvVar8)) & 0xfffffffffffffff8U) + (long)pvVar4;
    }
    operator_delete(pvVar8);
  }
  QSemaphore::~QSemaphore((QSemaphore *)(param_1 + 0x20));
  QThread::~QThread(param_1);
  return;
}

