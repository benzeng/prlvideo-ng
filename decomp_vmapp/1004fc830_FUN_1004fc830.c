
undefined8 *
FUN_1004fc830(undefined8 *param_1,long param_2,QString *param_3,undefined8 param_4,uint param_5)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  long lVar11;
  _func_void_Node_ptr *p_Var12;
  _func_void_Node_ptr *p_Var13;
  int *piVar14;
  _func_void_Node_ptr *p_Var15;
  QArrayData *pQVar16;
  _func_void_Node_ptr *p_Var17;
  QArrayData *pQVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  QArrayData *pQStack_110;
  QArrayData *local_100;
  QArrayData *local_f8;
  QString local_f0;
  QString local_e8;
  QFileInfo local_e0 [8];
  QArrayData *local_d8;
  QArrayData *pQStack_d0;
  QString local_c0;
  QArrayData *local_b8;
  QDirIterator local_b0 [8];
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined1 local_98 [16];
  QString local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QString local_60;
  QDir local_58 [8];
  _func_void_Node_ptr *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_50 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
  cVar8 = FUN_1004c5a30(&local_50);
  QDir::QDir(local_58,param_3);
  *param_1 = PTR_shared_null_100ba2188;
  cVar9 = FUN_1004dd4c0(param_4);
  if (cVar9 != '\0') goto LAB_1004fcd7e;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if ((param_5 & 1) == 0) {
    QString::toUpper_helper(&local_68);
    QMutex::lock();
    lVar11 = FUN_100502100((long *)(param_2 + 0x28),&local_68);
    bVar19 = *(long *)(param_2 + 0x28) != lVar11;
    if (bVar19) {
      QString::operator=(&local_60,(QString *)(lVar11 + 0x18));
    }
    QMutex::unlock();
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fc98e;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
  }
  else {
    QMutex::lock();
    lVar11 = FUN_100502100((long *)(param_2 + 0x20),param_4);
    bVar19 = *(long *)(param_2 + 0x20) != lVar11;
    if (bVar19) {
      QString::operator=(&local_60,(QString *)(lVar11 + 0x18));
    }
    QMutex::unlock();
  }
