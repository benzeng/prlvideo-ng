
void FUN_1005b3060(long param_1,int param_2,undefined1 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  iVar4 = param_2 % 0x10;
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: block size = %u sect",
                  *(undefined4 *)(param_1 + 0x1c));
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: extra layer = %u (0x%X)",
                  *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x34));
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: refs of extra layer creations = %u",
                  *(undefined4 *)(param_1 + 0x38));
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: # of storages = %zu",
                  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x10));
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: allocated groups (%u entries) {",
                  *(undefined4 *)(param_1 + 0x18));
  }
  bVar1 = DAT_1011b55f8 < iVar4 && 0 < iVar4;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      if (!bVar1) {
        FUN_1008e3970("","vdisk",param_2,"DiskGroups: group #%d {",uVar3);
      }
      FUN_1005aa840(*(long *)(param_1 + 0x10) + lVar5,param_2,param_3);
      if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",param_2,"DiskGroups: } group");
      }
      uVar3 = uVar3 + 1;
      bVar1 = DAT_1011b55f8 < iVar4 && 0 < iVar4;
      lVar5 = lVar5 + 0x40;
    } while (uVar3 < *(uint *)(param_1 + 0x18));
  }
  if (!bVar1) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: } allocated groups");
  }
  QMutex::lock();
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: loaded groups (%u entries) {",
                  *(undefined4 *)(param_1 + 0x30));
  }
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar6 != (long *)(param_1 + 0x20)) {
    iVar2 = 1;
    do {
      if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",param_2,"DiskGroups: group #%d {",iVar2);
      }
      FUN_1005aa840(plVar6 + -5,param_2,param_3);
      if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
        FUN_1008e3970("","vdisk",param_2,"DiskGroups: } group");
      }
      iVar2 = iVar2 + 1;
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)(param_1 + 0x20));
  }
  QMutex::unlock();
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: } loaded groups");
  }
  if ((iVar4 < 1) || (iVar4 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"DiskGroups: cache file {");
  }
  FUN_1005b0a00(param_1 + 0x48,param_2,param_3);
  if ((0 < iVar4) && (DAT_1011b55f8 < iVar4)) {
    return;
  }
  FUN_1008e3970("","vdisk",param_2,"DiskGroups: } cache file");
  return;
}

