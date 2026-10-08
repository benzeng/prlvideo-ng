
void FUN_100c1f350(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  ___bzero(param_1,0x188);
  *(code **)(param_1 + 0x178) = param_3;
  *(undefined8 *)(param_1 + 0x180) = param_2;
  lVar1 = param_1 + 0x50;
  (*param_3)(lVar1,lVar1,param_2);
  uVar5 = *(ulong *)(param_1 + 0x50);
  *(ulong *)(param_1 + 0x50) =
       uVar5 >> 0x38 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
       (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
       (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  uVar5 = *(ulong *)(param_1 + 0x58);
  uVar9 = uVar5 >> 0x38;
  uVar5 = uVar9 | (uVar5 & 0xff000000000000) >> 0x28 | (uVar5 & 0xff0000000000) >> 0x18 |
          (uVar5 & 0xff00000000) >> 8 | (uVar5 & 0xff000000) << 8 | (uVar5 & 0xff0000) << 0x18 |
          (uVar5 & 0xff00) << 0x28 | uVar5 << 0x38;
  *(ulong *)(param_1 + 0x58) = uVar5;
  if (((DAT_102311d58._3_1_ & 1) == 0) || (((byte)DAT_102311d5c & 2) == 0)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar2 = *(ulong *)(param_1 + 0x50);
    *(ulong *)(param_1 + 0xe0) = uVar2;
    *(ulong *)(param_1 + 0xe8) = uVar5;
    uVar12 = uVar2 << 0x3f | uVar5 >> 1;
    uVar8 = -(uVar9 & 1) & 0xe100000000000000 ^ uVar2 >> 1;
    *(ulong *)(param_1 + 0xa0) = uVar8;
    *(ulong *)(param_1 + 0xa8) = uVar12;
    uVar6 = (uVar2 >> 1) << 0x3f | uVar12 >> 1;
    uVar3 = -((uVar9 & 2) >> 1) & 0xe100000000000000 ^ uVar8 >> 1;
    *(ulong *)(param_1 + 0x80) = uVar3;
    *(ulong *)(param_1 + 0x88) = uVar6;
    uVar7 = (uVar8 >> 1) << 0x3f | uVar6 >> 1;
    uVar9 = uVar3 >> 1 ^ -((uVar9 & 4) >> 2) & 0xe100000000000000;
    *(ulong *)(param_1 + 0x70) = uVar9;
    *(ulong *)(param_1 + 0x78) = uVar7;
    uVar11 = uVar9 ^ uVar3;
    *(ulong *)(param_1 + 0x90) = uVar11;
    uVar10 = uVar7 ^ uVar6;
    *(ulong *)(param_1 + 0x98) = uVar10;
    *(ulong *)(param_1 + 0xb0) = uVar9 ^ uVar8;
    *(ulong *)(param_1 + 0xb8) = uVar7 ^ uVar12;
    *(ulong *)(param_1 + 0xc0) = uVar3 ^ uVar8;
    *(ulong *)(param_1 + 200) = uVar6 ^ uVar12;
    *(ulong *)(param_1 + 0xd0) = uVar11 ^ uVar8;
    *(ulong *)(param_1 + 0xd8) = uVar10 ^ uVar12;
    *(ulong *)(param_1 + 0xf0) = uVar9 ^ uVar2;
    *(ulong *)(param_1 + 0xf8) = uVar7 ^ uVar5;
    *(ulong *)(param_1 + 0x100) = uVar3 ^ uVar2;
    *(ulong *)(param_1 + 0x108) = uVar6 ^ uVar5;
    *(ulong *)(param_1 + 0x110) = uVar11 ^ uVar2;
    *(ulong *)(param_1 + 0x118) = uVar10 ^ uVar5;
    *(ulong *)(param_1 + 0x120) = uVar8 ^ uVar2;
    *(ulong *)(param_1 + 0x128) = uVar12 ^ uVar5;
    *(ulong *)(param_1 + 0x130) = uVar9 ^ uVar8 ^ uVar2;
    *(ulong *)(param_1 + 0x138) = uVar7 ^ uVar12 ^ uVar5;
    *(ulong *)(param_1 + 0x140) = uVar3 ^ uVar8 ^ uVar2;
    *(ulong *)(param_1 + 0x148) = uVar6 ^ uVar12 ^ uVar5;
    *(ulong *)(param_1 + 0x150) = uVar11 ^ uVar8 ^ uVar2;
    *(ulong *)(param_1 + 0x158) = uVar10 ^ uVar12 ^ uVar5;
    *(code **)(param_1 + 0x160) = _gcm_gmult_4bit;
    pcVar4 = _gcm_ghash_4bit;
  }
  else {
    _gcm_init_clmul(param_1 + 0x60,lVar1);
    *(code **)(param_1 + 0x160) = _gcm_gmult_clmul;
    pcVar4 = _gcm_ghash_clmul;
  }
  *(code **)(param_1 + 0x168) = pcVar4;
  return;
}

