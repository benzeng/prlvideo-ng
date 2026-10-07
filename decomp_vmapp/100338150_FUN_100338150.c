
ulong FUN_100338150(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  bool bVar11;
  
  lVar1 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar10 = lVar1 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar10)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(int *)(puVar6 + 1) = (int)lVar1;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  FUN_100362670(*(undefined8 *)(param_1 + 48000),*(undefined4 *)(param_2 + 4));
  if (*(long **)(param_1 + 0xbb40) != (long *)0x0) {
    plVar7 = *(long **)(param_1 + 0xbb40);
    plVar8 = (long *)(param_1 + 0xbb40);
    do {
      while (plVar9 = plVar7, *(uint *)(param_2 + 4) <= *(uint *)(plVar9 + 4)) {
        plVar7 = (long *)*plVar9;
        plVar8 = plVar9;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_1003381e0;
      }
      plVar5 = plVar9 + 1;
      plVar9 = plVar8;
      plVar7 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_1003381e0:
    if ((plVar9 != (long *)(param_1 + 0xbb40)) && (*(uint *)(plVar9 + 4) <= *(uint *)(param_2 + 4)))
    {
      puVar2 = (undefined8 *)plVar9[5];
      if (puVar2 != (undefined8 *)0x0) {
        pvVar3 = (void *)*puVar2;
        if (pvVar3 != (void *)0x0) {
          pvVar4 = (void *)puVar2[1];
          if (pvVar4 != pvVar3) {
            puVar2[1] = (~((long)pvVar4 + (-8 - (long)pvVar3)) & 0xfffffffffffffff8U) + (long)pvVar4
            ;
          }
          operator_delete(pvVar3);
        }
        operator_delete(puVar2);
      }
      plVar7 = plVar9;
      plVar8 = (long *)plVar9[1];
      if ((long *)plVar9[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar7[2];
          bVar11 = (long *)*plVar5 != plVar7;
          plVar7 = plVar5;
        } while (bVar11);
      }
      else {
        do {
          plVar5 = plVar8;
          plVar8 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0xbb38) == plVar9) {
        *(long **)(param_1 + 0xbb38) = plVar5;
      }
      *(long *)(param_1 + 0xbb48) = *(long *)(param_1 + 0xbb48) + -1;
      FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbb40),plVar9);
      operator_delete(plVar9);
    }
  }
  return uVar10;
}

