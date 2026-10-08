
ulong FUN_100ab0180(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong *puVar8;
  ulong local_238 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar3 = FUN_100ab04c0();
  param_1[1] = 0;
  *param_1 = 0;
  do {
    iVar6 = 0;
    while( true ) {
      plVar2 = (long *)*param_2;
      if (((ulong)plVar2 & 3) != 3) {
        LOCK();
        plVar4 = (long *)*param_2;
        if (plVar2 == plVar4) {
          *param_2 = (ulong)plVar2 | 3;
          plVar4 = plVar2;
        }
        UNLOCK();
        if (plVar4 == plVar2) {
          plVar4 = plVar2;
          if (((ulong)plVar2 & 3) != 0) {
            plVar4 = (long *)((ulong)plVar2 & 0xfffffffffffffffc);
            if (lVar3 == *plVar4) {
              param_1[2] = plVar4[3];
              plVar4[3] = 1;
              *param_1 = plVar4;
            }
            plVar4 = (long *)plVar4[4];
          }
          lVar7 = 0;
          for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) {
            if (lVar3 == *plVar4) {
              local_238[lVar7] = (ulong)plVar4;
              lVar7 = lVar7 + 1;
            }
          }
          LOCK();
          uVar5 = *param_2;
          *param_2 = (ulong)plVar2;
          UNLOCK();
          plVar4 = (long *)*param_1;
          if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
            uVar5 = FUN_100aafce0((ulong)plVar2 | 3,plVar4[1]);
            *plVar4 = 0;
          }
          if (lVar7 != 0) {
            puVar8 = local_238;
            do {
              plVar2 = (long *)*puVar8;
              if (*plVar2 != 0) {
                FUN_100aaf9d0(plVar2,plVar2[1]);
                *plVar2 = 0;
              }
              uVar5 = param_1[1];
              plVar2[2] = uVar5;
              param_1[1] = plVar2;
              puVar8 = puVar8 + 1;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
          }
          return uVar5;
        }
      }
      if (199 < iVar6) break;
      iVar6 = iVar6 + 1;
    }
    FUN_100ab04d0();
  } while( true );
}

