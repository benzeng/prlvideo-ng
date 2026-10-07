
ulong FUN_1003382c0(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 local_50 [8];
  void *local_48;
  void *pvStack_40;
  undefined8 local_38;
  uint local_2c;
  
  lVar2 = (ulong)*(ushort *)(param_2 + 2) * 4 + 4;
  if ((param_2 < *(ulong *)(param_1 + 0xbbf8)) ||
     (uVar11 = lVar2 + param_2, *(ulong *)(param_1 + 0xbc00) < uVar11)) {
    puVar8 = (ulong *)___cxa_allocate_exception(0x10);
    *puVar8 = param_2;
    *(int *)(puVar8 + 1) = (int)lVar2;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar8,&PTR_vtable_101117a68,0);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if ((uVar3 & 1) == 0) {
    if (*(long **)(param_1 + 0xbb40) != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0xbb40);
      plVar9 = (long *)(param_1 + 0xbb40);
      do {
        while (plVar10 = plVar4, uVar3 <= *(uint *)(plVar10 + 4)) {
          plVar4 = (long *)*plVar10;
          plVar9 = plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_100338350;
        }
        plVar1 = plVar10 + 1;
        plVar4 = (long *)*plVar1;
        plVar10 = plVar9;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_100338350:
      if (((plVar10 != (long *)(param_1 + 0xbb40)) && (*(uint *)(plVar10 + 4) <= uVar3)) &&
         (plVar10[5] != 0)) goto LAB_1003383f4;
    }
    local_48 = (void *)0x0;
    pvStack_40 = (void *)0x0;
    local_38 = 0;
    FUN_100390a30(local_50);
    iVar5 = FUN_100390a60(local_50,uVar3,&local_48);
    if (iVar5 == 0) {
      local_2c = uVar3;
      pvVar6 = operator_new(0x18);
      FUN_10033fbb0(pvVar6,&local_48);
      puVar7 = (undefined8 *)FUN_10033fab0(param_1 + 0xbb38,&local_2c);
      *puVar7 = pvVar6;
    }
    FUN_100390a50(local_50);
    if (local_48 != (void *)0x0) {
      if (pvStack_40 != local_48) {
        pvStack_40 = (void *)((~((long)pvStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                             (long)pvStack_40);
      }
      operator_delete(local_48);
    }
  }
LAB_1003383f4:
  FUN_100333e10(param_1,*(undefined4 *)(param_2 + 4));
  return uVar11;
}

