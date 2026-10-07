
int FUN_100721a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  long lVar2;
  char in_AL;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  long local_30;
  
  if (in_AL != '\0') {
    local_c8 = param_1;
    local_b8 = param_2;
    local_a8 = param_3;
    local_98 = param_4;
    local_88 = param_5;
    local_78 = param_6;
    local_68 = param_7;
    local_58 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_e8 = param_11;
  local_e0 = param_12;
  local_d8 = param_13;
  local_d0 = param_14;
  local_30 = lVar1;
  if (param_9 == (undefined8 *)0x0) {
    piVar5 = ___error();
    *piVar5 = 0x16;
    iVar7 = -1;
    goto LAB_100721b64;
  }
  local_38 = local_f8;
  local_40 = &stack0x00000008;
  local_44 = 0x30;
  local_48 = 0x10;
  pvVar4 = (void *)*param_9;
  if (pvVar4 == (void *)0x0) {
LAB_100721ae9:
    pvVar4 = _realloc(pvVar4,param_9[2] + 0x800);
    if (pvVar4 == (void *)0x0) {
      piVar5 = ___error();
      *piVar5 = 0xc;
      iVar7 = -1;
      goto LAB_100721b64;
    }
    *param_9 = pvVar4;
    lVar2 = param_9[2];
    param_9[2] = lVar2 + 0x800;
    lVar6 = param_9[1];
    uVar8 = (lVar2 + 0x800) - lVar6;
  }
  else {
    lVar6 = param_9[1];
    uVar8 = param_9[2] - lVar6;
    if (uVar8 < 2) goto LAB_100721ae9;
  }
  iVar3 = ___vsnprintf_chk((long)pvVar4 + lVar6,uVar8 - 1,0,0xffffffffffffffff,param_10,&local_48);
  iVar7 = 0;
  if (iVar3 != 0) {
    param_9[1] = param_9[1] + (long)iVar3;
    iVar7 = iVar3;
  }
LAB_100721b64:
  if (lVar1 == local_30) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

