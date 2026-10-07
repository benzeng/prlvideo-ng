
void FUN_10070cc70(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xa4) != 0)) {
    FUN_10070b7b0(lVar10 + 0xa8,*(undefined4 *)(param_1 + 8));
    _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(param_1 + 0x10) + 0x20));
    lVar10 = *(long *)(param_1 + 0x10);
    if (*(long *)(lVar10 + 0x90) == 0) {
      *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(lVar10 + 0xb0);
      *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar10 + 0xa8);
      lVar10 = *(long *)(param_1 + 0x10);
      plVar6 = *(long **)(lVar10 + 0x90);
      iVar13 = 0;
      if ((long *)plVar6[4] != (long *)0x0) {
        iVar11 = (int)plVar6[7];
        iVar13 = 0;
        plVar7 = (long *)plVar6[4];
        do {
          lVar9 = *plVar6;
          uVar8 = *(uint *)((long)plVar6 + 0x54);
          uVar4 = *(uint *)(plVar6 + 10);
          uVar12 = uVar4;
          while( true ) {
            iVar3 = (int)plVar7[7];
            if (((((int)plVar7[7] != iVar11) ||
                 (lVar9 = lVar9 + (ulong)uVar4 / (ulong)*(uint *)(lVar10 + 0x278), iVar3 = iVar11,
                 lVar9 != *plVar7)) || (plVar6[3] != plVar7[3])) ||
               ((((*(uint *)(plVar7 + 1) ^ *(uint *)(plVar6 + 1)) & 0x2001) != 0 ||
                (uVar8 = uVar8 + *(int *)((long)plVar7 + 0x54), 0x400 < uVar8)))) break;
            uVar4 = *(uint *)(plVar7 + 10);
            uVar12 = uVar12 + uVar4;
            if ((*(uint *)(lVar10 + 0x274) != 0) && (*(uint *)(lVar10 + 0x274) < uVar12)) break;
            plVar7 = (long *)plVar7[4];
            if (plVar7 == (long *)0x0) goto LAB_10070ce86;
          }
          iVar11 = iVar3;
          iVar13 = iVar13 + 1;
          plVar1 = plVar7 + 4;
          plVar6 = plVar7;
          plVar7 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
LAB_10070ce86:
      iVar13 = iVar13 + 1;
    }
    else {
      plVar6 = *(long **)(lVar10 + 0x98);
      plVar7 = *(long **)(lVar10 + 0xa8);
      plVar6[4] = (long)plVar7;
      *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(lVar10 + 0xb0);
      iVar13 = 0;
      if (plVar7 != (long *)0x0) {
        iVar11 = (int)plVar6[7];
        iVar13 = 0;
        do {
          lVar9 = *plVar6;
          uVar8 = *(uint *)((long)plVar6 + 0x54);
          uVar4 = *(uint *)(plVar6 + 10);
          uVar12 = uVar4;
          while( true ) {
            iVar3 = (int)plVar7[7];
            if ((((int)plVar7[7] != iVar11) ||
                (lVar9 = lVar9 + (ulong)uVar4 / (ulong)*(uint *)(lVar10 + 0x278), iVar3 = iVar11,
                lVar9 != *plVar7)) ||
               ((plVar6[3] != plVar7[3] ||
                ((((*(uint *)(plVar7 + 1) ^ *(uint *)(plVar6 + 1)) & 0x2001) != 0 ||
                 (uVar8 = uVar8 + *(int *)((long)plVar7 + 0x54), 0x400 < uVar8)))))) break;
            uVar4 = *(uint *)(plVar7 + 10);
            uVar12 = uVar12 + uVar4;
            if ((*(uint *)(lVar10 + 0x274) != 0) && (*(uint *)(lVar10 + 0x274) < uVar12)) break;
            plVar7 = (long *)plVar7[4];
            if (plVar7 == (long *)0x0) goto LAB_10070ce8d;
          }
          iVar11 = iVar3;
          iVar13 = iVar13 + 1;
          plVar1 = plVar7 + 4;
          plVar6 = plVar7;
          plVar7 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
      }
    }
LAB_10070ce8d:
    iVar11 = *(int *)(lVar10 + 8);
    _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x20));
    lVar10 = *(long *)(param_1 + 0x10);
    *(int *)(lVar10 + 0xa0) = *(int *)(lVar10 + 0xa0) + *(int *)(lVar10 + 0xa4);
    *(undefined4 *)(lVar10 + 0xb4) = 0;
    *(undefined8 *)(lVar10 + 0xac) = 0;
    *(undefined8 *)(lVar10 + 0xa4) = 0;
    if (iVar11 == 0) {
      puVar2 = *(uint **)(param_1 + 0x10);
      if (puVar2[0x5a] < *puVar2) {
        pvVar5 = operator_new(0x38);
        FUN_10070c300(pvVar5,puVar2);
        *(void **)(*(long *)(param_1 + 0x10) + 0x170 +
                  (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x168) * 8) = pvVar5;
        lVar10 = *(long *)(param_1 + 0x10);
        uVar8 = *(uint *)(lVar10 + 0x168);
        iVar13 = uVar8 + 1;
        *(int *)(lVar10 + 0x168) = iVar13;
        FUN_1008e3970("","AbstractFile",0,"New AIO thread %d -> %p",iVar13,
                      *(undefined8 *)(lVar10 + 0x170 + (ulong)uVar8 * 8));
        return;
      }
    }
    else if (0 < iVar13) {
      iVar13 = iVar13 + 1;
      do {
        _pthread_cond_signal((pthread_cond_t *)(*(long *)(param_1 + 0x10) + 0x60));
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
    }
  }
  return;
}

