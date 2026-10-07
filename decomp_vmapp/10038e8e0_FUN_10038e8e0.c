
void FUN_10038e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  uint *param_9,char *param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  char in_AL;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  long local_38;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pvVar4 = *(void **)(param_9 + 2);
  local_f8 = param_11;
  local_f0 = param_12;
  local_e8 = param_13;
  local_e0 = param_14;
  while( true ) {
    pvVar6 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      pvVar6 = *(void **)(param_9 + 6);
    }
    puVar3 = param_9 + 4;
    if (pvVar4 == (void *)0x0) {
      puVar3 = param_9 + 8;
    }
    iVar5 = *puVar3 - *param_9;
    local_48 = local_108;
    local_50 = &stack0x00000008;
    local_54 = 0x30;
    local_58 = 0x10;
    iVar2 = _vsnprintf((char *)((long)pvVar6 + (ulong)*param_9),(long)iVar5,param_10,&local_58);
    if ((-1 < iVar2) && (iVar2 < iVar5)) break;
    pvVar6 = *(void **)(param_9 + 2);
    puVar3 = param_9 + 4;
    if (pvVar6 == (void *)0x0) {
      puVar3 = param_9 + 8;
    }
    uVar1 = *puVar3;
    param_9[4] = uVar1 * 2;
    pvVar4 = operator_new__((ulong)(uVar1 * 2));
    if (pvVar6 == (void *)0x0) {
      _memmove(pvVar4,*(void **)(param_9 + 6),(ulong)*param_9);
      *(void **)(param_9 + 2) = pvVar4;
    }
    else {
      _memmove(pvVar4,pvVar6,(ulong)*param_9);
      operator_delete__(pvVar6);
      *(void **)(param_9 + 2) = pvVar4;
    }
  }
  *param_9 = *param_9 + iVar2;
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

