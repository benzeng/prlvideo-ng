
void FUN_1003e97b0(void *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte local_98 [96];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98[0x50] = 0;
  local_98[0x51] = 0;
  local_98[0x52] = 0;
  local_98[0x53] = 0;
  local_98[0x54] = 0;
  local_98[0x55] = 0;
  local_98[0x56] = 0;
  local_98[0x57] = 0;
  local_98[0x58] = 0;
  local_98[0x59] = 0;
  local_98[0x5a] = 0;
  local_98[0x5b] = 0;
  local_98[0x5c] = 0;
  local_98[0x5d] = 0;
  local_98[0x5e] = 0;
  local_98[0x5f] = 0;
  local_98[0x40] = 0;
  local_98[0x41] = 0;
  local_98[0x42] = 0;
  local_98[0x43] = 0;
  local_98[0x44] = 0;
  local_98[0x45] = 0;
  local_98[0x46] = 0;
  local_98[0x47] = 0;
  local_98[0x48] = 0;
  local_98[0x49] = 0;
  local_98[0x4a] = 0;
  local_98[0x4b] = 0;
  local_98[0x4c] = 0;
  local_98[0x4d] = 0;
  local_98[0x4e] = 0;
  local_98[0x4f] = 0;
  local_98[0x30] = 0;
  local_98[0x31] = 0;
  local_98[0x32] = 0;
  local_98[0x33] = 0;
  local_98[0x34] = 0;
  local_98[0x35] = 0;
  local_98[0x36] = 0;
  local_98[0x37] = 0;
  local_98[0x38] = 0;
  local_98[0x39] = 0;
  local_98[0x3a] = 0;
  local_98[0x3b] = 0;
  local_98[0x3c] = 0;
  local_98[0x3d] = 0;
  local_98[0x3e] = 0;
  local_98[0x3f] = 0;
  local_98[0x20] = 0;
  local_98[0x21] = 0;
  local_98[0x22] = 0;
  local_98[0x23] = 0;
  local_98[0x24] = 0;
  local_98[0x25] = 0;
  local_98[0x26] = 0;
  local_98[0x27] = 0;
  local_98[0x28] = 0;
  local_98[0x29] = 0;
  local_98[0x2a] = 0;
  local_98[0x2b] = 0;
  local_98[0x2c] = 0;
  local_98[0x2d] = 0;
  local_98[0x2e] = 0;
  local_98[0x2f] = 0;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[0x12] = 0;
  local_98[0x13] = 0;
  local_98[0x14] = 0;
  local_98[0x15] = 0;
  local_98[0x16] = 0;
  local_98[0x17] = 0;
  local_98[0x18] = 0;
  local_98[0x19] = 0;
  local_98[0x1a] = 0;
  local_98[0x1b] = 0;
  local_98[0x1c] = 0;
  local_98[0x1d] = 0;
  local_98[0x1e] = 0;
  local_98[0x1f] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  pbVar13 = local_98;
  lVar10 = 0;
  do {
    bVar1 = *(byte *)((long)param_1 + lVar10);
    bVar2 = *(byte *)((long)param_1 + lVar10 + 0xc);
    bVar3 = *(byte *)((long)param_1 + lVar10 + 0x18);
    bVar4 = *(byte *)((long)param_1 + lVar10 + 0x24);
    bVar5 = *(byte *)((long)param_1 + lVar10 + 0x30);
    bVar6 = *(byte *)((long)param_1 + lVar10 + 0x3c);
    bVar7 = *(byte *)((long)param_1 + lVar10 + 0x48);
    bVar8 = *(byte *)((long)param_1 + lVar10 + 0x54);
    lVar9 = 8;
    pbVar12 = pbVar13;
    do {
      uVar11 = (int)lVar9 - 1;
      *pbVar12 = -((bVar2 >> (uVar11 & 0x1f) & 1) != 0) & 0x40U |
                 ((bVar1 >> (uVar11 & 0x1f) & 1) != 0) * -0x80 |
                 -((bVar3 >> (uVar11 & 0x1f) & 1) != 0) & 0x20U |
                 -((bVar4 >> (uVar11 & 0x1f) & 1) != 0) & 0x10U |
                 -((bVar5 >> (uVar11 & 0x1f) & 1) != 0) & 8U |
                 -((bVar6 >> (uVar11 & 0x1f) & 1) != 0) & 4U |
                 -((bVar7 >> (uVar11 & 0x1f) & 1) != 0) & 2U | (bVar8 >> (uVar11 & 0x1f) & 1) != 0;
      pbVar12 = pbVar12 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar10 = lVar10 + 1;
    pbVar13 = pbVar13 + 8;
  } while (lVar10 != 0xc);
  _memcpy(param_1,local_98,0x60);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

