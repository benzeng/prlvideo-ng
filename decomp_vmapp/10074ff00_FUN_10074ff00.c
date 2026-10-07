
void FUN_10074ff00(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  plVar1 = (long *)(param_1 + 0x20);
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != plVar1) {
    do {
      if (*(char *)(plVar6[2] + 0x72) != '\0') {
        *(undefined1 *)(plVar6[2] + 0x72) = 0;
        QSemaphore::release((int)param_1 + 0x18);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != plVar1);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar7 = 0;
    do {
      uVar5 = FUN_10074fbd0(param_1);
      if (uVar5 == 0) break;
      *(undefined1 *)(uVar5 + 0x73) = 1;
      QSemaphore::release((int)uVar5 + 0x40);
      QThread::wait(uVar5);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  for (plVar6 = *(long **)(param_1 + 0x28); plVar6 != plVar1; plVar6 = (long *)plVar6[1]) {
    if ((long *)plVar6[2] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[2] + 0x20))();
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    plVar6 = *(long **)(param_1 + 0x28);
    lVar3 = *plVar6;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar3;
    *(undefined8 *)(param_1 + 0x30) = 0;
    while (plVar6 != plVar1) {
      plVar4 = (long *)plVar6[1];
      operator_delete(plVar6);
      plVar6 = plVar4;
    }
  }
  return;
}

