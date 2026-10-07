
bool FUN_100540190(void)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  bool bVar7;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::toUtf8();
  pQVar5 = local_38 + *(long *)(local_38 + 0x10);
  QString::toUtf8();
  pQVar6 = local_40 + *(long *)(local_40 + 0x10);
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  iVar2 = _lstat_INODE64(pQVar5,&local_d8);
  if (iVar2 == 0) {
    if ((local_d8 & 0xa00000000000) != 0) {
      iVar2 = _unlink((char *)pQVar5);
      bVar7 = iVar2 == 0;
      if ((!bVar7) && (0 < DAT_1011b55f8)) {
        uVar1 = local_d8._4_2_;
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_1008e3970("","InvSharingHost",1,"unlink() failed (mode = %d, fn = %s): %s",uVar1,pQVar5,
                      pcVar4);
      }
      goto LAB_100540380;
    }
    if ((local_d8 & 0x400000000000) != 0) {
      iVar2 = _rmdir((char *)pQVar5);
      bVar7 = iVar2 == 0;
      if ((!bVar7) && (0 < DAT_1011b55f8)) {
        uVar1 = local_d8._4_2_;
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_1008e3970("","InvSharingHost",1,"rmdir() failed (mode = %d, fn = %s): %s",uVar1,pQVar5,
                      pcVar4);
      }
      goto LAB_100540380;
    }
    if (DAT_1011b55f8 < 1) {
      bVar7 = false;
    }
    else {
      bVar7 = false;
      FUN_1008e3970("","InvSharingHost",1,"lstat(): unknown file type: mode = %d, fn = %s",
                    local_d8._4_2_,pQVar5);
    }
  }
  else {
    piVar3 = ___error();
    bVar7 = *piVar3 == 2;
    if ((!bVar7) && (0 < DAT_1011b55f8)) {
      piVar3 = ___error();
      FUN_1008e3970("","InvSharingHost",1,"lstat() failed: err = %d, fn = %s",*piVar3,pQVar5);
    }
LAB_100540380:
    if (bVar7) {
      iVar2 = _symlink((char *)pQVar6,(char *)pQVar5);
      bVar7 = iVar2 == 0;
      if ((!bVar7) && (0 < DAT_1011b55f8)) {
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_1008e3970("","InvSharingHost",1,"symlink() failed (linkname = %s, target = %s): %s",
                      pQVar5,pQVar6,pcVar4);
      }
    }
    else {
      bVar7 = false;
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100540455;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100540455:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return bVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return bVar7;
}

