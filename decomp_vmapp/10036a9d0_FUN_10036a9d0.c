
int FUN_10036a9d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  plVar7 = (long *)FUN_1003443e0(param_2,0);
  lVar2 = *plVar7;
  if ((lVar2 == 0) || (iVar5 = 0, *(long *)(*(long *)(lVar2 + 0x60) + 0x20) != 0)) {
    iVar5 = FUN_10036a210(param_1,param_2,param_3,1,0,0,0);
    if (iVar5 == 0) {
      FUN_10036a6e0(param_1);
      if ((param_4 != 0) && (*(int *)(param_4 + 8) != 0)) {
        uVar9 = 0x8e14;
        if (*(int *)(param_4 + 4) != 5) {
          uVar9 = 0x8e13;
        }
        (*DAT_1011c74a0)(*(int *)(param_4 + 8),uVar9);
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        lVar3 = **(long **)(*(long *)(param_1 + 0x278) + 0x38);
        iVar5 = *(byte *)(*(long *)(*(long *)(param_1 + 0x278) + 0x88) + 3) - 1;
        *(int *)(lVar3 + 0x34) = iVar5;
        *(int *)(lVar3 + 0x2c) = iVar5;
        (*DAT_1011c74a8)(*(undefined4 *)(lVar3 + 0x24));
        (*DAT_1011c56e0)(0x8c87,*(undefined4 *)(lVar3 + 0x30));
        (*DAT_1011c56e0)(0x8c88,*(undefined4 *)(lVar3 + 0x28));
      }
      pcVar4 = DAT_1011c5be8;
      if ((*(int *)(param_1 + 0x224) == 0) || (*(int *)(DAT_1011c8478 + 0x78) != 2)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0x60) + 0x20);
        uVar1 = *(undefined4 *)(param_1 + 0x14);
        iVar6 = FUN_10035cc30(lVar2);
        uVar8 = (ulong)*(int *)(lVar2 + 0x24);
        iVar5 = 0;
        if (uVar8 < 5) {
          iVar5 = *(int *)(&DAT_100b3d510 + uVar8 * 4);
        }
        (*pcVar4)(uVar1,0,iVar5 * iVar6);
      }
      else {
        (*DAT_1011c79d0)(*(undefined4 *)(param_1 + 0x14));
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        (*DAT_1011c5cb8)(0x8c87);
        (*DAT_1011c5cb8)(0x8c88);
        (*DAT_1011c7590)();
      }
      iVar5 = 0;
      if ((param_4 != 0) && (iVar5 = 0, *(int *)(param_4 + 8) != 0)) {
        (*DAT_1011c7588)();
      }
    }
  }
  return iVar5;
}

