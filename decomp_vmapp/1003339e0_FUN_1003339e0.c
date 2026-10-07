
undefined8 FUN_1003339e0(long param_1,byte *param_2,int param_3,long param_4,undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  void *local_258;
  void *pvStack_250;
  undefined8 local_248;
  undefined1 local_240 [4];
  uint local_23c [129];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = *(uint *)(param_1 + 0xbb60);
  if (uVar3 == 0) goto LAB_100333bbb;
  if (*(long **)(param_1 + 0xbb40) == (long *)0x0) {
LAB_100333a96:
    FUN_100390a30(local_240);
    local_258 = (void *)0x0;
    pvStack_250 = (void *)0x0;
    local_248 = 0;
    iVar5 = FUN_100390a60(local_240,uVar3,&local_258);
    if (iVar5 == 0) {
      local_23c[0] = uVar3;
      pvVar6 = operator_new(0x18);
      FUN_10033fbb0(pvVar6,&local_258);
      puVar7 = (undefined8 *)FUN_10033fab0(param_1 + 0xbb38,local_23c);
      *puVar7 = pvVar6;
    }
    if (local_258 != (void *)0x0) {
      if (pvStack_250 != local_258) {
        pvStack_250 = (void *)((~((long)pvStack_250 + (-8 - (long)local_258)) & 0xfffffffffffffff8U)
                              + (long)pvStack_250);
      }
      operator_delete(local_258);
    }
    FUN_100390a50(local_240);
  }
  else {
    plVar4 = *(long **)(param_1 + 0xbb40);
    plVar11 = (long *)(param_1 + 0xbb40);
    do {
      while (plVar12 = plVar4, uVar3 <= *(uint *)(plVar12 + 4)) {
        plVar4 = (long *)*plVar12;
        plVar11 = plVar12;
        if ((long *)*plVar12 == (long *)0x0) goto LAB_100333a80;
      }
      plVar1 = plVar12 + 1;
      plVar4 = (long *)*plVar1;
      plVar12 = plVar11;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_100333a80:
    if (((plVar12 == (long *)(param_1 + 0xbb40)) || (uVar3 < *(uint *)(plVar12 + 4))) ||
       (plVar12[5] == 0)) goto LAB_100333a96;
  }
  *(ulong *)(param_1 + 0x188) =
       *(ulong *)(param_1 + 0x188) | *(ulong *)(**(long **)(param_1 + 400) + 0x3080);
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_100333e10(param_1,uVar3);
  cVar2 = *(char *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xbb64);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((iVar5 != 0) || (cVar2 == '\0')) {
    *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 1;
  }
LAB_100333bbb:
  *(byte **)(param_1 + 0xbbf8) = param_2;
  *(byte **)(param_1 + 0xbc00) = param_2 + param_3;
  FUN_100360aa0(*(undefined8 *)(param_1 + 48000));
  for (; param_2 < *(byte **)(param_1 + 0xbc00);
      param_2 = (byte *)(*pcVar10)((long *)(*(long *)(&DAT_101117a98 + lVar8) + param_1),param_2)) {
    if (param_2 < *(byte **)(param_1 + 0xbbf8)) {
      puVar7 = (undefined8 *)___cxa_allocate_exception(0x10);
      *puVar7 = param_2;
      *(undefined4 *)(puVar7 + 1) = 4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,&PTR_vtable_101117a68,0);
    }
    if (*(byte **)(param_1 + 0xbc00) < param_2 + 4) {
      puVar7 = (undefined8 *)___cxa_allocate_exception(0x10);
      *puVar7 = param_2;
      *(undefined4 *)(puVar7 + 1) = 4;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar7,&PTR_vtable_101117a68,0);
    }
    if (0x6b < (ulong)*param_2) break;
    lVar8 = (ulong)*param_2 * 0x10;
    pcVar10 = *(code **)(&DAT_101117a90 + lVar8);
    if (pcVar10 == (code *)0x0) break;
    if (((ulong)pcVar10 & 1) != 0) {
      pcVar10 = *(code **)(pcVar10 + *(long *)(*(long *)(&DAT_101117a98 + lVar8) + param_1) + -1);
    }
  }
  uVar9 = 0;
  *(undefined8 *)(param_1 + 0xbc00) = 0;
  *(undefined8 *)(param_1 + 0xbbf8) = 0;
  if (param_4 != 0) {
    uVar9 = FUN_10035c920(*(undefined8 *)(*(long *)(param_1 + 48000) + 8),param_4,param_5);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

