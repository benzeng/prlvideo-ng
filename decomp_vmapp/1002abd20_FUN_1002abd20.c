
undefined8 FUN_1002abd20(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = (ulong)param_2 * 0x8f0;
  uVar2 = *(uint *)(param_1 + 0x950 + lVar9);
  uVar3 = *(uint *)(param_1 + 0x954 + lVar9);
  uVar4 = *(uint *)(param_1 + 0x958 + lVar9);
  uVar5 = *(uint *)(param_1 + 0x95c + lVar9);
  *(undefined8 *)(param_1 + 0x950 + lVar9) = 0x3fff00003fff;
  *(undefined8 *)(param_1 + 0x958 + lVar9) = 0;
  uVar6 = *(uint *)(param_1 + 0x938 + lVar9);
  uVar7 = *(uint *)(param_1 + 0x93c + lVar9);
  if (uVar6 < uVar4) {
    uVar4 = uVar6;
  }
  if (uVar7 < uVar5) {
    uVar5 = uVar7;
  }
  uVar8 = 0;
  if ((uVar2 < uVar4) && (uVar3 < uVar5)) {
    plVar1 = (long *)(*(long *)(param_1 + 0x970 + lVar9) + 0xf0);
    *plVar1 = *plVar1 + 1;
    if ((*(long *)(param_1 + 0x9b8 + lVar9) != 0) || (*(char *)(param_1 + 0x870) != '\0')) {
      if (*(int *)(param_1 + 0x9d0 + lVar9) == *(int *)(param_1 + 0x9d4 + lVar9)) {
        FUN_1002abe30(param_1,param_2,uVar2,uVar3,uVar4,uVar5);
      }
      FUN_1002ac290(param_1,param_2,2);
    }
    FUN_1002ac6b0(param_1,param_2,uVar2,uVar3,uVar4,uVar5);
    uVar8 = 1;
  }
  return uVar8;
}

