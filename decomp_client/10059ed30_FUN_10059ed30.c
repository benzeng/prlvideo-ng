
void FUN_10059ed30(long *param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  size_t sVar12;
  QString QVar13;
  long *plVar14;
  undefined8 uVar15;
  QVariant *pQVar16;
  int *piVar17;
  int *piVar18;
  CDispCommonPreferences *this;
  long *plVar19;
  _func_void_Node_ptr *p_Var20;
  long *plVar21;
  long *plVar22;
  _func_void_Node_ptr *p_Var23;
  _func_void_Node_ptr *p_Var24;
  long *plVar25;
  QString *pQVar26;
  _func_void_Node_ptr *p_Var27;
  _func_void_Node_ptr *p_Var28;
  CDispUser *local_1c8;
  QVariant local_1b0;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QVariant local_170;
  QArrayData *local_160;
  QVariant local_158;
  QString local_148;
  QVariant local_140;
  QArrayData *local_130;
  QArrayData *local_128;
  undefined1 local_120 [32];
  QArrayData *local_100;
  QString local_f8;
  QVariant local_f0;
  QVariant local_e0;
  Data_conflict local_d0;
  uint local_c8;
  QVariant local_c0;
  int *local_b0;
  long *local_a8;
  long *local_a0;
  undefined4 local_98;
  _func_void_Node_ptr *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  QString *local_70;
  QString *local_68;
  undefined4 local_60;
  int *local_58;
  int *local_50;
  _func_void_Node_ptr *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0x14) == 0) {
    return;
  }
  local_48 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  FUN_1003deae0(&local_58,param_2);
  local_50 = local_58;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_50);
      iVar8 = local_50[2];
      if (iVar8 != local_50[3]) {
        local_58 = local_58 + (long)local_58[2] * 2 + 4;
        piVar17 = local_50 + (long)iVar8 * 2 + 4;
        lVar10 = (long)local_50[3] * 8 + (long)iVar8 * -8;
        do {
          piVar18 = *(int **)local_58;
          *(int **)piVar17 = piVar18;
          if (1 < *piVar18 + 1U) {
            LOCK();
            *piVar18 = *piVar18 + 1;
            local_31 = *piVar18 != 0;
            UNLOCK();
          }
          piVar17 = piVar17 + 2;
          local_58 = local_58 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_58);
  local_78 = local_50;
  if (*local_50 != -1) {
    if (*local_50 == 0) {
      QListData::detach((int)&local_78);
      iVar8 = local_78[2];
      if (iVar8 != local_78[3]) {
        piVar17 = local_50 + (long)local_50[2] * 2 + 4;
        piVar18 = local_78 + (long)iVar8 * 2 + 4;
        lVar10 = (long)local_78[3] * 8 + (long)iVar8 * -8;
        do {
          piVar3 = *(int **)piVar17;
          *(int **)piVar18 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar18 = piVar18 + 2;
          piVar17 = piVar17 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_50 = *local_50 + 1;
      local_31 = *local_50 != 0;
      UNLOCK();
    }
  }
  pQVar26 = (QString *)(local_78 + (long)local_78[2] * 2 + 4);
  local_68 = (QString *)(local_78 + (long)local_78[3] * 2 + 4);
  local_70 = pQVar26;
  if (local_78[2] != local_78[3]) {
    do {
      local_60 = 1;
      pQVar4 = pQVar26->field0_0x0;
      local_70 = pQVar26;
      iVar8 = QString::compare_helper
                        (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                         PTR_s_UserPreferences_102274480,0xffffffff,1);
      if (iVar8 == 0) {
        local_1c8 = operator_new(0xd0);
        CDispUser::CDispUser(local_1c8);
        this = (CDispCommonPreferences *)0x0;
      }
      else {
        pQVar4 = pQVar26->field0_0x0;
        iVar8 = QString::compare_helper
                          (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                           PTR_s_DispPreferences_102274488,0xffffffff,1);
        local_1c8 = (CDispUser *)0x0;
        this = (CDispCommonPreferences *)0x0;
        if (iVar8 == 0) {
          this = operator_new(0x160);
          CDispCommonPreferences::CDispCommonPreferences(this);
          local_1c8 = (CDispUser *)0x0;
        }
      }
      plVar11 = (long *)*param_2;
      if ((*(int *)((long)plVar11 + 0x14) == 0) || (uVar2 = *(uint *)(plVar11 + 4), uVar2 == 0)) {
LAB_10059f020:
        local_90 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
      }
      else {
        uVar9 = qHash(pQVar26,*(uint *)((long)plVar11 + 0x24));
        uVar5 = (ulong)uVar9 % (ulong)uVar2;
        plVar21 = *(long **)(plVar11[1] + uVar5 * 8);
        if (plVar21 == plVar11) goto LAB_10059f020;
        plVar14 = (long *)(plVar11[1] + uVar5 * 8);
        do {
          plVar19 = plVar11;
          plVar22 = plVar21;
          if (*(uint *)(plVar21 + 1) == uVar9) {
            cVar7 = operator==(pQVar26,(QString *)(plVar21 + 2));
            plVar11 = (long *)*plVar14;
            plVar19 = (long *)*param_2;
            plVar22 = plVar11;
            if (cVar7 != '\0') break;
          }
          plVar11 = plVar19;
          plVar21 = (long *)*plVar22;
          plVar19 = plVar11;
          plVar14 = plVar22;
        } while (plVar21 != plVar11);
        if (plVar11 == plVar19) goto LAB_10059f020;
        FUN_100076800(&local_90,plVar11 + 3);
      }
      FUN_1000626e0(&local_88,&local_90);
      local_80 = local_88;
      if (*local_88 != -1) {
        if (*local_88 == 0) {
          QListData::detach((int)&local_80);
          iVar8 = local_80[2];
          if (iVar8 != local_80[3]) {
            piVar17 = local_88 + (long)local_88[2] * 2 + 4;
            piVar18 = local_80 + (long)iVar8 * 2 + 4;
            lVar10 = (long)local_80[3] * 8 + (long)iVar8 * -8;
            do {
              piVar3 = *(int **)piVar17;
              *(int **)piVar18 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar18 = piVar18 + 2;
              piVar17 = piVar17 + 2;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        else {
          LOCK();
          *local_88 = *local_88 + 1;
          local_31 = *local_88 != 0;
          UNLOCK();
        }
      }
      FUN_100039a80(&local_88);
      if (*(int *)(local_90 + 0x10) != -1) {
        if (*(int *)(local_90 + 0x10) != 0) {
          LOCK();
          pcVar1 = local_90 + 0x10;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          local_31 = *(int *)pcVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059f10f;
        }
        QHashData::free_helper(local_90);
      }
LAB_10059f10f:
      local_b0 = local_80;
      if (*local_80 != -1) {
        if (*local_80 == 0) {
          QListData::detach((int)&local_b0);
          iVar8 = local_b0[2];
          if (iVar8 != local_b0[3]) {
            piVar17 = local_80 + (long)local_80[2] * 2 + 4;
            piVar18 = local_b0 + (long)iVar8 * 2 + 4;
            lVar10 = (long)local_b0[3] * 8 + (long)iVar8 * -8;
            do {
              piVar3 = *(int **)piVar17;
              *(int **)piVar18 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar18 = piVar18 + 2;
              piVar17 = piVar17 + 2;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        else {
          LOCK();
          *local_80 = *local_80 + 1;
          local_31 = *local_80 != 0;
          UNLOCK();
        }
      }
      plVar11 = (long *)(local_b0 + (long)local_b0[2] * 2 + 4);
      local_a0 = (long *)(local_b0 + (long)local_b0[3] * 2 + 4);
      local_a8 = plVar11;
      if (local_b0[2] != local_b0[3]) {
        do {
          local_98 = 1;
          local_a8 = plVar11;
          (**(code **)(*param_1 + 0x60))(&local_c0,param_1,pQVar26,plVar11);
          local_c8 = 0x80000000;
          local_d0.field7 = 0;
          pQVar4 = pQVar26->field0_0x0;
          iVar8 = QString::compare_helper
                            (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                             "QSettings",0xffffffff,1);
          if (iVar8 == 0) {
            (**(code **)(*param_1 + 0x98))(&local_e0,param_1,pQVar26,plVar11);
            QVariant::operator=((QVariant *)&local_d0,&local_e0);
            QVariant::~QVariant(&local_e0);
LAB_10059f6fe:
            if (((local_c8 & 0x3fffffff) != 0) &&
               (cVar7 = QVariant::cmp((QVariant *)&local_d0), cVar7 == '\0')) {
              uVar15 = FUN_1003ae480(&local_48,pQVar26);
              pQVar16 = (QVariant *)FUN_1002edf40(uVar15,plVar11);
              QVariant::operator=(pQVar16,(QVariant *)&local_d0);
            }
          }
          else {
            pQVar4 = pQVar26->field0_0x0;
            iVar8 = QString::compare_helper
                              (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                               PTR_s_UserPreferences_102274480,0xffffffff,1);
            if (iVar8 == 0) {
              lVar10 = *plVar11;
              iVar8 = QString::compare_helper
                                (*(long *)(lVar10 + 0x10) + lVar10,*(undefined4 *)(lVar10 + 4),
                                 "UserWorkspace.UserDefaultVmFolder",0xffffffff,1);
              if (iVar8 == 0) {
                cVar7 = FUN_100d80630(1);
                if (cVar7 == '\0') {
                  FUN_100d969d0(local_120);
                  cVar7 = FUN_100d96fc0(local_120);
                  if (cVar7 == '\0') {
                    iVar8 = 0xd;
                    FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to authorize user session"
                                 );
                  }
                  else {
                    FUN_100d975a0(&local_130,local_120);
                    FUN_100d85e60(&local_148,&local_130,0);
                    QVariant::QVariant(&local_140,&local_148);
                    QVariant::operator=((QVariant *)&local_d0,&local_140);
                    QVariant::~QVariant(&local_140);
                    if (*(int *)local_148.field0_0x0 != -1) {
                      if (*(int *)local_148.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                        local_31 = *(int *)local_148.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10059f48e;
                      }
                      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
                    }
LAB_10059f48e:
                    if (*(int *)local_128 != -1) {
                      if (*(int *)local_128 != 0) {
                        LOCK();
                        *(int *)local_128 = *(int *)local_128 + -1;
                        local_31 = *(int *)local_128 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10059f4c4;
                      }
                      QArrayData::deallocate(local_128,2,8);
                    }
LAB_10059f4c4:
                    iVar8 = 0;
                    if (*(int *)local_130 != -1) {
                      if (*(int *)local_130 != 0) {
                        LOCK();
                        *(int *)local_130 = *(int *)local_130 + -1;
                        local_31 = *(int *)local_130 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_10059f523;
                      }
                      QArrayData::deallocate(local_130,2,8);
                    }
                  }
LAB_10059f523:
                  FUN_100d96c00(local_120);
                  if (iVar8 != 0) goto LAB_10059f747;
                }
                else {
                  FUN_100d898d0(&local_100);
                  local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_100;
                  if (1 < *(int *)local_100 + 1U) {
                    LOCK();
                    *(int *)local_100 = *(int *)local_100 + 1;
                    local_31 = *(int *)local_100 != 0;
                    UNLOCK();
                  }
                  QString::fromUtf8_helper((char *)&local_40,0x1e02c5e);
                  QString::append(&local_f8);
                  if (*(int *)local_40 != -1) {
                    if (*(int *)local_40 != 0) {
                      LOCK();
                      *(int *)local_40 = *(int *)local_40 + -1;
                      local_31 = *(int *)local_40 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10059f34b;
                    }
                    QArrayData::deallocate(local_40,2,8);
                  }
LAB_10059f34b:
                  QVariant::QVariant(&local_f0,&local_f8);
                  QVariant::operator=((QVariant *)&local_d0,&local_f0);
                  QVariant::~QVariant(&local_f0);
                  if (*(int *)local_f8.field0_0x0 != -1) {
                    if (*(int *)local_f8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
                      local_31 = *(int *)local_f8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10059f3a7;
                    }
                    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
                  }
LAB_10059f3a7:
                  if (*(int *)local_100 != -1) {
                    if (*(int *)local_100 != 0) {
                      LOCK();
                      *(int *)local_100 = *(int *)local_100 + -1;
                      local_31 = *(int *)local_100 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_10059f6fe;
                    }
                    QArrayData::deallocate(local_100,2,8);
                  }
                }
              }
              else {
                pcVar1 = *(code **)(*(long *)local_1c8 + 0x40);
                local_160 = (QArrayData *)*plVar11;
                if (1 < *(int *)local_160 + 1U) {
                  LOCK();
                  *(int *)local_160 = *(int *)local_160 + 1;
                  local_31 = *(int *)local_160 != 0;
                  UNLOCK();
                }
                (*pcVar1)(&local_158,local_1c8,&local_160);
                QVariant::operator=((QVariant *)&local_d0,&local_158);
                QVariant::~QVariant(&local_158);
                if (*(int *)local_160 != -1) {
                  if (*(int *)local_160 != 0) {
                    LOCK();
                    *(int *)local_160 = *(int *)local_160 + -1;
                    local_31 = *(int *)local_160 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10059f6fe;
                  }
                  QArrayData::deallocate(local_160,2,8);
                }
              }
              goto LAB_10059f6fe;
            }
            pQVar4 = pQVar26->field0_0x0;
            iVar8 = QString::compare_helper
                              (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),
                               PTR_s_DispPreferences_102274488,0xffffffff,1);
            if (iVar8 != 0) goto LAB_10059f6fe;
            lVar10 = *plVar11;
            iVar8 = QString::compare_helper
                              (*(long *)(lVar10 + 0x10) + lVar10,*(undefined4 *)(lVar10 + 4),
                               "Debug.VerboseLogWasChanged",0xffffffff,1);
            if (iVar8 != 0) {
              pcVar1 = *(code **)(*(long *)this + 0x40);
              local_178 = (QArrayData *)*plVar11;
              if (1 < *(int *)local_178 + 1U) {
                LOCK();
                *(int *)local_178 = *(int *)local_178 + 1;
                local_31 = *(int *)local_178 != 0;
                UNLOCK();
              }
              (*pcVar1)(&local_170,this,&local_178);
              QVariant::operator=((QVariant *)&local_d0,&local_170);
              QVariant::~QVariant(&local_170);
              if (*(int *)local_178 != -1) {
                if (*(int *)local_178 != 0) {
                  LOCK();
                  *(int *)local_178 = *(int *)local_178 + -1;
                  local_31 = *(int *)local_178 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10059f6fe;
                }
                QArrayData::deallocate(local_178,2,8);
              }
              goto LAB_10059f6fe;
            }
          }
LAB_10059f747:
          QVariant::~QVariant((QVariant *)&local_d0);
          QVariant::~QVariant(&local_c0);
          plVar11 = local_a8 + 1;
          local_a8 = plVar11;
        } while (plVar11 != local_a0);
      }
      local_98 = 1;
      FUN_100039a80(&local_b0);
      if (local_1c8 != (CDispUser *)0x0) {
        (**(code **)(*(long *)local_1c8 + 0x88))();
      }
      if (this != (CDispCommonPreferences *)0x0) {
        (**(code **)(*(long *)this + 0x88))(this);
      }
      FUN_100039a80(&local_80);
      pQVar26 = local_70 + 1;
      local_70 = pQVar26;
    } while (pQVar26 != local_68);
  }
  local_60 = 1;
  FUN_100039a80(&local_78);
  p_Var20 = local_48;
  puVar6 = PTR_s_DispPreferences_102274488;
  if (*(int *)(local_48 + 0x14) == 0) goto LAB_10059fb61;
  iVar8 = -1;
  if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
    sVar12 = _strlen(PTR_s_DispPreferences_102274488);
    iVar8 = (int)sVar12;
  }
  QVar13.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar6,iVar8);
  uVar2 = *(uint *)(p_Var20 + 0x20);
  p_Var27 = p_Var20;
  local_180.field0_0x0 = QVar13.field0_0x0;
  if (uVar2 != 0) {
    uVar9 = qHash(&local_180,*(uint *)(p_Var20 + 0x24));
    uVar5 = (ulong)uVar9 % (ulong)uVar2;
    p_Var23 = *(_func_void_Node_ptr **)(*(long *)(p_Var20 + 8) + uVar5 * 8);
    if (p_Var23 != p_Var20) {
      p_Var28 = (_func_void_Node_ptr *)(*(long *)(p_Var20 + 8) + uVar5 * 8);
      do {
        p_Var24 = p_Var23;
        p_Var27 = p_Var20;
        if (*(uint *)(p_Var23 + 8) == uVar9) {
          cVar7 = operator==(&local_180,(QString *)(p_Var23 + 0x10));
          p_Var20 = *(_func_void_Node_ptr **)p_Var28;
          p_Var24 = p_Var20;
          p_Var27 = local_48;
          QVar13.field0_0x0 = local_180.field0_0x0;
          if (cVar7 != '\0') break;
        }
        p_Var20 = p_Var27;
        p_Var23 = *(_func_void_Node_ptr **)p_Var24;
        p_Var27 = p_Var20;
        QVar13.field0_0x0 = local_180.field0_0x0;
        p_Var28 = p_Var24;
      } while (p_Var23 != p_Var20);
    }
  }
  if (*(int *)QVar13.field0_0x0 != -1) {
    if (*(int *)QVar13.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar13.field0_0x0 = *(int *)QVar13.field0_0x0 + -1;
      local_31 = *(int *)QVar13.field0_0x0 != 0;
      UNLOCK();
      QVar13.field0_0x0 = local_180.field0_0x0;
      if ((bool)local_31) goto LAB_10059f8e7;
    }
    QArrayData::deallocate((QArrayData *)QVar13.field0_0x0,2,8);
  }
LAB_10059f8e7:
  puVar6 = PTR_s_DispPreferences_102274488;
  if (p_Var20 != p_Var27) {
    iVar8 = -1;
    if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
      sVar12 = _strlen(PTR_s_DispPreferences_102274488);
      iVar8 = (int)sVar12;
    }
    local_188 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar8);
    plVar14 = (long *)FUN_1003ae480(&local_48,&local_188);
    QVar13.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("Debug.VerboseLogEnabled",0x17);
    plVar11 = (long *)*plVar14;
    uVar2 = *(uint *)(plVar11 + 4);
    plVar21 = plVar11;
    local_190.field0_0x0 = QVar13.field0_0x0;
    if (uVar2 != 0) {
      uVar9 = qHash(&local_190,*(uint *)((long)plVar11 + 0x24));
      uVar5 = (ulong)uVar9 % (ulong)uVar2;
      plVar19 = *(long **)(plVar11[1] + uVar5 * 8);
      if (plVar19 != plVar11) {
        plVar22 = (long *)(plVar11[1] + uVar5 * 8);
        do {
          plVar25 = plVar19;
          plVar21 = plVar11;
          if (*(uint *)(plVar19 + 1) == uVar9) {
            cVar7 = operator==(&local_190,(QString *)(plVar19 + 2));
            plVar25 = (long *)*plVar22;
            QVar13.field0_0x0 = local_190.field0_0x0;
            plVar11 = plVar25;
            plVar21 = (long *)*plVar14;
            if (cVar7 != '\0') break;
          }
          plVar11 = plVar21;
          plVar19 = (long *)*plVar25;
          QVar13.field0_0x0 = local_190.field0_0x0;
          plVar22 = plVar25;
          plVar21 = plVar11;
        } while (plVar19 != plVar11);
      }
    }
    if (*(int *)QVar13.field0_0x0 != -1) {
      if (*(int *)QVar13.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar13.field0_0x0 = *(int *)QVar13.field0_0x0 + -1;
        local_31 = *(int *)QVar13.field0_0x0 != 0;
        UNLOCK();
        QVar13.field0_0x0 = local_190.field0_0x0;
        if ((bool)local_31) goto LAB_10059fa12;
      }
      QArrayData::deallocate((QArrayData *)QVar13.field0_0x0,2,8);
    }
LAB_10059fa12:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10059fa48;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_10059fa48:
    puVar6 = PTR_s_DispPreferences_102274488;
    if (plVar11 != plVar21) {
      iVar8 = -1;
      if (PTR_s_DispPreferences_102274488 != (undefined *)0x0) {
        sVar12 = _strlen(PTR_s_DispPreferences_102274488);
        iVar8 = (int)sVar12;
      }
      local_198 = (QArrayData *)QString::fromAscii_helper(puVar6,iVar8);
      uVar15 = FUN_1003ae480(&local_48,&local_198);
      local_1a0 = (QArrayData *)QString::fromAscii_helper("Debug.VerboseLogWasChanged",0x1a);
      pQVar16 = (QVariant *)FUN_1002edf40(uVar15,&local_1a0);
      QVariant::QVariant(&local_1b0,true);
      QVariant::operator=(pQVar16,&local_1b0);
      QVariant::~QVariant(&local_1b0);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059fb17;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_10059fb17:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059fb4d;
        }
        QArrayData::deallocate(local_198,2,8);
      }
    }
  }
LAB_10059fb4d:
  (**(code **)(*param_1 + 0x78))(param_1,&local_48);
LAB_10059fb61:
  FUN_100039a80(&local_50);
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_31 = 0;
    }
    QHashData::free_helper(local_48);
  }
  return;
}

