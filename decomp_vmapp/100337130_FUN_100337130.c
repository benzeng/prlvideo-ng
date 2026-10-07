
ulong FUN_100337130(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong *puVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar8 = lVar2 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar8)) {
    puVar4 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar4 = param_2;
    *(int *)(puVar4 + 1) = (int)lVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar4,&PTR_vtable_101117a68,0);
  }
  (**(code **)(**(long **)(param_1 + 0xbbb8) + 0xa8))
            (*(long **)(param_1 + 0xbbb8),*(undefined4 *)(param_2 + 4));
  if ((*(int *)(param_1 + 0x160) == 0x80000) && (*(long **)(param_1 + 0xbb28) != (long *)0x0)) {
    plVar3 = *(long **)(param_1 + 0xbb28);
    plVar7 = (long *)(param_1 + 0xbb28);
    do {
      while (plVar5 = plVar3, *(uint *)(param_2 + 4) <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar7 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_1003371e0;
      }
      plVar1 = plVar5 + 1;
      plVar5 = plVar7;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_1003371e0:
    if (((plVar5 != (long *)(param_1 + 0xbb28)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_2 + 4))
        ) && (lVar2 = plVar5[5], lVar2 != 0)) {
      for (piVar6 = *(int **)(lVar2 + 0x20); piVar6 != *(int **)(lVar2 + 0x28); piVar6 = piVar6 + 5)
      {
        (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x80))
                  (*(long **)(param_1 + 0xbbb8),*piVar6 << 2,4,piVar6 + 1);
      }
    }
  }
  return uVar8;
}

