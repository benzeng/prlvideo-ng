
void FUN_100841bd0(byte *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (uint)param_1[0xb] |
          (uint)param_1[10] << 8 | (uint)param_1[9] << 0x10 | (uint)param_1[8] << 0x18;
  uVar7 = (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xc] << 0x18;
  uVar2 = param_3[0x1e] ^ uVar6;
  uVar1 = param_3[0x1f] ^ uVar2 ^ uVar7;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar4 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar3 = uVar2 + uVar4 ^
          ((uint)param_1[3] |
          (uint)param_1[2] << 8 | (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18);
  uVar4 = uVar4 ^ ((uint)param_1[7] |
                  (uint)param_1[6] << 8 | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18);
  uVar1 = param_3[0x1c] ^ uVar3;
  uVar2 = param_3[0x1d] ^ uVar4 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar5 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar5 ^ uVar6;
  uVar5 = uVar5 ^ uVar7;
  uVar1 = param_3[0x1a] ^ uVar6;
  uVar2 = param_3[0x1b] ^ uVar5 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar7 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar7 ^ uVar3;
  uVar7 = uVar7 ^ uVar4;
  uVar1 = param_3[0x18] ^ uVar3;
  uVar2 = param_3[0x19] ^ uVar7 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar8 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar8 ^ uVar6;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = param_3[0x16] ^ uVar6;
  uVar2 = param_3[0x17] ^ uVar8 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar4 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar4 ^ uVar3;
  uVar4 = uVar4 ^ uVar7;
  uVar1 = param_3[0x14] ^ uVar3;
  uVar2 = param_3[0x15] ^ uVar4 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar5 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar5 ^ uVar6;
  uVar5 = uVar5 ^ uVar8;
  uVar1 = param_3[0x12] ^ uVar6;
  uVar2 = param_3[0x13] ^ uVar5 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar7 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar7 ^ uVar3;
  uVar7 = uVar7 ^ uVar4;
  uVar1 = param_3[0x10] ^ uVar3;
  uVar2 = param_3[0x11] ^ uVar7 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar4 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar4 ^ uVar6;
  uVar4 = uVar4 ^ uVar5;
  uVar1 = param_3[0xe] ^ uVar6;
  uVar2 = param_3[0xf] ^ uVar4 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar5 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar5 ^ uVar3;
  uVar5 = uVar5 ^ uVar7;
  uVar1 = param_3[0xc] ^ uVar3;
  uVar2 = param_3[0xd] ^ uVar5 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar8 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar8 ^ uVar6;
  uVar8 = uVar8 ^ uVar4;
  uVar1 = param_3[10] ^ uVar6;
  uVar2 = param_3[0xb] ^ uVar8 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar4 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar4 ^ uVar3;
  uVar4 = uVar4 ^ uVar5;
  uVar1 = param_3[8] ^ uVar3;
  uVar2 = param_3[9] ^ uVar4 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar7 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar7 ^ uVar6;
  uVar7 = uVar7 ^ uVar8;
  uVar1 = param_3[6] ^ uVar6;
  uVar2 = param_3[7] ^ uVar7 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar8 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar3 = uVar1 + uVar8 ^ uVar3;
  uVar8 = uVar8 ^ uVar4;
  uVar1 = param_3[4] ^ uVar3;
  uVar2 = param_3[5] ^ uVar8 ^ uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar5 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar6 = uVar1 + uVar5 ^ uVar6;
  uVar5 = uVar5 ^ uVar7;
  uVar2 = param_3[2] ^ uVar6;
  uVar1 = param_3[3] ^ uVar5 ^ uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = uVar2 + uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar4 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar3 = uVar2 + uVar4 ^ uVar3;
  uVar4 = uVar4 ^ uVar8;
  uVar1 = param_3[1] ^ uVar4 ^ *param_3 ^ uVar3;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar2 = (*param_3 ^ uVar3) + uVar1;
  uVar2 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar2 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar2 >> 0x18) * 4);
  uVar1 = uVar1 + uVar2;
  uVar1 = *(uint *)(&DAT_100b54b10 + (ulong)(uVar1 >> 8 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54710 + (ulong)(uVar1 & 0xff) * 4) ^
          *(uint *)(&DAT_100b54f10 + (ulong)(uVar1 >> 0x10 & 0xff) * 4) ^
          *(uint *)(&DAT_100b55310 + (ulong)(uVar1 >> 0x18) * 4);
  uVar6 = uVar2 + uVar1 ^ uVar6;
  *param_2 = (char)(uVar6 >> 0x18);
  param_2[1] = (char)(uVar6 >> 0x10);
  param_2[2] = (char)(uVar6 >> 8);
  param_2[3] = (char)uVar6;
  uVar1 = uVar1 ^ uVar5;
  param_2[4] = (char)(uVar1 >> 0x18);
  param_2[5] = (char)(uVar1 >> 0x10);
  param_2[6] = (char)(uVar1 >> 8);
  param_2[7] = (char)uVar1;
  param_2[8] = (char)(uVar3 >> 0x18);
  param_2[9] = (char)(uVar3 >> 0x10);
  param_2[10] = (char)(uVar3 >> 8);
  param_2[0xb] = (char)uVar3;
  param_2[0xc] = (char)(uVar4 >> 0x18);
  param_2[0xd] = (char)(uVar4 >> 0x10);
  param_2[0xe] = (char)(uVar4 >> 8);
  param_2[0xf] = (char)uVar4;
  return;
}

