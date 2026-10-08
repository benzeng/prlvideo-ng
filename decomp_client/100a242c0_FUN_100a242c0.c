
void FUN_100a242c0(long param_1,char *param_2)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  QArrayData *pQVar4;
  long ******pppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  bool bVar18;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  undefined1 local_260 [8];
  void *local_258;
  void *local_250;
  string local_238 [40];
  QArrayData *local_210;
  QString local_208;
  int *local_200;
  int *local_1f8;
  int *local_1f0;
  uint local_1e8;
  QArrayData *local_1e0;
  undefined1 local_1d8 [8];
  void *local_1d0;
  void *local_1c8;
  string local_1b0 [40];
  void *local_188;
  void *local_180;
  QArrayData *local_170;
  QArrayData *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  uint local_148;
  QArrayData *local_140;
  int *local_138;
  int *local_130;
  int *local_128;
  uint local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  long local_108;
  long *local_100;
  long local_f8;
  QArrayData *local_f0;
  long local_e8;
  long *local_e0;
  long local_d8;
  long ******local_d0;
  long ******local_c8;
  long local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  undefined1 local_a0 [8];
  void *local_98;
  void *local_90;
  string local_78 [44];
  undefined4 local_4c;
  long local_48;
  QString local_40;
  undefined1 local_31;
  
  local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x60);
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  local_48 = *(long *)(param_2 + 8);
  if (local_48 != 0) {
    _PrlHandle_AddRef();
  }
  if (*param_2 != '\0') {
    iVar11 = *(int *)(param_2 + 4);
    if (iVar11 == 3) {
      local_b0 = (QArrayData *)local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      FUN_100a276b0(param_1,&local_b0,*(undefined4 *)(param_2 + 0x68),param_2 + 0x70);
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto switchD_100a243fa_caseD_3;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
      goto switchD_100a243fa_caseD_3;
    }
    if (iVar11 == 2) {
      FUN_100a29350(param_1 + 0x38,&local_40);
      FUN_1000e5580(param_1 + 0x50,&local_40);
      FUN_1000e5580((long *)(param_1 + 0x40),&local_40);
      lVar14 = *(long *)(param_1 + 0x40);
      if ((*(int *)(lVar14 + 0xc) == *(int *)(lVar14 + 8)) &&
         (*(undefined4 *)(param_1 + 0x60) = 0, *(long *)(param_1 + 0x78) != 0)) {
        lVar14 = *(long *)(param_1 + 0x68);
        plVar13 = *(long **)(param_1 + 0x70);
        lVar1 = *plVar13;
        *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar14 + 8);
        **(long **)(lVar14 + 8) = lVar1;
        *(undefined8 *)(param_1 + 0x78) = 0;
        while (plVar13 != (long *)(param_1 + 0x68)) {
          plVar2 = (long *)plVar13[1];
          std::string::~string((string *)(plVar13 + 2));
          operator_delete(plVar13);
          plVar13 = plVar2;
        }
      }
      goto switchD_100a243fa_caseD_3;
    }
    if (iVar11 != 1) goto switchD_100a243fa_caseD_3;
    plVar13 = (long *)FUN_100a29260(param_1 + 0x38,&local_40);
    if (plVar13 != &local_48) {
      if (*plVar13 != 0) {
        _PrlHandle_Free();
      }
      *plVar13 = local_48;
      if (local_48 != 0) {
        _PrlHandle_AddRef();
      }
    }
    FUN_1000341d0(param_1 + 0x50,&local_40);
    if (*(int *)(param_1 + 0x60) == 0) goto switchD_100a243fa_caseD_3;
    local_4c = (undefined4)*(long *)(param_1 + 0x78);
    if (*(long *)(param_1 + 0x78) == 0) {
      local_4c = 1;
    }
    FUN_100a332c0(local_a0,6,*(int *)(param_1 + 0x60),1,&local_4c,4);
    local_a8 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_100a27a60(param_1,&local_a8,local_a0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a246f9;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100a246f9:
    std::string::~string(local_78);
    if (local_98 != (void *)0x0) {
      if (local_90 != local_98) {
        local_90 = local_98;
      }
      operator_delete(local_98);
    }
    goto switchD_100a243fa_caseD_3;
  }
  param_2 = param_2 + 0x10;
  uVar10 = FUN_100a33580(param_2);
  switch(uVar10) {
  case 2:
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("CPTOOL","CPClientCommunicator",3,"Receive CPTOOL_REQUIRE_BUFFER from %s",
                    local_170 + *(long *)(local_170 + 0x10));
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a2447a;
        }
        QArrayData::deallocate(local_170,1,8);
      }
    }
