
void FUN_100b9cc20(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(param_1 + 0x1d8);
  if (iVar2 == 5) {
    if ((*(int *)(param_2 + 0x54) == 7) && ((*(uint *)(param_2 + 0xec) & 0x100000) != 0)) {
      *(uint *)(param_2 + 0xec) = *(uint *)(param_2 + 0xec) & 0xffefffff;
      FUN_100b9c040(param_2,5,param_1 + 0x1e8,*(undefined4 *)(param_1 + 0x1d4));
    }
LAB_100b9cd87:
    iVar2 = *(int *)(param_1 + 0x1d8);
  }
  else if (iVar2 == 7) {
    if (*(int *)(param_2 + 0x54) < 7) {
      lVar3 = FUN_100b97ee0();
      *(long *)(param_2 + 0xd8) = lVar3;
      uVar4 = lVar3 - *(long *)(param_1 + 0xf8);
      lVar7 = *(ulong *)(param_2 + 0xe0) - uVar4;
      lVar3 = 0;
      if (uVar4 <= *(ulong *)(param_2 + 0xe0) && lVar7 != 0) {
        lVar3 = lVar7;
      }
      *(long *)(param_2 + 0xe0) = lVar3;
      if (lVar3 != 0) {
        FUN_100b9c040(param_2,7,param_1 + 0x1e8,0x100000);
        uVar4 = *(ulong *)(param_2 + 0xe0);
        goto LAB_100b9cd2f;
      }
    }
    else {
      *(byte *)(param_2 + 0xee) = *(byte *)(param_2 + 0xee) | 0x10;
      uVar5 = FUN_100b97ee0();
      uVar4 = *(ulong *)(param_2 + 0xd8);
      if (*(ulong *)(param_2 + 0xd8) == 0) {
        *(ulong *)(param_2 + 0xd8) = uVar5;
        uVar4 = uVar5;
      }
      uVar8 = uVar5 - uVar4;
      if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
        uVar8 = 0;
      }
      uVar4 = *(ulong *)(param_2 + 0xe0) - uVar8;
      if (*(ulong *)(param_2 + 0xe0) < uVar8) {
        uVar4 = 0;
      }
      *(ulong *)(param_2 + 0xe0) = uVar4;
      *(ulong *)(param_2 + 0xd8) = uVar5;
LAB_100b9cd2f:
      if (uVar4 != 0) goto LAB_100b9cd87;
    }
    *(undefined4 *)(param_1 + 0x1d8) = 2;
    *(undefined **)(param_1 + 0x1e0) = PTR_s_EXPIRED_1022cffb0;
    uVar6 = FUN_100ba1d10(0);
    ___snprintf_chk(param_1 + 0x1e8,0x7e,0,0xffffffffffffffff,"%s",uVar6);
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
    goto LAB_100b9cd87;
  }
  if (iVar2 < 5) {
    if (*(int *)(param_2 + 0x54) < 2) goto LAB_100b9cdb7;
  }
  else if (*(int *)(param_2 + 0x54) != 2) goto LAB_100b9cdb7;
  FUN_100b9c040(param_2,iVar2,param_1 + 0x1e8,*(undefined4 *)(param_1 + 0x1d4));
LAB_100b9cdb7:
  iVar2 = *(int *)(param_2 + 0x54);
  if (iVar2 == 1) {
    iVar1 = *(int *)(param_1 + 0x1d8);
    iVar2 = 1;
    if ((1 < iVar1) && ((*(uint *)(param_2 + 0xec) & 0x200000) != 0)) {
      *(uint *)(param_2 + 0xec) = *(uint *)(param_2 + 0xec) & 0xffdfffff;
      FUN_100b9c040(param_2,iVar1,param_1 + 0x1e8,*(undefined4 *)(param_1 + 0x1d4));
      iVar2 = *(int *)(param_2 + 0x54);
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x1d8)) {
    *(int *)(param_1 + 0x1d8) = iVar2;
    *(undefined **)(param_1 + 0x1e0) = (&PTR_s_UNKNOWN_1022cffa0)[iVar2];
    if ((*(byte *)(param_2 + 0xee) & 8) == 0) {
      *(undefined1 *)(param_1 + 0x1e8) = 0;
    }
    else {
      ___snprintf_chk((undefined1 *)(param_1 + 0x1e8),0x7e,0,0xffffffffffffffff,"%s",param_2 + 0x58)
      ;
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  }
  return;
}

