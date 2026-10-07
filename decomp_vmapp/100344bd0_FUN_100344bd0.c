
void FUN_100344bd0(long param_1)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  
  plVar6 = *(long **)(param_1 + 0x2788);
  while (plVar6 != (long *)(param_1 + 0x2790)) {
    if ((void *)plVar6[5] != (void *)0x0) {
      operator_delete((void *)plVar6[5]);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_100350970(param_1 + 0x2788,*(undefined8 *)(param_1 + 0x2790));
  *(undefined8 *)(param_1 + 0x2798) = 0;
  *(long **)(param_1 + 0x2788) = (long *)(param_1 + 0x2790);
  *(undefined8 *)(param_1 + 0x2790) = 0;
  plVar6 = *(long **)(param_1 + 0x27a0);
  while (plVar6 != (long *)(param_1 + 0x27a8)) {
    if ((void *)plVar6[5] != (void *)0x0) {
      operator_delete((void *)plVar6[5]);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_100350930(param_1 + 0x27a0,*(undefined8 *)(param_1 + 0x27a8));
  *(undefined8 *)(param_1 + 0x27b0) = 0;
  *(long **)(param_1 + 0x27a0) = (long *)(param_1 + 0x27a8);
  *(undefined8 *)(param_1 + 0x27a8) = 0;
  plVar6 = *(long **)(param_1 + 0x27b8);
  while (plVar6 != (long *)(param_1 + 0x27c0)) {
    if ((void *)plVar6[5] != (void *)0x0) {
      operator_delete((void *)plVar6[5]);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_1003508f0(param_1 + 0x27b8,*(undefined8 *)(param_1 + 0x27c0));
  *(undefined8 *)(param_1 + 0x27c8) = 0;
  *(long **)(param_1 + 0x27b8) = (long *)(param_1 + 0x27c0);
  *(undefined8 *)(param_1 + 0x27c0) = 0;
  plVar6 = *(long **)(param_1 + 0x27d0);
  while (plVar6 != (long *)(param_1 + 0x27d8)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      FUN_1003dd2d0((long)pvVar2 + 0x3c);
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  plVar6 = *(long **)(param_1 + 0x27e8);
  while (plVar6 != (long *)(param_1 + 0x27f0)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x20) + 8))();
      }
      pvVar3 = *(void **)((long)pvVar2 + 8);
      if (pvVar3 != (void *)0x0) {
        piVar1 = (int *)((long)pvVar3 + 0x80);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_10032d8f0(pvVar3);
          operator_delete(pvVar3);
        }
      }
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_100350870(param_1 + 0x27e8,*(undefined8 *)(param_1 + 0x27f0));
  *(undefined8 *)(param_1 + 0x27f8) = 0;
  *(long **)(param_1 + 0x27e8) = (long *)(param_1 + 0x27f0);
  *(undefined8 *)(param_1 + 0x27f0) = 0;
  lVar7 = 0;
  do {
    for (lVar8 = *(long *)(param_1 + 0x2810 + lVar7 * 8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x10)) {
      if (*(long **)(lVar8 + 8) != (long *)0x0) {
        (**(code **)(**(long **)(lVar8 + 8) + 8))();
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x1000);
  for (puVar5 = *(undefined8 **)(param_1 + 0x2808); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)*puVar5) {
    *(undefined4 *)(puVar5 + 1) = 0;
  }
  *(undefined8 *)(param_1 + 0x2800) = 0;
  ___bzero(param_1 + 0x2810,0x8000);
  plVar6 = *(long **)(param_1 + 0xa810);
  while (plVar6 != (long *)(param_1 + 0xa818)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      if (*(long *)((long)pvVar2 + 8) != 0) {
        operator_delete__((void *)(*(long *)((long)pvVar2 + 8) + -8));
      }
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_100350830(param_1 + 0xa810,*(undefined8 *)(param_1 + 0xa818));
  *(undefined8 *)(param_1 + 0xa820) = 0;
  *(long **)(param_1 + 0xa810) = (long *)(param_1 + 0xa818);
  *(undefined8 *)(param_1 + 0xa818) = 0;
  plVar6 = *(long **)(param_1 + 0xa828);
  while (plVar6 != (long *)(param_1 + 0xa830)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x20) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x20) + 8))();
      }
      pvVar3 = *(void **)((long)pvVar2 + 8);
      if (pvVar3 != (void *)0x0) {
        piVar1 = (int *)((long)pvVar3 + 0x80);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_10032d8f0(pvVar3);
          operator_delete(pvVar3);
        }
      }
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_1003507f0(param_1 + 0xa828,*(undefined8 *)(param_1 + 0xa830));
  *(undefined8 *)(param_1 + 0xa838) = 0;
  *(long **)(param_1 + 0xa828) = (long *)(param_1 + 0xa830);
  *(undefined8 *)(param_1 + 0xa830) = 0;
  FUN_10034f9d0(param_1 + 0xa840);
  plVar6 = *(long **)(param_1 + 0x12850);
  while (plVar6 != (long *)(param_1 + 0x12858)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      if (*(long *)((long)pvVar2 + 8) != 0) {
        operator_delete__((void *)(*(long *)((long)pvVar2 + 8) + -8));
      }
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_1003507b0(param_1 + 0x12850,*(undefined8 *)(param_1 + 0x12858));
  *(undefined8 *)(param_1 + 0x12860) = 0;
  *(long **)(param_1 + 0x12850) = (long *)(param_1 + 0x12858);
  *(undefined8 *)(param_1 + 0x12858) = 0;
  plVar6 = *(long **)(param_1 + 0x12868);
  while (plVar6 != (long *)(param_1 + 0x12870)) {
    FUN_100365c30(*(undefined8 *)(param_1 + 0x2778),plVar6[5]);
    if ((void *)plVar6[5] != (void *)0x0) {
      operator_delete((void *)plVar6[5]);
    }
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_10033f9f0(param_1 + 0x12868,*(undefined8 *)(param_1 + 0x12870));
  *(undefined8 *)(param_1 + 0x12878) = 0;
  *(long **)(param_1 + 0x12868) = (long *)(param_1 + 0x12870);
  *(undefined8 *)(param_1 + 0x12870) = 0;
  plVar6 = *(long **)(param_1 + 0x12880);
  while (plVar6 != (long *)(param_1 + 0x12888)) {
    pvVar2 = (void *)plVar6[5];
    if (pvVar2 != (void *)0x0) {
      if (*(long **)((long)pvVar2 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar2 + 0x18) + 8))();
      }
      pvVar3 = *(void **)((long)pvVar2 + 8);
      if (pvVar3 != (void *)0x0) {
        piVar1 = (int *)((long)pvVar3 + 0x80);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_10032d8f0(pvVar3);
          operator_delete(pvVar3);
        }
      }
      operator_delete(pvVar2);
    }
    plVar6[5] = 0;
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar6[2];
        bVar9 = (long *)*plVar4 != plVar6;
        plVar6 = plVar4;
      } while (bVar9);
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  FUN_1003509b0(param_1 + 0x12880,*(undefined8 *)(param_1 + 0x12888));
  *(undefined8 *)(param_1 + 0x12890) = 0;
  *(long **)(param_1 + 0x12880) = (long *)(param_1 + 0x12888);
  *(undefined8 *)(param_1 + 0x12888) = 0;
  FUN_1003509b0(param_1 + 0x12880,0);
  FUN_10033f9f0(param_1 + 0x12868,*(undefined8 *)(param_1 + 0x12870));
  FUN_1003507b0(param_1 + 0x12850,*(undefined8 *)(param_1 + 0x12858));
  while (puVar5 = *(undefined8 **)(param_1 + 0xa848), puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xa848) = *puVar5;
    operator_delete(puVar5);
  }
  FUN_1003507f0(param_1 + 0xa828,*(undefined8 *)(param_1 + 0xa830));
  FUN_100350830(param_1 + 0xa810,*(undefined8 *)(param_1 + 0xa818));
  puVar5 = *(undefined8 **)(param_1 + 0x2808);
  while (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x2808) = *puVar5;
    operator_delete(puVar5);
    puVar5 = *(undefined8 **)(param_1 + 0x2808);
  }
  FUN_100350870(param_1 + 0x27e8,*(undefined8 *)(param_1 + 0x27f0));
  FUN_1003508b0(param_1 + 0x27d0,*(undefined8 *)(param_1 + 0x27d8));
  FUN_1003508f0(param_1 + 0x27b8,*(undefined8 *)(param_1 + 0x27c0));
  FUN_100350930(param_1 + 0x27a0,*(undefined8 *)(param_1 + 0x27a8));
  FUN_100350970(param_1 + 0x2788,*(undefined8 *)(param_1 + 0x2790));
  FUN_100343bf0(param_1);
  return;
}

