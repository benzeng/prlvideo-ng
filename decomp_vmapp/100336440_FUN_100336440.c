
uint * FUN_100336440(long param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  
  uVar1 = *(ushort *)((long)param_2 + 2);
  if ((param_2 < *(uint **)(param_1 + 0xbbf8)) ||
     (*(uint **)(param_1 + 0xbc00) < param_2 + (ulong)uVar1 + 1)) {
    puVar7 = (undefined8 *)___cxa_allocate_exception(0x10);
    *puVar7 = param_2;
    *(uint *)(puVar7 + 1) = (uint)uVar1 * 4 + 4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar7,&PTR_vtable_101117a68,0);
  }
  if (uVar1 != 0) {
    uVar10 = 0;
    puVar11 = param_2;
    do {
      puVar11 = puVar11 + 1;
      uVar2 = *puVar11;
      FUN_100362590(*(undefined8 *)(param_1 + 48000),uVar2);
      FUN_100362670(*(undefined8 *)(param_1 + 48000),*puVar11);
      FUN_10033c1e0(param_1,uVar2);
      plVar8 = *(long **)(param_1 + 0xbb40);
      plVar5 = (long *)(param_1 + 0xbb40);
      if (*(long **)(param_1 + 0xbb40) != (long *)0x0) {
        do {
          while (plVar9 = plVar8, uVar2 <= *(uint *)(plVar9 + 4)) {
            plVar8 = (long *)*plVar9;
            plVar5 = plVar9;
            if ((long *)*plVar9 == (long *)0x0) goto LAB_100336533;
          }
          plVar6 = plVar9 + 1;
          plVar9 = plVar5;
          plVar8 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
LAB_100336533:
        if ((plVar9 != (long *)(param_1 + 0xbb40)) && (*(uint *)(plVar9 + 4) <= uVar2)) {
          puVar7 = (undefined8 *)plVar9[5];
          if (puVar7 != (undefined8 *)0x0) {
            pvVar3 = (void *)*puVar7;
            if (pvVar3 != (void *)0x0) {
              pvVar4 = (void *)puVar7[1];
              if (pvVar4 != pvVar3) {
                puVar7[1] = (~((long)pvVar4 + (-8 - (long)pvVar3)) & 0xfffffffffffffff8U) +
                            (long)pvVar4;
              }
              operator_delete(pvVar3);
            }
            operator_delete(puVar7);
          }
          plVar8 = plVar9;
          plVar5 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar6 = (long *)plVar8[2];
              bVar12 = (long *)*plVar6 != plVar8;
              plVar8 = plVar6;
            } while (bVar12);
          }
          else {
            do {
              plVar6 = plVar5;
              plVar5 = (long *)*plVar6;
            } while ((long *)*plVar6 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0xbb38) == plVar9) {
            *(long **)(param_1 + 0xbb38) = plVar6;
          }
          *(long *)(param_1 + 0xbb48) = *(long *)(param_1 + 0xbb48) + -1;
          FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbb40),plVar9);
          operator_delete(plVar9);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)((long)param_2 + 2));
  }
  return param_2 + (ulong)uVar1 + 1;
}

