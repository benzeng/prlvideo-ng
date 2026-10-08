
void FUN_100ddb7d0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = param_2 + 0xf >> 4;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if ((int)uVar3 != 0) {
    uVar5 = 0;
    puVar6 = param_1;
    do {
      uVar4 = (ulong)((int)uVar5 + 0x10);
      if (param_2 < uVar4) {
        puVar6 = &local_48;
        _memcpy(puVar6,param_1,param_2 & 0xf);
      }
      local_68 = *puVar6;
      uStack_60 = puVar6[1];
      if ((byte)local_68 < 0x20) {
        uVar1 = (ulong)local_68 >> 8;
        local_68 = CONCAT71((int7)uVar1,0x2e);
      }
      if (local_68._1_1_ < 0x20) {
        local_68._0_2_ = CONCAT11(0x2e,(byte)local_68);
      }
      if (local_68._2_1_ < 0x20) {
        local_68._0_3_ = CONCAT12(0x2e,(undefined2)local_68);
      }
      if (local_68._3_1_ < 0x20) {
        local_68._0_4_ = CONCAT13(0x2e,(undefined3)local_68);
      }
      if (local_68._4_1_ < 0x20) {
        local_68._0_5_ = CONCAT14(0x2e,(undefined4)local_68);
      }
      if (local_68._5_1_ < 0x20) {
        local_68._0_6_ = CONCAT15(0x2e,(undefined5)local_68);
      }
      if (local_68._6_1_ < 0x20) {
        local_68._0_7_ = CONCAT16(0x2e,(undefined6)local_68);
      }
      if (local_68._7_1_ < 0x20) {
        local_68 = CONCAT17(0x2e,(undefined7)local_68);
      }
      if ((byte)uStack_60 < 0x20) {
        uVar1 = (ulong)uStack_60 >> 8;
        uStack_60 = CONCAT71((int7)uVar1,0x2e);
      }
      if (uStack_60._1_1_ < 0x20) {
        uStack_60._0_2_ = CONCAT11(0x2e,(byte)uStack_60);
      }
      if (uStack_60._2_1_ < 0x20) {
        uStack_60._0_3_ = CONCAT12(0x2e,(undefined2)uStack_60);
      }
      if (uStack_60._3_1_ < 0x20) {
        uStack_60._0_4_ = CONCAT13(0x2e,(undefined3)uStack_60);
      }
      if (uStack_60._4_1_ < 0x20) {
        uStack_60._0_5_ = CONCAT14(0x2e,(undefined4)uStack_60);
      }
      if (uStack_60._5_1_ < 0x20) {
        uStack_60._0_6_ = CONCAT15(0x2e,(undefined5)uStack_60);
      }
      if (uStack_60._6_1_ < 0x20) {
        uStack_60._0_7_ = CONCAT16(0x2e,(undefined6)uStack_60);
      }
      if (uStack_60._7_1_ < 0x20) {
        uStack_60 = CONCAT17(0x2e,(undefined7)uStack_60);
      }
      FUN_100df99c0("","Std",0,
                    "%08x %02x %02x %02x %02x %02x %02x %02x %02x | %02x %02x %02x %02x %02x %02x %02x %02x %s"
                    ,uVar5,*(undefined1 *)puVar6,*(undefined1 *)((long)puVar6 + 1),
                    *(undefined1 *)((long)puVar6 + 2),*(undefined1 *)((long)puVar6 + 3),
                    *(undefined1 *)((long)puVar6 + 4),*(undefined1 *)((long)puVar6 + 5),
                    *(undefined1 *)((long)puVar6 + 6),*(undefined1 *)((long)puVar6 + 7),
                    *(undefined1 *)(puVar6 + 1),*(undefined1 *)((long)puVar6 + 9),
                    *(undefined1 *)((long)puVar6 + 10),*(undefined1 *)((long)puVar6 + 0xb),
                    *(undefined1 *)((long)puVar6 + 0xc),*(undefined1 *)((long)puVar6 + 0xd),
                    *(undefined1 *)((long)puVar6 + 0xe),*(undefined1 *)((long)puVar6 + 0xf),
                    &local_68);
      puVar6 = puVar6 + 2;
      uVar2 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar2;
      uVar5 = uVar4;
    } while (uVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

