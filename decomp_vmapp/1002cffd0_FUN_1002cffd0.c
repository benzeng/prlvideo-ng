
void FUN_1002cffd0(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  lVar1 = *param_3;
  uVar3 = *(uint *)(lVar1 + 4 + (ulong)param_4 * 4);
  uVar5 = uVar3 >> 0x10 & 0xfff;
  uVar7 = uVar3 >> 0xc & 7;
  uVar4 = *(uint *)(param_2 + 0x494);
  *(undefined4 *)(param_2 + 0x498 + (ulong)uVar4 * 8) = 0;
  *(short *)(param_2 + 0x49c + (ulong)uVar4 * 8) = (short)uVar5;
  uVar4 = 0x1000 - (uVar3 & 0xfff);
  if (uVar5 < uVar4) {
    uVar4 = uVar5;
  }
  if ((uVar4 != 0) &&
     (uVar3 = *(uint *)(lVar1 + 0x24 + (ulong)uVar7 * 4) & 0xfffff000 | uVar3 & 0xfff, uVar3 != 0))
  {
    FUN_10008cba0(DAT_1011c3688,param_2 + 0x4d8 + (ulong)*(uint *)(param_2 + 0x440),uVar3,uVar4);
  }
  uVar3 = *(int *)(param_2 + 0x440) + uVar4;
  *(uint *)(param_2 + 0x440) = uVar3;
  iVar2 = *(int *)(param_2 + 0x43c) + uVar4;
  *(int *)(param_2 + 0x43c) = iVar2;
  if (uVar4 < uVar5) {
    iVar6 = uVar5 - uVar4;
    if ((iVar6 != 0) &&
       (uVar4 = *(uint *)(*param_3 + 0x24 + (ulong)(uVar7 + 1) * 4) & 0xfffff000, uVar4 != 0)) {
      FUN_10008cba0(DAT_1011c3688,param_2 + 0x4d8 + (ulong)uVar3,uVar4,iVar6);
      iVar2 = *(int *)(param_2 + 0x43c);
      uVar3 = *(uint *)(param_2 + 0x440);
    }
    *(int *)(param_2 + 0x43c) = iVar2 + iVar6;
    *(uint *)(param_2 + 0x440) = uVar3 + iVar6;
  }
  *(int *)(param_2 + 0x494) = *(int *)(param_2 + 0x494) + 1;
  return;
}

