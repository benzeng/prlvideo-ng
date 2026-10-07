
ulong FUN_100334c50(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  uint local_34;
  
  lVar3 = (ulong)*(ushort *)(param_2 + 2) * 0xc + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar9 = lVar3 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar9)) {
    puVar8 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar8 = param_2;
    *(int *)(puVar8 + 1) = (int)lVar3;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar8,&PTR_vtable_101117a68,0);
  }
  if (*(ushort *)(param_2 + 2) != 0) {
    puVar12 = (uint *)(param_2 + 4);
    plVar2 = (long *)(param_1 + 0xbbd0);
    iVar13 = 0;
    do {
      uVar11 = *puVar12;
      if (uVar11 == 0) {
        uVar11 = *(uint *)(param_1 + 0xbbc0);
      }
      else {
        *(uint *)(param_1 + 0xbbc0) = uVar11;
      }
      plVar4 = (long *)*plVar2;
      plVar10 = plVar2;
      local_34 = uVar11;
      if ((long *)*plVar2 == (long *)0x0) {
LAB_100334d3d:
        puVar6 = operator_new(0x40c);
        *puVar6 = uVar11;
        ___bzero(puVar6 + 1,0x408);
        puVar7 = (undefined8 *)FUN_10033efe0(param_1 + 0xbbc8,&local_34);
        *puVar7 = puVar6;
      }
      else {
        do {
          while (plVar5 = plVar4, uVar11 <= *(uint *)(plVar5 + 4)) {
            plVar4 = (long *)*plVar5;
            plVar10 = plVar5;
            if ((long *)*plVar5 == (long *)0x0) goto LAB_100334d33;
          }
          plVar1 = plVar5 + 1;
          plVar5 = plVar10;
          plVar4 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
LAB_100334d33:
        if ((plVar5 == plVar2) || (uVar11 < *(uint *)(plVar5 + 4))) goto LAB_100334d3d;
        puVar6 = (uint *)plVar5[5];
      }
      FUN_100380200(puVar6,puVar12[1]);
      FUN_100380210(puVar6,puVar12[2]);
      iVar13 = iVar13 + 1;
      puVar12 = puVar12 + 3;
    } while (iVar13 < (int)(uint)*(ushort *)(param_2 + 2));
  }
  return uVar9;
}

