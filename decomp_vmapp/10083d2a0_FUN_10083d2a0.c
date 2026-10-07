
void FUN_10083d2a0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2 ^ *param_1;
  uVar1 = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ param_2[1] ^ param_1[1];
  uVar2 = (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12] ^ uVar2 ^ param_2[2];
  uVar3 = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ uVar1 ^ param_2[3];
  uVar1 = (param_2[(ulong)(uVar3 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar3 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff | 0x300) + 0x12] ^ uVar2 ^ param_2[4];
  uVar2 = (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12] ^ uVar3 ^ param_2[5];
  uVar3 = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ uVar1 ^ param_2[6];
  uVar1 = (param_2[(ulong)(uVar3 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar3 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff | 0x300) + 0x12] ^ uVar2 ^ param_2[7];
  uVar2 = (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12] ^ uVar3 ^ param_2[8];
  uVar3 = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ uVar1 ^ param_2[9];
  uVar1 = (param_2[(ulong)(uVar3 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar3 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff | 0x300) + 0x12] ^ uVar2 ^ param_2[10];
  uVar2 = (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12] ^ uVar3 ^ param_2[0xb];
  uVar3 = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ uVar1 ^ param_2[0xc];
  uVar1 = (param_2[(ulong)(uVar3 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar3 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff | 0x300) + 0x12] ^ uVar2 ^ param_2[0xd];
  uVar3 = (param_2[(ulong)(uVar1 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar1 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar1 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar1 & 0xff | 0x300) + 0x12] ^ uVar3 ^ param_2[0xe];
  uVar2 = (param_2[(ulong)(uVar3 >> 0x10 & 0xff | 0x100) + 0x12] +
           param_2[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_2[(ulong)(uVar3 >> 8 & 0xff | 0x200) + 0x12]) +
          param_2[(ulong)(uVar3 & 0xff | 0x300) + 0x12] ^ uVar1 ^ param_2[0xf];
  uVar1 = param_2[0x11];
  param_1[1] = (param_2[(ulong)(uVar2 >> 0x10 & 0xff | 0x100) + 0x12] +
                param_2[(ulong)(uVar2 >> 0x18) + 0x12] ^
               param_2[(ulong)(uVar2 >> 8 & 0xff | 0x200) + 0x12]) +
               param_2[(ulong)(uVar2 & 0xff | 0x300) + 0x12] ^ uVar3 ^ param_2[0x10];
  *param_1 = uVar2 ^ uVar1;
  return;
}

