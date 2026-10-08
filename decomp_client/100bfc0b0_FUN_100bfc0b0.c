
undefined8 FUN_100bfc0b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = param_2 + 10;
  uVar2 = (ulong)*(uint *)(param_2 + 0x1a);
  *(undefined1 *)((long)param_2 + uVar2 + 0x50) = 0x80;
  uVar4 = uVar2 + 1;
  if (0x70 < uVar4) {
    ___bzero(uVar4 + (long)puVar1,0x7f - uVar2);
    _sha512_block_data_order(param_2,puVar1,1);
    uVar4 = 0;
  }
  ___bzero((long)puVar1 + uVar4,0x70 - uVar4);
  uVar3 = param_2[8];
  *(char *)((long)param_2 + 0xcf) = (char)uVar3;
  *(char *)((long)param_2 + 0xce) = (char)((ulong)uVar3 >> 8);
  *(char *)((long)param_2 + 0xcd) = (char)((ulong)uVar3 >> 0x10);
  *(char *)((long)param_2 + 0xcc) = (char)((ulong)uVar3 >> 0x18);
  *(char *)((long)param_2 + 0xcb) = (char)((ulong)uVar3 >> 0x20);
  *(char *)((long)param_2 + 0xca) = (char)((ulong)uVar3 >> 0x28);
  *(char *)((long)param_2 + 0xc9) = (char)((ulong)uVar3 >> 0x30);
  *(char *)(param_2 + 0x19) = (char)((ulong)uVar3 >> 0x38);
  uVar3 = param_2[9];
  *(char *)((long)param_2 + 199) = (char)uVar3;
  *(char *)((long)param_2 + 0xc6) = (char)((ulong)uVar3 >> 8);
  *(char *)((long)param_2 + 0xc5) = (char)((ulong)uVar3 >> 0x10);
  *(char *)((long)param_2 + 0xc4) = (char)((ulong)uVar3 >> 0x18);
  *(char *)((long)param_2 + 0xc3) = (char)((ulong)uVar3 >> 0x20);
  *(char *)((long)param_2 + 0xc2) = (char)((ulong)uVar3 >> 0x28);
  *(char *)((long)param_2 + 0xc1) = (char)((ulong)uVar3 >> 0x30);
  *(char *)(param_2 + 0x18) = (char)((ulong)uVar3 >> 0x38);
  _sha512_block_data_order(param_2,puVar1,1);
  uVar3 = 0;
  if (param_1 != (undefined1 *)0x0) {
    if (*(int *)((long)param_2 + 0xd4) == 0x30) {
      uVar3 = *param_2;
      *param_1 = (char)((ulong)uVar3 >> 0x38);
      param_1[1] = (char)((ulong)uVar3 >> 0x30);
      param_1[2] = (char)((ulong)uVar3 >> 0x28);
      param_1[3] = (char)((ulong)uVar3 >> 0x20);
      param_1[4] = (char)((ulong)uVar3 >> 0x18);
      param_1[5] = (char)((ulong)uVar3 >> 0x10);
      param_1[6] = (char)((ulong)uVar3 >> 8);
      param_1[7] = (char)uVar3;
      uVar3 = param_2[1];
      param_1[8] = (char)((ulong)uVar3 >> 0x38);
      param_1[9] = (char)((ulong)uVar3 >> 0x30);
      param_1[10] = (char)((ulong)uVar3 >> 0x28);
      param_1[0xb] = (char)((ulong)uVar3 >> 0x20);
      param_1[0xc] = (char)((ulong)uVar3 >> 0x18);
      param_1[0xd] = (char)((ulong)uVar3 >> 0x10);
      param_1[0xe] = (char)((ulong)uVar3 >> 8);
      param_1[0xf] = (char)uVar3;
      uVar3 = param_2[2];
      param_1[0x10] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x11] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x12] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x13] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x14] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x15] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x16] = (char)((ulong)uVar3 >> 8);
      param_1[0x17] = (char)uVar3;
      uVar3 = param_2[3];
      param_1[0x18] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x19] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x1a] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x1b] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x1c] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x1d] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x1e] = (char)((ulong)uVar3 >> 8);
      param_1[0x1f] = (char)uVar3;
      uVar3 = param_2[4];
      param_1[0x20] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x21] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x22] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x23] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x24] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x25] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x26] = (char)((ulong)uVar3 >> 8);
      param_1[0x27] = (char)uVar3;
      uVar3 = param_2[5];
      param_1[0x28] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x29] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x2a] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x2b] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x2c] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x2d] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x2e] = (char)((ulong)uVar3 >> 8);
      param_1[0x2f] = (char)uVar3;
    }
    else {
      if (*(int *)((long)param_2 + 0xd4) != 0x40) {
        return 0;
      }
      uVar3 = *param_2;
      *param_1 = (char)((ulong)uVar3 >> 0x38);
      param_1[1] = (char)((ulong)uVar3 >> 0x30);
      param_1[2] = (char)((ulong)uVar3 >> 0x28);
      param_1[3] = (char)((ulong)uVar3 >> 0x20);
      param_1[4] = (char)((ulong)uVar3 >> 0x18);
      param_1[5] = (char)((ulong)uVar3 >> 0x10);
      param_1[6] = (char)((ulong)uVar3 >> 8);
      param_1[7] = (char)uVar3;
      uVar3 = param_2[1];
      param_1[8] = (char)((ulong)uVar3 >> 0x38);
      param_1[9] = (char)((ulong)uVar3 >> 0x30);
      param_1[10] = (char)((ulong)uVar3 >> 0x28);
      param_1[0xb] = (char)((ulong)uVar3 >> 0x20);
      param_1[0xc] = (char)((ulong)uVar3 >> 0x18);
      param_1[0xd] = (char)((ulong)uVar3 >> 0x10);
      param_1[0xe] = (char)((ulong)uVar3 >> 8);
      param_1[0xf] = (char)uVar3;
      uVar3 = param_2[2];
      param_1[0x10] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x11] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x12] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x13] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x14] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x15] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x16] = (char)((ulong)uVar3 >> 8);
      param_1[0x17] = (char)uVar3;
      uVar3 = param_2[3];
      param_1[0x18] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x19] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x1a] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x1b] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x1c] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x1d] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x1e] = (char)((ulong)uVar3 >> 8);
      param_1[0x1f] = (char)uVar3;
      uVar3 = param_2[4];
      param_1[0x20] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x21] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x22] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x23] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x24] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x25] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x26] = (char)((ulong)uVar3 >> 8);
      param_1[0x27] = (char)uVar3;
      uVar3 = param_2[5];
      param_1[0x28] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x29] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x2a] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x2b] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x2c] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x2d] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x2e] = (char)((ulong)uVar3 >> 8);
      param_1[0x2f] = (char)uVar3;
      uVar3 = param_2[6];
      param_1[0x30] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x31] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x32] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x33] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x34] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x35] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x36] = (char)((ulong)uVar3 >> 8);
      param_1[0x37] = (char)uVar3;
      uVar3 = param_2[7];
      param_1[0x38] = (char)((ulong)uVar3 >> 0x38);
      param_1[0x39] = (char)((ulong)uVar3 >> 0x30);
      param_1[0x3a] = (char)((ulong)uVar3 >> 0x28);
      param_1[0x3b] = (char)((ulong)uVar3 >> 0x20);
      param_1[0x3c] = (char)((ulong)uVar3 >> 0x18);
      param_1[0x3d] = (char)((ulong)uVar3 >> 0x10);
      param_1[0x3e] = (char)((ulong)uVar3 >> 8);
      param_1[0x3f] = (char)uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}

