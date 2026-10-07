
void FUN_1002d0100(long param_1,long param_2,long *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = (ulong)param_4;
  uVar7 = *(uint *)(*param_3 + 4 + uVar6 * 4);
  uVar9 = uVar7 & 0xfff;
  uVar8 = uVar7 >> 0xc & 7;
  uVar1 = *(ushort *)(param_2 + 0x49c + (ulong)*(uint *)(param_2 + 0x494) * 8);
  uVar2 = *(ushort *)(param_2 + 0x49e + (ulong)*(uint *)(param_2 + 0x494) * 8);
  uVar7 = 0x1000 - uVar9;
  uVar5 = (uint)uVar2;
  if (uVar2 < uVar7) {
    uVar7 = uVar5;
  }
  uVar3 = *(uint *)(*param_3 + 0x24 + (ulong)uVar8 * 4);
  lVar4 = *(long *)(param_1 + 0x24f8);
  if (uVar5 == 0) {
    if (lVar4 != 0) {
      if (DAT_1011ccc18 != (code *)0x0) {
        (*DAT_1011ccc18)(*(undefined4 *)(param_2 + 0x448),0x22,lVar4 << 8 | 3);
      }
      *(undefined8 *)(param_1 + 0x24f8) = 0;
    }
  }
  else if (lVar4 == 0) {
    lVar4 = *(long *)((ulong)*(uint *)(param_2 + 0x440) + 0x4da + param_2);
    *(long *)(param_1 + 0x24f8) = lVar4;
    if (DAT_1011ccc18 != (code *)0x0) {
      (*DAT_1011ccc18)(*(undefined4 *)(param_2 + 0x448),0x22,lVar4 << 8 | 2);
    }
  }
  uVar9 = uVar3 & 0xfffff000 | uVar9;
  if ((uVar9 != 0) && (uVar7 != 0)) {
    FUN_10008c9b0(DAT_1011c3688,uVar9,param_2 + 0x4d8 + (ulong)*(uint *)(param_2 + 0x440),uVar7);
  }
  if (uVar7 < uVar5) {
    if ((uVar2 != uVar7) &&
       (uVar5 = *(uint *)(*param_3 + 0x24 + (ulong)(uVar8 + 1) * 4) & 0xfffff000, uVar5 != 0)) {
      FUN_10008c9b0(DAT_1011c3688,uVar5,
                    param_2 + 0x4d8 + (ulong)uVar7 + (ulong)*(uint *)(param_2 + 0x440));
    }
  }
  *(int *)(param_2 + 0x440) = *(int *)(param_2 + 0x440) + (uint)uVar1;
  *(int *)(param_2 + 0x494) = *(int *)(param_2 + 0x494) + 1;
  *(uint *)(*param_3 + 4 + uVar6 * 4) =
       *(uint *)(*param_3 + 4 + uVar6 * 4) & 0xf000ffff | (uVar2 & 0xfff) << 0x10;
  return;
}

