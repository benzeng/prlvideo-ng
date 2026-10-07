
void * FUN_100559300(long *param_1,undefined8 param_2,long *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  uVar5 = FUN_100557890(param_1,param_2,param_3,(ulong)(param_1 + 10) & 0xfffffffffffffffe);
  pvVar12 = (void *)0x0;
  if (-1 < (int)uVar5) {
    uVar2 = *(uint *)(param_1[2] + 4);
    lVar7 = (ulong)uVar2 * (long)(int)uVar5;
    *param_3 = lVar7;
    lVar11 = (long)(int)uVar5 * 0x10;
    pvVar12 = *(void **)(param_1[0xc] + 8 + lVar11);
    if (pvVar12 == (void *)0x0) {
      lVar4 = *(long *)(*(long *)(param_1[3] + 8) + 0x20);
      if ((lVar4 == 0) || (pvVar9 = (void *)(lVar4 + lVar7), pvVar9 == (void *)0x0)) {
        FUN_1008e3970("","TransMem",0,"Failed to get a write source for block %u");
        pvVar12 = (void *)0x0;
      }
      else {
        uVar6 = *(uint *)(param_1[2] + 0x24);
        if (7 < uVar6) {
          uVar6 = uVar6 >> 3;
          uVar10 = 0;
          do {
            if (*(char *)((ulong)(uVar6 * uVar5) + *(long *)(param_1[2] + 0x48) + uVar10) != -1) {
              *param_4 = 0;
              pvVar8 = (void *)FUN_100557a20(param_1);
              pvVar12 = (void *)0x0;
              if (pvVar8 != (void *)0x0) {
                lVar7 = param_1[2];
                uVar2 = *(uint *)(lVar7 + 0x24);
                pvVar12 = pvVar8;
                if (uVar2 != 0) {
                  lVar11 = *(long *)(lVar7 + 0x48);
                  uVar6 = 0;
                  do {
                    if ((*(uint *)((ulong)((uVar2 >> 3) * uVar5) + lVar11 + (ulong)(uVar6 >> 5) * 4)
                         >> (uVar6 & 0x1f) & 1) != 0) {
                      _memcpy(pvVar8,pvVar9,0x1000);
                      *param_4 = *param_4 + 0x1000;
                      pvVar8 = (void *)((long)pvVar8 + 0x1000);
                      lVar7 = param_1[2];
                    }
                    pvVar9 = (void *)((long)pvVar9 + 0x1000);
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < *(uint *)(lVar7 + 0x24));
                }
              }
              goto LAB_1005594d0;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar6);
        }
        *param_4 = uVar2;
        pvVar8 = (void *)(**(code **)(*param_1 + 0x68))(param_1);
        pvVar12 = pvVar9;
        if (pvVar8 != (void *)0x0) {
          _memcpy(pvVar8,pvVar9,(ulong)*param_4);
          *(void **)(param_1[0xc] + 8 + lVar11) = pvVar8;
          puVar1 = (uint *)(param_1[0xf] + (ulong)(uVar5 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
          *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
          QWaitCondition::wakeAll();
          pvVar12 = pvVar8;
        }
      }
    }
    else {
      *param_4 = uVar2;
    }
  }
LAB_1005594d0:
  QMutex::unlock();
  if (*(long *)PTR____stack_chk_guard_100ba2320 != lVar3) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar12;
}

