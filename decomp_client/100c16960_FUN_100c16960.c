
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c16960(undefined1 *param_1,int param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = _UNK_101da8198;
  *(undefined8 *)(param_1 + 2) = _DAT_101da8190;
  *(undefined8 *)(param_1 + 10) = uVar2;
  uVar2 = _UNK_101da81a8;
  *(undefined8 *)(param_1 + 0x12) = _DAT_101da81a0;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  uVar2 = _UNK_101da81b8;
  *(undefined8 *)(param_1 + 0x22) = _DAT_101da81b0;
  *(undefined8 *)(param_1 + 0x2a) = uVar2;
  uVar2 = _UNK_101da81c8;
  *(undefined8 *)(param_1 + 0x32) = _DAT_101da81c0;
  *(undefined8 *)(param_1 + 0x3a) = uVar2;
  uVar2 = _UNK_101da81d8;
  *(undefined8 *)(param_1 + 0x42) = _DAT_101da81d0;
  *(undefined8 *)(param_1 + 0x4a) = uVar2;
  uVar2 = _UNK_101da81e8;
  *(undefined8 *)(param_1 + 0x52) = _DAT_101da81e0;
  *(undefined8 *)(param_1 + 0x5a) = uVar2;
  uVar2 = _UNK_101da81f8;
  *(undefined8 *)(param_1 + 0x62) = _DAT_101da81f0;
  *(undefined8 *)(param_1 + 0x6a) = uVar2;
  uVar2 = _UNK_101da8208;
  *(undefined8 *)(param_1 + 0x72) = _DAT_101da8200;
  *(undefined8 *)(param_1 + 0x7a) = uVar2;
  uVar2 = _UNK_101da8218;
  *(undefined8 *)(param_1 + 0x82) = _DAT_101da8210;
  *(undefined8 *)(param_1 + 0x8a) = uVar2;
  uVar2 = _UNK_101da8228;
  *(undefined8 *)(param_1 + 0x92) = _DAT_101da8220;
  *(undefined8 *)(param_1 + 0x9a) = uVar2;
  uVar2 = _UNK_101da8238;
  *(undefined8 *)(param_1 + 0xa2) = _DAT_101da8230;
  *(undefined8 *)(param_1 + 0xaa) = uVar2;
  uVar2 = _UNK_101da8248;
  *(undefined8 *)(param_1 + 0xb2) = _DAT_101da8240;
  *(undefined8 *)(param_1 + 0xba) = uVar2;
  uVar2 = _UNK_101da8258;
  *(undefined8 *)(param_1 + 0xc2) = _DAT_101da8250;
  *(undefined8 *)(param_1 + 0xca) = uVar2;
  uVar2 = _UNK_101da8268;
  *(undefined8 *)(param_1 + 0xd2) = _DAT_101da8260;
  *(undefined8 *)(param_1 + 0xda) = uVar2;
  uVar2 = _UNK_101da8278;
  *(undefined8 *)(param_1 + 0xe2) = _DAT_101da8270;
  *(undefined8 *)(param_1 + 0xea) = uVar2;
  uVar2 = _UNK_101da8288;
  *(undefined8 *)(param_1 + 0xf2) = _DAT_101da8280;
  *(undefined8 *)(param_1 + 0xfa) = uVar2;
  iVar7 = 0;
  uVar8 = 0;
  iVar5 = 0;
  uVar4 = 0;
  do {
    bVar1 = param_1[uVar8 + 2];
    uVar3 = (int)uVar4 + (uint)bVar1 + (uint)*(byte *)(param_3 + iVar5);
    uVar4 = (ulong)(uVar3 & 0xff);
    iVar6 = iVar5 + 1;
    if (iVar5 + 1 == param_2) {
      iVar6 = iVar7;
    }
    param_1[uVar8 + 2] = param_1[uVar4 + 2];
    param_1[uVar4 + 2] = bVar1;
    bVar1 = param_1[uVar8 + 3];
    uVar3 = uVar3 + bVar1 + (uint)*(byte *)(param_3 + iVar6);
    uVar4 = (ulong)(uVar3 & 0xff);
    iVar5 = iVar6 + 1;
    if (iVar6 + 1 == param_2) {
      iVar5 = iVar7;
    }
    param_1[uVar8 + 3] = param_1[uVar4 + 2];
    param_1[uVar4 + 2] = bVar1;
    bVar1 = param_1[uVar8 + 4];
    uVar3 = uVar3 + bVar1 + (uint)*(byte *)(param_3 + iVar5);
    uVar4 = (ulong)(uVar3 & 0xff);
    iVar6 = iVar5 + 1;
    if (iVar5 + 1 == param_2) {
      iVar6 = iVar7;
    }
    param_1[uVar8 + 4] = param_1[uVar4 + 2];
    param_1[uVar4 + 2] = bVar1;
    bVar1 = param_1[uVar8 + 5];
    uVar4 = (ulong)(uVar3 + bVar1 + (uint)*(byte *)(param_3 + iVar6) & 0xff);
    iVar5 = iVar6 + 1;
    if (iVar6 + 1 == param_2) {
      iVar5 = 0;
    }
    param_1[uVar8 + 5] = param_1[uVar4 + 2];
    param_1[uVar4 + 2] = bVar1;
    uVar8 = uVar8 + 4;
  } while (uVar8 < 0x100);
  return;
}