LAB_100a2447a:
    iVar11 = FUN_100a335c0(param_2);
    if (iVar11 != 0x20) {
      FUN_1000341d0(param_1 + 0x48,&local_40);
      local_200 = *(int **)(param_1 + 0x40);
      if (*local_200 != -1) {
        if (*local_200 == 0) {
          QListData::detach((int)&local_200);
          iVar11 = local_200[2];
          if (iVar11 != local_200[3]) {
            puVar16 = (undefined8 *)
                      (*(long *)(param_1 + 0x40) + 0x10 +
                      (long)*(int *)(*(long *)(param_1 + 0x40) + 8) * 8);
            piVar17 = local_200 + (long)iVar11 * 2 + 4;
            lVar14 = (long)local_200[3] * 8 + (long)iVar11 * -8;
            do {
              piVar3 = (int *)*puVar16;
              *(int **)piVar17 = piVar3;
              if (1 < *piVar3 + 1U) {
                LOCK();
                *piVar3 = *piVar3 + 1;
                local_31 = *piVar3 != 0;
                UNLOCK();
              }
              piVar17 = piVar17 + 2;
              puVar16 = puVar16 + 1;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
        }
        else {
          LOCK();
          *local_200 = *local_200 + 1;
          local_31 = *local_200 != 0;
          UNLOCK();
        }
      }
      local_1f8 = local_200 + (long)local_200[2] * 2 + 4;
      local_1f0 = local_200 + (long)local_200[3] * 2 + 4;
      local_1e8 = 1;
      if (local_200[2] == local_200[3]) {
        bVar9 = 0;
      }
      else {
        bVar9 = 0;
        do {
          local_208.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_1f8;
          if (1 < *(int *)local_208.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + 1;
            local_31 = *(int *)local_208.field0_0x0 != 0;
            UNLOCK();
          }
          if (local_1e8 != 0) {
            cVar8 = operator==(&local_208,&local_40);
            if (cVar8 == '\0') {
              local_210 = (QArrayData *)local_208.field0_0x0;
              if (1 < *(int *)local_208.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + 1;
                local_31 = *(int *)local_208.field0_0x0 != 0;
                UNLOCK();
              }
              bVar9 = FUN_100a27a60(param_1,&local_210,param_2);
              if (*(int *)local_210 != -1) {
                if (*(int *)local_210 != 0) {
                  LOCK();
                  *(int *)local_210 = *(int *)local_210 + -1;
                  local_31 = *(int *)local_210 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100a2516c;
                }
                QArrayData::deallocate(local_210,2,8);
              }
LAB_100a2516c:
              if (bVar9 != 0) goto LAB_100a2517b;
            }
            local_1e8 = 0;
          }
LAB_100a2517b:
          if (*(int *)local_208.field0_0x0 != -1) {
            if (*(int *)local_208.field0_0x0 != 0) {
              LOCK();
              *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
              local_31 = *(int *)local_208.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a251b1;
            }
            QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
          }
LAB_100a251b1:
          local_1f8 = local_1f8 + 2;
          uVar12 = local_1e8 ^ 1;
          bVar18 = local_1e8 != 1;
          local_1e8 = uVar12;
        } while ((bVar18) && (local_1f8 != local_1f0));
      }
      FUN_100039a80(&local_200);
      if ((bVar9 & 1) != 0) goto switchD_100a243fa_caseD_3;
      FUN_100a332c0(local_260,4,0,0,0,0);
      local_268 = (QArrayData *)local_40.field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      FUN_100a27a60(param_1,&local_268,local_260);
      if (*(int *)local_268 != -1) {
        if (*(int *)local_268 != 0) {
          LOCK();
          *(int *)local_268 = *(int *)local_268 + -1;
          local_31 = *(int *)local_268 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a2527f;
        }
        QArrayData::deallocate(local_268,2,8);
      }
LAB_100a2527f:
      std::string::~string(local_238);
      if (local_258 != (void *)0x0) {
        if (local_250 != local_258) {
          local_250 = local_258;
        }
        operator_delete(local_258);
      }
      goto switchD_100a243fa_caseD_3;
    }
    FUN_100a23f10(&local_188,param_1 + 0x68,0);
    uVar10 = FUN_100a335c0(param_2);
    FUN_100a332c0(local_1d8,4,uVar10,1,local_188,(int)local_180 - (int)local_188);
    local_1e0 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_100a27a60(param_1,&local_1e0,local_1d8);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a24536;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
LAB_100a24536:
    std::string::~string(local_1b0);
    if (local_1d0 != (void *)0x0) {
      if (local_1c8 != local_1d0) {
        local_1c8 = local_1d0;
      }
      operator_delete(local_1d0);
    }
    if (local_188 != (void *)0x0) {
      if (local_180 != local_188) {
        local_180 = local_188;
      }
      operator_delete(local_188);
    }
  default:
    goto switchD_100a243fa_caseD_3;
  case 4:
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("CPTOOL","CPClientCommunicator",3,"Receive CPTOOL_ACCEPT_BUFFER from %s",
                    local_118 + *(long *)(local_118 + 0x10));
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a247aa;
        }
        QArrayData::deallocate(local_118,1,8);
      }
    }
