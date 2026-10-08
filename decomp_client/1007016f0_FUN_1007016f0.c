
void FUN_1007016f0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined *puVar6;
  Data *pDVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  _func_void_Node_ptr *p_Var11;
  int *piVar12;
  int *piVar13;
  QKeySequence *pQVar14;
  _func_void_Node_ptr *p_Var15;
  undefined4 uVar16;
  _func_void_Node_ptr *p_Var17;
  _func_void_Node_ptr *p_Var18;
  QString *pQVar19;
  _func_void_Node_ptr *p_Var20;
  long lVar21;
  long lVar22;
  QArrayData *local_148;
  QArrayData *local_140;
  int *local_138;
  QString *local_130;
  QString *local_128;
  undefined4 local_120;
  int *local_118;
  Data *local_110;
  Data *local_108;
  undefined4 local_100;
  int *local_f8;
  QString *local_f0;
  QString *local_e8;
  undefined4 local_e0;
  int *local_d8;
  QArrayData *local_d0;
  Data *local_c8;
  QString local_c0;
  int local_b4;
  Data *local_b0;
  _func_void_Node_ptr *local_a8;
  _func_void_Node_ptr *local_a0;
  int local_94 [3];
  QDataStream local_88 [24];
  undefined4 local_70;
  QString local_68;
  long local_60 [2];
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  FUN_1006fbcc0();
  lVar22 = param_1 + 0x30;
  local_50 = (QArrayData *)QString::fromAscii_helper("APPLICATION SHORTCUTS DEFAULTS MAP",0x22);
  FUN_1007026b0(&local_48,lVar22,&local_50,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100701767;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100701767:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100701797;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100701797:
  FUN_100703f30(&local_68);
  QFile::QFile((QFile *)local_60,&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007017df;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007017df:
  cVar8 = QFile::open(local_60,1);
  if (cVar8 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Can\'t open application shortcuts file for read.");
    goto LAB_1007019bf;
  }
  QDataStream::QDataStream(local_88,(QIODevice *)local_60);
  local_70 = 0xc;
  QDataStream::operator>>(local_88,local_94 + 2);
  if (local_94[2] == 0x30230) {
    local_94[1] = 0;
    QDataStream::operator>>(local_88,local_94 + 1);
    QDataStream::operator>>(local_88,local_94);
    *(int *)(param_1 + 0x18) = local_94[0];
    puVar6 = PTR_shared_null_1021e15d0;
    local_a0 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    FUN_100706010(local_88,&local_a0);
    local_a8 = (_func_void_Node_ptr *)puVar6;
    FUN_100706270(local_88,&local_a8);
    local_b0 = (Data *)PTR_shared_null_1021e15e8;
    FUN_1007063b0(local_88,&local_b0);
    QDataStream::operator>>(local_88,&local_b4);
    (**(code **)(local_60[0] + 0x70))(local_60);
    FUN_1006946e0(&local_c0,100);
    p_Var11 = local_a0;
    uVar2 = *(uint *)(local_a0 + 0x20);
    p_Var18 = p_Var11;
    if (uVar2 != 0) {
      uVar9 = qHash(&local_c0,*(uint *)(local_a0 + 0x24));
      uVar5 = (ulong)uVar9 % (ulong)uVar2;
      p_Var15 = *(_func_void_Node_ptr **)(*(long *)(p_Var11 + 8) + uVar5 * 8);
      if (p_Var15 != p_Var11) {
        p_Var20 = (_func_void_Node_ptr *)(*(long *)(p_Var11 + 8) + uVar5 * 8);
        do {
          p_Var17 = p_Var15;
          p_Var18 = p_Var11;
          if (*(uint *)(p_Var15 + 8) == uVar9) {
            cVar8 = operator==(&local_c0,(QString *)(p_Var15 + 0x10));
            p_Var11 = *(_func_void_Node_ptr **)p_Var20;
            p_Var17 = p_Var11;
            p_Var18 = local_a0;
            if (cVar8 != '\0') break;
          }
          p_Var11 = p_Var18;
          p_Var15 = *(_func_void_Node_ptr **)p_Var17;
          p_Var18 = p_Var11;
          p_Var20 = p_Var17;
        } while (p_Var15 != p_Var11);
      }
    }
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100701a26;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_100701a26:
    if (p_Var11 != p_Var18) {
      FUN_1006946e0(&local_d0,100);
      FUN_100706570(&local_c8,&local_a0,&local_d0);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100701aca;
        }
        iVar3 = *(int *)(local_c8 + 0xc);
        if (iVar3 != *(int *)(local_c8 + 8)) {
          lVar21 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar3 * -8;
          pQVar14 = (QKeySequence *)(local_c8 + (long)iVar3 * 8 + 8);
          do {
            QKeySequence::~QKeySequence(pQVar14);
            pQVar14 = pQVar14 + -8;
            lVar21 = lVar21 + 8;
          } while (lVar21 != 0);
        }
        QListData::dispose(local_c8);
      }
LAB_100701aca:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100701b00;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
    }
LAB_100701b00:
    FUN_1007068a0(&local_d8,&local_a0);
    local_f8 = local_d8;
    if (*local_d8 != -1) {
      if (*local_d8 == 0) {
        QListData::detach((int)&local_f8);
        iVar3 = local_f8[2];
        if (iVar3 != local_f8[3]) {
          piVar12 = local_d8 + (long)local_d8[2] * 2 + 4;
          piVar13 = local_f8 + (long)iVar3 * 2 + 4;
          lVar21 = (long)local_f8[3] * 8 + (long)iVar3 * -8;
          do {
            piVar4 = *(int **)piVar12;
            *(int **)piVar13 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar21 = lVar21 + -8;
          } while (lVar21 != 0);
        }
      }
      else {
        LOCK();
        *local_d8 = *local_d8 + 1;
        local_31 = *local_d8 != 0;
        UNLOCK();
      }
    }
    pQVar19 = (QString *)(local_f8 + (long)local_f8[2] * 2 + 4);
    local_e8 = (QString *)(local_f8 + (long)local_f8[3] * 2 + 4);
    local_f0 = pQVar19;
    if (local_f8[2] != local_f8[3]) {
      do {
        local_e0 = 1;
        local_f0 = pQVar19;
        lVar21 = FUN_100706960(lVar22,pQVar19);
        p_Var11 = local_a0;
        if ((*(int *)(local_a0 + 0x14) == 0) || (uVar2 = *(uint *)(local_a0 + 0x20), uVar2 == 0)) {
LAB_100701c90:
          local_110 = (Data *)PTR_shared_null_1021e15e8;
        }
        else {
          uVar9 = qHash(pQVar19,*(uint *)(local_a0 + 0x24));
          uVar5 = (ulong)uVar9 % (ulong)uVar2;
          p_Var18 = *(_func_void_Node_ptr **)(*(long *)(p_Var11 + 8) + uVar5 * 8);
          if (p_Var18 == p_Var11) goto LAB_100701c90;
          p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var11 + 8) + uVar5 * 8);
          do {
            p_Var20 = p_Var11;
            if (*(uint *)(p_Var18 + 8) == uVar9) {
              cVar8 = operator==(pQVar19,(QString *)(p_Var18 + 0x10));
              p_Var11 = *(_func_void_Node_ptr **)p_Var15;
              p_Var18 = p_Var11;
              p_Var20 = local_a0;
              if (cVar8 != '\0') break;
            }
            p_Var11 = p_Var20;
            p_Var15 = p_Var18;
            p_Var18 = *(_func_void_Node_ptr **)p_Var15;
            p_Var20 = p_Var11;
          } while (p_Var18 != p_Var11);
          if (p_Var11 == p_Var20) goto LAB_100701c90;
          FUN_1005607f0(&local_110,p_Var11 + 0x18);
        }
        FUN_100708220(&local_108,&local_110,2);
        FUN_100707070(lVar21,&local_108);
        pDVar7 = local_108;
        *(undefined4 *)(lVar21 + 8) = local_100;
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100701d3a;
          }
          iVar3 = *(int *)(local_108 + 0xc);
          if (iVar3 != *(int *)(local_108 + 8)) {
            lVar21 = (long)*(int *)(local_108 + 8) * 8 + (long)iVar3 * -8;
            pQVar14 = (QKeySequence *)(local_108 + (long)iVar3 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar14);
              pQVar14 = pQVar14 + -8;
              lVar21 = lVar21 + 8;
            } while (lVar21 != 0);
          }
          QListData::dispose(pDVar7);
        }
