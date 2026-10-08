
void FUN_100c01340(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_c8 [128];
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (param_3 != 0) {
    bVar3 = *(byte *)(param_1 + 0xc);
    uVar1 = (uint)*(byte *)(param_1 + 0x14);
    uVar4 = 0;
    do {
      uVar6 = CONCAT13(*(undefined1 *)(param_2 + 3 + uVar4),
                       CONCAT12(*(undefined1 *)(param_2 + 2 + uVar4),
                                CONCAT11(*(undefined1 *)(param_2 + 1 + uVar4),
                                         *(undefined1 *)(param_2 + uVar4))));
      uVar5 = CONCAT13(*(undefined1 *)(param_2 + 7 + uVar4),
                       CONCAT12(*(undefined1 *)(param_2 + 6 + uVar4),
                                CONCAT11(*(undefined1 *)(param_2 + 5 + uVar4),
                                         *(undefined1 *)(param_2 + 4 + uVar4))));
      *(byte *)(param_1 + 0xc) = bVar3 & 0x9f | 0x40;
      *(byte *)(param_1 + 0x14) = (byte)uVar1 & 0x9f | 0x20;
      local_48 = uVar6;
      local_44 = uVar5;
      local_40 = uVar6;
      local_3c = uVar5;
      FUN_100c05b10(param_1 + 0xc);
      FUN_100c05dd0(param_1 + 0xc,local_c8);
      FUN_100c07a60(&local_40,local_c8,1);
      FUN_100c05b10(param_1 + 0x14);
      FUN_100c05dd0(param_1 + 0x14,local_c8);
      FUN_100c07a60(&local_48,local_c8,1);
      uVar1 = local_48 ^ uVar6;
      uVar2 = local_44 ^ uVar5;
      uVar6 = uVar6 ^ local_40;
      uVar5 = uVar5 ^ local_3c;
      bVar3 = (byte)uVar6;
      *(byte *)(param_1 + 0xc) = bVar3;
      *(char *)(param_1 + 0xd) = (char)(uVar6 >> 8);
      *(char *)(param_1 + 0xe) = (char)(uVar6 >> 0x10);
      *(char *)(param_1 + 0xf) = (char)(uVar6 >> 0x18);
      *(char *)(param_1 + 0x10) = (char)uVar2;
      *(char *)(param_1 + 0x11) = (char)(uVar2 >> 8);
      *(char *)(param_1 + 0x12) = (char)(uVar2 >> 0x10);
      *(char *)(param_1 + 0x13) = (char)(uVar2 >> 0x18);
      *(char *)(param_1 + 0x14) = (char)uVar1;
      *(char *)(param_1 + 0x15) = (char)(uVar1 >> 8);
      *(char *)(param_1 + 0x16) = (char)(uVar1 >> 0x10);
      *(char *)(param_1 + 0x17) = (char)(uVar1 >> 0x18);
      *(char *)(param_1 + 0x18) = (char)uVar5;
      *(char *)(param_1 + 0x19) = (char)(uVar5 >> 8);
      *(char *)(param_1 + 0x1a) = (char)(uVar5 >> 0x10);
      *(char *)(param_1 + 0x1b) = (char)(uVar5 >> 0x18);
      uVar4 = uVar4 + 8;
    } while (uVar4 < param_3);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

