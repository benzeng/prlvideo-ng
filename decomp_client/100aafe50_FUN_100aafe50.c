
ulong FUN_100aafe50(long *param_1,ulong *param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  
  param_1[1] = (long)param_2;
  lVar2 = FUN_100ab04c0();
  *param_1 = lVar2;
LAB_100aafe85:
  do {
    iVar5 = 0;
LAB_100aafe92:
    plVar9 = (long *)*param_2;
    uVar3 = (ulong)plVar9 & 3;
    if (uVar3 != 2) {
      if (uVar3 == 1) {
        LOCK();
        plVar4 = (long *)*param_2;
        if (plVar9 == plVar4) {
          *param_2 = (ulong)plVar9 | 3;
          plVar4 = plVar9;
        }
        UNLOCK();
        if (plVar4 == plVar9) {
          plVar4 = (long *)((ulong)plVar9 & 0xfffffffffffffffc);
          if (*plVar4 == *param_1) {
            plVar4[3] = plVar4[3] + 1;
            LOCK();
            uVar3 = *param_2;
            *param_2 = (ulong)plVar9;
            UNLOCK();
            return uVar3;
          }
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          param_1[5] = 0;
          do {
            plVar7 = plVar4;
            plVar4 = (long *)plVar7[5];
          } while (plVar4 != (long *)0x0);
          plVar7[5] = (long)param_1;
          lVar2 = FUN_100aaf8c0(1);
          param_1[6] = lVar2;
          LOCK();
          *param_2 = (ulong)plVar9;
          UNLOCK();
          FUN_100aaf630(param_1[6] + 8,0xffffffff);
          piVar1 = (int *)param_1[6];
          if ((*piVar1 == 1) && ((piVar1[0x1e] & 1U) == 0)) {
            FUN_100aaf610(piVar1 + 2);
          }
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          goto LAB_100aafe85;
        }
      }
      else if (uVar3 == 0) {
        LOCK();
        plVar4 = (long *)*param_2;
        if (plVar9 == plVar4) {
          *param_2 = 3;
          plVar4 = plVar9;
        }
        UNLOCK();
        if (plVar4 == plVar9) {
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)((long)param_1 + 0x14) = 0;
          param_1[5] = 0;
          param_1[7] = 0;
          param_1[4] = (long)plVar9;
          if (plVar9 == (long *)0x0) goto LAB_100ab0155;
          iVar5 = 0;
          iVar8 = 0;
          do {
            if (*plVar9 == *param_1) {
              iVar5 = iVar5 + 1;
              *(int *)((long)param_1 + 0x14) = iVar5;
            }
            else {
              iVar8 = iVar8 + 1;
              *(int *)(param_1 + 2) = iVar8;
            }
            plVar9 = (long *)plVar9[2];
          } while (plVar9 != (long *)0x0);
          if (iVar8 == 0) {
LAB_100ab0155:
            param_1[3] = 1;
            LOCK();
            uVar3 = *param_2;
            *param_2 = (ulong)param_1 | 1;
            UNLOCK();
            return uVar3;
          }
          lVar2 = FUN_100aaf8c0(1);
          param_1[6] = lVar2;
          LOCK();
          *param_2 = (ulong)param_1 | 2;
          UNLOCK();
          FUN_100aaf630(param_1[6] + 8,0xffffffff);
          piVar1 = (int *)param_1[6];
          if ((*piVar1 == 1) && ((piVar1[0x1e] & 1U) == 0)) {
            FUN_100aaf610(piVar1 + 2);
          }
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          goto LAB_100aafe85;
        }
      }
LAB_100aaff00:
      if (199 < iVar5) break;
      iVar5 = iVar5 + 1;
      goto LAB_100aafe92;
    }
    LOCK();
    plVar4 = (long *)*param_2;
    if (plVar9 == plVar4) {
      *param_2 = (ulong)plVar9 | 3;
      plVar4 = plVar9;
    }
    UNLOCK();
    if (plVar4 != plVar9) goto LAB_100aaff00;
    plVar4 = (long *)((ulong)plVar9 & 0xfffffffffffffffc);
    if (plVar4 == param_1) {
      param_1[3] = 1;
      LOCK();
      uVar3 = *param_2;
      *param_2 = (ulong)param_1 | 1;
      UNLOCK();
      return uVar3;
    }
    param_1[5] = 0;
    plVar7 = plVar4;
    do {
      plVar6 = plVar7;
      plVar7 = (long *)plVar6[5];
    } while (plVar7 != (long *)0x0);
    plVar6[5] = (long)param_1;
    lVar2 = FUN_100aaf8c0(1);
    param_1[6] = lVar2;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    plVar7 = (long *)plVar4[4];
    if (plVar7 == (long *)0x0) {
LAB_100ab003a:
      LOCK();
      *param_2 = (ulong)plVar9;
      UNLOCK();
    }
    else {
      iVar5 = 0;
      do {
        if (*plVar7 == *param_1) {
          iVar5 = iVar5 + 1;
          *(int *)((long)param_1 + 0x14) = iVar5;
        }
        plVar7 = (long *)plVar7[2];
      } while (plVar7 != (long *)0x0);
      if ((iVar5 == 0) || (iVar5 = (int)plVar4[2] - iVar5, *(int *)(plVar4 + 2) = iVar5, iVar5 != 0)
         ) goto LAB_100ab003a;
      LOCK();
      *param_2 = (ulong)plVar9;
      UNLOCK();
      FUN_100aaf5d0(plVar4[6] + 8);
    }
    FUN_100aaf630(param_1[6] + 8,0xffffffff);
    piVar1 = (int *)param_1[6];
    if ((*piVar1 == 1) && ((piVar1[0x1e] & 1U) == 0)) {
      FUN_100aaf610(piVar1 + 2);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  } while( true );
  FUN_100ab04d0();
  goto LAB_100aafe85;
}

