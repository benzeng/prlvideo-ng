
undefined ** FUN_100821bf0(char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  int iVar8;
  uint *puVar9;
  long local_78;
  long local_70;
  char *local_68;
  char *local_60;
  uint local_58;
  undefined4 local_40 [2];
  char **local_38;
  
  if (param_2 != 0) goto LAB_100821e04;
  iVar4 = 0;
  iVar3 = 0x391;
  local_68 = param_1;
  if (DAT_1011c06e8 == 0) {
    iVar1 = 0;
    puVar9 = (uint *)0x0;
LAB_100821c80:
    do {
      iVar8 = iVar3;
      if (iVar8 <= iVar4) {
        if (iVar1 != 0) goto LAB_100821cfd;
        break;
      }
      iVar3 = (iVar8 + iVar4) / 2;
      puVar9 = (uint *)(&DAT_100b4f9b0 + (long)iVar3 * 4);
      iVar1 = _strcmp(local_68,(&PTR_s_UNDEF_100bd2840)
                               [(ulong)*(uint *)(&DAT_100b4f9b0 + (long)iVar3 * 4) * 5]);
    } while ((iVar1 < 0) || (iVar4 = iVar3 + 1, iVar3 = iVar8, 0 < iVar1));
    if (puVar9 != (uint *)0x0) {
      puVar9 = (uint *)(&DAT_100bd2850 + (ulong)*puVar9 * 0x28);
      goto LAB_100821ce9;
    }
  }
  else {
    local_40[0] = 1;
    local_38 = &local_68;
    lVar5 = FUN_100885dc0(DAT_1011c06e8,local_40);
    iVar4 = 0;
    iVar1 = 0;
    puVar9 = (uint *)0x0;
    if (lVar5 == 0) goto LAB_100821c80;
    puVar9 = (uint *)(*(long *)(lVar5 + 8) + 0x10);
LAB_100821ce9:
    uVar2 = *puVar9;
    if (uVar2 != 0) goto LAB_100821dd4;
  }
LAB_100821cfd:
  iVar4 = 0;
  iVar3 = 0x391;
  local_60 = param_1;
  if (DAT_1011c06e8 == 0) {
    iVar1 = 0;
    puVar9 = (uint *)0x0;
LAB_100821d60:
    do {
      iVar8 = iVar3;
      if (iVar8 <= iVar4) {
        if (iVar1 != 0) goto LAB_100821e04;
        break;
      }
      iVar3 = (iVar8 + iVar4) / 2;
      puVar9 = (uint *)(&DAT_100b4eb60 + (long)iVar3 * 4);
      iVar1 = _strcmp(local_60,(&PTR_s_undefined_100bd2848)
                               [(ulong)*(uint *)(&DAT_100b4eb60 + (long)iVar3 * 4) * 5]);
    } while ((iVar1 < 0) || (iVar4 = iVar3 + 1, iVar3 = iVar8, 0 < iVar1));
    if (puVar9 == (uint *)0x0) goto LAB_100821e04;
    puVar9 = (uint *)(&DAT_100bd2850 + (ulong)*puVar9 * 0x28);
  }
  else {
    local_40[0] = 2;
    local_38 = &local_68;
    lVar5 = FUN_100885dc0(DAT_1011c06e8,local_40);
    iVar4 = 0;
    iVar1 = 0;
    puVar9 = (uint *)0x0;
    if (lVar5 == 0) goto LAB_100821d60;
    puVar9 = (uint *)(*(long *)(lVar5 + 8) + 0x10);
  }
  uVar2 = *puVar9;
  if (uVar2 != 0) {
LAB_100821dd4:
    if (uVar2 < 0x398) {
      if (*(int *)(&DAT_100bd2850 + (long)(int)uVar2 * 0x28) != 0) {
        return &PTR_s_UNDEF_100bd2840 + (long)(int)uVar2 * 5;
      }
      uVar7 = 0x140;
    }
    else {
      if (DAT_1011c06e8 == 0) {
        return (undefined **)0x0;
      }
      local_40[0] = 3;
      local_38 = &local_68;
      local_58 = uVar2;
      lVar5 = FUN_100885dc0(DAT_1011c06e8,local_40);
      if (lVar5 != 0) {
        return *(undefined ***)(lVar5 + 8);
      }
      uVar7 = 0x14e;
    }
    FUN_100887ce0(8,0x67,0x65,"obj_dat.c",uVar7);
    return (undefined **)0x0;
  }
LAB_100821e04:
  iVar3 = FUN_100898d60(0,0,param_1,0xffffffff);
  if (iVar3 < 1) {
    return (undefined **)0x0;
  }
  iVar4 = FUN_1008af920(0,iVar3,6);
  lVar5 = FUN_10081ddd0(iVar4,"obj_dat.c",0x1d6);
  if (lVar5 == 0) {
    return (undefined **)0x0;
  }
  local_70 = lVar5;
  FUN_1008af7d0(&local_70,0,iVar3,6,0);
  FUN_100898d60(local_70,iVar3,param_1,0xffffffff);
  local_78 = lVar5;
  ppuVar6 = (undefined **)FUN_1008994c0(0,&local_78,(long)iVar4);
  FUN_10081e1a0(lVar5);
  return ppuVar6;
}

