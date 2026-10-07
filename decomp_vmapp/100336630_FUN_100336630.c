
ulong FUN_100336630(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  code *pcVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined1 local_38 [4];
  uint local_34;
  
  uVar5 = *(ushort *)(param_2 + 2);
  lVar16 = (ulong)uVar5 * 4 + 4;
  if (*(ulong *)(param_1 + 0xbbf8) <= param_2) {
    uVar14 = lVar16 + param_2;
    if (uVar14 <= *(ulong *)(param_1 + 0xbc00)) {
      lVar16 = (ulong)uVar5 * 4;
      uVar1 = param_2 + 4;
      if ((*(ulong *)(param_1 + 0xbbf8) <= uVar1) &&
         (lVar16 + 4 + param_2 <= *(ulong *)(param_1 + 0xbc00))) {
        if (uVar5 != 0) {
          plVar3 = (long *)(param_1 + 0xbb40);
          plVar4 = (long *)(param_1 + 0xbb10);
          lVar16 = 0;
          do {
            uVar13 = *(uint *)(uVar1 + lVar16 * 4);
            if ((uVar13 & 1) == 0) {
              plVar15 = (long *)*plVar3;
              plVar11 = plVar3;
              if ((long *)*plVar3 == (long *)0x0) {
LAB_1003367c0:
                FUN_100390a30(local_38);
                local_58 = (void *)0x0;
                pvStack_50 = (void *)0x0;
                local_48 = 0;
                iVar6 = FUN_100390a60(local_38,uVar13,&local_58);
                if (iVar6 == 0) {
                  local_34 = uVar13;
                  pvVar7 = operator_new(0x18);
                  FUN_10033fbb0(pvVar7,&local_58);
                  puVar8 = (undefined8 *)FUN_10033fab0(param_1 + 0xbb38,&local_34);
                  *puVar8 = pvVar7;
                }
                if (local_58 != (void *)0x0) {
                  if (pvStack_50 != local_58) {
                    pvStack_50 = (void *)((~((long)pvStack_50 + (-8 - (long)local_58)) &
                                          0xfffffffffffffff8U) + (long)pvStack_50);
                  }
                  operator_delete(local_58);
                }
                FUN_100390a50(local_38);
              }
              else {
                do {
                  while (plVar9 = plVar15, uVar13 <= *(uint *)(plVar9 + 4)) {
                    plVar15 = (long *)*plVar9;
                    plVar11 = plVar9;
                    if ((long *)*plVar9 == (long *)0x0) goto LAB_1003367a3;
                  }
                  plVar2 = plVar9 + 1;
                  plVar15 = (long *)*plVar2;
                  plVar9 = plVar11;
                } while ((long *)*plVar2 != (long *)0x0);
LAB_1003367a3:
                if (((plVar9 == plVar3) || (uVar13 < *(uint *)(plVar9 + 4))) || (plVar9[5] == 0))
                goto LAB_1003367c0;
              }
              (**(code **)(**(long **)(param_1 + 0xbbb8) + 0x98))(*(long **)(param_1 + 0xbbb8),0);
            }
            else {
              plVar15 = (long *)*plVar4;
              plVar11 = plVar4;
              if ((long *)*plVar4 == (long *)0x0) {
LAB_100336883:
                plVar15 = *(long **)(param_1 + 0xbbb8);
                pcVar12 = *(code **)(*plVar15 + 0x98);
                uVar13 = 0;
              }
              else {
                do {
                  while (plVar9 = plVar15, uVar13 <= *(uint *)(plVar9 + 4)) {
                    plVar15 = (long *)*plVar9;
                    plVar11 = plVar9;
                    if ((long *)*plVar9 == (long *)0x0) goto LAB_100336873;
                  }
                  plVar2 = plVar9 + 1;
                  plVar9 = plVar11;
                  plVar15 = (long *)*plVar2;
                } while ((long *)*plVar2 != (long *)0x0);
LAB_100336873:
                if ((plVar9 == plVar4) || (uVar13 < *(uint *)(plVar9 + 4))) goto LAB_100336883;
                plVar15 = *(long **)(param_1 + 0xbbb8);
                pcVar12 = *(code **)(*plVar15 + 0x98);
                if (plVar9[5] == 0) {
                  uVar13 = 0;
                }
              }
              (*pcVar12)(plVar15,uVar13);
            }
            (**(code **)(**(long **)(param_1 + 0xbbb8) + 0xa0))();
            lVar16 = lVar16 + 1;
          } while (lVar16 < (long)(ulong)*(ushort *)(param_2 + 2));
        }
        return uVar14;
      }
      puVar10 = (ulong *)___cxa_allocate_exception(0x10);
      *puVar10 = uVar1;
      *(int *)(puVar10 + 1) = (int)lVar16;
      goto LAB_100336947;
    }
  }
  puVar10 = (ulong *)___cxa_allocate_exception(0x10);
  *puVar10 = param_2;
  *(int *)(puVar10 + 1) = (int)lVar16;
LAB_100336947:
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar10,&PTR_vtable_101117a68,0);
}

