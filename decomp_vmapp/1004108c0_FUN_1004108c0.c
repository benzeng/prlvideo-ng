
/* WARNING: Removing unreachable block (ram,0x00010041093a) */

undefined8
FUN_1004108c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char *param_9)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  char in_AL;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
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
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_48 = local_108;
  local_54 = 0x30;
  local_50 = &stack0x00000010;
  local_58 = 0x30;
  cVar1 = *param_9;
  uVar7 = 0;
  local_20 = lVar3;
  if (cVar1 == -0x51) {
    uVar2 = *(uint *)(param_9 + 2);
    uVar4 = *(uint *)(param_9 + 6);
    uVar6 = (ulong)((uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18
                    ) + (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                        uVar2 << 0x18));
  }
  else if (cVar1 == -0x71) {
    uVar4 = (uint)*(undefined8 *)(param_9 + 2);
    uVar5 = (uint)((ulong)*(undefined8 *)(param_9 + 2) >> 0x20);
    uVar2 = *(uint *)(param_9 + 10);
    uVar6 = (ulong)(uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
            + CONCAT44(uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18,
                       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18);
  }
  else {
    if (cVar1 != '/') goto LAB_100410a12;
    uVar2 = *(uint *)(param_9 + 2);
    uVar6 = (ulong)((uint)CONCAT11((char)*(undefined2 *)(param_9 + 7),
                                   (char)((ushort)*(undefined2 *)(param_9 + 7) >> 8)) +
                   (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18)
                   );
  }
  if (in_stack_00000008 < uVar6) {
    if (in_R8 != (undefined8 *)0x0) {
      puVar8 = local_38;
      if (0x11 < in_R9D) {
        puVar8 = in_R8;
      }
      *(undefined2 *)(puVar8 + 2) = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      *(undefined1 *)puVar8 = 0xf0;
      *(undefined1 *)((long)puVar8 + 2) = 5;
      *(char *)((long)puVar8 + 7) = (char)in_R9D + -8;
      *(undefined1 *)((long)puVar8 + 0xc) = 0x21;
      *(undefined1 *)((long)puVar8 + 0xd) = 0;
      if (puVar8 != in_R8) {
        _memcpy(in_R8,puVar8,(ulong)in_R9D);
      }
    }
    uVar7 = 0xffffffff;
  }
LAB_100410a12:
  if (lVar3 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