LAB_100701d3a:
        pDVar7 = local_110;
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100701daa;
          }
          iVar3 = *(int *)(local_110 + 0xc);
          if (iVar3 != *(int *)(local_110 + 8)) {
            lVar21 = (long)*(int *)(local_110 + 8) * 8 + (long)iVar3 * -8;
            pQVar14 = (QKeySequence *)(local_110 + (long)iVar3 * 8 + 8);
            do {
              QKeySequence::~QKeySequence(pQVar14);
              pQVar14 = pQVar14 + -8;
              lVar21 = lVar21 + 8;
            } while (lVar21 != 0);
          }
          QListData::dispose(pDVar7);
        }
LAB_100701daa:
        pQVar19 = local_f0 + 1;
        local_f0 = pQVar19;
      } while (pQVar19 != local_e8);
    }
    local_e0 = 1;
    FUN_100036370(&local_f8);
    FUN_100706d20(&local_118,lVar22);
    if (local_d8 != local_118) {
      local_40 = local_118;
      if (*local_118 != -1) {
        if (*local_118 == 0) {
          QListData::detach((int)&local_40);
          iVar3 = local_40[2];
          if (iVar3 != local_40[3]) {
            local_118 = local_118 + (long)local_118[2] * 2 + 4;
            piVar12 = local_40 + (long)iVar3 * 2 + 4;
            lVar21 = (long)local_40[3] * 8 + (long)iVar3 * -8;
            do {
              piVar13 = *(int **)local_118;
              *(int **)piVar12 = piVar13;
              if (1 < *piVar13 + 1U) {
                LOCK();
                *piVar13 = *piVar13 + 1;
                local_31 = *piVar13 != 0;
                UNLOCK();
              }
              piVar12 = piVar12 + 2;
              local_118 = local_118 + 2;
              lVar21 = lVar21 + -8;
            } while (lVar21 != 0);
          }
        }
        else {
          LOCK();
          *local_118 = *local_118 + 1;
          local_31 = *local_118 != 0;
          UNLOCK();
        }
      }
      piVar12 = local_40;
      local_40 = local_d8;
      local_d8 = piVar12;
      FUN_100036370(&local_40);
    }
    FUN_100036370(&local_118);
    local_138 = local_d8;
    if (*local_d8 != -1) {
      if (*local_d8 == 0) {
        QListData::detach((int)&local_138);
        iVar3 = local_138[2];
        if (iVar3 != local_138[3]) {
          piVar12 = local_d8 + (long)local_d8[2] * 2 + 4;
          piVar13 = local_138 + (long)iVar3 * 2 + 4;
          lVar21 = (long)local_138[3] * 8 + (long)iVar3 * -8;
          do {
            piVar4 = *(int **)piVar12;
            *(int **)piVar13 = piVar4;
            if (1 < *piVar4 + 1U) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              local_31 = *piVar4 != 0;
              UNLOCK();
            }
            piVar13 = piVar13 + 2;
            piVar12 = piVar12 + 2;
            lVar21 = lVar21 + -8;
          } while (lVar21 != 0);
        }
      }
      else {
        LOCK();
        *local_d8 = *local_d8 + 1;
        local_31 = *local_d8 != 0;
        UNLOCK();
      }
    }
    pQVar19 = (QString *)(local_138 + (long)local_138[2] * 2 + 4);
    local_128 = (QString *)(local_138 + (long)local_138[3] * 2 + 4);
    local_130 = pQVar19;
    if (local_138[2] != local_138[3]) {
      do {
        p_Var11 = local_a8;
        local_120 = 1;
        uVar2 = *(uint *)(local_a8 + 0x20);
        local_130 = pQVar19;
        if (uVar2 != 0) {
          uVar9 = qHash(pQVar19,*(uint *)(local_a8 + 0x24));
          uVar5 = (ulong)uVar9 % (ulong)uVar2;
          p_Var18 = *(_func_void_Node_ptr **)(*(long *)(p_Var11 + 8) + uVar5 * 8);
          if (p_Var18 != p_Var11) {
            p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var11 + 8) + uVar5 * 8);
            do {
              p_Var20 = p_Var11;
              if (*(uint *)(p_Var18 + 8) == uVar9) {
                cVar8 = operator==(pQVar19,(QString *)(p_Var18 + 0x10));
                p_Var11 = *(_func_void_Node_ptr **)p_Var15;
                p_Var18 = p_Var11;
                p_Var20 = local_a8;
                if (cVar8 != '\0') break;
              }
              p_Var11 = p_Var20;
              p_Var15 = p_Var18;
              p_Var18 = *(_func_void_Node_ptr **)p_Var15;
              p_Var20 = p_Var11;
            } while (p_Var18 != p_Var11);
            if (p_Var11 != p_Var20) {
              uVar10 = FUN_100706960(lVar22,pQVar19);
              p_Var11 = local_a8;
              uVar16 = 0;
              if ((*(int *)(local_a8 + 0x14) != 0) &&
                 (uVar2 = *(uint *)(local_a8 + 0x20), uVar16 = 0, uVar2 != 0)) {
                uVar9 = qHash(pQVar19,*(uint *)(local_a8 + 0x24));
                uVar5 = (ulong)uVar9 % (ulong)uVar2;
                p_Var18 = *(_func_void_Node_ptr **)(*(long *)(p_Var11 + 8) + uVar5 * 8);
                if (p_Var18 == p_Var11) {
                  uVar16 = 0;
                }
                else {
                  p_Var15 = (_func_void_Node_ptr *)(*(long *)(p_Var11 + 8) + uVar5 * 8);
                  do {
                    p_Var20 = p_Var11;
                    if (*(uint *)(p_Var18 + 8) == uVar9) {
                      cVar8 = operator==(pQVar19,(QString *)(p_Var18 + 0x10));
                      p_Var11 = *(_func_void_Node_ptr **)p_Var15;
                      p_Var18 = p_Var11;
                      p_Var20 = local_a8;
                      if (cVar8 != '\0') break;
                    }
                    p_Var11 = p_Var20;
                    p_Var15 = p_Var18;
                    p_Var18 = *(_func_void_Node_ptr **)p_Var15;
                    p_Var20 = p_Var11;
                  } while (p_Var18 != p_Var11);
                  uVar16 = 0;
                  if (p_Var11 != p_Var20) {
                    uVar16 = *(undefined4 *)(p_Var11 + 0x18);
                  }
                }
              }
              FUN_100708310(uVar10,uVar16);
            }
          }
        }
        pQVar19 = local_130 + 1;
        local_130 = pQVar19;
      } while (pQVar19 != local_128);
    }
    local_120 = 1;
    FUN_100036370(&local_138);
    if (*(int *)(local_b0 + 0xc) != *(int *)(local_b0 + 8)) {
      FUN_100708260(param_1 + 0x20,&local_b0);
      FUN_100708310(param_1 + 0x20,local_b4);
    }
    local_148 = (QArrayData *)QString::fromAscii_helper("APPLICATION SHORTCUTS WORKING MAP",0x21);
    FUN_1007026b0(&local_140,lVar22,&local_148,0);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_31 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100702202;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_100702202:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_31 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100702238;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_100702238:
    FUN_100036370(&local_d8);
    pDVar7 = local_b0;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007022aa;
      }
      iVar3 = *(int *)(local_b0 + 0xc);
      if (iVar3 != *(int *)(local_b0 + 8)) {
        lVar22 = (long)*(int *)(local_b0 + 8) * 8 + (long)iVar3 * -8;
        pQVar14 = (QKeySequence *)(local_b0 + (long)iVar3 * 8 + 8);
        do {
          QKeySequence::~QKeySequence(pQVar14);
          pQVar14 = pQVar14 + -8;
          lVar22 = lVar22 + 8;
        } while (lVar22 != 0);
      }
      QListData::dispose(pDVar7);
    }
LAB_1007022aa:
    if (*(int *)(local_a8 + 0x10) != -1) {
      if (*(int *)(local_a8 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_a8 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007022df;
      }
      QHashData::free_helper(local_a8);
    }
LAB_1007022df:
    if (*(int *)(local_a0 + 0x10) != -1) {
      if (*(int *)(local_a0 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_a0 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007019b6;
      }
      QHashData::free_helper(local_a0);
    }
  }
  else {
    FUN_100df99c0("","prl_client_app",0,"Invalid application shortcuts file format.");
  }
LAB_1007019b6:
  QDataStream::~QDataStream(local_88);
LAB_1007019bf:
  QFile::~QFile((QFile *)local_60);
  return;
}

