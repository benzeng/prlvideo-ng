
void FUN_10035ac30(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_1002adb30(*param_1,param_1[1]);
  if (param_1[6] == 0) {
    return;
  }
  uVar10 = *(uint *)(param_2 + 8);
  puVar6 = (uint *)param_1[(ulong)((uVar10 >> 0xc ^ uVar10) & 0xfff ^ uVar10 >> 0x18) + 0x100d];
  while( true ) {
    if (puVar6 == (uint *)0x0) {
      return;
    }
    if (*puVar6 == uVar10) break;
    puVar6 = *(uint **)(puVar6 + 4);
  }
  lVar1 = *(long *)(puVar6 + 2);
  if (lVar1 == 0) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 8);
  *(undefined4 *)(*(long *)(lVar2 + 0x28) + (ulong)*(uint *)(lVar1 + 4) * 0xc) =
       *(undefined4 *)(param_2 + 0xc);
  piVar8 = &DAT_100b3c0c4;
  uVar7 = 0;
  do {
    if (*piVar8 == *(int *)(param_2 + 0x24)) {
      iVar9 = *(int *)(&DAT_100b3c0c0 + uVar7 * 0x24);
      break;
    }
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 9;
    iVar9 = 0x8e;
  } while (uVar7 < 0x3d);
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar10 = 0;
    do {
      if (iVar9 == 0x8e) {
        iVar9 = *(int *)(lVar2 + 8);
      }
      uVar3 = param_1[6];
      local_48 = *param_3;
      uStack_44 = param_3[1];
      uStack_40 = param_3[2];
      uStack_3c = param_3[3];
      uVar4 = FUN_10032dee0(lVar2,*(undefined4 *)(lVar1 + 4));
      uVar5 = FUN_10032df00(lVar2,*(undefined4 *)(lVar1 + 4));
      FUN_10035dc00(uVar3,lVar2,&local_48,uVar4,uVar5,iVar9,*(undefined4 *)(param_2 + 0x20));
      uVar10 = uVar10 + 1;
      param_3 = param_3 + 4;
    } while (uVar10 < *(uint *)(param_2 + 0x28));
  }
  return;
}

