
undefined ** FUN_100bf7360(char *param_1,int param_2)

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
  
  if (param_2 != 0) goto LAB_100bf7574;
  iVar4 = 0;
  iVar3 = 0x391;
  local_68 = param_1;
  if (DAT_1023160d8 == 0) {
    iVar1 = 0;
    puVar9 = (uint *)0x0;
LAB_100bf73f0:
    do {
      iVar8 = iVar3;
      if (iVar8 <= iVar4) {
        if (iVar1 != 0) goto LAB_100bf746d;
        break;
      }
      iVar3 = (iVar8 + iVar4) / 2;
      puVar9 = (uint *)(&DAT_101da45c0 + (long)iVar3 * 4);
      iVar1 = _strcmp(local_68,(&PTR_s_UNDEF_102242b80)
                               [(ulong)*(uint *)(&DAT_101da45c0 + (long)iVar3 * 4) * 5]);
    } while ((iVar1 < 0) || (iVar4 = iVar3 + 1, iVar3 = iVar8, 0 < iVar1));
    if (puVar9 != (uint *)0x0) {
      puVar9 = (uint *)(&DAT_102242b90 + (ulong)*puVar9 * 0x28);
      goto LAB_100bf7459;
    }
  }
  else {
    local_40[0] = 1;
    local_38 = &local_68;
    lVar5 = FUN_100c60fc0(DAT_1023160d8,local_40);
    iVar4 = 0;
    iVar1 = 0;
    puVar9 = (uint *)0x0;
    if (lVar5 == 0) goto LAB_100bf73f0;
    puVar9 = (uint *)(*(long *)(lVar5 + 8) + 0x10);
LAB_100bf7459:
    uVar2 = *puVar9;
    if (uVar2 != 0) goto LAB_100bf7544;
  }
LAB_100bf746d:
  iVar4 = 0;
  iVar3 = 0x391;
  local_60 = param_1;
  if (DAT_1023160d8 == 0) {
    iVar1 = 0;
    puVar9 = (uint *)0x0;
LAB_100bf74d0:
    do {
      iVar8 = iVar3;
      if (iVar8 <= iVar4) {
        if (iVar1 != 0) goto LAB_100bf7574;
        break;
      }
      iVar3 = (iVar8 + iVar4) / 2;
      puVar9 = (uint *)(&DAT_101da3770 + (long)iVar3 * 4);
      iVar1 = _strcmp(local_60,(&PTR_s_undefined_102242b88)
                               [(ulong)*(uint *)(&DAT_101da3770 + (long)iVar3 * 4) * 5]);
    } while ((iVar1 < 0) || (iVar4 = iVar3 + 1, iVar3 = iVar8, 0 < iVar1));
    if (puVar9 == (uint *)0x0) goto LAB_100bf7574;
    puVar9 = (uint *)(&DAT_102242b90 + (ulong)*puVar9 * 0x28);
  }
  else {
    local_40[0] = 2;
    local_38 = &local_68;
    lVar5 = FUN_100c60fc0(DAT_1023160d8,local_40);
    iVar4 = 0;
    iVar1 = 0;
    puVar9 = (uint *)0x0;
    if (lVar5 == 0) goto LAB_100bf74d0;
    puVar9 = (uint *)(*(long *)(lVar5 + 8) + 0x10);
  }
  uVar2 = *puVar9;
  if (uVar2 != 0) {
LAB_100bf7544:
    if (uVar2 < 0x398) {
      if (*(int *)(&DAT_102242b90 + (long)(int)uVar2 * 0x28) != 0) {
        return &PTR_s_UNDEF_102242b80 + (long)(int)uVar2 * 5;
      }
      uVar7 = 0x140;
    }
    else {
      if (DAT_1023160d8 == 0) {
        return (undefined **)0x0;
      }
      local_40[0] = 3;
      local_38 = &local_68;
      local_58 = uVar2;
      lVar5 = FUN_100c60fc0(DAT_1023160d8,local_40);
      if (lVar5 != 0) {
        return *(undefined ***)(lVar5 + 8);
      }
      uVar7 = 0x14e;
    }
    FUN_100c62ee0(8,0x67,0x65,"obj_dat.c",uVar7);
    return (undefined **)0x0;
  }
LAB_100bf7574:
  iVar3 = FUN_100c742e0(0,0,param_1,0xffffffff);
  if (iVar3 < 1) {
    return (undefined **)0x0;
  }
  iVar4 = FUN_100c8aea0(0,iVar3,6);
  lVar5 = FUN_100bf3540(iVar4,"obj_dat.c",0x1d6);
  if (lVar5 == 0) {
    return (undefined **)0x0;
  }
  local_70 = lVar5;
  FUN_100c8ad50(&local_70,0,iVar3,6,0);
  FUN_100c742e0(local_70,iVar3,param_1,0xffffffff);
  local_78 = lVar5;
  ppuVar6 = (undefined **)FUN_100c74a40(0,&local_78,(long)iVar4);
  FUN_100bf3910(lVar5);
  return ppuVar6;
}

