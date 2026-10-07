
/* WARNING: Removing unreachable block (ram,0x0001004106a1) */
/* WARNING: Removing unreachable block (ram,0x0001004108ad) */
/* WARNING: Removing unreachable block (ram,0x000100410671) */
/* WARNING: Removing unreachable block (ram,0x000100410798) */
/* WARNING: Removing unreachable block (ram,0x00010041060c) */
/* WARNING: Removing unreachable block (ram,0x0001004106e7) */
/* WARNING: Removing unreachable block (ram,0x000100410652) */
/* WARNING: Removing unreachable block (ram,0x000100410627) */
/* WARNING: Removing unreachable block (ram,0x000100410892) */
/* WARNING: Removing unreachable block (ram,0x00010041063c) */
/* WARNING: Removing unreachable block (ram,0x0001004108a4) */
/* WARNING: Removing unreachable block (ram,0x00010041068b) */
/* WARNING: Removing unreachable block (ram,0x00010041089b) */
/* WARNING: Removing unreachable block (ram,0x0001004106b0) */

uint FUN_100410570(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,undefined8 param_10,uint *param_11,uint param_12,
                  undefined8 *param_13,uint param_14,long param_15,uint param_16,uint param_17,
                  int param_18)

{
  long lVar1;
  int iVar2;
  char in_AL;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 local_128 [48];
  undefined4 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  if (in_AL != '\0') {
    local_f8 = param_1;
    local_e8 = param_2;
    local_d8 = param_3;
    local_c8 = param_4;
    local_b8 = param_5;
    local_a8 = param_6;
    local_98 = param_7;
    local_88 = param_8;
  }
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68 = local_128;
  local_74 = 0x30;
  local_30 = lVar1;
  if (*param_9 == -0x62) {
    local_70 = &stack0x00000028;
    local_78 = 0x30;
    uVar4 = 0xffffffff;
    if (param_11 != (uint *)0x0) {
      local_48 = 0;
      uStack_40 = 0;
      lVar6 = -2;
      if (param_15 != 0) {
        lVar6 = param_15 + -1;
      }
      uVar4 = 0xfffffffe;
      if (param_15 != 0) {
        uVar4 = (uint)(param_15 + -1);
      }
      uVar5 = (uint)((ulong)lVar6 >> 0x20);
      local_58 = CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                          uVar4 << 0x18,
                          uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                          uVar5 << 0x18);
      param_17 = param_17 / param_16;
      iVar2 = 0x1f;
      if (param_17 != 0) {
        for (; param_17 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      uVar3 = (undefined1)iVar2;
      if (param_17 == 0) {
        uVar3 = 0xff;
      }
      uStack_50._0_5_ =
           (uint5)(param_16 >> 0x18 | (param_16 & 0xff0000) >> 8 | (param_16 & 0xff00) << 8 |
                  param_16 << 0x18);
      uStack_50 = (ulong)CONCAT15(uVar3,(uint5)uStack_50) & 0xffff0fffffffffff;
      if (param_18 == 1) {
        uStack_50 = (ulong)CONCAT16(0x80,(undefined6)uStack_50);
      }
      uVar4 = 0x20;
      if (param_12 < 0x20) {
        uVar4 = param_12;
      }
      _memcpy(param_11,&local_58,(long)(int)uVar4);
    }
  }
  else {
    local_70 = &stack0x00000028;
    local_78 = 0x30;
    uVar4 = 0xffffffff;
    if ((param_11 != (uint *)0x0) && (7 < param_12)) {
      if (((param_9[8] & 1U) == 0) && (*(int *)(param_9 + 2) != 0)) {
        FUN_1008e3970("","Scsi",0,"pmi bit set for lba 0x%08X return 0x%08X",*(int *)(param_9 + 2),
                      0x52400);
        if (param_13 != (undefined8 *)0x0) {
          puVar7 = &local_58;
          if (0x11 < param_14) {
            puVar7 = param_13;
          }
          *(undefined2 *)(puVar7 + 2) = 0;
          puVar7[1] = 0;
          *puVar7 = 0;
          *(undefined1 *)puVar7 = 0xf0;
          *(undefined1 *)((long)puVar7 + 2) = 5;
          *(char *)((long)puVar7 + 7) = (char)param_14 + -8;
          *(undefined1 *)((long)puVar7 + 0xc) = 0x24;
          *(undefined1 *)((long)puVar7 + 0xd) = 0;
          if (puVar7 != param_13) {
            _memcpy(param_13,puVar7,(ulong)param_14);
          }
        }
      }
      else {
        uVar4 = 0xffffffff;
        if (param_15 - 1U < 0xffffffff) {
          uVar4 = (uint)(param_15 - 1U);
        }
        *param_11 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        param_11[1] = param_16 >> 0x18 | (param_16 & 0xff0000) >> 8 | (param_16 & 0xff00) << 8 |
                      param_16 << 0x18;
        uVar4 = 8;
      }
    }
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

