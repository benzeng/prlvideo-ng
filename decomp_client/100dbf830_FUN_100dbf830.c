
undefined8 FUN_100dbf830(long *param_1,int param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  void *buffer;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  undefined1 local_a8 [16];
  int local_98;
  int local_90;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (long)param_2;
  uVar5 = 0xffffffffffffffff;
  if (SUB168(auVar1 * ZEXT816(8),8) == 0) {
    uVar5 = SUB168(auVar1 * ZEXT816(8),0);
  }
  local_38 = lVar8;
  buffer = operator_new__(uVar5);
  iVar7 = 0;
  iVar2 = _proc_pidinfo(*(int *)(*param_1 + 0x28),6,0,buffer,param_2 * 8);
  if ((param_2 < 1) || (iVar2 < 1)) {
    operator_delete__(buffer);
    uVar3 = 1;
    iVar6 = 0;
    if (iVar2 < 1) goto LAB_100dbf97e;
  }
  else {
    iVar6 = 0;
    lVar8 = 1;
    iVar7 = 0;
    do {
      iVar2 = _proc_pidinfo(*(int *)(*param_1 + 0x28),5,*(uint64_t *)((long)buffer + lVar8 * 8 + -8)
                            ,local_a8,0x70);
      if (iVar2 < 1) {
        operator_delete__(buffer);
        uVar3 = 1;
        lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100dbf97e;
      }
      iVar4 = iVar6;
      if (local_90 <= iVar6) {
        iVar4 = local_90;
      }
      bVar9 = iVar6 == 0;
      iVar6 = iVar4;
      if (bVar9) {
        iVar6 = local_90;
      }
      iVar7 = iVar7 + local_98;
    } while ((lVar8 < param_2) && (lVar8 = lVar8 + 1, 0 < iVar2));
    operator_delete__(buffer);
    lVar8 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  *(int *)((long)param_1 + 0x74) = iVar7;
  *(int *)(param_1 + 0xe) = iVar6;
  uVar3 = 0;
LAB_100dbf97e:
  if (lVar8 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

