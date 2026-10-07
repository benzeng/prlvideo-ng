
void FUN_100333010(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_10033cfe0(param_1,*(undefined4 *)(param_2 + 0x14),param_4 + 200);
  *(undefined8 *)(param_1 + 0xbb78) = param_3;
  *(long *)(param_1 + 48000) = param_4;
  *(undefined8 *)(param_1 + 0xbb88) = param_5;
  *(undefined ***)(param_1 + 0xbb90) = &PTR_FUN_100bbbbc8;
  *(undefined4 *)(param_1 + 0xbb98) = 0;
  *(undefined8 *)(param_1 + 0xbbb0) = 0;
  *(undefined8 *)(param_1 + 0xbba8) = 0;
  *(long *)(param_1 + 0xbba0) = param_1 + 0xbba8;
  *(undefined8 *)(param_1 + 0xbbd8) = 0;
  *(undefined8 *)(param_1 + 0xbbd0) = 0;
  *(long *)(param_1 + 0xbbc8) = param_1 + 0xbbd0;
  *(undefined8 *)(param_1 + 0xbbf0) = 0;
  *(undefined8 *)(param_1 + 0xbbe8) = 0;
  *(long *)(param_1 + 0xbbe0) = param_1 + 0xbbe8;
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  lVar3 = **(long **)(param_1 + 400);
  uVar4 = *(ulong *)(param_1 + 0x188) | *(ulong *)(lVar3 + 0x3000);
  *(ulong *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x1a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  uVar4 = uVar4 | *(ulong *)(lVar3 + 0x3008);
  *(ulong *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  uVar4 = uVar4 | *(ulong *)(lVar3 + 0x3050);
  *(ulong *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x174) = 0;
  uVar4 = uVar4 | *(ulong *)(lVar3 + 0x3010);
  *(ulong *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = uVar4 | *(ulong *)(lVar3 + 0x3010);
  *(ulong *)(param_1 + 0x188) = uVar4;
  *(undefined4 *)(param_1 + 0xbbc0) = 0;
  *(undefined8 *)(param_1 + 0xbc00) = 0;
  *(undefined8 *)(param_1 + 0xbbf8) = 0;
  *(undefined4 *)(param_1 + 0x82c8) = 2;
  uVar4 = uVar4 | *(ulong *)(lVar3 + 0xb0);
  *(ulong *)(param_1 + 0x188) = uVar4;
  lVar5 = 0;
  do {
    uVar4 = uVar4 | *(ulong *)(lVar3 + lVar5 * 8);
    *(ulong *)(param_1 + 0x188) = uVar4;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x617);
  *(long *)(param_1 + 0xbbb8) = param_1;
  return;
}

