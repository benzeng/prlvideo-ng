
long FUN_100438760(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  iVar13 = (int)((ulong)(param_3 - param_2) >> 3);
  if (iVar13 != 0) {
    puVar10 = (uint *)*param_1;
    lVar12 = *(long *)(puVar10 + 4);
    uVar8 = param_2 - ((long)puVar10 + lVar12);
    if ((puVar10[2] & 0x7fffffff) == 0) {
      lVar7 = (long)(int)(uVar8 >> 3);
    }
    else {
      if (1 < *puVar10) {
        FUN_1004384f0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
        puVar10 = (uint *)*param_1;
        lVar12 = *(long *)(puVar10 + 4);
      }
      lVar7 = (long)(int)(uVar8 >> 3);
      plVar6 = (long *)((long)puVar10 + lVar7 * 8 + lVar12);
      lVar5 = iVar13 + lVar7;
      uVar4 = puVar10[1];
      lVar11 = (long)(int)uVar4;
      if (lVar5 != lVar11) {
        plVar9 = (long *)((long)puVar10 + lVar5 * 8 + lVar12);
        plVar2 = (long *)((long)puVar10 + lVar11 * 8 + lVar5 * -8 + lVar12 + lVar7 * 8);
        lVar12 = lVar11 * 8 + lVar5 * -8;
        do {
          plVar3 = (long *)*plVar6;
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          lVar5 = *plVar9;
          *plVar6 = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          plVar6 = plVar6 + 1;
          plVar9 = plVar9 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        puVar10 = (uint *)*param_1;
        lVar12 = *(long *)(puVar10 + 4);
        uVar4 = puVar10[1];
        plVar6 = plVar2;
      }
      if (plVar6 < (long *)((long)puVar10 + (long)(int)uVar4 * 8 + lVar12)) {
        do {
          plVar9 = (long *)*plVar6;
          plVar6 = plVar6 + 1;
          if (plVar9 != (long *)0x0) {
            LOCK();
            plVar2 = plVar9 + 1;
            lVar5 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        } while ((long *)((long)puVar10 + lVar12 + (long)(int)uVar4 * 8) != plVar6);
        puVar10 = (uint *)*param_1;
        lVar12 = *(long *)(puVar10 + 4);
      }
      puVar10[1] = puVar10[1] - iVar13;
    }
    param_2 = (long)puVar10 + lVar7 * 8 + lVar12;
  }
  return param_2;
}

