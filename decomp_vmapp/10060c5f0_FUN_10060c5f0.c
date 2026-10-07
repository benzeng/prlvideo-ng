
void FUN_10060c5f0(long param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined1 *)(param_1 + 0x680) = 0xff;
  *(undefined1 *)(param_1 + 0x681) = 1;
  *(undefined2 *)(param_1 + 0x682) = 0;
  iVar4 = *(int *)(param_1 + 0x588);
  iVar3 = 0;
  if (iVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x584);
    pbVar2 = *(byte **)(param_1 + 0x668);
    if (iVar4 == iVar1 + -1) {
      *(undefined4 *)(param_1 + 0x57c) = 1;
      *(undefined4 *)(param_1 + 0x578) = 1;
      *(undefined4 *)(param_1 + 0x570) = 1;
      *(int *)(param_1 + 0x588) = iVar4 + -1;
      *(undefined2 *)(param_1 + 0x56e) = 1;
      *pbVar2 = *pbVar2 | 0x40;
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 - iVar4;
      *(int *)(param_1 + 0x588) = iVar4 + -1;
      uVar7 = iVar1 - (iVar4 + -1);
      uVar8 = uVar7 >> 3;
      pbVar2[uVar8] = pbVar2[uVar8] | (byte)(0x80 >> ((byte)uVar7 & 7));
    }
  }
  *(int *)(param_1 + 0x67c) = iVar3;
  *(undefined4 *)(param_1 + 0x678) = 0;
  FUN_100608100(param_1 + 0x984,2,".journal",0);
  *(undefined2 *)(param_1 + 0xb8c) = 2;
  iVar4 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0xb9a) = iVar4;
  *(int *)(param_1 + 0xb96) = iVar4;
  *(undefined4 *)(param_1 + 0xbda) = 1;
  *(undefined4 *)(param_1 + 0xbb2) = 0x8000;
  *(undefined4 *)(param_1 + 0xbb6) = 1;
  *(undefined4 *)(param_1 + 0xbba) = 0x6a726e6c;
  *(undefined4 *)(param_1 + 0xbbe) = 0x6866732b;
  *(undefined2 *)(param_1 + 0xbc2) = 0x5000;
  *(int *)(param_1 + 0xbea) = (int)*(ulong *)(param_1 + 0x24c);
  uVar6 = *(ulong *)(param_1 + 0x24c) & 0xffffffff;
  *(ulong *)(param_1 + 0xbe2) = uVar6;
  uVar5 = (undefined4)(uVar6 / *(uint *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0xbf6) = uVar5;
  *(undefined4 *)(param_1 + 0xbee) = uVar5;
  *(int *)(param_1 + 0xbf2) = *(int *)(param_1 + 0x2c) + 1;
  iVar4 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar4 + 1;
  *(int *)(param_1 + 0xb92) = iVar4;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(short *)(param_1 + 0x682) = *(short *)(param_1 + 0x682) + 1;
  *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x574) + 1;
  FUN_100608100(param_1 + 0x686,2,".journal_info_block",0);
  *(undefined2 *)(param_1 + 0x88e) = 2;
  iVar4 = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x89c) = iVar4;
  *(int *)(param_1 + 0x898) = iVar4;
  *(undefined4 *)(param_1 + 0x8dc) = 1;
  *(undefined4 *)(param_1 + 0x8b4) = 0x8000;
  *(undefined4 *)(param_1 + 0x8b8) = 1;
  *(undefined4 *)(param_1 + 0x8bc) = 0x6a726e6c;
  *(undefined4 *)(param_1 + 0x8c0) = 0x6866732b;
  *(undefined2 *)(param_1 + 0x8c4) = 0x5000;
  *(uint *)(param_1 + 0x8ec) = *(uint *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x8e4) = (ulong)*(uint *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x8f8) = 1;
  *(undefined4 *)(param_1 + 0x8f0) = 1;
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar4 + 1;
  *(int *)(param_1 + 0x894) = iVar4;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  *(short *)(param_1 + 0x682) = *(short *)(param_1 + 0x682) + 1;
  *(int *)(param_1 + 0x574) = *(int *)(param_1 + 0x574) + 1;
  return;
}

