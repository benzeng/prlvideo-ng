
ulong FUN_1000585e0(long *param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint *local_38;
  
  puVar6 = (uint *)*param_1;
  uVar3 = puVar6[2];
  uVar10 = 0;
  if ((int)uVar3 < (int)puVar6[3]) {
    param_2 = (long *)*param_2;
    lVar9 = (long)(int)uVar3 * 8;
    do {
      lVar7 = lVar9;
      if ((long)(int)puVar6[3] * 8 == lVar7) goto LAB_10005877b;
      lVar9 = lVar7 + 8;
    } while ((long *)**(long **)((long)puVar6 + lVar7 + 0x10) != param_2);
    uVar8 = lVar7 + (long)(int)uVar3 * -8;
    if ((uVar8 & 0x7fffffff8) != 0x7fffffff8) {
      if (param_2 != (long *)0x0) {
        LOCK();
        *(int *)(param_2 + 1) = (int)param_2[1] + 1;
        UNLOCK();
        puVar6 = (uint *)*param_1;
      }
      if (1 < *puVar6) {
        FUN_100059b90(param_1,puVar6[1]);
        puVar6 = (uint *)*param_1;
      }
      lVar9 = (long)(int)(uVar8 >> 3) + (long)(int)puVar6[2];
      uVar3 = puVar6[3];
      plVar4 = *(long **)(puVar6 + lVar9 * 2 + 4);
      if (plVar4 != (long *)0x0) {
        plVar5 = (long *)*plVar4;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
        operator_delete(plVar4);
      }
      local_38 = puVar6 + lVar9 * 2 + 4;
      puVar2 = puVar6 + (long)(int)uVar3 * 2 + 4;
      if (lVar9 + 1 != (long)(int)uVar3) {
        puVar6 = puVar6 + (lVar9 + 1) * 2 + 4;
        do {
          while (plVar4 = *(long **)puVar6, (long *)*plVar4 != param_2) {
            *(long **)local_38 = plVar4;
            local_38 = local_38 + 2;
            puVar6 = puVar6 + 2;
            if (puVar6 == puVar2) goto LAB_10005874c;
          }
          if (plVar4 != (long *)0x0) {
            if (param_2 != (long *)0x0) {
              LOCK();
              plVar5 = param_2 + 1;
              lVar9 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)(*param_2 + 0x10))(param_2);
              }
            }
            operator_delete(plVar4);
          }
          puVar6 = puVar6 + 2;
        } while (puVar2 != puVar6);
      }
LAB_10005874c:
      uVar10 = (ulong)((long)puVar2 - (long)local_38) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar10;
      if (param_2 != (long *)0x0) {
        LOCK();
        plVar4 = param_2 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*param_2 + 0x10))(param_2);
        }
      }
    }
  }
LAB_10005877b:
  return uVar10 & 0xffffffff;
}

