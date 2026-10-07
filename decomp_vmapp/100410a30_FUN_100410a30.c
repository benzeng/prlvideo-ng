
/* WARNING: Removing unreachable block (ram,0x000100410aaa) */

undefined8
FUN_100410a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char *param_9)

{
  uint uVar1;
  long lVar2;
  char in_AL;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *in_R8;
  uint in_R9D;
  ulong in_stack_00000008;
  undefined1 local_108 [48];
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
  undefined8 local_38 [3];
  long local_20;
  
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
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = local_108;
  local_54 = 0x30;
  local_50 = &stack0x00000010;
  local_58 = 0x30;
  uVar6 = 0;
  local_20 = lVar2;
  if (*param_9 == -0x6f) {
    uVar3 = (uint)*(undefined8 *)(param_9 + 2);
    uVar4 = (uint)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20);
    uVar1 = *(uint *)(param_9 + 10);
    uVar5 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
            + CONCAT44(uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                       uVar3 << 0x18,
                       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18);
  }
  else {
    if (*param_9 != '5') goto LAB_100410bb6;
    uVar1 = *(uint *)(param_9 + 2);
    uVar5 = (ulong)((uint)CONCAT11((char)*(undefined2 *)(param_9 + 7),
                                   (char)((ushort)*(undefined2 *)(param_9 + 7) >> 8)) +
                   (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   );
  }
  if (in_stack_00000008 < uVar5) {
    if (in_R8 != (undefined8 *)0x0) {
      puVar7 = local_38;
      if (0x11 < in_R9D) {
        puVar7 = in_R8;
      }
      *(undefined2 *)(puVar7 + 2) = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined1 *)puVar7 = 0xf0;
      *(undefined1 *)((long)puVar7 + 2) = 5;
      *(char *)((long)puVar7 + 7) = (char)in_R9D + -8;
      *(undefined1 *)((long)puVar7 + 0xc) = 0x21;
LAB_100410b9d:
      *(undefined1 *)((long)puVar7 + 0xd) = 0;
      if (puVar7 != in_R8) {
        _memcpy(in_R8,puVar7,(ulong)in_R9D);
      }
    }
  }
  else {
    if ((param_9[1] & 2U) == 0) goto LAB_100410bb6;
    if (in_R8 != (undefined8 *)0x0) {
      puVar7 = local_38;
      if (0x11 < in_R9D) {
        puVar7 = in_R8;
      }
      *(undefined2 *)(puVar7 + 2) = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *(undefined1 *)puVar7 = 0xf0;
      *(undefined1 *)((long)puVar7 + 2) = 5;
      *(char *)((long)puVar7 + 7) = (char)in_R9D + -8;
      *(undefined1 *)((long)puVar7 + 0xc) = 0x24;
      goto LAB_100410b9d;
    }
  }
  uVar6 = 0xffffffff;
LAB_100410bb6:
  if (lVar2 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

