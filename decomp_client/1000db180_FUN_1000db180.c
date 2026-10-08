
/* WARNING: Type propagation algorithm not settling */

void FUN_1000db180(long param_1)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  uint uVar11;
  char *pcVar12;
  string *psVar13;
  char *pcVar14;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  AnonymousUnion0 local_1c8;
  QString local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  AnonymousUnion0 local_1a8;
  QString local_1a0;
  QArrayData *local_198;
  QString local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QString local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  QArrayData *local_120;
  QString local_118;
  undefined1 local_110 [32];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  string local_a8 [16];
  char *local_98;
  undefined8 local_88;
  undefined1 local_80 [8];
  string local_78 [16];
  string *local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  local_d0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001548f0(uVar5,param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_10018d830(&local_e8,lVar6);
    FUN_10018d860(&local_f0,lVar6);
    FUN_1000d81b0(&local_e0,&local_e8,&local_f0);
    QString::operator=(&local_d8,&local_e0);
    if (*(int *)local_e0.field0_0x0 != -1) {
      if (*(int *)local_e0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
        local_31 = *(int *)local_e0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000db272;
      }
      QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
    }
LAB_1000db272:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000db2a8;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1000db2a8:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000db2de;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_1000db2de:
    cVar2 = QFile::exists(&local_d8);
    if (cVar2 == '\0') {
LAB_1000db7c2:
      FUN_10018d860(&local_120,lVar6);
      FUN_1000dadc0(&local_120);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000db813;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1000db813:
      local_158._8_4_ = (int)PTR_shared_null_1021e1288;
      local_158._0_8_ = PTR_shared_null_1021e1288;
      local_158._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      local_148._8_4_ = (int)PTR_shared_null_1021e15e8;
      local_148._0_8_ = PTR_shared_null_1021e15e8;
      local_148._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
      local_138 = 0;
      local_130 = 0;
      local_128 = 0;
      QString::operator=((QString *)local_158,&local_d0);
      FUN_100041ee0(*(undefined8 *)(param_1 + 0xf0),&local_d8,local_158,1);
      FUN_1000e64e0(local_158);
    }
    else {
      iVar4 = FUN_100047b40(*(undefined8 *)(param_1 + 0xf0),&local_d8);
      if (iVar4 != 0) {
        FUN_1000d7c20(&local_d8);
        goto LAB_1000db7c2;
      }
      FUN_100d969d0(local_110);
      cVar2 = FUN_100d96fc0(local_110);
      if (cVar2 == '\0') {
        FUN_100df99c0("SGAC","prl_client_app",0,"Failed to authorize user session");
        bVar1 = true;
        FUN_1000d7c20(&local_d8);
      }
      else {
        local_118.field0_0x0 = local_d8.field0_0x0;
        if (1 < *(uint *)local_d8.field0_0x0 + 1) {
          LOCK();
          *(uint *)local_d8.field0_0x0 = *(uint *)local_d8.field0_0x0 + 1;
          local_31 = *(uint *)local_d8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_c8,0x1db68d4);
        QString::append(&local_118);
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000db3ba;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_1000db3ba:
        cVar2 = FUN_100d984d0(&local_118,local_110);
        if (*(int *)local_118.field0_0x0 != -1) {
          if (*(int *)local_118.field0_0x0 != 0) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000db406;
          }
          QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
        }
LAB_1000db406:
        if (cVar2 == '\0') {
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",1,"Fake stub does not have permissions to execute"
                         );
          }
          bVar1 = true;
          FUN_1000d7c20(&local_d8);
        }
        else {
          local_78[0] = (string)0x0;
          local_78[1] = (string)0x0;
          local_78[2] = (string)0x0;
          local_78[3] = (string)0x0;
          local_78[4] = (string)0x0;
          local_78[5] = (string)0x0;
          local_78[6] = (string)0x0;
          local_78[7] = (string)0x0;
          local_78[8] = (string)0x0;
          local_78[9] = (string)0x0;
          local_78[10] = (string)0x0;
          local_78[0xb] = (string)0x0;
          local_78[0xc] = (string)0x0;
          local_78[0xd] = (string)0x0;
          local_78[0xe] = (string)0x0;
          local_78[0xf] = (string)0x0;
          local_68 = (string *)0x0;
          local_a8[0] = (string)0x0;
          local_a8[1] = (string)0x0;
          local_a8[2] = (string)0x0;
          local_a8[3] = (string)0x0;
          local_a8[4] = (string)0x0;
          local_a8[5] = (string)0x0;
          local_a8[6] = (string)0x0;
          local_a8[7] = (string)0x0;
          local_a8[8] = (string)0x0;
          local_a8[9] = (string)0x0;
          local_a8[10] = (string)0x0;
          local_a8[0xb] = (string)0x0;
          local_a8[0xc] = (string)0x0;
          local_a8[0xd] = (string)0x0;
          local_a8[0xe] = (string)0x0;
          local_a8[0xf] = (string)0x0;
          local_98 = (char *)0x0;
          QString::toUtf8();
          std::string::assign((char *)local_78);
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000db490;
            }
            QArrayData::deallocate(local_b0,1,8);
          }
