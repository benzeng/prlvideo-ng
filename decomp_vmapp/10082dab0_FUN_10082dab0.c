
void FUN_10082dab0(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1 >> 0x1d | *param_1 << 3;
  uVar1 = param_1[1] >> 0x1d | param_1[1] << 3;
  if (param_3 == 0) {
    uVar3 = param_2[0x1e] ^ uVar4;
    uVar2 = (param_2[0x1f] ^ uVar4) >> 4;
    uVar2 = uVar1 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar2 | (param_2[0x1f] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar2;
    uVar1 = (param_2[0x1d] ^ uVar2) >> 4;
    uVar3 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x1d] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar4 = param_2[0x1a] ^ uVar3;
    uVar1 = (param_2[0x1b] ^ uVar3) >> 4;
    uVar4 = uVar2 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x1b] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar4;
    uVar1 = (param_2[0x19] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar3;
    uVar1 = (param_2[0x17] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x17] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar4;
    uVar1 = (param_2[0x15] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar3;
    uVar1 = (param_2[0x13] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x13] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x10] ^ uVar4;
    uVar1 = (param_2[0x11] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0xe] ^ uVar3;
    uVar1 = (param_2[0xf] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xf] ^ uVar3) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[0xc] ^ uVar4;
    uVar1 = (param_2[0xd] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[10] ^ uVar3;
    uVar1 = (param_2[0xb] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xb] ^ uVar3) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[8] ^ uVar4;
    uVar1 = (param_2[9] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar3;
    uVar1 = (param_2[7] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[7] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[4] ^ uVar4;
    uVar1 = (param_2[5] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[2] ^ uVar3;
    uVar1 = (param_2[3] ^ uVar3) >> 4;
    uVar1 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[3] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = *param_2 ^ uVar1;
    uVar4 = (param_2[1] ^ uVar1) >> 4 | (param_2[1] ^ uVar1) << 0x1c;
  }
  else {
    uVar3 = *param_2 ^ uVar4;
    uVar2 = (param_2[1] ^ uVar4) >> 4;
    uVar2 = uVar1 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar2 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar2 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar2 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar2 | (param_2[1] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar2;
    uVar1 = (param_2[3] ^ uVar2) >> 4;
    uVar3 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[3] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar4 = param_2[4] ^ uVar3;
    uVar1 = (param_2[5] ^ uVar3) >> 4;
    uVar4 = uVar2 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[5] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[6] ^ uVar4;
    uVar1 = (param_2[7] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[8] ^ uVar3;
    uVar1 = (param_2[9] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[9] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[10] ^ uVar4;
    uVar1 = (param_2[0xb] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[0xc] ^ uVar3;
    uVar1 = (param_2[0xd] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xd] ^ uVar3) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[0xe] ^ uVar4;
    uVar1 = (param_2[0xf] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 + (ulong)((uVar1 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar2 = param_2[0x10] ^ uVar3;
    uVar1 = (param_2[0x11] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x11] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x12] ^ uVar4;
    uVar1 = (param_2[0x13] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x14] ^ uVar3;
    uVar1 = (param_2[0x15] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x15] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x16] ^ uVar4;
    uVar1 = (param_2[0x17] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x18] ^ uVar3;
    uVar1 = (param_2[0x19] ^ uVar3) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x19] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1a] ^ uVar4;
    uVar1 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar3 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1c] ^ uVar3;
    uVar1 = (param_2[0x1d] ^ uVar3) >> 4;
    uVar1 = uVar4 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
            *(uint *)(&DAT_100b52c90 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_100b52e90 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_100b53090 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_100b53290 +
                     (ulong)((uVar1 | (param_2[0x1d] ^ uVar3) << 0x1c) >> 0x1a) * 4);
    uVar2 = param_2[0x1e] ^ uVar1;
    uVar4 = (param_2[0x1f] ^ uVar1) >> 4 | (param_2[0x1f] ^ uVar1) << 0x1c;
  }
  uVar4 = uVar3 ^ *(uint *)(&DAT_100b52b90 + (ulong)(uVar2 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b52d90 + (ulong)(uVar2 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b52f90 + (ulong)(uVar2 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b53190 + (ulong)(uVar2 >> 0x1a) * 4) ^
          *(uint *)(&DAT_100b52c90 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b52e90 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b53090 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_100b53290 + (ulong)(uVar4 >> 0x1a) * 4);
  *param_1 = uVar1 >> 3 | uVar1 << 0x1d;
  param_1[1] = uVar4 >> 3 | uVar4 << 0x1d;
  return;
}

