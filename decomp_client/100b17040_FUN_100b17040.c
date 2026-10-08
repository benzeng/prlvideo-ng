
int FUN_100b17040(long *param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  ulong local_58;
  uint local_50;
  long *local_48;
  void *local_40;
  uint local_38;
  
  lVar2 = param_1[4];
  if (lVar2 == 0) {
    FUN_100df99c0("Reclaim","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL != si",
                  "DiskImageComp.cpp",0x620,"FixFirstDataBlockOffset");
  }
  uVar9 = *(ulong *)(lVar2 + 0x40);
  uVar5 = (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x160))
                    ((long)param_1 + *(long *)(*param_1 + -0x18));
  if (uVar5 == uVar9) {
    return 0;
  }
  lVar6 = FUN_100b1ffb0(lVar2);
  if (uVar5 < lVar6 + uVar9) {
    return 0;
  }
  FUN_100df99c0("Reclaim","dimg",0,"Disk has data (BATend = %llu, file size = %llu)",uVar9,uVar5);
  local_58 = uVar9 / *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
  local_38 = FUN_100b1ffb0(lVar2);
  local_50 = 0xffffffff;
  local_48 = param_1;
  local_40 = _valloc((ulong)local_38);
  if (local_40 == (void *)0x0) {
    FUN_100df99c0("Reclaim","dimg",0,"Error: out of memory!");
    return -0x7ffffffe;
  }
  iVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,FUN_100b16dd0,&local_58);
  _free(local_40);
  if (iVar4 < 0) {
LAB_100b172f2:
    (**(code **)(*param_1 + 0xf0))(param_1);
  }
  else {
    FUN_100df99c0("Reclaim","dimg",0,"New first block offset = %u sectors",local_50);
    uVar9 = (ulong)*(uint *)(lVar2 + 0x7c);
    if ((uVar9 != 0) && (uVar9 < local_58)) {
      uVar1 = *(uint *)(lVar2 + 0x10);
      if (local_50 == 0xffffffff) {
        do {
          local_50 = (int)uVar9 + uVar1;
          bVar11 = uVar9 < local_58;
          uVar9 = (ulong)local_50;
        } while (bVar11);
        local_50 = local_50 - uVar1;
        uVar9 = (ulong)local_50;
      }
      else if (uVar1 < local_50) {
        uVar10 = local_50;
        do {
          uVar8 = uVar10 - uVar1;
          if (uVar8 < local_58) break;
          uVar10 = uVar10 - uVar1;
          local_50 = uVar8;
        } while (uVar1 < uVar10);
      }
      FUN_100df99c0("Reclaim","dimg",0,"Updating first block offset on image from %u to %u",uVar9);
      (**(code **)(*param_1 + 0x70))(param_1,0);
      iVar4 = FUN_100b15b90(lVar2,*(undefined4 *)(lVar2 + 0x6c),local_50);
      if (iVar4 < 0) {
        FUN_100df99c0("Reclaim","dimg",0,"Updating failed! Error = 0x%X",iVar4);
        goto LAB_100b172f2;
      }
    }
    (**(code **)(*param_1 + 0x70))(param_1,1);
    (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x180))
              ((long)param_1 + *(long *)(*param_1 + -0x18),*(undefined8 *)(lVar2 + 0x20));
    lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
    lVar6 = *(long *)((long)param_1 + *(long *)(*param_1 + -0x18));
    pcVar3 = *(code **)(lVar6 + 0x188);
    uVar7 = (**(code **)(lVar6 + 0x160))(lVar2);
    (*pcVar3)(lVar2,uVar7);
    iVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  }
  return iVar4;
}

