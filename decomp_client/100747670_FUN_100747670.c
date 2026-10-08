
void FUN_100747670(long param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  _func_void_Node_ptr_void_ptr *p_Var3;
  int *piVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  ulong uVar6;
  QString *pQVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  undefined8 uVar14;
  _func_void_Node_ptr_void_ptr *p_Var15;
  int *piVar16;
  int *piVar17;
  _func_void_Node_ptr_void_ptr *p_Var18;
  undefined8 in_R9;
  _func_void_Node_ptr_void_ptr *p_Var19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 local_188 [8];
  long local_180;
  undefined1 local_148 [8];
  int *local_140;
  int *piStack_138;
  int *local_130;
  int *piStack_128;
  int *local_120;
  int *piStack_118;
  undefined4 local_110;
  int *local_108;
  int *local_100;
  QString *local_f8;
  QString *local_f0;
  int local_e8;
  undefined1 local_e0 [64];
  int *local_a0;
  int *local_98;
  int *local_90;
  undefined4 local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  undefined4 local_58;
  int *local_50;
  int *local_48;
  _func_void_Node_ptr_void_ptr *local_40;
  undefined1 local_31;
  
  QObject::sender();
  lVar12 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10220a8c0);
  p_Var3 = *(_func_void_Node_ptr_void_ptr **)(lVar12 + 0x18);
  if (1 < *(int *)(p_Var3 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var3 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_31 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  p_Var13 = p_Var3;
  if ((((byte)p_Var3[0x28] & 1) == 0) && (1 < *(uint *)(p_Var3 + 0x10))) {
    local_40 = p_Var3;
    p_Var13 = (_func_void_Node_ptr_void_ptr *)
              QHashData::detach_helper(p_Var3,FUN_1002dc8c0,0x2dc9b0,0x58);
    if (*(int *)(p_Var3 + 0x10) != -1) {
      if (*(int *)(p_Var3 + 0x10) != 0) {
        LOCK();
        pcVar1 = p_Var3 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10074771e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var3);
    }
  }
LAB_10074771e:
  local_40 = p_Var13;
  FUN_1007484c0(&local_50,&local_40);
  local_48 = local_50;
  if (*local_50 != -1) {
    if (*local_50 == 0) {
      QListData::detach((int)&local_48);
      iVar9 = local_48[2];
      if (iVar9 != local_48[3]) {
        local_50 = local_50 + (long)local_50[2] * 2 + 4;
        piVar16 = local_48 + (long)iVar9 * 2 + 4;
        lVar12 = (long)local_48[3] * 8 + (long)iVar9 * -8;
        do {
          piVar17 = *(int **)local_50;
          *(int **)piVar16 = piVar17;
          if (1 < *piVar17 + 1U) {
            LOCK();
            *piVar17 = *piVar17 + 1;
            local_31 = *piVar17 != 0;
            UNLOCK();
          }
          piVar16 = piVar16 + 2;
          local_50 = local_50 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
      LOCK();
      *local_50 = *local_50 + 1;
      local_31 = *local_50 != 0;
      UNLOCK();
    }
  }
  FUN_100039a80(&local_50);
  if (param_2 < 0) {
    local_70 = local_48;
    if (*local_48 != -1) {
      if (*local_48 == 0) {
        QListData::detach((int)&local_70);
        iVar9 = local_70[2];
        if (iVar9 != local_70[3]) {
          piVar16 = local_48 + (long)local_48[2] * 2 + 4;
          piVar17 = local_70 + (long)iVar9 * 2 + 4;
          lVar12 = (long)local_70[3] * 8 + (long)iVar9 * -8;
          do {
            piVar4 = *(int **)piVar16;
            *(int **)piVar17 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            piVar17 = piVar17 + 2;
            piVar16 = piVar16 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_48 = *local_48 + 1;
        local_31 = *local_48 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)local_70[2] * 2 + 4;
    local_60 = local_70 + (long)local_70[3] * 2 + 4;
    if (local_70[2] != local_70[3]) {
      do {
        local_58 = 1;
        uVar14 = FUN_100747530(param_1);
        FUN_100746a70(uVar14,3);
        local_68 = local_68 + 2;
      } while (local_68 != local_60);
    }
    local_58 = 1;
    FUN_100039a80(&local_70);
  }
  else {
    FUN_100748580(&local_80,param_1 + 0x18);
    local_78 = local_80;
    if (*local_80 != -1) {
      if (*local_80 == 0) {
        QListData::detach((int)&local_78);
        iVar9 = local_78[2];
        if (iVar9 != local_78[3]) {
          local_80 = local_80 + (long)local_80[2] * 2 + 4;
          piVar16 = local_78 + (long)iVar9 * 2 + 4;
          lVar12 = (long)local_78[3] * 8 + (long)iVar9 * -8;
          do {
            piVar17 = *(int **)local_80;
            *(int **)piVar16 = piVar17;
            if (1 < *piVar17 + 1U) {
              LOCK();
              *piVar17 = *piVar17 + 1;
              local_31 = *piVar17 != 0;
              UNLOCK();
            }
            piVar16 = piVar16 + 2;
            local_80 = local_80 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_80 = *local_80 + 1;
        local_31 = *local_80 != 0;
        UNLOCK();
      }
    }
    FUN_100039a80(&local_80);
    local_a0 = local_78;
    if (*local_78 != -1) {
      if (*local_78 == 0) {
        QListData::detach((int)&local_a0);
        iVar9 = local_a0[2];
        if (iVar9 != local_a0[3]) {
          piVar16 = local_78 + (long)local_78[2] * 2 + 4;
          piVar17 = local_a0 + (long)iVar9 * 2 + 4;
          lVar12 = (long)local_a0[3] * 8 + (long)iVar9 * -8;
          do {
            piVar4 = *(int **)piVar16;
            *(int **)piVar17 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            piVar17 = piVar17 + 2;
            piVar16 = piVar16 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_78 = *local_78 + 1;
        local_31 = *local_78 != 0;
        UNLOCK();
      }
    }
    piVar16 = local_a0 + (long)local_a0[2] * 2 + 4;
    local_90 = local_a0 + (long)local_a0[3] * 2 + 4;
    local_98 = piVar16;
    if (local_a0[2] != local_a0[3]) {
      do {
        local_88 = 1;
        local_98 = piVar16;
        cVar8 = QtPrivate::QStringList_contains(&local_48,piVar16,1);
        if (cVar8 == '\0') {
          uVar14 = FUN_100747530(param_1,piVar16);
          iVar9 = FUN_100746a60(uVar14);
          if (iVar9 == 1) {
            FUN_1007469f0(uVar14);
          }
          FUN_100746ae0(local_e0,uVar14);
          local_e0[0] = 1;
          FUN_100746bb0(uVar14,local_e0);
          FUN_100746a70(uVar14,3);
          FUN_10012ac30(local_e0);
        }
        piVar16 = local_98 + 2;
        local_98 = piVar16;
      } while (piVar16 != local_90);
    }
    local_88 = 1;
    FUN_100039a80(&local_a0);
    FUN_1007484c0(&local_108,&local_40);
    local_100 = local_108;
    if (*local_108 != -1) {
      if (*local_108 == 0) {
        QListData::detach((int)&local_100);
        iVar9 = local_100[2];
        if (iVar9 != local_100[3]) {
          local_108 = local_108 + (long)local_108[2] * 2 + 4;
          piVar16 = local_100 + (long)iVar9 * 2 + 4;
          lVar12 = (long)local_100[3] * 8 + (long)iVar9 * -8;
          do {
            piVar17 = *(int **)local_108;
            *(int **)piVar16 = piVar17;
            if (1 < *piVar17 + 1U) {
              LOCK();
              *piVar17 = *piVar17 + 1;
              local_31 = *piVar17 != 0;
              UNLOCK();
            }
            piVar16 = piVar16 + 2;
            local_108 = local_108 + 2;
            lVar12 = lVar12 + -8;
          } while (lVar12 != 0);
        }
      }
      else {
        LOCK();
        *local_108 = *local_108 + 1;
        local_31 = *local_108 != 0;
        UNLOCK();
      }
    }
    local_f8 = (QString *)(local_100 + (long)local_100[2] * 2 + 4);
    local_f0 = (QString *)(local_100 + (long)local_100[3] * 2 + 4);
    local_e8 = 1;
    FUN_100039a80(&local_108);
    if ((local_e8 != 0) && (local_f8 != local_f0)) {
      auVar21._8_4_ = (int)PTR_shared_null_1021e1288;
      auVar21._0_8_ = PTR_shared_null_1021e1288;
      auVar21._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      do {
        pQVar7 = local_f8;
        pQVar5 = local_f8->field0_0x0;
        iVar9 = QString::compare_helper
                          (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                           "desktop.mac",0xffffffff,1,in_R9,auVar21);
        if (iVar9 != 0) {
          cVar8 = FUN_100d80630(1);
          if (cVar8 == '\0') {
LAB_100747c40:
            uVar14 = FUN_100747530(param_1,pQVar7);
            p_Var3 = local_40;
            if ((*(int *)(local_40 + 0x14) == 0) || (uVar2 = *(uint *)(local_40 + 0x20), uVar2 == 0)
               ) {
LAB_100747dd0:
              local_148[0] = (code)0x1;
              local_140 = auVar21._0_8_;
              piStack_138 = auVar21._8_8_;
              local_110 = 0;
              local_130 = local_140;
              piStack_128 = piStack_138;
              local_120 = local_140;
              piStack_118 = piStack_138;
            }
            else {
              uVar10 = qHash(pQVar7,*(uint *)(local_40 + 0x24));
              uVar6 = (ulong)uVar10 % (ulong)uVar2;
              p_Var13 = *(_func_void_Node_ptr_void_ptr **)(*(long *)(p_Var3 + 8) + uVar6 * 8);
              if (p_Var13 == p_Var3) goto LAB_100747dd0;
              p_Var19 = (_func_void_Node_ptr_void_ptr *)(*(long *)(p_Var3 + 8) + uVar6 * 8);
              do {
                p_Var18 = p_Var13;
                if (*(uint *)(p_Var13 + 8) == uVar10) {
                  cVar8 = operator==(pQVar7,(QString *)(p_Var13 + 0x10));
                  p_Var18 = *(_func_void_Node_ptr_void_ptr **)p_Var19;
                  p_Var15 = p_Var18;
                  if (cVar8 != '\0') break;
                }
                p_Var13 = *(_func_void_Node_ptr_void_ptr **)p_Var18;
                p_Var15 = p_Var3;
                p_Var19 = p_Var18;
              } while (p_Var13 != p_Var3);
              if (p_Var15 == p_Var3) goto LAB_100747dd0;
              local_140 = *(int **)(p_Var15 + 0x20);
              if (1 < *local_140 + 1U) {
                LOCK();
                *local_140 = *local_140 + 1;
                local_31 = *local_140 != 0;
                UNLOCK();
              }
              piStack_138 = *(int **)(p_Var15 + 0x28);
              if (1 < *piStack_138 + 1U) {
                LOCK();
                *piStack_138 = *piStack_138 + 1;
                local_31 = *piStack_138 != 0;
                UNLOCK();
              }
              local_130 = *(int **)(p_Var15 + 0x30);
              if (1 < *local_130 + 1U) {
                LOCK();
                *local_130 = *local_130 + 1;
                local_31 = *local_130 != 0;
                UNLOCK();
              }
              piStack_128 = *(int **)(p_Var15 + 0x38);
              if (1 < *piStack_128 + 1U) {
                LOCK();
                *piStack_128 = *piStack_128 + 1;
                local_31 = *piStack_128 != 0;
                UNLOCK();
              }
              local_120 = *(int **)(p_Var15 + 0x40);
              if (1 < *local_120 + 1U) {
                LOCK();
                *local_120 = *local_120 + 1;
                local_31 = *local_120 != 0;
                UNLOCK();
              }
              local_148[0] = p_Var15[0x18];
              piStack_118 = *(int **)(p_Var15 + 0x48);
              if (1 < *piStack_118 + 1U) {
                LOCK();
                *piStack_118 = *piStack_118 + 1;
                local_31 = *piStack_118 != 0;
                UNLOCK();
              }
              local_110 = *(undefined4 *)(p_Var15 + 0x50);
            }
            FUN_100746bb0(uVar14,local_148);
            FUN_10012ac30(local_148);
            FUN_100746ae0(local_188,uVar14);
            bVar20 = true;
            if (*(int *)(local_180 + 4) != 0) {
              pQVar5 = pQVar7->field0_0x0;
              iVar9 = QString::compare_helper
                                (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                                 "modern.ie",0xffffffff,1);
              if (iVar9 == 0) {
                bVar20 = false;
              }
              else {
                pQVar5 = pQVar7->field0_0x0;
                iVar9 = QString::compare_helper
                                  (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                                   "trial.windows",0xffffffff,1);
                if (iVar9 == 0) {
                  bVar20 = false;
                }
                else {
                  pQVar5 = pQVar7->field0_0x0;
                  iVar9 = QString::compare_helper
                                    (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                                     "win7.purchased",0xffffffff,1);
                  if (iVar9 == 0) {
                    bVar20 = false;
                  }
                  else {
                    pQVar5 = pQVar7->field0_0x0;
                    iVar9 = QString::compare_helper
                                      (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4)
                                       ,"win10.upgrade.advisor",0xffffffff,1);
                    if (iVar9 == 0) {
                      bVar20 = false;
                    }
                    else {
                      pQVar5 = pQVar7->field0_0x0;
                      iVar9 = QString::compare_helper
                                        (pQVar5 + *(long *)(pQVar5 + 0x10),
                                         *(undefined4 *)(pQVar5 + 4),"Windows10Development",
                                         0xffffffff,1);
                      if (iVar9 == 0) {
                        bVar20 = false;
                      }
                      else {
                        pQVar5 = pQVar7->field0_0x0;
                        iVar9 = QString::compare_helper
                                          (pQVar5 + *(long *)(pQVar5 + 0x10),
                                           *(undefined4 *)(pQVar5 + 4),"updates",0xffffffff,1);
                        bVar20 = iVar9 != 0;
                      }
                    }
                  }
                }
              }
              bVar20 = (bool)(bVar20 ^ 1);
            }
            FUN_10012ac30(local_188);
            if (bVar20) {
              FUN_100746a70(uVar14,2);
            }
            else {
              iVar9 = FUN_100746a60(uVar14);
              if (iVar9 == 0) {
                FUN_1007469d0(uVar14,0);
              }
            }
          }
          else {
            pQVar5 = pQVar7->field0_0x0;
            iVar9 = QString::compare_helper
                              (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),"atifm"
                               ,0xffffffff,1);
            if (iVar9 != 0) {
              pQVar5 = pQVar7->field0_0x0;
              iVar9 = QString::compare_helper
                                (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                                 "version",0xffffffff,1);
              if (iVar9 != 0) {
                pQVar5 = pQVar7->field0_0x0;
                iVar9 = QString::compare_helper
                                  (pQVar5 + *(long *)(pQVar5 + 0x10),*(undefined4 *)(pQVar5 + 4),
                                   "Windows10Development",0xffffffff,1);
                if (iVar9 != 0) goto LAB_100747c40;
              }
            }
          }
        }
        local_f8 = local_f8 + 1;
        local_e8 = 1;
      } while (local_f8 != local_f0);
    }
    FUN_100039a80(&local_100);
    uVar11 = FUN_1002dabc0();
    *(undefined4 *)(param_1 + 0x20) = uVar11;
    uVar11 = FUN_1002dab50();
    *(undefined4 *)(param_1 + 0x24) = uVar11;
    FUN_100039a80(&local_78);
  }
  FUN_100039a80(&local_48);
  if (*(int *)(local_40 + 0x10) != -1) {
    if (*(int *)(local_40 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_40);
  }
  return;
}

