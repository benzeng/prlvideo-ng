
ulong FUN_100338b90(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  uint *puVar13;
  uint uVar14;
  long *plVar15;
  bool bVar16;
  
  uVar3 = *(ushort *)(param_2 + 2);
  uVar5 = (uint)uVar3;
  uVar14 = (uint)uVar3 * 8 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar10 = uVar14 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar10)) {
    puVar9 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar9 = param_2;
    *(uint *)(puVar9 + 1) = uVar14;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar9,&PTR_vtable_101117a68,0);
  }
  if (uVar3 != 0) {
    puVar13 = (uint *)(param_2 + 4);
    puVar1 = (undefined8 *)(param_1 + 0xbbe0);
    plVar2 = (long *)(param_1 + 0xbbe8);
    uVar14 = 0;
    do {
      if (puVar13[1] - 8 < 5) {
        uVar4 = *(undefined4 *)(&DAT_100b3b500 + (long)(int)(puVar13[1] - 8) * 4);
        if ((long *)*plVar2 != (long *)0x0) {
          plVar12 = (long *)*plVar2;
          plVar11 = plVar2;
          do {
            while (plVar15 = plVar12, *puVar13 <= *(uint *)(plVar15 + 4)) {
              plVar12 = (long *)*plVar15;
              plVar11 = plVar15;
              if ((long *)*plVar15 == (long *)0x0) goto LAB_100338c83;
            }
            plVar6 = plVar15 + 1;
            plVar15 = plVar11;
            plVar12 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
LAB_100338c83:
          if ((plVar15 != plVar2) && (*(uint *)(plVar15 + 4) <= *puVar13)) {
            FUN_10035ff00(*(undefined8 *)(param_1 + 48000),plVar15[5]);
            if ((void *)plVar15[5] != (void *)0x0) {
              operator_delete((void *)plVar15[5]);
            }
            plVar12 = plVar15;
            plVar11 = (long *)plVar15[1];
            if ((long *)plVar15[1] == (long *)0x0) {
              do {
                plVar6 = (long *)plVar12[2];
                bVar16 = (long *)*plVar6 != plVar12;
                plVar12 = plVar6;
              } while (bVar16);
            }
            else {
              do {
                plVar6 = plVar11;
                plVar11 = (long *)*plVar6;
              } while ((long *)*plVar6 != (long *)0x0);
            }
            if ((long *)*puVar1 == plVar15) {
              *puVar1 = plVar6;
            }
            *(long *)(param_1 + 0xbbf0) = *(long *)(param_1 + 0xbbf0) + -1;
            FUN_1000e86c0(*(undefined8 *)(param_1 + 0xbbe8),plVar15);
            operator_delete(plVar15);
          }
        }
        puVar7 = operator_new(0x10);
        puVar7[1] = 0;
        *puVar7 = 0;
        FUN_10035fe90(*(undefined8 *)(param_1 + 48000),puVar7,uVar4);
        puVar8 = (undefined8 *)FUN_10033f5c0(puVar1,puVar13);
        *puVar8 = puVar7;
        uVar5 = (uint)*(ushort *)(param_2 + 2);
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 2;
    } while (uVar14 < uVar5);
  }
  return uVar10;
}