LAB_1000db490:
          std::string::append((char *)local_78);
          psVar13 = local_68;
          if (((byte)local_78[0] & 1) == 0) {
            psVar13 = local_78 + 1;
          }
          iVar4 = FUN_100d76f00(psVar13,2,&local_88,local_80);
          if (iVar4 == 0) {
            lVar8 = _CFDictionaryGetTypeID();
            lVar7 = _CFGetTypeID(local_88);
            if (lVar8 == lVar7) {
              FUN_100d76960(local_88,&cf_CFBundleDisplayName,local_a8);
              if (((byte)local_a8[0] & 1) == 0) {
                pcVar14 = (char *)((long)local_a8 + 1);
LAB_1000db5fd:
                pcVar12 = pcVar14;
                _strlen(pcVar12);
              }
              else {
                pcVar12 = (char *)0x0;
                pcVar14 = local_98;
                if (local_98 != (char *)0x0) goto LAB_1000db5fd;
              }
              QString::fromUtf8_helper((char *)&local_c0,(int)pcVar12);
              QString::normalized(&local_b8,&local_c0,1,0);
              cVar2 = operator==(&local_d0,&local_b8);
              if (*(int *)local_b8.field0_0x0 != -1) {
                if (*(int *)local_b8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
                  local_31 = *(int *)local_b8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000db67d;
                }
                QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
              }
LAB_1000db67d:
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1000db6b3;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
LAB_1000db6b3:
              bVar1 = true;
              if (cVar2 == '\0') {
                if (DAT_10230ffd0 < 1) {
                  bVar1 = false;
                }
                else {
                  pcVar14 = local_98;
                  if (((byte)local_a8[0] & 1) == 0) {
                    pcVar14 = (char *)((long)local_a8 + 1);
                  }
                  bVar1 = false;
                  FUN_100df99c0("SGAC","prl_client_app",1,
                                "failed to check bundle name (now is \"%s\")",pcVar14);
                }
              }
            }
            else if (DAT_10230ffd0 < 1) {
              bVar1 = false;
            }
            else {
              psVar13 = local_68;
              if (((byte)local_78[0] & 1) == 0) {
                psVar13 = local_78 + 1;
              }
              bVar1 = false;
              FUN_100df99c0("SGAC","prl_client_app",1,
                            "property list is not a dictionary, path=\"%s\"",psVar13);
            }
            _CFRelease(local_88);
          }
          else if (DAT_10230ffd0 < 1) {
            bVar1 = false;
          }
          else {
            psVar13 = local_68;
            if (((byte)local_78[0] & 1) == 0) {
              psVar13 = local_78 + 1;
            }
            bVar1 = false;
            FUN_100df99c0("SGAC","prl_client_app",1,
                          "localized property list read err %i, path=\"%s\"",iVar4,psVar13);
          }
          std::string::~string(local_a8);
          std::string::~string(local_78);
          if (bVar1) {
            bVar1 = false;
          }
          else {
            if (0 < DAT_10230ffd0) {
              FUN_100df99c0("SGAC","prl_client_app",1,"Fake stub contain invalid VM name");
            }
            bVar1 = true;
            FUN_1000d7c20(&local_d8);
          }
        }
      }
      FUN_100d96c00(local_110);
      if (bVar1) goto LAB_1000db7c2;
    }
    if (*(int *)(param_1 + 0x21c) == 0) {
      if ((((*(int *)(param_1 + 0x218) == 0) && (*(int *)(param_1 + 0x214) == 0)) &&
          (*(int *)(param_1 + 0x210) == 0)) && (lVar8 = FUN_10018d490(lVar6), lVar8 != 0)) {
        uVar5 = FUN_10016f500(lVar8);
        cVar2 = FUN_10061c2b0(uVar5,0x10080);
        if (cVar2 != '\0') {
          FUN_10018d860(&local_170,lVar6);
          uVar3 = QDir::separator();
          local_168 = local_170;
          if (1 < *(uint *)local_170 + 1) {
            LOCK();
            *(uint *)local_170 = *(uint *)local_170 + 1;
            local_31 = *(uint *)local_170 != 0;
            UNLOCK();
          }
          uVar11 = *(uint *)(local_170 + 4);
          if ((1 < *(uint *)local_170) || ((*(uint *)(local_170 + 8) & 0x7fffffff) < uVar11 + 2)) {
            QString::reallocData((uint)&local_168,SUB41(uVar11 + 2,0));
            uVar11 = *(uint *)(local_168 + 4);
          }
          *(uint *)(local_168 + 4) = uVar11 + 1;
          *(undefined2 *)(local_168 + (long)(int)uVar11 * 2 + *(long *)(local_168 + 0x10)) = uVar3;
          *(undefined2 *)
           (local_168 + (long)(int)*(uint *)(local_168 + 4) * 2 + *(long *)(local_168 + 0x10)) = 0;
          if (1 < *(uint *)local_168 + 1) {
            LOCK();
            *(uint *)local_168 = *(uint *)local_168 + 1;
            local_31 = *(uint *)local_168 != 0;
            UNLOCK();
          }
          local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_168;
          QString::fromUtf8_helper((char *)&local_58,0x1dbcd69);
          QString::append(&local_160);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000dba0b;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1000dba0b:
          if (*(int *)local_168 != -1) {
            if (*(int *)local_168 != 0) {
              LOCK();
              *(int *)local_168 = *(int *)local_168 + -1;
              local_31 = *(int *)local_168 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000dba41;
            }
            QArrayData::deallocate(local_168,2,8);
          }
LAB_1000dba41:
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_31 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000dba77;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_1000dba77:
          cVar2 = QFile::exists(&local_160);
          if (cVar2 == '\0') {
            uVar3 = QDir::separator();
            local_198 = (QArrayData *)local_d8.field0_0x0;
            if (1 < *(uint *)local_d8.field0_0x0 + 1) {
              LOCK();
              *(uint *)local_d8.field0_0x0 = *(uint *)local_d8.field0_0x0 + 1;
              local_31 = *(uint *)local_d8.field0_0x0 != 0;
              UNLOCK();
            }
            uVar11 = *(uint *)(local_d8.field0_0x0 + 4);
            if ((1 < *(uint *)local_d8.field0_0x0) ||
               ((*(uint *)(local_d8.field0_0x0 + 8) & 0x7fffffff) < uVar11 + 2)) {
              QString::reallocData((uint)&local_198,SUB41(uVar11 + 2,0));
              uVar11 = *(uint *)(local_198 + 4);
            }
            *(uint *)(local_198 + 4) = uVar11 + 1;
            *(undefined2 *)(local_198 + (long)(int)uVar11 * 2 + *(long *)(local_198 + 0x10)) = uVar3
            ;
            *(undefined2 *)
             (local_198 + (long)(int)*(uint *)(local_198 + 4) * 2 + *(long *)(local_198 + 0x10)) = 0
            ;
            if (1 < *(uint *)local_198 + 1) {
              LOCK();
              *(uint *)local_198 = *(uint *)local_198 + 1;
              local_31 = *(uint *)local_198 != 0;
              UNLOCK();
            }
            local_190.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_198;
            QString::fromUtf8_helper((char *)&local_50,0x1dbcd69);
            QString::append(&local_190);
            if (*(int *)local_50 != -1) {
              if (*(int *)local_50 != 0) {
                LOCK();
                *(int *)local_50 = *(int *)local_50 + -1;
                local_31 = *(int *)local_50 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbc8a;
              }
              QArrayData::deallocate(local_50,2,8);
            }
LAB_1000dbc8a:
            QFile::remove(&local_190);
            if (*(int *)local_190.field0_0x0 != -1) {
              if (*(int *)local_190.field0_0x0 != 0) {
                LOCK();
                *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
                local_31 = *(int *)local_190.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbccc;
              }
              QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
            }
LAB_1000dbccc:
            if (*(int *)local_198 != -1) {
              if (*(int *)local_198 != 0) {
                LOCK();
                *(int *)local_198 = *(int *)local_198 + -1;
                local_31 = *(int *)local_198 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbd02;
              }
              QArrayData::deallocate(local_198,2,8);
            }
          }
          else {
            FUN_10018d860(&local_180,lVar6);
            QString::toUtf8();
            pQVar9 = local_178;
            lVar6 = *(long *)(local_178 + 0x10);
            QString::toUtf8();
            FUN_100ab7080(pQVar9 + lVar6,local_188 + *(long *)(local_188 + 0x10));
            if (*(int *)local_188 != -1) {
              if (*(int *)local_188 != 0) {
                LOCK();
                *(int *)local_188 = *(int *)local_188 + -1;
                local_31 = *(int *)local_188 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbb1a;
              }
              QArrayData::deallocate(local_188,1,8);
            }
LAB_1000dbb1a:
            if (*(int *)local_178 != -1) {
              if (*(int *)local_178 != 0) {
                LOCK();
                *(int *)local_178 = *(int *)local_178 + -1;
                local_31 = *(int *)local_178 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbb53;
              }
              QArrayData::deallocate(local_178,1,8);
            }
LAB_1000dbb53:
            if (*(int *)local_180 != -1) {
              if (*(int *)local_180 != 0) {
                LOCK();
                *(int *)local_180 = *(int *)local_180 + -1;
                local_31 = *(int *)local_180 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1000dbd02;
              }
              QArrayData::deallocate(local_180,2,8);
            }
          }
LAB_1000dbd02:
          if (*(int *)local_160.field0_0x0 != -1) {
            if (*(int *)local_160.field0_0x0 != 0) {
              LOCK();
              *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
              local_31 = *(int *)local_160.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000dbd38;
            }
            QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
          }
        }
      }
LAB_1000dbd38:
      if ((*(int *)(param_1 + 0x21c) == 0) && (*(int *)(param_1 + 0x218) == 0)) {
        local_1a0.field0_0x0 = local_d8.field0_0x0;
        if (1 < *(uint *)local_d8.field0_0x0 + 1) {
          LOCK();
          *(uint *)local_d8.field0_0x0 = *(uint *)local_d8.field0_0x0 + 1;
          local_31 = *(uint *)local_d8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_48,0x1db68d4);
        QString::append(&local_1a0);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000dbdc8;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1000dbdc8:
        local_1a8.field1 = (Data *)PTR_shared_null_1021e15e8;
        pQVar9 = (QArrayData *)QString::fromAscii_helper("--ivmid",7);
        local_1b0 = pQVar9;
        FUN_1000341d0(&local_1a8,&local_1b0);
        QString::number((uint)&local_1b8,*(int *)(*(long *)(param_1 + 0xe0) + 0x38));
        FUN_1000341d0(&local_1a8,&local_1b8);
        cVar2 = MacUtils::launchApplication(&local_1a0,(QStringList *)&local_1a8.field0,0x80000);
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_31 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000dbe86;
          }
          QArrayData::deallocate(local_1b8,2,8);
        }
