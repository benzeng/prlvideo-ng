
void FUN_100131180(long param_1,uint param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar10 = param_2 >> 5;
  uVar3 = 0;
  if (uVar10 != 0) {
    uVar8 = (ulong)uVar10;
    uVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(param_1 + uVar5 * 4);
      *(undefined4 *)(param_3 + 0x10 + uVar5 * 4) = uVar1;
      *(undefined4 *)(param_3 + uVar5 * 4) = uVar1;
      *(undefined4 *)(param_3 + 0x20 + uVar5 * 4) = 0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar8);
    uVar3 = uVar10;
    if (0x7f < param_2) goto LAB_1001312d0;
  }
  uVar8 = (ulong)uVar3;
  uVar5 = (ulong)(3 - uVar3) + 1;
  uVar9 = uVar8;
  if ((uVar5 & 0x1fffffffc) != 0) {
    uVar9 = (uVar5 & 0x1fffffffc) + uVar8;
    puVar4 = (undefined8 *)(param_3 + 0x20 + uVar8 * 4);
    uVar5 = (ulong)(3 - uVar3) + 1 & 0xfffffffffffffffc;
    do {
      puVar4[-4] = 0;
      puVar4[-3] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + -2) = 0xffffffff;
      *(undefined4 *)((long)puVar4 + -0xc) = 0xffffffff;
      *(undefined4 *)(puVar4 + -1) = 0xffffffff;
      *(undefined4 *)((long)puVar4 + -4) = 0xffffffff;
      puVar4 = puVar4 + 2;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
  if ((ulong)(3 - uVar3) + 1 + uVar8 != uVar9) {
    iVar2 = (int)uVar9;
    if ((4U - iVar2 & 1) != 0) {
      *(undefined4 *)(param_3 + uVar9 * 4) = 0;
      *(undefined4 *)(param_3 + 0x20 + uVar9 * 4) = 0;
      *(undefined4 *)(param_3 + 0x10 + uVar9 * 4) = 0xffffffff;
      uVar9 = uVar9 + 1;
    }
    if (iVar2 != 3) {
      puVar6 = (undefined4 *)(param_3 + 0x24 + uVar9 * 4);
      iVar2 = 4 - (int)uVar9;
      do {
        puVar6[-1] = 0;
        puVar6[-5] = 0xffffffff;
        *(undefined8 *)(puVar6 + -9) = 0;
        *puVar6 = 0;
        puVar6[-4] = 0xffffffff;
        puVar6 = puVar6 + 2;
        iVar2 = iVar2 + -2;
      } while (iVar2 != 0);
    }
  }
LAB_1001312d0:
  *(undefined4 *)(param_3 + 0x20 + uVar8 * 4) = 0xffffffff;
  uVar10 = param_2 & 0x1f;
  iVar2 = 0x20 - uVar10;
  uVar3 = 0xffffffff;
  if (iVar2 != 0) {
    if ((0x20 - uVar10 & 7) == 0) {
      uVar3 = 0xffffffff;
    }
    else {
      iVar7 = -((byte)-(char)param_2 & 7);
      uVar3 = 0xffffffff;
      do {
        uVar3 = uVar3 * 2;
        iVar2 = iVar2 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0);
    }
    if (6 < 0x1f - uVar10) {
      do {
        uVar3 = uVar3 << 8;
        iVar2 = iVar2 + -8;
      } while (iVar2 != 0);
    }
  }
  uVar10 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  *(uint *)(param_3 + 0x20 + uVar8 * 4) = uVar10;
  *(uint *)(param_3 + uVar8 * 4) = uVar10 & *(uint *)(param_1 + uVar8 * 4);
  uVar3 = ~uVar3;
  *(uint *)(param_3 + 0x10 + uVar8 * 4) =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18 |
       *(uint *)(param_1 + uVar8 * 4);
  return;
}

