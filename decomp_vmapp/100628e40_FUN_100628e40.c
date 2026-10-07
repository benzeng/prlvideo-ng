
undefined4 FUN_100628e40(long *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  QArrayData *pQVar10;
  undefined4 unaff_R15D;
  bool bVar11;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QFileInfo local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QFileInfo local_90 [8];
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QArrayData *local_50;
  undefined8 local_48;
  int *local_40;
  undefined1 local_31;
  
  *(undefined1 *)((long)param_1 + 0x274) = 0;
  (**(code **)(*param_1 + 0x278))();
  FUN_100625d10(&local_40,param_1);
  local_48 = 0;
  QString::toUtf8();
  if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
  }
  iVar4 = FUN_1006fe830(&local_48,local_50 + *(long *)(local_50 + 0x10),&PTR_FUN_1011208d0,0x201,
                        0x1a4,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100628f13;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100628f13:
  if (iVar4 == -1) {
    piVar8 = ___error();
    pcVar9 = _strerror(*piVar8);
    unaff_R15D = 0x80000009;
    FUN_1008e3970("","prl_problem_report_utils",0,"tar_open(): %s\n",pcVar9);
  }
  else {
    local_70 = local_40;
    if (*local_40 != -1) {
      if (*local_40 == 0) {
        QListData::detach((int)&local_70);
        iVar4 = local_70[2];
        if (iVar4 != local_70[3]) {
          local_40 = local_40 + (long)local_40[2] * 2 + 4;
          piVar8 = local_70 + (long)iVar4 * 2 + 4;
          lVar7 = (long)local_70[3] * 8 + (long)iVar4 * -8;
          do {
            piVar1 = *(int **)local_40;
            *(int **)piVar8 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar8 = piVar8 + 2;
            local_40 = local_40 + 2;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *local_40 = *local_40 + 1;
        local_31 = *local_40 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)local_70[2] * 2 + 4;
    local_60 = local_70 + (long)local_70[3] * 2 + 4;
    local_58 = 1;
    if (local_70[2] != local_70[3]) {
      do {
        local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_68;
        if (1 < *(int *)local_78.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
        }
        iVar4 = 7;
        if (local_58 != 0) {
          QFileInfo::QFileInfo(local_90,(QString *)(param_1 + 0x4d));
          QFileInfo::fileName();
          local_98 = (QArrayData *)QString::fromAscii_helper("/",1);
          local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_88;
          if (1 < *(int *)local_88 + 1U) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + 1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
          }
          QString::append(&local_80);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006290eb;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1006290eb:
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062911b;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10062911b:
          QFileInfo::~QFileInfo(local_90);
          QFileInfo::QFileInfo(local_a8,&local_78);
          QFileInfo::fileName();
          QString::append(&local_80);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10062918b;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_10062918b:
          QFileInfo::~QFileInfo(local_a8);
          uVar3 = local_48;
          QString::toUtf8();
          if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f);
          }
          pQVar10 = local_b0 + *(long *)(local_b0 + 0x10);
          QString::toUtf8();
          if ((1 < *(uint *)local_b8) || (*(long *)(local_b8 + 0x10) != 0x18)) {
            QByteArray::reallocData
                      (&local_b8,*(uint *)(local_b8 + 4) + 1,*(uint *)(local_b8 + 8) >> 0x1f);
          }
          iVar5 = FUN_1006fdd80(uVar3,pQVar10,local_b8 + *(long *)(local_b8 + 0x10),FUN_100629840,
                                param_1);
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100629276;
            }
            QArrayData::deallocate(local_b8,1,8);
          }
LAB_100629276:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006292ac;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_1006292ac:
          bVar11 = false;
          if (iVar5 != 0) {
            QString::toUtf8();
            lVar7 = *(long *)(local_c0 + 0x10);
            QString::toUtf8();
            lVar2 = *(long *)(local_c8 + 0x10);
            piVar8 = ___error();
            pcVar9 = _strerror(*piVar8);
            FUN_1008e3970("","prl_problem_report_utils",0,"tar_append_tree(\"%s\", \"%s\"): %s\n",
                          local_c0 + lVar7,local_c8 + lVar2,pcVar9);
            if (*(int *)local_c8 != -1) {
              if (*(int *)local_c8 != 0) {
                LOCK();
                *(int *)local_c8 = *(int *)local_c8 + -1;
                local_31 = *(int *)local_c8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10062935d;
              }
              QArrayData::deallocate(local_c8,1,8);
            }
LAB_10062935d:
            if (*(int *)local_c0 != -1) {
              if (*(int *)local_c0 != 0) {
                LOCK();
                *(int *)local_c0 = *(int *)local_c0 + -1;
                local_31 = *(int *)local_c0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100629393;
              }
              QArrayData::deallocate(local_c0,1,8);
            }
LAB_100629393:
            FUN_1006fe9e0(local_48);
            bVar11 = true;
            unaff_R15D = 0x80000009;
            if (*(char *)((long)param_1 + 0x274) != '\0') {
              *(undefined1 *)((long)param_1 + 0x274) = 0;
              unaff_R15D = 0x80000275;
            }
          }
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006293f5;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
LAB_1006293f5:
          if (bVar11) {
            iVar4 = 1;
          }
          else {
            local_58 = 0;
          }
        }
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100629447;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100629447:
        if (iVar4 != 7) goto LAB_100629479;
        local_68 = local_68 + 2;
        uVar6 = local_58 ^ 1;
        bVar11 = local_58 != 1;
        local_58 = uVar6;
      } while ((bVar11) && (local_68 != local_60));
    }
    iVar4 = 4;
LAB_100629479:
    FUN_100013180(&local_70);
    if (iVar4 == 4) {
      iVar4 = FUN_100700cb0(local_48);
      if (iVar4 == 0) {
        iVar4 = FUN_1006fe9e0(local_48);
        if (iVar4 == 0) {
          *(undefined1 *)((long)param_1 + 0x259) = 1;
          *(undefined1 *)((long)param_1 + 0x274) = 0;
          unaff_R15D = 0;
        }
        else {
          piVar8 = ___error();
          pcVar9 = _strerror(*piVar8);
          unaff_R15D = 0x80000009;
          FUN_1008e3970("","prl_problem_report_utils",0,"tar_close(): %s\n",pcVar9);
        }
      }
      else {
        piVar8 = ___error();
        pcVar9 = _strerror(*piVar8);
        FUN_1008e3970("","prl_problem_report_utils",0,"tar_append_eof(): %s\n",pcVar9);
        unaff_R15D = 0x80000009;
        FUN_1006fe9e0(local_48);
      }
    }
  }
  FUN_100013180(&local_40);
  return unaff_R15D;
}

