
ulong FUN_1003391e0(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  
  uVar9 = (uint)*(ushort *)(param_2 + 2) * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar11 = uVar9 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar11)) {
    puVar6 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar6 = param_2;
    *(uint *)(puVar6 + 1) = uVar9;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&PTR_vtable_101117a68,0);
  }
  if ((*(char *)(DAT_1011c8478 + 0x43) != '\0') && (*(ushort *)(param_2 + 2) != 0)) {
    puVar10 = (uint *)(param_2 + 4);
    plVar2 = (long *)(param_1 + 0xbbe8);
    uVar9 = 0;
    do {
      if ((long *)*plVar2 != (long *)0x0) {
        uVar3 = *puVar10;
        plVar5 = (long *)*plVar2;
        plVar8 = plVar2;
        do {
          while (plVar7 = plVar5, uVar3 <= *(uint *)(plVar7 + 4)) {
            plVar5 = (long *)*plVar7;
            plVar8 = plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_1003392a3;
          }
          plVar1 = plVar7 + 1;
          plVar7 = plVar8;
          plVar5 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_1003392a3:
        if (((plVar7 != plVar2) && (*(uint *)(plVar7 + 4) <= uVar3)) &&
           (puVar4 = (undefined8 *)plVar7[5], *(int *)*puVar4 != 0)) {
          if ((puVar10[1] & 1) == 0) {
            if ((puVar10[1] & 2) != 0) {
              FUN_10035bdc0(*(undefined8 *)(*(long *)(param_1 + 48000) + 8));
            }
          }
          else {
            *(uint *)(puVar4 + 1) = uVar3;
            *(undefined4 *)((long)puVar4 + 0xc) = 0;
            FUN_10035c0d0(*(undefined8 *)(*(long *)(param_1 + 48000) + 8));
          }
        }
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 2;
    } while (uVar9 < *(ushort *)(param_2 + 2));
  }
  return uVar11;
}

