
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1006f5120(undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  QArrayData *local_8c8;
  QArrayData *local_8c0;
  uint local_8b0 [2];
  undefined8 local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_2 = 0;
  if (param_3 != (ulong *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  QString::toUtf8();
  iVar3 = _statfs_INODE64(local_8c0 + *(long *)(local_8c0 + 0x10),local_8b0);
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      UNLOCK();
      if (*(int *)local_8c0 != 0) goto LAB_1006f51d2;
    }
    QArrayData::deallocate(local_8c0,1,8);
  }
LAB_1006f51d2:
  dVar2 = DAT_100b4a150;
  if (iVar3 == 0) {
    auVar10._8_4_ = (int)((ulong)local_898 >> 0x20);
    auVar10._0_8_ = local_898;
    auVar10._12_4_ = _UNK_100b2e9f4;
    dVar8 = (double)local_8b0[0];
    dVar9 = (((double)CONCAT44(_DAT_100b2e9f0,(int)local_898) - _DAT_100b2ea00) +
            (auVar10._8_8_ - _UNK_100b2ea08)) * dVar8;
    uVar7 = (long)dVar9;
    if (DAT_100b4a150 <= dVar9) {
      uVar7 = (long)(dVar9 - DAT_100b4a150) ^ 0x8000000000000000;
    }
    *param_2 = uVar7;
    if (param_3 != (ulong *)0x0) {
      auVar11._8_4_ = (int)((ulong)local_8a8 >> 0x20);
      auVar11._0_8_ = local_8a8;
      auVar11._12_4_ = _UNK_100b2e9f4;
      dVar9 = (((double)CONCAT44(_DAT_100b2e9f0,(int)local_8a8) - _DAT_100b2ea00) +
              (auVar11._8_8_ - _UNK_100b2ea08)) * dVar8;
      uVar7 = (long)dVar9;
      if (dVar2 <= dVar9) {
        uVar7 = (long)(dVar9 - dVar2) ^ 0x8000000000000000;
      }
      *param_3 = uVar7;
    }
    uVar6 = 0;
    if (param_4 != (ulong *)0x0) {
      auVar12._8_4_ = (int)((ulong)local_8a0 >> 0x20);
      auVar12._0_8_ = local_8a0;
      auVar12._12_4_ = _UNK_100b2e9f4;
      dVar8 = (((double)CONCAT44(_DAT_100b2e9f0,(int)local_8a0) - _DAT_100b2ea00) +
              (auVar12._8_8_ - _UNK_100b2ea08)) * dVar8;
      uVar7 = (long)dVar8;
      if (dVar2 <= dVar8) {
        uVar7 = (long)(dVar8 - dVar2) ^ 0x8000000000000000;
      }
      *param_4 = uVar7;
    }
    goto LAB_1006f53ae;
  }
  piVar4 = ___error();
  iVar3 = *piVar4;
  QString::toUtf8();
  lVar1 = *(long *)(local_8c8 + 0x10);
  pcVar5 = _strerror(iVar3);
  FUN_1008e3970("","cmn_utils",0,
                "CFileHelper::GetDiskAvailableSpace() : statfs() for \'%s\' failed. Error code = %d (%s)"
                ,local_8c8 + lVar1,iVar3,pcVar5);
  if (*(int *)local_8c8 != -1) {
    if (*(int *)local_8c8 != 0) {
      LOCK();
      *(int *)local_8c8 = *(int *)local_8c8 + -1;
      UNLOCK();
      if (*(int *)local_8c8 != 0) goto LAB_1006f526e;
    }
    QArrayData::deallocate(local_8c8,1,8);
  }
LAB_1006f526e:
  if (iVar3 < 0x23) {
    if (iVar3 < 0xd) {
      if (iVar3 == 2) {
LAB_1006f53a2:
        uVar6 = 0x80000324;
        goto LAB_1006f53ae;
      }
      if (iVar3 == 4) goto LAB_1006f538a;
    }
    else {
      uVar6 = 0x80000005;
      if (iVar3 == 0xd) goto LAB_1006f53ae;
      if (iVar3 == 0x14) goto LAB_1006f53a2;
    }
  }
  else if (iVar3 == 0x23) {
LAB_1006f538a:
    uVar6 = 0x80000450;
    goto LAB_1006f53ae;
  }
  uVar6 = 0x80000556;
LAB_1006f53ae:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