LAB_1000dbe86:
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_31 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000dbeb3;
          }
          QArrayData::deallocate(pQVar9,2,8);
        }
LAB_1000dbeb3:
        FUN_100039a80(&local_1a8);
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_31 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000dbef5;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
LAB_1000dbef5:
        if (cVar2 != '\0') {
          *(undefined8 *)(param_1 + 0x218) = 0x100000001;
        }
      }
    }
    if ((*(int *)(param_1 + 0x214) == 0) && (*(int *)(param_1 + 0x210) == 0)) {
      local_1c0.field0_0x0 = local_d8.field0_0x0;
      if (1 < *(uint *)local_d8.field0_0x0 + 1) {
        LOCK();
        *(uint *)local_d8.field0_0x0 = *(uint *)local_d8.field0_0x0 + 1;
        local_31 = *(uint *)local_d8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1db68d4);
      QString::append(&local_1c0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dbf91;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1000dbf91:
      local_1c8.field1 = (Data *)PTR_shared_null_1021e15e8;
      pQVar9 = (QArrayData *)QString::fromAscii_helper("--fakestub",10);
      local_1d0 = pQVar9;
      FUN_1000341d0(&local_1c8,&local_1d0);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("--ivmid",7);
      local_1d8 = pQVar10;
      FUN_1000341d0(&local_1c8,&local_1d8);
      QString::number((uint)&local_1e0,*(int *)(*(long *)(param_1 + 0xe0) + 0x38));
      FUN_1000341d0(&local_1c8,&local_1e0);
      cVar2 = MacUtils::launchApplication(&local_1c0,(QStringList *)&local_1c8.field0,0x80000);
      if (*(int *)local_1e0 != -1) {
        if (*(int *)local_1e0 != 0) {
          LOCK();
          *(int *)local_1e0 = *(int *)local_1e0 + -1;
          local_31 = *(int *)local_1e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dc081;
        }
        QArrayData::deallocate(local_1e0,2,8);
      }
LAB_1000dc081:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dc0b0;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_1000dc0b0:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dc0dd;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_1000dc0dd:
      FUN_100039a80(&local_1c8);
      if (*(int *)local_1c0.field0_0x0 != -1) {
        if (*(int *)local_1c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1c0.field0_0x0 = *(int *)local_1c0.field0_0x0 + -1;
          local_31 = *(int *)local_1c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000dc11f;
        }
        QArrayData::deallocate((QArrayData *)local_1c0.field0_0x0,2,8);
      }
LAB_1000dc11f:
      if (cVar2 != '\0') {
        *(undefined8 *)(param_1 + 0x210) = 0x100000001;
      }
    }
  }
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000dc161;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_1000dc161:
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_31 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000dc197;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_1000dc197:
  QMutex::unlock();
  return;
}

