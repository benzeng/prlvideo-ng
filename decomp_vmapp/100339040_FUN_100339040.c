
uint * FUN_100339040(long param_1,uint *param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  
  uVar2 = *(ushort *)((long)param_2 + 2);
  uVar4 = (ulong)uVar2;
  if ((param_2 < *(uint **)(param_1 + 0xbbf8)) ||
     (lVar3 = uVar4 + 1, *(uint **)(param_1 + 0xbc00) < param_2 + lVar3)) {
    puVar6 = (undefined8 *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(uint *)(puVar6 + 1) = (uint)uVar2 * 4 + 4;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  if (uVar2 != 0) {
    plVar1 = (long *)(param_1 + 0xbbe8);
    uVar11 = 0;
    puVar10 = param_2;
    do {
      puVar10 = puVar10 + 1;
      if ((long *)*plVar1 != (long *)0x0) {
        plVar7 = (long *)*plVar1;
        plVar8 = plVar1;
        do {
          while (plVar9 = plVar7, *puVar10 <= *(uint *)(plVar9 + 4)) {
            plVar7 = (long *)*plVar9;
            plVar8 = plVar9;
            if ((long *)*plVar9 == (long *)0x0) goto LAB_1003390f3;
          }
          plVar5 = plVar9 + 1;
          plVar9 = plVar8;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
LAB_1003390f3:
        if ((plVar9 != plVar1) && (*(uint *)(plVar9 + 4) <= *puVar10)) {
          FUN_10035ff00(*(undefined8 *)(param_1 + 48000),plVar9[5]);
          if ((void *)plVar9[5] != (void *)0x0) {
            operator_delete((void *)plVar9[5]);
          }
          plVar7 = plVar9;
          plVar8 = (long *)plVar9[1];
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar5 = (long *)plVar7[2];
              bVar12 = (long *)*plVar5 != plVar7;
              plVar7 = plVar5;
            } while (bVar12);
          }
          else {
            do {
              plVar5 = plVar8;
              plVar8 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0xbbe0) == plVar9) {
            *(long **)(param_1 + 0xbbe0) = plVar5;
          }
          *(long *)(param_1 + 0xbbf0) = *(long *)(param_1 + 0xbbf0) + -1;
          FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbbe8),plVar9);
          operator_delete(plVar9);
          uVar4 = (ulong)*(ushort *)((long)param_2 + 2);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)uVar4);
  }
  return param_2 + lVar3;
}

