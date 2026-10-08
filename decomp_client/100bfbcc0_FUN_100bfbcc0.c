
undefined8 FUN_100bfbcc0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar1 = param_2 + 10;
  uVar3 = (ulong)param_2[0x1a];
  *(undefined1 *)((long)param_2 + uVar3 + 0x28) = 0x80;
  uVar6 = uVar3 + 1;
  if (0x38 < uVar6) {
    ___bzero(uVar6 + (long)puVar1,0x3f - uVar3);
    _sha256_block_data_order(param_2,puVar1,1);
    uVar6 = 0;
  }
  ___bzero((long)puVar1 + uVar6,0x38 - uVar6);
  uVar2 = param_2[9];
  param_2[0x18] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[8];
  param_2[0x19] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  _sha256_block_data_order(param_2,puVar1,1);
  param_2[0x1a] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  uVar2 = param_2[0x1b];
  if (uVar2 == 0x1c) {
    uVar2 = *param_2;
    *param_1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[1];
    param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[2];
    param_1[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[3];
    param_1[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[4];
    param_1[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[5];
    param_1[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[6];
    param_1[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar4 = 1;
  }
  else if (uVar2 == 0x20) {
    uVar2 = *param_2;
    *param_1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[1];
    param_1[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[2];
    param_1[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[3];
    param_1[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[4];
    param_1[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[5];
    param_1[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[6];
    param_1[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar2 = param_2[7];
    param_1[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    if (uVar2 < 0x21) {
      uVar4 = 1;
      lVar5 = 0;
      if (3 < uVar2) {
        do {
          uVar2 = param_2[lVar5];
          param_1[lVar5] =
               uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
          lVar5 = lVar5 + 1;
        } while ((uint)lVar5 < param_2[0x1b] >> 2);
      }
    }
  }
  return uVar4;
}

