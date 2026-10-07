
void FUN_100596660(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  long *plVar14;
  bool bVar15;
  
  uVar11 = *(long *)(param_1 + 0x60) + 0xffffffff;
  uVar12 = 0;
  plVar14 = (long *)0x0;
  if (*(int *)(param_1 + 0x55c) != 0) {
    plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                 ((uVar11 & 0xffffffff) + *(long *)(param_1 + 0x58) >> 9) * 8) +
                       ((ulong)(uint)((int)*(long *)(param_1 + 0x58) + (int)uVar11) & 0x1ff) * 8);
    plVar1 = (long *)(param_1 + 0x100);
    uVar5 = 0;
    plVar10 = (long *)0x0;
    do {
      uVar11 = (ulong)uVar5;
      if ((long *)*plVar1 == (long *)0x0) {
LAB_10059672f:
        plVar13 = plVar1;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x180 + uVar11 * 0x40);
        plVar14 = (long *)*plVar1;
        plVar9 = plVar1;
        do {
          while (plVar13 = plVar14, uVar3 <= (ulong)plVar13[4]) {
            plVar14 = (long *)*plVar13;
            plVar9 = plVar13;
            if ((long *)*plVar13 == (long *)0x0) goto LAB_100596723;
          }
          plVar7 = plVar13 + 1;
          plVar13 = plVar9;
          plVar14 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
LAB_100596723:
        if ((plVar13 == plVar1) || (uVar3 < (ulong)plVar13[4])) goto LAB_10059672f;
      }
      if (plVar1 == plVar13) {
        FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "m_AsyncBlockReqs.end() != it","Storage.cpp",0x119c,"DestroyRequests");
      }
      plVar14 = (long *)plVar13[5];
      if (plVar14 != (long *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      puVar6 = (undefined8 *)plVar14[2];
      if (puVar6[0x225] != 0) {
        do {
          lVar8 = puVar6[0x225];
          lVar4 = *(long *)(lVar8 + 0x20);
          puVar6[0x225] = lVar4;
          if (lVar4 == 0) {
            puVar6[0x226] = 0;
          }
          *(undefined8 *)(lVar8 + 0x20) = 0;
          if (*(long *)(param_1 + 0x178 + uVar11 * 0x40) == lVar8) {
            (**(code **)(*plVar2 + 0x110))(plVar2,*(undefined4 *)(puVar6 + 0x21e));
          }
          else {
            (**(code **)(*plVar2 + 0x80))(plVar2,lVar8);
            if (3 < DAT_1011b55f8) {
              FUN_1008e3970("Compact","vdisk",4,"[%p] Dio(%p) -> submited",param_1,lVar8);
            }
          }
          puVar6 = (undefined8 *)plVar14[2];
        } while (puVar6[0x225] != 0);
      }
      while (puVar6[0x223] != 0) {
        lVar8 = puVar6[0x223];
        lVar4 = *(long *)(lVar8 + 0x20);
        puVar6[0x223] = lVar4;
        if (lVar4 == 0) {
          puVar6[0x224] = 0;
        }
        *(undefined8 *)(lVar8 + 0x20) = 0;
        (**(code **)(*plVar2 + 0x80))(plVar2);
        puVar6 = (undefined8 *)plVar14[2];
      }
      *puVar6 = 0;
      plVar10 = plVar13;
      plVar9 = (long *)plVar13[1];
      if ((long *)plVar13[1] == (long *)0x0) {
        do {
          plVar7 = (long *)plVar10[2];
          bVar15 = (long *)*plVar7 != plVar10;
          plVar10 = plVar7;
        } while (bVar15);
      }
      else {
        do {
          plVar7 = plVar9;
          plVar9 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0xf8) == plVar13) {
        *(long **)(param_1 + 0xf8) = plVar7;
      }
      *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0x100),plVar13);
      plVar10 = (long *)plVar13[5];
      if (plVar10 != (long *)0x0) {
        LOCK();
        plVar9 = plVar10 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      operator_delete(plVar13);
      lVar8 = uVar11 * 0x40;
      *(undefined4 *)(param_1 + 0x170 + lVar8) = 0;
      *(undefined8 *)(param_1 + 0x178 + lVar8) = 0;
      *(undefined4 *)(param_1 + 0x188 + lVar8) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x180 + lVar8) = 0;
      *(undefined8 *)(param_1 + 400 + lVar8) = 0;
      uVar5 = uVar5 + 1;
      uVar12 = *(uint *)(param_1 + 0x55c);
      plVar10 = plVar14;
    } while (uVar5 < uVar12);
  }
  if (3 < DAT_1011b55f8) {
    FUN_1008e3970("Compact","vdisk",4,"[%p] Destroed %u requests",param_1,uVar12);
  }
  *(undefined4 *)(param_1 + 0x55c) = 0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100596a42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x10))(plVar14);
      return;
    }
  }
  return;
}