LAB_100a247aa:
    plVar13 = (long *)(param_1 + 0x48);
    local_138 = *(int **)(param_1 + 0x48);
    if (*local_138 != -1) {
      if (*local_138 == 0) {
        QListData::detach((int)&local_138);
        iVar11 = local_138[2];
        if (iVar11 != local_138[3]) {
          puVar16 = (undefined8 *)(*plVar13 + 0x10 + (long)*(int *)(*plVar13 + 8) * 8);
          piVar17 = local_138 + (long)iVar11 * 2 + 4;
          lVar14 = (long)local_138[3] * 8 + (long)iVar11 * -8;
          do {
            piVar3 = (int *)*puVar16;
            *(int **)piVar17 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar17 = piVar17 + 2;
            puVar16 = puVar16 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
      }
      else {
        LOCK();
        *local_138 = *local_138 + 1;
        local_31 = *local_138 != 0;
        UNLOCK();
      }
    }
    local_130 = local_138 + (long)local_138[2] * 2 + 4;
    local_128 = local_138 + (long)local_138[3] * 2 + 4;
    local_120 = 1;
    if (local_138[2] != local_138[3]) {
      do {
        pQVar4 = *(QArrayData **)local_130;
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        local_140 = pQVar4;
        if (local_120 != 0) {
          FUN_1000341d0(param_1 + 0x40,&local_140);
          local_120 = 0;
        }
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a24d19;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_100a24d19:
        local_130 = local_130 + 2;
        uVar12 = local_120 ^ 1;
        bVar18 = local_120 != 1;
        local_120 = uVar12;
      } while ((bVar18) && (local_130 != local_128));
    }
    FUN_100039a80(&local_138);
    local_160 = (int *)*plVar13;
    if (*local_160 != -1) {
      if (*local_160 == 0) {
        QListData::detach((int)&local_160);
        iVar11 = local_160[2];
        if (iVar11 != local_160[3]) {
          puVar16 = (undefined8 *)(*plVar13 + 0x10 + (long)*(int *)(*plVar13 + 8) * 8);
          piVar17 = local_160 + (long)iVar11 * 2 + 4;
          lVar14 = (long)local_160[3] * 8 + (long)iVar11 * -8;
          do {
            piVar3 = (int *)*puVar16;
            *(int **)piVar17 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar17 = piVar17 + 2;
            puVar16 = puVar16 + 1;
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
      }
      else {
        LOCK();
        *local_160 = *local_160 + 1;
        local_31 = *local_160 != 0;
        UNLOCK();
      }
    }
    local_158 = local_160 + (long)local_160[2] * 2 + 4;
    local_150 = local_160 + (long)local_160[3] * 2 + 4;
    local_148 = 1;
    if (local_160[2] != local_160[3]) {
      do {
        pQVar4 = *(QArrayData **)local_158;
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        if (local_148 != 0) {
          if (1 < *(int *)pQVar4 + 1U) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + 1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
          }
          local_168 = pQVar4;
          FUN_100a27a60(param_1,&local_168,param_2);
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a24eaa;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_100a24eaa:
          local_148 = 0;
        }
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a24edf;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_100a24edf:
        local_158 = local_158 + 2;
        uVar12 = local_148 ^ 1;
        bVar18 = local_148 != 1;
        local_148 = uVar12;
      } while ((bVar18) && (local_158 != local_150));
    }
    FUN_100039a80(&local_160);
    FUN_100094f70(plVar13);
    goto switchD_100a243fa_caseD_3;
  case 6:
    break;
  case 9:
    if (2 < DAT_10230ffd0) {
      QString::toUtf8();
      FUN_100df99c0("CPTOOL","CPClientCommunicator",3,
                    "Receive CPTOOL_CHECK_FOR_BUFFER_UPDATED from %s",
                    local_270 + *(long *)(local_270 + 0x10));
      if (*(int *)local_270 != -1) {
        if (*(int *)local_270 != 0) {
          LOCK();
          *(int *)local_270 = *(int *)local_270 + -1;
          local_31 = *(int *)local_270 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a24a58;
        }
        QArrayData::deallocate(local_270,1,8);
      }
    }
LAB_100a24a58:
    local_278 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    FUN_100a27a60(param_1,&local_278,param_2);
    if (*(int *)local_278 != -1) {
      if (*(int *)local_278 != 0) {
        LOCK();
        *(int *)local_278 = *(int *)local_278 + -1;
        local_31 = *(int *)local_278 != 0;
        UNLOCK();
        if ((bool)local_31) goto switchD_100a243fa_caseD_3;
      }
      QArrayData::deallocate(local_278,2,8);
    }
    goto switchD_100a243fa_caseD_3;
  }
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("CPTOOL","CPClientCommunicator",3,"Receive CPTOOL_UPDATE_BUFFER from %s",
                  local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a248b6;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
  }
LAB_100a248b6:
  local_d0 = (long ******)&local_d0;
  local_c0 = 0;
  local_c8 = local_d0;
  uVar12 = FUN_100a335e0(param_2);
  if (3 < uVar12) {
    lVar14 = FUN_100a335f0(param_2);
    uVar12 = FUN_100a335e0(param_2);
    FUN_100a23bf0(&local_e8,lVar14 + 4,(ulong)uVar12 - 4);
    FUN_100a2bc20(&local_d0,local_e0,&local_e8,0);
    if (local_d8 != 0) {
      lVar14 = *local_e0;
      *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(local_e8 + 8);
      **(long **)(local_e8 + 8) = lVar14;
      local_d8 = 0;
      plVar13 = local_e0;
      while (plVar13 != &local_e8) {
        plVar2 = (long *)plVar13[1];
        std::string::~string((string *)(plVar13 + 2));
        operator_delete(plVar13);
        plVar13 = plVar2;
      }
    }
  }
  uVar15 = FUN_100a335c0(param_2);
  if (((uVar15 & 0x20) == 0) ||
     (cVar8 = operator==(&local_40,(QString *)(param_1 + 0x28)), cVar8 != '\0')) {
    uVar15 = FUN_100a335c0(param_2);
    if ((uVar15 & 0x20) == 0) {
      if (local_c0 != 0) {
LAB_100a24b7d:
        pppppplVar5 = (long ******)*local_c8;
        pppppplVar5[1] = local_d0[1];
        *local_d0[1] = (long ****)pppppplVar5;
        local_c0 = 0;
        ppppppplVar7 = (long *******)local_c8;
        while (ppppppplVar7 != &local_d0) {
          ppppppplVar6 = (long *******)ppppppplVar7[1];
          std::string::~string((string *)(ppppppplVar7 + 2));
          operator_delete(ppppppplVar7);
          ppppppplVar7 = ppppppplVar6;
        }
      }
    }
    else {
      cVar8 = operator==(&local_40,(QString *)(param_1 + 0x28));
      if (cVar8 == '\0' && local_c0 != 0) goto LAB_100a24b7d;
    }
    local_110 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    uVar10 = FUN_100a335c0(param_2);
    FUN_100a276b0(param_1,&local_110,uVar10,&local_d0);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_31 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a2500e;
      }
      QArrayData::deallocate(local_110,2,8);
    }
  }
  else {
    local_f0 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    uVar10 = FUN_100a335c0(param_2);
    FUN_100a2ac20(&local_108,&local_d0);
    FUN_100a2ca40(param_1,&local_f0,uVar10,&local_108);
    if (local_f8 != 0) {
      lVar14 = *local_100;
      *(undefined8 *)(lVar14 + 8) = *(undefined8 *)(local_108 + 8);
      **(long **)(local_108 + 8) = lVar14;
      local_f8 = 0;
      plVar13 = local_100;
      while (plVar13 != &local_108) {
        plVar2 = (long *)plVar13[1];
        std::string::~string((string *)(plVar13 + 2));
        operator_delete(plVar13);
        plVar13 = plVar2;
      }
    }
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a2500e;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_100a2500e:
  if (local_c0 != 0) {
    pppppplVar5 = (long ******)*local_c8;
    pppppplVar5[1] = local_d0[1];
    *local_d0[1] = (long ****)pppppplVar5;
    local_c0 = 0;
    ppppppplVar7 = (long *******)local_c8;
    while (ppppppplVar7 != &local_d0) {
      ppppppplVar6 = (long *******)ppppppplVar7[1];
      std::string::~string((string *)(ppppppplVar7 + 2));
      operator_delete(ppppppplVar7);
      ppppppplVar7 = ppppppplVar6;
    }
  }
switchD_100a243fa_caseD_3:
  if (local_48 != 0) {
    _PrlHandle_Free();
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return;
}

