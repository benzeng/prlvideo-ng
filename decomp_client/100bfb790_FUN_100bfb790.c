
undefined8 FUN_100bfb790(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = param_2 + 7;
  uVar3 = (ulong)param_2[0x17];
  *(undefined1 *)((long)param_2 + uVar3 + 0x1c) = 0x80;
  uVar4 = uVar3 + 1;
  if (0x38 < uVar4) {
    ___bzero(uVar4 + (long)puVar1,0x3f - uVar3);
    _sha1_block_data_order(param_2,puVar1,1);
    uVar4 = 0;
  }
  ___bzero((long)puVar1 + uVar4,0x38 - uVar4);
  uVar2 = param_2[6];
  param_2[0x15] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = param_2[5];
  param_2[0x16] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  _sha1_block_data_order(param_2,puVar1,1);
  param_2[0x17] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
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
  return 1;
}

