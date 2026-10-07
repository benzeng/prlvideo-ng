
ulong FUN_1006935f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + 0x84) = param_2[7];
  *(undefined8 *)(param_1 + 0x7c) = param_2[6];
  *(undefined8 *)(param_1 + 0x74) = param_2[5];
  *(undefined8 *)(param_1 + 0x6c) = param_2[4];
  *(undefined8 *)(param_1 + 100) = param_2[3];
  *(undefined8 *)(param_1 + 0x5c) = param_2[2];
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x54) = param_2[1];
  *(undefined8 *)(param_1 + 0x4c) = uVar3;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x54) = param_2[1];
  *(undefined8 *)(param_1 + 0x4c) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = 0x40;
  uVar2 = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  iVar5 = _memcmp((void *)(param_1 + 0x4c),"WithouFreSpacExt",0x10);
  uVar6 = 1;
  if (iVar5 == 0) {
    uVar6 = uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  uVar7 = (ulong)*(uint *)(param_1 + 0x6c);
  *(ulong *)(param_1 + 0x40) = uVar7 * 4 + 0x40;
  uVar4 = *(ulong *)(*(long *)(**(long **)(param_1 + 0x38) + -0x18) + 0x38 +
                    (long)*(long **)(param_1 + 0x38));
  if ((ulong)*(uint *)(param_1 + 0x7c) == 0) {
    uVar1 = uVar7 * 4 + 0x3f + uVar4;
    uVar7 = uVar1 / uVar4;
    lVar8 = uVar1 - uVar1 % uVar4;
  }
  else {
    lVar8 = *(uint *)(param_1 + 0x7c) * uVar4;
  }
  *(long *)(param_1 + 0x20) = lVar8;
  return uVar7;
}

