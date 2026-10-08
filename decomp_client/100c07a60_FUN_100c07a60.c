
void FUN_100c07a60(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar3 = *param_1 ^ uVar1;
  uVar1 = uVar1 << 4 ^ param_1[1];
  uVar2 = uVar1 & 0xffff ^ uVar3 >> 0x10;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 0x10 ^ uVar3;
  uVar2 = (uVar1 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 2 ^ uVar1;
  uVar2 = (uVar3 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 8 ^ uVar3;
  uVar2 = (uVar1 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 * 2 ^ uVar1;
  uVar2 = uVar3 >> 0x1d | uVar3 << 3;
  uVar1 = uVar1 >> 0x1d | uVar1 << 3;
  if (param_3 == 0) {
    uVar4 = param_2[0x1e] ^ uVar2;
    uVar3 = (param_2[0x1f] ^ uVar2) >> 4;
    uVar4 = uVar1 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar3 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar3 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar3 | (param_2[0x1f] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar4;
    uVar1 = (param_2[0x1d] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x1d] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1a] ^ uVar2;
    uVar1 = (param_2[0x1b] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x1b] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x18] ^ uVar4;
    uVar1 = (param_2[0x19] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x19] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x16] ^ uVar2;
    uVar1 = (param_2[0x17] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x17] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x14] ^ uVar4;
    uVar1 = (param_2[0x15] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x15] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x12] ^ uVar2;
    uVar1 = (param_2[0x13] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x13] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x10] ^ uVar4;
    uVar1 = (param_2[0x11] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x11] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0xe] ^ uVar2;
    uVar1 = (param_2[0xf] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xf] ^ uVar2) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[0xc] ^ uVar4;
    uVar1 = (param_2[0xd] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xd] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[10] ^ uVar2;
    uVar1 = (param_2[0xb] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xb] ^ uVar2) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[8] ^ uVar4;
    uVar1 = (param_2[9] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[9] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[6] ^ uVar2;
    uVar1 = (param_2[7] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[7] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[4] ^ uVar4;
    uVar1 = (param_2[5] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[5] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar2;
    uVar1 = (param_2[3] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[3] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = *param_2 ^ uVar4;
    uVar1 = (param_2[1] ^ uVar4) >> 4 | (param_2[1] ^ uVar4) << 0x1c;
  }
  else {
    uVar4 = *param_2 ^ uVar2;
    uVar3 = (param_2[1] ^ uVar2) >> 4;
    uVar4 = uVar1 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar4 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar4 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar4 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar4 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar3 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar3 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar3 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar3 | (param_2[1] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[2] ^ uVar4;
    uVar1 = (param_2[3] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[3] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[4] ^ uVar2;
    uVar1 = (param_2[5] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[5] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[6] ^ uVar4;
    uVar1 = (param_2[7] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[7] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[8] ^ uVar2;
    uVar1 = (param_2[9] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[9] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[10] ^ uVar4;
    uVar1 = (param_2[0xb] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xb] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[0xc] ^ uVar2;
    uVar1 = (param_2[0xd] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xd] ^ uVar2) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[0xe] ^ uVar4;
    uVar1 = (param_2[0xf] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 + (ulong)((uVar1 | (param_2[0xf] ^ uVar4) << 0x1c) >> 0x1a) * 4
                     );
    uVar3 = param_2[0x10] ^ uVar2;
    uVar1 = (param_2[0x11] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x11] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x12] ^ uVar4;
    uVar1 = (param_2[0x13] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x13] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x14] ^ uVar2;
    uVar1 = (param_2[0x15] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x15] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x16] ^ uVar4;
    uVar1 = (param_2[0x17] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x17] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x18] ^ uVar2;
    uVar1 = (param_2[0x19] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x19] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1a] ^ uVar4;
    uVar1 = (param_2[0x1b] ^ uVar4) >> 4;
    uVar2 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x1b] ^ uVar4) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1c] ^ uVar2;
    uVar1 = (param_2[0x1d] ^ uVar2) >> 4;
    uVar4 = uVar4 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
            *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
            *(uint *)(&DAT_101da7930 + (ulong)((uVar1 & 0xfc) >> 2) * 4) ^
            *(uint *)(&DAT_101da7b30 + (ulong)((uVar1 & 0xfc00) >> 10) * 4) ^
            *(uint *)(&DAT_101da7d30 + (ulong)((uVar1 & 0xfc0000) >> 0x12) * 4) ^
            *(uint *)(&DAT_101da7f30 +
                     (ulong)((uVar1 | (param_2[0x1d] ^ uVar2) << 0x1c) >> 0x1a) * 4);
    uVar3 = param_2[0x1e] ^ uVar4;
    uVar1 = (param_2[0x1f] ^ uVar4) >> 4 | (param_2[0x1f] ^ uVar4) << 0x1c;
  }
  uVar1 = uVar2 ^ *(uint *)(&DAT_101da7830 + (ulong)(uVar3 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7a30 + (ulong)(uVar3 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7c30 + (ulong)(uVar3 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7e30 + (ulong)(uVar3 >> 0x1a) * 4) ^
          *(uint *)(&DAT_101da7930 + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7b30 + (ulong)(uVar1 >> 10 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7d30 + (ulong)(uVar1 >> 0x12 & 0x3f) * 4) ^
          *(uint *)(&DAT_101da7f30 + (ulong)(uVar1 >> 0x1a) * 4);
  uVar3 = uVar4 >> 3 | uVar4 << 0x1d;
  uVar1 = uVar1 >> 3 | uVar1 << 0x1d;
  uVar2 = (uVar1 >> 1 ^ uVar3) & 0x55555555;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 * 2 ^ uVar1;
  uVar2 = (uVar3 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 8 ^ uVar3;
  uVar2 = (uVar1 >> 2 ^ uVar3) & 0x33333333;
  uVar3 = uVar3 ^ uVar2;
  uVar1 = uVar2 << 2 ^ uVar1;
  uVar2 = uVar1 & 0xffff ^ uVar3 >> 0x10;
  uVar1 = uVar1 ^ uVar2;
  uVar3 = uVar2 << 0x10 ^ uVar3;
  uVar2 = (uVar1 >> 4 ^ uVar3) & 0xf0f0f0f;
  *param_1 = uVar3 ^ uVar2;
  param_1[1] = uVar2 << 4 ^ uVar1;
  return;
}

