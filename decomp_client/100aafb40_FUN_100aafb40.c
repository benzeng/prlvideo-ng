
ulong FUN_100aafb40(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[1] = (long)param_2;
  lVar3 = FUN_100ab04c0();
  *param_1 = lVar3;
LAB_100aafb75:
  iVar6 = 0;
  do {
    uVar1 = *param_2;
    if ((uVar1 & 3) == 3) {
LAB_100aafbd0:
      if (199 < iVar6) break;
    }
    else {
      if ((uVar1 & 3) == 0) {
        param_1[2] = uVar1;
        LOCK();
        uVar4 = *param_2;
        if (uVar1 == uVar4) {
          *param_2 = (ulong)param_1;
          uVar4 = uVar1;
        }
        UNLOCK();
        if (uVar4 == uVar1) {
          return uVar4;
        }
        goto LAB_100aafbd0;
      }
      LOCK();
      uVar4 = *param_2;
      if (uVar1 == uVar4) {
        *param_2 = uVar1 | 3;
        uVar4 = uVar1;
      }
      UNLOCK();
      if (uVar4 != uVar1) goto LAB_100aafbd0;
      plVar8 = (long *)(uVar1 & 0xfffffffffffffffc);
      if ((uVar1 & 1) == 0) {
        plVar2 = (long *)plVar8[4];
        if (plVar2 != (long *)0x0) {
          plVar7 = plVar2;
          do {
            if (*plVar7 == *param_1) {
              param_1[2] = (long)plVar2;
              plVar8[4] = (long)param_1;
              *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
              LOCK();
              uVar4 = *param_2;
              *param_2 = uVar1;
              UNLOCK();
              return uVar4;
            }
            plVar7 = (long *)plVar7[2];
          } while (plVar7 != (long *)0x0);
        }
      }
      else if (*plVar8 == *param_1) {
        plVar8[3] = plVar8[3] + 1;
        LOCK();
        uVar4 = *param_2;
        *param_2 = uVar1;
        UNLOCK();
        return uVar4;
      }
      if (199 < iVar6) {
        piVar5 = (int *)plVar8[7];
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)FUN_100aaf8c0(0);
          plVar8[7] = (long)piVar5;
        }
        FUN_100ab0410(piVar5);
        LOCK();
        *param_2 = uVar1;
        UNLOCK();
        FUN_100aaf630(piVar5 + 2,0xffffffff);
        if ((*piVar5 == 1) && ((piVar5[0x1e] & 1U) == 0)) {
          FUN_100aaf610();
        }
        LOCK();
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        goto LAB_100aafb75;
      }
      LOCK();
      *param_2 = uVar1;
      UNLOCK();
    }
    iVar6 = iVar6 + 1;
  } while( true );
  FUN_100ab04d0();
  goto LAB_100aafb75;
}

