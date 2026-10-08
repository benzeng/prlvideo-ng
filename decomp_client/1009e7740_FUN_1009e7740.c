
undefined8 FUN_1009e7740(long *param_1)

{
  long lVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar2 = local_48;
    lVar1 = *(long *)(local_48 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_problem_report_utils",2,"Extract incoming archive %s to directoty %s",
                  pQVar2 + lVar1,local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e77ed;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1009e77ed:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e781d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1009e781d:
  QString::toUtf8();
  if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f);
  }
  iVar4 = FUN_100da9960(&local_40,local_58 + *(long *)(local_58 + 0x10),&PTR_FUN_1022808d0,0,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e78a4;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1009e78a4:
  uVar3 = local_40;
  if (iVar4 == -1) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    pcVar7 = "tar_open(): %s\n";
    goto LAB_1009e79bb;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
  }
  iVar4 = FUN_100da8db0(uVar3,local_60 + *(long *)(local_60 + 0x10));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e7925;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1009e7925:
  if (iVar4 != 0) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    FUN_100df99c0("","prl_problem_report_utils",0,"tar_extract_all(): %s\n",pcVar6);
    FUN_100da9b10(local_40);
    return 0x80000009;
  }
  iVar4 = FUN_100da9b10(local_40);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x280))(param_1);
    if (iVar4 < 0) {
      FUN_100df99c0("","prl_problem_report_utils",0,"Cannot find main xml deskriptor");
      return 0x80000009;
    }
    return 0;
  }
  piVar5 = ___error();
  pcVar6 = _strerror(*piVar5);
  pcVar7 = "tar_close(): %s\n";
LAB_1009e79bb:
  FUN_100df99c0("","prl_problem_report_utils",0,pcVar7,pcVar6);
  return 0x80000009;
}

