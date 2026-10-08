
void FUN_100c05dd0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar2 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar1 = *param_1 ^ uVar2;
  uVar3 = uVar2 << 4 ^ param_1[1];
  uVar2 = (uVar1 << 0x12 ^ uVar1) & 0xcccc0000;
  uVar2 = uVar2 >> 0x12 ^ uVar1 ^ uVar2;
  uVar1 = (uVar3 << 0x12 ^ uVar3) & 0xcccc0000;
  uVar1 = uVar1 >> 0x12 ^ uVar3 ^ uVar1;
  uVar3 = (uVar1 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar1 = uVar3 * 2 ^ uVar1;
  uVar3 = (uVar2 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar3 << 8 ^ uVar2;
  uVar3 = (uVar1 >> 1 ^ uVar2) & 0x55555555;
  uVar2 = uVar2 ^ uVar3;
  uVar1 = uVar3 * 2 ^ uVar1;
  uVar1 = uVar2 >> 4 & 0xf000000 | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
  uVar5 = 0;
  do {
    if ((0x7efcUL >> (uVar5 & 0x3f) & 1) == 0) {
      uVar2 = uVar2 << 0x1b | (uVar2 & 0xfffffff) >> 1;
      uVar3 = uVar1 >> 1;
      uVar6 = uVar1 << 0x1b;
    }
    else {
      uVar2 = uVar2 << 0x1a | (uVar2 & 0xfffffff) >> 2;
      uVar3 = uVar1 >> 2;
      uVar6 = uVar1 << 0x1a;
    }
    uVar1 = uVar6 & 0xfffffff | uVar3;
    uVar4 = *(uint *)(&DAT_101da70d0 + (ulong)(uVar2 >> 7 & 0x3c | uVar2 >> 6 & 3) * 4) |
            *(uint *)(&DAT_101da6fd0 + (ulong)(uVar2 & 0x3f) * 4) |
            *(uint *)((long)&PTR___mh_execute_header_101da71d0 +
                     (ulong)(uVar2 >> 0xe & 0x30 | uVar2 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_101da72d0 +
                     (ulong)(uVar2 >> 0x16 & 0x38 | uVar2 >> 0x15 & 6 | uVar2 >> 0x14 & 1) * 4);
    uVar3 = *(uint *)(&DAT_101da74d0 + (ulong)((uVar3 & 0x3c00) >> 8 | (uVar3 & 0x180) >> 7) * 4) |
            *(uint *)(&DAT_101da73d0 + (ulong)(uVar3 & 0x3f) * 4) |
            *(uint *)(&DAT_101da75d0 + (ulong)((uVar3 & 0x1f8000) >> 0xf) * 4) |
            *(uint *)(&DAT_101da76d0 +
                     (ulong)((uVar6 | uVar3) >> 0x16 & 0x30 | (uVar3 & 0x1e00000) >> 0x15) * 4);
    *(uint *)(param_2 + uVar5 * 8) = (uVar3 & 0xffff) >> 0xe | (uVar4 & 0xffff | uVar3 << 0x10) << 2
    ;
    *(uint *)(param_2 + 4 + uVar5 * 8) = uVar3 >> 0x1a | (uVar3 & 0xffff0000 | uVar4 >> 0x10) << 6;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x10);
  return;
}

