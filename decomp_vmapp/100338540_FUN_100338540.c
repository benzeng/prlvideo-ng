
ulong FUN_100338540(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar7 = lVar2 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar7)) {
    puVar4 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar4 = param_2;
    *(int *)(puVar4 + 1) = (int)lVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
  }
  if (*(long **)(param_1 + 0xbb10) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0xbb10);
    plVar5 = (long *)(param_1 + 0xbb10);
    do {
      while (plVar6 = plVar3, *(uint *)(param_2 + 4) <= *(uint *)(plVar6 + 4)) {
        plVar3 = (long *)*plVar6;
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_1003385c0;
      }
      plVar1 = plVar6 + 1;
      plVar3 = (long *)*plVar1;
      plVar6 = plVar5;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_1003385c0:
    if (((plVar6 != (long *)(param_1 + 0xbb10)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_2 + 4))
        ) && (plVar6[5] != 0)) {
      FUN_100362590(*(undefined8 *)(param_1 + 48000));
      FUN_10033c1e0(param_1,*(undefined4 *)(param_2 + 4));
    }
  }
  return uVar7;
}