LAB_1004fc98e:
  bVar5 = false;
  bVar4 = false;
  if (bVar19) {
    cVar9 = operator==(&local_60,(QString *)&DAT_1011bc278);
    p_Var12 = local_50;
    bVar5 = false;
    bVar4 = false;
    if (cVar9 == '\0') {
      if (cVar8 == '\0') {
LAB_1004fca60:
        local_80.field0_0x0 = local_60.field0_0x0;
        if (1 < *(int *)local_60.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_48,0xa02eac);
        QString::append(&local_80);
        puVar6 = PTR_shared_null_100ba20d0;
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fcad9;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1004fcad9:
        local_78.field0_0x0 = local_80.field0_0x0;
        if (1 < *(int *)local_80.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_78);
        QFileInfo::QFileInfo(local_70,local_58,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fcb40;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_1004fcb40:
        if (*(int *)local_80.field0_0x0 != -1) {
          if (*(int *)local_80.field0_0x0 != 0) {
            LOCK();
            *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
            local_31 = *(int *)local_80.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004fcb70;
          }
          QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
        }
LAB_1004fcb70:
        cVar9 = QFileInfo::exists();
        if (cVar9 == '\0') {
          QFileInfo::~QFileInfo(local_70);
          bVar5 = false;
          bVar4 = false;
        }
        else {
          local_98._8_4_ = (int)puVar6;
          local_98._0_8_ = puVar6;
          local_98._12_4_ = (int)((ulong)puVar6 >> 0x20);
          FUN_1004fd6b0(&local_a0,param_2,&local_60);
          pQVar16 = local_a0;
          puVar6 = PTR_shared_null_100ba20d0;
          local_a0 = (QArrayData *)PTR_shared_null_100ba20d0;
          if (*(int *)PTR_shared_null_100ba20d0 != -1) {
            if (*(int *)PTR_shared_null_100ba20d0 != 0) {
              LOCK();
              *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
              local_31 = *(int *)puVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fcbf4;
            }
            QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
          }
LAB_1004fcbf4:
          QFileInfo::absoluteFilePath();
          pQVar18 = local_a8;
          puVar6 = PTR_shared_null_100ba20d0;
          local_a8 = (QArrayData *)PTR_shared_null_100ba20d0;
          if (*(int *)PTR_shared_null_100ba20d0 != -1) {
            if (*(int *)PTR_shared_null_100ba20d0 != 0) {
              LOCK();
              *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
              local_31 = *(int *)puVar6 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fcc56;
            }
            QArrayData::deallocate((QArrayData *)puVar6,2,8);
          }
LAB_1004fcc56:
          FUN_1005021e0(param_1,local_98);
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_31 = *(int *)pQVar16 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fcc96;
            }
            QArrayData::deallocate(pQVar16,2,8);
          }
LAB_1004fcc96:
          if (*(int *)pQVar18 != -1) {
            if (*(int *)pQVar18 != 0) {
              LOCK();
              *(int *)pQVar18 = *(int *)pQVar18 + -1;
              local_31 = *(int *)pQVar18 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fccc1;
            }
            QArrayData::deallocate(pQVar18,2,8);
          }
LAB_1004fccc1:
          QFileInfo::~QFileInfo(local_70);
          bVar4 = true;
          bVar5 = true;
        }
      }
      else {
        uVar2 = *(uint *)(local_50 + 0x20);
        bVar5 = false;
        bVar4 = false;
        if (uVar2 != 0) {
          uVar10 = qHash(&local_60,*(uint *)(local_50 + 0x24));
          bVar5 = false;
          uVar3 = (ulong)uVar10 % (ulong)uVar2;
          p_Var15 = *(_func_void_Node_ptr **)(*(long *)(p_Var12 + 8) + uVar3 * 8);
          bVar4 = false;
          if (p_Var15 != p_Var12) {
            p_Var13 = (_func_void_Node_ptr *)(*(long *)(p_Var12 + 8) + uVar3 * 8);
            do {
              p_Var17 = p_Var12;
              if (*(uint *)(p_Var15 + 8) == uVar10) {
                cVar9 = operator==(&local_60,(QString *)(p_Var15 + 0x10));
                p_Var12 = *(_func_void_Node_ptr **)p_Var13;
                p_Var15 = p_Var12;
                p_Var17 = local_50;
                if (cVar9 != '\0') break;
              }
              p_Var12 = p_Var17;
              p_Var13 = p_Var15;
              p_Var15 = *(_func_void_Node_ptr **)p_Var13;
              p_Var17 = p_Var12;
            } while (p_Var15 != p_Var12);
            bVar5 = false;
            bVar4 = false;
            if (p_Var12 != p_Var17) goto LAB_1004fca60;
          }
        }
      }
    }
  }
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004fcd1b;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004fcd1b:
  if (!bVar4) {
LAB_1004fcd7e:
    QDirIterator::QDirIterator(local_b0,param_3,0x6400,0);
    puVar6 = PTR_shared_null_100ba20d0;
    auVar20._8_4_ = (int)PTR_shared_null_100ba20d0;
    auVar20._0_8_ = PTR_shared_null_100ba20d0;
    auVar20._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
LAB_1004fcddf:
    do {
      cVar9 = QDirIterator::hasNext();
      if (cVar9 == '\0') goto LAB_1004fd1c8;
      QDirIterator::next();
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fce34;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_1004fce34:
      QDirIterator::fileName();
      cVar9 = operator==(&local_c0,(QString *)&DAT_1011bc278);
      p_Var12 = local_50;
      if (cVar9 == '\0') {
        if (cVar8 == '\0') {
LAB_1004fcee0:
          pQStack_110 = auVar20._8_8_;
          local_d8 = (QArrayData *)puVar6;
          pQStack_d0 = pQStack_110;
          local_f0.field0_0x0 = local_c0.field0_0x0;
          if (1 < *(int *)local_c0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0xa02eac);
          QString::append(&local_f0);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fcf7b;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1004fcf7b:
          local_e8.field0_0x0 = local_f0.field0_0x0;
          if (1 < *(int *)local_f0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
            local_31 = *(int *)local_f0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_e8);
          QFileInfo::QFileInfo(local_e0,local_58,&local_e8);
          if (*(int *)local_e8.field0_0x0 != -1) {
            if (*(int *)local_e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
              local_31 = *(int *)local_e8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fcff5;
            }
            QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
          }
LAB_1004fcff5:
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fd02b;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
LAB_1004fd02b:
          puVar7 = PTR_shared_null_100ba20d0;
          cVar9 = QFileInfo::exists();
          pQVar16 = (QArrayData *)puVar7;
          pQVar18 = (QArrayData *)puVar7;
          if (cVar9 != '\0') {
            QFileInfo::absoluteFilePath();
            pQVar18 = local_f8;
            local_d8 = local_f8;
            local_f8 = (QArrayData *)puVar7;
            if (*(int *)puVar7 != -1) {
              if (*(int *)puVar7 != 0) {
                LOCK();
                *(int *)puVar7 = *(int *)puVar7 + -1;
                local_31 = *(int *)puVar7 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004fd0b2;
              }
              QArrayData::deallocate((QArrayData *)puVar7,2,8);
            }
LAB_1004fd0b2:
            FUN_1004fd6b0(&local_100,param_2,&local_c0);
            pQVar16 = local_100;
            pQStack_d0 = local_100;
            local_100 = (QArrayData *)puVar7;
            if (*(int *)puVar7 != -1) {
              if (*(int *)puVar7 != 0) {
                LOCK();
                *(int *)puVar7 = *(int *)puVar7 + -1;
                local_31 = *(int *)puVar7 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004fd10e;
              }
              QArrayData::deallocate((QArrayData *)puVar7,2,8);
            }
LAB_1004fd10e:
            FUN_1005021e0(param_1,&local_d8);
          }
          QFileInfo::~QFileInfo(local_e0);
          if (*(int *)pQVar16 != -1) {
            if (*(int *)pQVar16 != 0) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_31 = *(int *)pQVar16 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fd15c;
            }
            QArrayData::deallocate(pQVar16,2,8);
          }
LAB_1004fd15c:
          if (*(int *)pQVar18 != -1) {
            if (*(int *)pQVar18 != 0) {
              LOCK();
              *(int *)pQVar18 = *(int *)pQVar18 + -1;
              local_31 = *(int *)pQVar18 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004fd190;
            }
            QArrayData::deallocate(pQVar18,2,8);
          }
        }
        else {
          uVar2 = *(uint *)(local_50 + 0x20);
          if (uVar2 != 0) {
            uVar10 = qHash(&local_c0,*(uint *)(local_50 + 0x24));
            uVar3 = (ulong)uVar10 % (ulong)uVar2;
            p_Var15 = *(_func_void_Node_ptr **)(*(long *)(p_Var12 + 8) + uVar3 * 8);
            if (p_Var15 != p_Var12) {
              p_Var13 = (_func_void_Node_ptr *)(*(long *)(p_Var12 + 8) + uVar3 * 8);
              do {
                p_Var17 = p_Var12;
                if (*(uint *)(p_Var15 + 8) == uVar10) {
                  cVar9 = operator==(&local_c0,(QString *)(p_Var15 + 0x10));
                  p_Var12 = *(_func_void_Node_ptr **)p_Var13;
                  p_Var15 = p_Var12;
                  p_Var17 = local_50;
                  if (cVar9 != '\0') break;
                }
                p_Var12 = p_Var17;
                p_Var13 = p_Var15;
                p_Var15 = *(_func_void_Node_ptr **)p_Var13;
                p_Var17 = p_Var12;
              } while (p_Var15 != p_Var12);
              if (p_Var12 != p_Var17) goto LAB_1004fcee0;
            }
          }
        }
      }
LAB_1004fd190:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004fcddf;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
    } while( true );
  }
  if (!bVar5) {
    piVar14 = (int *)*param_1;
    if (*piVar14 != -1) {
      if (*piVar14 != 0) {
        LOCK();
        *piVar14 = *piVar14 + -1;
        local_31 = *piVar14 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004fd1d4;
        piVar14 = (int *)*param_1;
      }
      FUN_1005026c0(param_1,piVar14);
    }
  }
LAB_1004fd1d4:
  QDir::~QDir(local_58);
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_50);
  }
  return param_1;
LAB_1004fd1c8:
  QDirIterator::~QDirIterator(local_b0);
  goto LAB_1004fd1d4;
}

