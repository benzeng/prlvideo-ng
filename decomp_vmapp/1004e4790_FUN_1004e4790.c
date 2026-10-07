
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004e4790(undefined8 param_1,ulong *param_2,ulong *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 unaff_R13;
  int iVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong local_8d8;
  QString local_8d0;
  QString local_8c8;
  QString local_8c0;
  undefined4 local_8b8;
  undefined1 local_8b1;
  uint local_8b0;
  undefined8 local_8a8;
  undefined8 local_898;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_5 = 0x200;
  *param_4 = 8;
  QDir::toNativeSeparators(&local_8c0);
  uVar2 = QDir::separator();
  local_8d8 = 0;
LAB_1004e4800:
  QString::toUtf8_helper(&local_8c8);
  local_8b8 = 0;
  cVar1 = FUN_100761b20((QArrayData *)
                        (local_8c8.field0_0x0 + *(long *)(local_8c8.field0_0x0 + 0x10)),&local_8b8,1
                        ,0);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_100761c10(local_8b8);
  }
  if (*(int *)local_8c8.field0_0x0 != -1) {
    if (*(int *)local_8c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8c8.field0_0x0 = *(int *)local_8c8.field0_0x0 + -1;
      local_8b1 = *(int *)local_8c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_1004e488e;
    }
    QArrayData::deallocate((QArrayData *)local_8c8.field0_0x0,1,8);
  }
LAB_1004e488e:
  if (cVar1 == '\0') {
    iVar3 = QString::lastIndexOf
                      (&local_8c0,CONCAT62((int6)((ulong)unaff_R13 >> 0x10),uVar2) & 0xffffffff,
                       0xfffffffe);
    iVar5 = -0xfffffec;
    uVar4 = 0;
    if (iVar3 < 0) goto LAB_1004e49ef;
    QString::truncate((int)&local_8c0);
    goto LAB_1004e4800;
  }
  QString::toUtf8_helper(&local_8d0);
  iVar3 = _statfs_INODE64((QArrayData *)
                          (local_8d0.field0_0x0 + *(long *)(local_8d0.field0_0x0 + 0x10)));
  if (*(int *)local_8d0.field0_0x0 != -1) {
    if (*(int *)local_8d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8d0.field0_0x0 = *(int *)local_8d0.field0_0x0 + -1;
      local_8b1 = *(int *)local_8d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_1004e493b;
    }
    QArrayData::deallocate((QArrayData *)local_8d0.field0_0x0,1,8);
  }
LAB_1004e493b:
  iVar5 = -0xfffffec;
  local_8d8 = 0;
  uVar4 = 0;
  if (iVar3 == 0) {
    auVar7._8_4_ = (int)((ulong)local_898 >> 0x20);
    auVar7._0_8_ = local_898;
    auVar7._12_4_ = _UNK_100b2e9f4;
    dVar6 = (((double)CONCAT44(_DAT_100b2e9f0,(int)local_898) - _DAT_100b2ea00) +
            (auVar7._8_8_ - _UNK_100b2ea08)) * (double)local_8b0;
    local_8d8 = (long)dVar6;
    if (DAT_100b4a150 <= dVar6) {
      local_8d8 = (long)(dVar6 - DAT_100b4a150) ^ 0x8000000000000000;
    }
    auVar8._8_4_ = (int)((ulong)local_8a8 >> 0x20);
    auVar8._0_8_ = local_8a8;
    auVar8._12_4_ = _UNK_100b2e9f4;
    dVar6 = (((double)CONCAT44(_DAT_100b2e9f0,(int)local_8a8) - _DAT_100b2ea00) +
            (auVar8._8_8_ - _UNK_100b2ea08)) * (double)local_8b0;
    uVar4 = (long)dVar6;
    if (DAT_100b4a150 <= dVar6) {
      uVar4 = (long)(dVar6 - DAT_100b4a150) ^ 0x8000000000000000;
    }
    iVar5 = 0;
  }
LAB_1004e49ef:
  if (*(int *)local_8c0.field0_0x0 != -1) {
    if (*(int *)local_8c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_8c0.field0_0x0 = *(int *)local_8c0.field0_0x0 + -1;
      local_8b1 = *(int *)local_8c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_1004e4a2b;
    }
    QArrayData::deallocate((QArrayData *)local_8c0.field0_0x0,2,8);
  }
LAB_1004e4a2b:
  if (iVar5 == 0) {
    *param_3 = local_8d8 >> 0xc;
    *param_2 = uVar4 >> 0xc;
    iVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

