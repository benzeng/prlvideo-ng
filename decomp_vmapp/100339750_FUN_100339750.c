
ulong FUN_100339750(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 2) * 0x14 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar6 = lVar2 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar6)) {
    puVar4 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar4 = param_2;
    *(int *)(puVar4 + 1) = (int)lVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
  }
  if (*(long **)(param_1 + 0xbbe8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0xbbe8);
    plVar7 = (long *)(param_1 + 0xbbe8);
    do {
      while (plVar5 = plVar3, *(uint *)(param_2 + 4) <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar7 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_1003397d0;
      }
      plVar1 = plVar5 + 1;
      plVar5 = plVar7;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_1003397d0:
    if ((plVar5 != (long *)(param_1 + 0xbbe8)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_2 + 4)))
    {
      FUN_10033cde0(param_1,plVar5[5],*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                    *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0xc));
    }
  }
  return uVar6;
}

