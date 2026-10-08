
undefined8 FUN_100d59730(char *param_1,int *param_2,uint *param_3)

{
  int *piVar1;
  undefined *puVar2;
  QString QVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  FILE *pFVar17;
  int *piVar18;
  uint uVar19;
  char cVar20;
  undefined8 uVar21;
  long *plVar22;
  byte bVar23;
  QString QVar24;
  bool bVar25;
  bool bVar26;
  long *local_1238;
  QArrayData *local_1218;
  QArrayData *local_1210;
  QString local_1208;
  QString local_1200;
  QArrayData *local_11f8;
  QArrayData *local_11f0;
  undefined1 local_11e8 [4];
  ushort local_11e4;
  int *local_1158;
  QArrayData *local_1150;
  QString local_1148;
  int *local_1140;
  QArrayData *local_1138;
  QString local_1130;
  int *local_1128;
  QArrayData *local_1120;
  QString local_1118;
  QString local_1110;
  QArrayData *local_1108;
  QArrayData *local_1100;
  int *local_10f8;
  QArrayData *local_10f0;
  QArrayData *local_10e8;
  QArrayData *local_10e0;
  int *local_10d8;
  QArrayData *local_10d0;
  QArrayData *local_10c8;
  QArrayData *local_10c0;
  QArrayData *local_10b8;
  QArrayData *local_10b0;
  QArrayData *local_10a8;
  int *local_10a0;
  int *local_1098;
  QArrayData *local_1090;
  QString local_1088;
  int *local_1080;
  QArrayData *local_1078;
  QString local_1070;
  QArrayData *local_1068;
  QArrayData *local_1060;
  int *local_1058;
  QArrayData *local_1050;
  QArrayData *local_1048;
  int *local_1040;
  QArrayData *local_1038;
  byte local_1029;
  QArrayData *local_1028;
  uint *local_1020;
  QArrayData *local_1018;
  QArrayData *local_1010;
  undefined4 local_1004;
  QArrayData *local_1000;
  QArrayData *local_ff8;
  QArrayData *local_ff0;
  uint local_fe4;
  QArrayData *local_fe0;
  QArrayData *local_fd8;
  int local_fcc;
  QArrayData *local_fc8;
  QArrayData *local_fc0;
  QArrayData *local_fb8;
  QArrayData *local_fb0;
  QArrayData *local_fa8;
  QArrayData *local_fa0;
  undefined4 local_f94;
  QArrayData *local_f90;
  QArrayData *local_f88;
  QArrayData *local_f80;
  undefined4 local_f74;
  QArrayData *local_f70;
  QArrayData *local_f68;
  QArrayData *local_f60;
  QArrayData *local_f58;
  QArrayData *local_f50;
  undefined4 local_f44;
  QArrayData *local_f40;
  QArrayData *local_f38;
  QArrayData *local_f30;
  undefined4 local_f24;
  undefined1 local_f20 [4];
  ushort local_f1c;
  undefined1 local_e90 [4];
  ushort local_e8c;
  undefined1 local_e00 [4];
  ushort local_dfc;
  undefined1 local_d70 [4];
  ushort local_d6c;
  undefined1 local_ce0 [4];
  ushort local_cdc;
  undefined1 local_c49;
  char local_c48 [1024];
  char local_848 [1040];
  char local_438 [1024];
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar14;
  iVar4 = _stat_INODE64(param_1,local_11e8);
  if (iVar4 == 0) {
    if ((local_11e4 & 0xf000) == 0x4000) {
      *param_2 = 0xff;
      *param_3 = 0;
      if (param_1 != (char *)0x0) {
        _strlen(param_1);
      }
      QString::fromUtf8_helper((char *)&local_11f8,(int)param_1);
      QString::normalized(&local_11f0,&local_11f8,1,0);
      puVar2 = PTR_shared_null_1021e15e8;
      local_10a0 = (int *)PTR_shared_null_1021e15e8;
      pQVar8 = (QArrayData *)QString::fromAscii_helper("windows",7);
      local_10a8 = pQVar8;
      FUN_1000341d0(&local_10a0,&local_10a8);
      pQVar9 = (QArrayData *)QString::fromAscii_helper("Windows",7);
      local_10b0 = pQVar9;
      FUN_1000341d0(&local_10a0,&local_10b0);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("WINDOWS",7);
      local_10b8 = pQVar10;
      FUN_1000341d0(&local_10a0,&local_10b8);
      pQVar11 = (QArrayData *)QString::fromAscii_helper("winnt",5);
      local_10c0 = pQVar11;
      FUN_1000341d0(&local_10a0,&local_10c0);
      pQVar12 = (QArrayData *)QString::fromAscii_helper("WinNT",5);
      local_10c8 = pQVar12;
      FUN_1000341d0(&local_10a0,&local_10c8);
      pQVar13 = (QArrayData *)QString::fromAscii_helper("WINNT",5);
      local_10d0 = pQVar13;
      FUN_1000341d0(&local_10a0,&local_10d0);
      if (*(int *)pQVar13 != -1) {
        if (*(int *)pQVar13 != 0) {
          LOCK();
          *(int *)pQVar13 = *(int *)pQVar13 + -1;
          local_c49 = *(int *)pQVar13 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59979;
        }
        QArrayData::deallocate(pQVar13,2,8);
      }
LAB_100d59979:
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_c49 = *(int *)pQVar12 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d599ac;
        }
        QArrayData::deallocate(pQVar12,2,8);
      }
LAB_100d599ac:
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_c49 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d599e1;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_100d599e1:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_c49 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59a16;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_100d59a16:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_c49 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59a4e;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_100d59a4e:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_c49 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59a83;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_100d59a83:
      local_10d8 = (int *)puVar2;
      pQVar8 = (QArrayData *)QString::fromAscii_helper("system32",8);
      local_10e0 = pQVar8;
      FUN_1000341d0(&local_10d8,&local_10e0);
      pQVar9 = (QArrayData *)QString::fromAscii_helper("System32",8);
      local_10e8 = pQVar9;
      FUN_1000341d0(&local_10d8,&local_10e8);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("SYSTEM32",8);
      local_10f0 = pQVar10;
      FUN_1000341d0(&local_10d8,&local_10f0);
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_c49 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59b4f;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_100d59b4f:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_c49 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59b84;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_100d59b84:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_c49 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59bb7;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_100d59bb7:
      local_10f8 = (int *)puVar2;
      pQVar8 = (QArrayData *)QString::fromAscii_helper("config",6);
      local_1100 = pQVar8;
      FUN_1000341d0(&local_10f8,&local_1100);
      pQVar9 = (QArrayData *)QString::fromAscii_helper("CONFIG",6);
      local_1108 = pQVar9;
      FUN_1000341d0(&local_10f8,&local_1108);
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_c49 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59c51;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
LAB_100d59c51:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_c49 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59c84;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
LAB_100d59c84:
      QVar24.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_1110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_1120 = local_11f0;
      if (1 < *(int *)local_11f0 + 1U) {
        LOCK();
        *(int *)local_11f0 = *(int *)local_11f0 + 1;
        local_c49 = *(int *)local_11f0 != 0;
        UNLOCK();
      }
      local_1128 = local_10a0;
      if (*local_10a0 != -1) {
        if (*local_10a0 == 0) {
          QListData::detach((int)&local_1128);
          iVar4 = local_1128[2];
          if (iVar4 != local_1128[3]) {
            piVar6 = local_10a0 + (long)local_10a0[2] * 2 + 4;
            piVar18 = local_1128 + (long)iVar4 * 2 + 4;
            lVar14 = (long)local_1128[3] * 8 + (long)iVar4 * -8;
            do {
              piVar1 = *(int **)piVar6;
              *(int **)piVar18 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_c49 = *piVar1 != 0;
                UNLOCK();
              }
              piVar18 = piVar18 + 2;
              piVar6 = piVar6 + 2;
              lVar14 = lVar14 + -8;
            } while (lVar14 != 0);
          }
        }
        else {
          LOCK();
          *local_10a0 = *local_10a0 + 1;
          local_c49 = *local_10a0 != 0;
          UNLOCK();
        }
      }
      FUN_100d60d20(&local_1118,&local_1120,&local_1128);
      QString::operator=(&local_1110,&local_1118);
      if (*(int *)local_1118.field0_0x0 != -1) {
        if (*(int *)local_1118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1118.field0_0x0 = *(int *)local_1118.field0_0x0 + -1;
          local_c49 = *(int *)local_1118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59de6;
        }
        QArrayData::deallocate((QArrayData *)local_1118.field0_0x0,2,8);
      }
LAB_100d59de6:
      FUN_100039a80(&local_1128);
      if (*(int *)local_1120 != -1) {
        if (*(int *)local_1120 != 0) {
          LOCK();
          *(int *)local_1120 = *(int *)local_1120 + -1;
          local_c49 = *(int *)local_1120 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d59e27;
        }
        QArrayData::deallocate(local_1120,2,8);
      }
LAB_100d59e27:
      if (*(int *)(local_1110.field0_0x0 + 4) != 0) {
        local_1138 = (QArrayData *)local_1110.field0_0x0;
        if (1 < *(int *)local_1110.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_1110.field0_0x0 = *(int *)local_1110.field0_0x0 + 1;
          local_c49 = *(int *)local_1110.field0_0x0 != 0;
          UNLOCK();
        }
        local_1140 = local_10d8;
        if (*local_10d8 != -1) {
          if (*local_10d8 == 0) {
            QListData::detach((int)&local_1140);
            iVar4 = local_1140[2];
            if (iVar4 != local_1140[3]) {
              piVar6 = local_10d8 + (long)local_10d8[2] * 2 + 4;
              piVar18 = local_1140 + (long)iVar4 * 2 + 4;
              lVar14 = (long)local_1140[3] * 8 + (long)iVar4 * -8;
              do {
                piVar1 = *(int **)piVar6;
                *(int **)piVar18 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_c49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar18 = piVar18 + 2;
                piVar6 = piVar6 + 2;
                lVar14 = lVar14 + -8;
              } while (lVar14 != 0);
            }
          }
          else {
            LOCK();
            *local_10d8 = *local_10d8 + 1;
            local_c49 = *local_10d8 != 0;
            UNLOCK();
          }
        }
        FUN_100d60d20(&local_1130,&local_1138,&local_1140);
        QString::operator=(&local_1110,&local_1130);
        if (*(int *)local_1130.field0_0x0 != -1) {
          if (*(int *)local_1130.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1130.field0_0x0 = *(int *)local_1130.field0_0x0 + -1;
            local_c49 = *(int *)local_1130.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d59f5e;
          }
          QArrayData::deallocate((QArrayData *)local_1130.field0_0x0,2,8);
        }
LAB_100d59f5e:
        FUN_100039a80(&local_1140);
        if (*(int *)local_1138 != -1) {
          if (*(int *)local_1138 != 0) {
            LOCK();
            *(int *)local_1138 = *(int *)local_1138 + -1;
            local_c49 = *(int *)local_1138 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d59f9f;
          }
          QArrayData::deallocate(local_1138,2,8);
        }
LAB_100d59f9f:
        if (*(int *)(local_1110.field0_0x0 + 4) != 0) {
          local_1150 = (QArrayData *)local_1110.field0_0x0;
          if (1 < *(int *)local_1110.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1110.field0_0x0 = *(int *)local_1110.field0_0x0 + 1;
            local_c49 = *(int *)local_1110.field0_0x0 != 0;
            UNLOCK();
          }
          local_1158 = local_10f8;
          if (*local_10f8 != -1) {
            if (*local_10f8 == 0) {
              QListData::detach((int)&local_1158);
              iVar4 = local_1158[2];
              if (iVar4 != local_1158[3]) {
                piVar6 = local_10f8 + (long)local_10f8[2] * 2 + 4;
                piVar18 = local_1158 + (long)iVar4 * 2 + 4;
                lVar14 = (long)local_1158[3] * 8 + (long)iVar4 * -8;
                do {
                  piVar1 = *(int **)piVar6;
                  *(int **)piVar18 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_c49 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar18 = piVar18 + 2;
                  piVar6 = piVar6 + 2;
                  lVar14 = lVar14 + -8;
                } while (lVar14 != 0);
              }
            }
            else {
              LOCK();
              *local_10f8 = *local_10f8 + 1;
              local_c49 = *local_10f8 != 0;
              UNLOCK();
            }
          }
          FUN_100d60d20(&local_1148,&local_1150,&local_1158);
          QString::operator=(&local_1110,&local_1148);
          if (*(int *)local_1148.field0_0x0 != -1) {
            if (*(int *)local_1148.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1148.field0_0x0 = *(int *)local_1148.field0_0x0 + -1;
              local_c49 = *(int *)local_1148.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a0ce;
            }
            QArrayData::deallocate((QArrayData *)local_1148.field0_0x0,2,8);
          }
LAB_100d5a0ce:
          FUN_100039a80(&local_1158);
          if (*(int *)local_1150 != -1) {
            if (*(int *)local_1150 != 0) {
              LOCK();
              *(int *)local_1150 = *(int *)local_1150 + -1;
              local_c49 = *(int *)local_1150 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a10f;
            }
            QArrayData::deallocate(local_1150,2,8);
          }
LAB_100d5a10f:
          if ((*(int *)(local_1110.field0_0x0 + 4) != 0) &&
             (QVar24.field0_0x0 = local_1110.field0_0x0, 1 < *(int *)local_1110.field0_0x0 + 1U)) {
            LOCK();
            *(int *)local_1110.field0_0x0 = *(int *)local_1110.field0_0x0 + 1;
            local_c49 = *(int *)local_1110.field0_0x0 != 0;
            UNLOCK();
          }
        }
      }
      if (*(int *)local_1110.field0_0x0 != -1) {
        if (*(int *)local_1110.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1110.field0_0x0 = *(int *)local_1110.field0_0x0 + -1;
          local_c49 = *(int *)local_1110.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d5a174;
        }
        QArrayData::deallocate((QArrayData *)local_1110.field0_0x0,2,8);
      }
LAB_100d5a174:
      FUN_100039a80(&local_10f8);
      FUN_100039a80(&local_10d8);
      FUN_100039a80(&local_10a0);
      if (*(int *)local_11f0 != -1) {
        if (*(int *)local_11f0 != 0) {
          LOCK();
          *(int *)local_11f0 = *(int *)local_11f0 + -1;
          local_c49 = *(int *)local_11f0 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d5a1d4;
        }
        QArrayData::deallocate(local_11f0,2,8);
      }
LAB_100d5a1d4:
      if (*(int *)local_11f8 != -1) {
        if (*(int *)local_11f8 != 0) {
          LOCK();
          *(int *)local_11f8 = *(int *)local_11f8 + -1;
          local_c49 = *(int *)local_11f8 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d5a210;
        }
        QArrayData::deallocate(local_11f8,2,8);
      }
LAB_100d5a210:
      if (*(int *)(QVar24.field0_0x0 + 4) == 0) {
LAB_100d5b7f7:
        _snprintf(local_848,0x401,"%s/etc/redhat-release",param_1);
        pFVar17 = _fopen(local_848,"r");
        if (pFVar17 == (FILE *)0x0) {
          _snprintf(local_848,0x401,"%s/etc/SuSE-release",param_1);
          pFVar17 = _fopen(local_848,"r");
          if (pFVar17 == (FILE *)0x0) {
            _snprintf(local_848,0x401,"%s/etc/lsb-release",param_1);
            pFVar17 = _fopen(local_848,"r");
            if (pFVar17 == (FILE *)0x0) {
              _snprintf(local_848,0x401,"%s/etc/mandrakelinux-release",param_1);
              pFVar17 = _fopen(local_848,"r");
              if (pFVar17 == (FILE *)0x0) {
                _snprintf(local_848,0x401,"%s/etc/xandros-desktop-version",param_1);
                pFVar17 = _fopen(local_848,"r");
                if (pFVar17 == (FILE *)0x0) goto LAB_100d5bcc2;
                _fclose(pFVar17);
                *param_2 = 0x909;
                *param_3 = 1;
                _snprintf(local_438,0x400,"%s/lib64",param_1);
                iVar4 = _stat_INODE64(local_438,local_ce0);
              }
              else {
                _fclose(pFVar17);
                *param_2 = 0x903;
                *param_3 = 1;
                _snprintf(local_438,0x400,"%s/lib64",param_1);
                iVar4 = _stat_INODE64(local_438,local_d70);
                local_cdc = local_d6c;
              }
            }
            else {
              do {
                pcVar7 = _fgets(local_c48,0x3ff,pFVar17);
                if (pcVar7 == (char *)0x0) goto LAB_100d5bc4f;
                iVar4 = _strncmp(local_c48,"DISTRIB_ID=Debian",0x11);
                if (iVar4 == 0) {
                  *param_2 = 0x906;
                  goto LAB_100d5bc4f;
                }
                iVar4 = _strncmp(local_c48,"DISTRIB_ID=Ubuntu",0x11);
              } while (iVar4 != 0);
              *param_2 = 0x90a;
LAB_100d5bc4f:
              _fclose(pFVar17);
              *param_3 = 1;
              _snprintf(local_438,0x400,"%s/lib64",param_1);
              iVar4 = _stat_INODE64(local_438,local_e00);
              local_cdc = local_dfc;
            }
          }
          else {
            do {
              pcVar7 = _fgets(local_c48,0x3ff,pFVar17);
              if (pcVar7 == (char *)0x0) goto LAB_100d5bb47;
              iVar4 = _strncasecmp(local_c48,"SUSE LINUX Enterprise",0x15);
              if (iVar4 == 0) {
                *param_2 = 0x902;
                goto LAB_100d5bb47;
              }
              iVar4 = _strncmp(local_c48,"SUSE LINUX ",0xb);
            } while (iVar4 != 0);
            *param_2 = 0x90f;
LAB_100d5bb47:
            _fclose(pFVar17);
            *param_3 = 1;
            _snprintf(local_438,0x400,"%s/lib64",param_1);
            iVar4 = _stat_INODE64(local_438,local_e90);
            local_cdc = local_e8c;
          }
          if ((iVar4 == 0) && ((local_cdc & 0xf000) == 0x4000)) {
            *param_3 = 2;
          }
        }
        else {
          do {
            pcVar7 = _fgets(local_c48,0x3ff,pFVar17);
            if (pcVar7 == (char *)0x0) goto LAB_100d5b9ae;
            iVar4 = _strncmp(local_c48,"Red Hat ",8);
            if (iVar4 == 0) {
              *param_2 = 0x901;
              goto LAB_100d5b9ae;
            }
            iVar4 = _strncmp(local_c48,"Fedora ",7);
            if (iVar4 == 0) {
              *param_2 = 0x907;
              goto LAB_100d5b9ae;
            }
            iVar4 = _strncmp(local_c48,"CentOS ",7);
          } while (iVar4 != 0);
          *param_2 = 0x90d;
LAB_100d5b9ae:
          _fclose(pFVar17);
          _snprintf(local_848,0x401,"%s/etc/os-release",param_1);
          pFVar17 = _fopen(local_848,"r");
          if (pFVar17 != (FILE *)0x0) {
            if (*param_2 == 0x90d) {
              *param_2 = 0x914;
            }
            else if (*param_2 == 0x901) {
              *param_2 = 0x913;
            }
            _fclose(pFVar17);
          }
          *param_3 = 1;
          _snprintf(local_438,0x400,"%s/lib64",param_1);
          iVar4 = _stat_INODE64(local_438,local_f20);
          if ((iVar4 == 0) && ((local_f1c & 0xf000) == 0x4000)) {
            *param_3 = 2;
          }
        }
      }
      else {
        local_1200.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_1208.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        if (1 < *(int *)QVar24.field0_0x0 + 1U) {
          LOCK();
          *(int *)QVar24.field0_0x0 = *(int *)QVar24.field0_0x0 + 1;
          local_c49 = *(int *)QVar24.field0_0x0 != 0;
          UNLOCK();
        }
        local_1040 = (int *)puVar2;
        pQVar8 = (QArrayData *)QString::fromAscii_helper("software",8);
        local_1048 = pQVar8;
        FUN_1000341d0(&local_1040,&local_1048);
        pQVar9 = (QArrayData *)QString::fromAscii_helper("SOFTWARE",8);
        local_1050 = pQVar9;
        FUN_1000341d0(&local_1040,&local_1050);
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_c49 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a2e4;
          }
          QArrayData::deallocate(pQVar9,2,8);
        }
LAB_100d5a2e4:
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_c49 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a319;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_100d5a319:
        local_1058 = (int *)puVar2;
        pQVar8 = (QArrayData *)QString::fromAscii_helper("system",6);
        local_1060 = pQVar8;
        FUN_1000341d0(&local_1058,&local_1060);
        pQVar9 = (QArrayData *)QString::fromAscii_helper("SYSTEM",6);
        local_1068 = pQVar9;
        FUN_1000341d0(&local_1058,&local_1068);
        if (*(int *)pQVar9 != -1) {
          if (*(int *)pQVar9 != 0) {
            LOCK();
            *(int *)pQVar9 = *(int *)pQVar9 + -1;
            local_c49 = *(int *)pQVar9 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a3b3;
          }
          QArrayData::deallocate(pQVar9,2,8);
        }
LAB_100d5a3b3:
        if (*(int *)pQVar8 != -1) {
          if (*(int *)pQVar8 != 0) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_c49 = *(int *)pQVar8 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a3e8;
          }
          QArrayData::deallocate(pQVar8,2,8);
        }
LAB_100d5a3e8:
        if (1 < *(int *)QVar24.field0_0x0 + 1U) {
          LOCK();
          *(int *)QVar24.field0_0x0 = *(int *)QVar24.field0_0x0 + 1;
          local_c49 = *(int *)QVar24.field0_0x0 != 0;
          UNLOCK();
        }
        local_1080 = local_1040;
        local_1078 = (QArrayData *)QVar24.field0_0x0;
        if (*local_1040 != -1) {
          if (*local_1040 == 0) {
            QListData::detach((int)&local_1080);
            iVar4 = local_1080[2];
            if (iVar4 != local_1080[3]) {
              piVar6 = local_1040 + (long)local_1040[2] * 2 + 4;
              piVar18 = local_1080 + (long)iVar4 * 2 + 4;
              lVar14 = (long)local_1080[3] * 8 + (long)iVar4 * -8;
              do {
                piVar1 = *(int **)piVar6;
                *(int **)piVar18 = piVar1;
                if (1 < *piVar1 + 1U) {
                  LOCK();
                  *piVar1 = *piVar1 + 1;
                  local_c49 = *piVar1 != 0;
                  UNLOCK();
                }
                piVar18 = piVar18 + 2;
                piVar6 = piVar6 + 2;
                lVar14 = lVar14 + -8;
              } while (lVar14 != 0);
            }
          }
          else {
            LOCK();
            *local_1040 = *local_1040 + 1;
            local_c49 = *local_1040 != 0;
            UNLOCK();
          }
        }
        FUN_100d61160(&local_1070,&local_1078,&local_1080);
        QString::operator=(&local_1200,&local_1070);
        if (*(int *)local_1070.field0_0x0 != -1) {
          if (*(int *)local_1070.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1070.field0_0x0 = *(int *)local_1070.field0_0x0 + -1;
            local_c49 = *(int *)local_1070.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a4fe;
          }
          QArrayData::deallocate((QArrayData *)local_1070.field0_0x0,2,8);
        }
LAB_100d5a4fe:
        FUN_100039a80(&local_1080);
        if (*(int *)local_1078 != -1) {
          if (*(int *)local_1078 != 0) {
            LOCK();
            *(int *)local_1078 = *(int *)local_1078 + -1;
            local_c49 = *(int *)local_1078 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a53f;
          }
          QArrayData::deallocate(local_1078,2,8);
        }
LAB_100d5a53f:
        if (*(int *)(local_1200.field0_0x0 + 4) == 0) {
          bVar25 = false;
        }
        else {
          if (1 < *(int *)QVar24.field0_0x0 + 1U) {
            LOCK();
            *(int *)QVar24.field0_0x0 = *(int *)QVar24.field0_0x0 + 1;
            local_c49 = *(int *)QVar24.field0_0x0 != 0;
            UNLOCK();
          }
          local_1098 = local_1058;
          local_1090 = (QArrayData *)QVar24.field0_0x0;
          if (*local_1058 != -1) {
            if (*local_1058 == 0) {
              QListData::detach((int)&local_1098);
              iVar4 = local_1098[2];
              if (iVar4 != local_1098[3]) {
                piVar6 = local_1058 + (long)local_1058[2] * 2 + 4;
                piVar18 = local_1098 + (long)iVar4 * 2 + 4;
                lVar14 = (long)local_1098[3] * 8 + (long)iVar4 * -8;
                do {
                  piVar1 = *(int **)piVar6;
                  *(int **)piVar18 = piVar1;
                  if (1 < *piVar1 + 1U) {
                    LOCK();
                    *piVar1 = *piVar1 + 1;
                    local_c49 = *piVar1 != 0;
                    UNLOCK();
                  }
                  piVar18 = piVar18 + 2;
                  piVar6 = piVar6 + 2;
                  lVar14 = lVar14 + -8;
                } while (lVar14 != 0);
              }
            }
            else {
              LOCK();
              *local_1058 = *local_1058 + 1;
              local_c49 = *local_1058 != 0;
              UNLOCK();
            }
          }
          FUN_100d61160(&local_1088,&local_1090,&local_1098);
          QString::operator=(&local_1208,&local_1088);
          if (*(int *)local_1088.field0_0x0 != -1) {
            if (*(int *)local_1088.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1088.field0_0x0 = *(int *)local_1088.field0_0x0 + -1;
              local_c49 = *(int *)local_1088.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a675;
            }
            QArrayData::deallocate((QArrayData *)local_1088.field0_0x0,2,8);
          }
LAB_100d5a675:
          FUN_100039a80(&local_1098);
          if (*(int *)local_1090 != -1) {
            if (*(int *)local_1090 != 0) {
              LOCK();
              *(int *)local_1090 = *(int *)local_1090 + -1;
              local_c49 = *(int *)local_1090 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a6b6;
            }
            QArrayData::deallocate(local_1090,2,8);
          }
LAB_100d5a6b6:
          bVar25 = *(int *)(local_1208.field0_0x0 + 4) != 0;
        }
        FUN_100039a80(&local_1058);
        FUN_100039a80(&local_1040);
        if (*(int *)QVar24.field0_0x0 != -1) {
          if (*(int *)QVar24.field0_0x0 != 0) {
            LOCK();
            *(int *)QVar24.field0_0x0 = *(int *)QVar24.field0_0x0 + -1;
            local_c49 = *(int *)QVar24.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5a70f;
          }
          QArrayData::deallocate((QArrayData *)QVar24.field0_0x0,2,8);
        }
LAB_100d5a70f:
        QVar3.field0_0x0 = local_1208.field0_0x0;
        bVar26 = false;
        if (bVar25) {
          local_1210 = (QArrayData *)local_1200.field0_0x0;
          if (1 < *(int *)local_1200.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1200.field0_0x0 = *(int *)local_1200.field0_0x0 + 1;
            local_c49 = *(int *)local_1200.field0_0x0 != 0;
            UNLOCK();
          }
          if (1 < *(int *)local_1208.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1208.field0_0x0 = *(int *)local_1208.field0_0x0 + 1;
            local_c49 = *(int *)local_1208.field0_0x0 != 0;
            UNLOCK();
          }
          plVar15 = operator_new(0x18);
          FUN_100d6a4e0(plVar15,&local_1210,0x200);
          local_1238 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
          bVar25 = local_1238 == (long *)0x0;
          if (bVar25) {
            plVar16 = (long *)0x0;
            (**(code **)(*plVar15 + 8))(plVar15);
            local_1238 = (long *)0x0;
          }
          else {
            *(undefined4 *)(local_1238 + 1) = 1;
            local_1238[2] = (long)plVar15;
            *local_1238 = (long)&PTR_FUN_10230fa10;
            plVar16 = plVar15;
          }
          local_fd8 = (QArrayData *)
                      QString::fromAscii_helper("Microsoft\\Windows NT\\CurrentVersion",0x23);
          local_fe0 = (QArrayData *)QString::fromAscii_helper("CurrentMajorVersionNumber",0x19);
          iVar4 = FUN_100d6e440(plVar16,&local_fd8,&local_fe0,&local_fcc);
          if (*(int *)local_fe0 != -1) {
            if (*(int *)local_fe0 != 0) {
              LOCK();
              *(int *)local_fe0 = *(int *)local_fe0 + -1;
              local_c49 = *(int *)local_fe0 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a86b;
            }
            QArrayData::deallocate(local_fe0,2,8);
          }
LAB_100d5a86b:
          if (*(int *)local_fd8 != -1) {
            if (*(int *)local_fd8 != 0) {
              LOCK();
              *(int *)local_fd8 = *(int *)local_fd8 + -1;
              local_c49 = *(int *)local_fd8 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a8a7;
            }
            QArrayData::deallocate(local_fd8,2,8);
          }
LAB_100d5a8a7:
          lVar14 = 0;
          if (!bVar25) {
            lVar14 = local_1238[2];
          }
          local_ff0 = (QArrayData *)
                      QString::fromAscii_helper("Microsoft\\Windows NT\\CurrentVersion",0x23);
          local_ff8 = (QArrayData *)QString::fromAscii_helper("CurrentMinorVersionNumber",0x19);
          iVar5 = FUN_100d6e440(lVar14,&local_ff0,&local_ff8,&local_fe4);
          if (*(int *)local_ff8 != -1) {
            if (*(int *)local_ff8 != 0) {
              LOCK();
              *(int *)local_ff8 = *(int *)local_ff8 + -1;
              local_c49 = *(int *)local_ff8 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a944;
            }
            QArrayData::deallocate(local_ff8,2,8);
          }
LAB_100d5a944:
          if (*(int *)local_ff0 != -1) {
            if (*(int *)local_ff0 != 0) {
              LOCK();
              *(int *)local_ff0 = *(int *)local_ff0 + -1;
              local_c49 = *(int *)local_ff0 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5a980;
            }
            QArrayData::deallocate(local_ff0,2,8);
          }
LAB_100d5a980:
          if ((iVar4 == 0x8000000) && (iVar5 == 0x8000000)) {
LAB_100d5ac25:
            local_1038 = (QArrayData *)QVar3.field0_0x0;
            if (1 < *(int *)QVar3.field0_0x0 + 1U) {
              LOCK();
              *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + 1;
              local_c49 = *(int *)QVar3.field0_0x0 != 0;
              UNLOCK();
            }
            plVar15 = operator_new(0x18);
            FUN_100d6a4e0(plVar15,&local_1038,0x200);
            plVar16 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
            bVar26 = plVar16 == (long *)0x0;
            if (bVar26) {
              plVar22 = (long *)0x0;
              (**(code **)(*plVar15 + 8))(plVar15);
              plVar16 = (long *)0x0;
            }
            else {
              *(undefined4 *)(plVar16 + 1) = 1;
              plVar16[2] = (long)plVar15;
              *plVar16 = (long)&PTR_FUN_10230fa10;
              plVar22 = plVar15;
            }
            local_f80 = (QArrayData *)QString::fromAscii_helper("Select",6);
            local_f88 = (QArrayData *)QString::fromAscii_helper("Default",7);
            iVar4 = FUN_100d6e440(plVar22,&local_f80,&local_f88,&local_f74);
            if (*(int *)local_f88 != -1) {
              if (*(int *)local_f88 != 0) {
                LOCK();
                *(int *)local_f88 = *(int *)local_f88 + -1;
                local_c49 = *(int *)local_f88 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5ad44;
              }
              QArrayData::deallocate(local_f88,2,8);
            }
LAB_100d5ad44:
            if (*(int *)local_f80 != -1) {
              if (*(int *)local_f80 != 0) {
                LOCK();
                *(int *)local_f80 = *(int *)local_f80 + -1;
                local_c49 = *(int *)local_f80 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5ad80;
              }
              QArrayData::deallocate(local_f80,2,8);
            }
LAB_100d5ad80:
            cVar20 = '\0';
            if (iVar4 == 0x8000000) {
              local_f90 = (QArrayData *)PTR_shared_null_1021e1288;
              local_f94 = 0;
              lVar14 = 0;
              if (!bVar26) {
                lVar14 = plVar16[2];
              }
              local_fa8 = (QArrayData *)
                          QString::fromAscii_helper("ControlSet00%1\\Control\\ProductOptions",0x25);
              QString::arg(&local_fa0,&local_fa8,local_f74,0,10,0x20);
              local_fb0 = (QArrayData *)QString::fromAscii_helper("ProductType",0xb);
              iVar4 = FUN_100d6e0a0(lVar14,&local_fa0,&local_fb0,&local_f94,&local_f90,0xffffffff);
              if (*(int *)local_fb0 != -1) {
                if (*(int *)local_fb0 != 0) {
                  LOCK();
                  *(int *)local_fb0 = *(int *)local_fb0 + -1;
                  local_c49 = *(int *)local_fb0 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5ae71;
                }
                QArrayData::deallocate(local_fb0,2,8);
              }
LAB_100d5ae71:
              if (*(int *)local_fa0 != -1) {
                if (*(int *)local_fa0 != 0) {
                  LOCK();
                  *(int *)local_fa0 = *(int *)local_fa0 + -1;
                  local_c49 = *(int *)local_fa0 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5aead;
                }
                QArrayData::deallocate(local_fa0,2,8);
              }
LAB_100d5aead:
              if (*(int *)local_fa8 != -1) {
                if (*(int *)local_fa8 != 0) {
                  LOCK();
                  *(int *)local_fa8 = *(int *)local_fa8 + -1;
                  local_c49 = *(int *)local_fa8 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5aee9;
                }
                QArrayData::deallocate(local_fa8,2,8);
              }
LAB_100d5aee9:
              cVar20 = '\x01';
              if (iVar4 == 0x8000000) {
                local_fb8 = (QArrayData *)QString::fromAscii_helper("WinNT",5);
                iVar4 = QString::compare(&local_f90,&local_fb8,0);
                if (*(int *)local_fb8 != -1) {
                  if (*(int *)local_fb8 != 0) {
                    LOCK();
                    *(int *)local_fb8 = *(int *)local_fb8 + -1;
                    local_c49 = *(int *)local_fb8 != 0;
                    UNLOCK();
                    if ((bool)local_c49) goto LAB_100d5af66;
                  }
                  QArrayData::deallocate(local_fb8,2,8);
                }
LAB_100d5af66:
                if (iVar4 != 0) {
                  local_fc0 = (QArrayData *)QString::fromAscii_helper("ServerNT",8);
                  iVar4 = QString::compare(&local_f90,&local_fc0,0);
                  if (*(int *)local_fc0 != -1) {
                    if (*(int *)local_fc0 != 0) {
                      LOCK();
                      *(int *)local_fc0 = *(int *)local_fc0 + -1;
                      local_c49 = *(int *)local_fc0 != 0;
                      UNLOCK();
                      if ((bool)local_c49) goto LAB_100d5afd9;
                    }
                    QArrayData::deallocate(local_fc0,2,8);
                  }
LAB_100d5afd9:
                  cVar20 = '\x03';
                  if (iVar4 != 0) {
                    local_fc8 = (QArrayData *)QString::fromAscii_helper("LanmanNT",8);
                    iVar4 = QString::compare(&local_f90,&local_fc8,0);
                    if (*(int *)local_fc8 != -1) {
                      if (*(int *)local_fc8 != 0) {
                        LOCK();
                        *(int *)local_fc8 = *(int *)local_fc8 + -1;
                        local_c49 = *(int *)local_fc8 != 0;
                        UNLOCK();
                        if ((bool)local_c49) goto LAB_100d5b04e;
                      }
                      QArrayData::deallocate(local_fc8,2,8);
                    }
LAB_100d5b04e:
                    cVar20 = (iVar4 == 0) * '\x02';
                  }
                }
              }
              if (*(int *)local_f90 != -1) {
                if (*(int *)local_f90 != 0) {
                  LOCK();
                  *(int *)local_f90 = *(int *)local_f90 + -1;
                  local_c49 = *(int *)local_f90 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5b096;
                }
                QArrayData::deallocate(local_f90,2,8);
              }
            }
LAB_100d5b096:
            if (!bVar26) {
              LOCK();
              plVar15 = plVar16 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            if (*(int *)local_1038 != -1) {
              if (*(int *)local_1038 != 0) {
                LOCK();
                *(int *)local_1038 = *(int *)local_1038 + -1;
                local_c49 = *(int *)local_1038 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5b0fb;
              }
              QArrayData::deallocate(local_1038,2,8);
            }
LAB_100d5b0fb:
            iVar4 = 0xff;
            if (((cVar20 != '\0') && ((local_fcc != 5 || (iVar4 = 0x806, local_fe4 != 0)))) &&
               ((iVar4 = 0x807, local_fcc != 5 || (local_fe4 != 1)))) {
              if ((cVar20 != '\x01') || (local_fe4 != 2 || local_fcc != 5)) {
                bVar26 = cVar20 == '\x01';
                iVar4 = 0x808;
                if ((local_fe4 != 2 || local_fcc != 5) || bVar26) {
                  if (((cVar20 != '\x01') || (iVar4 = 0x809, local_fcc != 6 || local_fe4 != 0)) &&
                     (iVar4 = 0x80a, (1 < local_fe4 || local_fcc != 6) || bVar26)) {
                    if ((cVar20 != '\x01') || (iVar4 = 0x80b, local_fcc != 6 || local_fe4 != 1)) {
                      if (((cVar20 != '\x01') || (iVar4 = 0x80c, local_fcc != 6 || local_fe4 != 2))
                         && (iVar4 = 0x80d,
                            ((local_fe4 & 0xfffffffe) != 2 || local_fcc != 6) || bVar26)) {
                        if ((cVar20 != '\x01') || (iVar4 = 0x80e, local_fcc != 6 || local_fe4 != 3))
                        {
                          if ((cVar20 != '\x01') ||
                             (iVar4 = 0x80f, local_fcc != 10 || local_fe4 != 0)) {
                            iVar4 = 0x810;
                            if (local_fcc != 10 || local_fe4 != 0) {
                              iVar4 = 0xff;
                            }
                            if (bVar26) {
                              iVar4 = 0xff;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_1000 = (QArrayData *)PTR_shared_null_1021e1288;
            local_1004 = 0;
            lVar14 = 0;
            if (!bVar25) {
              lVar14 = local_1238[2];
            }
            local_1010 = (QArrayData *)
                         QString::fromAscii_helper("Microsoft\\Windows NT\\CurrentVersion",0x23);
            local_1018 = (QArrayData *)QString::fromAscii_helper("CurrentVersion",0xe);
            iVar4 = FUN_100d6e0a0(lVar14,&local_1010,&local_1018,&local_1004,&local_1000,0xffffffff)
            ;
            if (*(int *)local_1018 != -1) {
              if (*(int *)local_1018 != 0) {
                LOCK();
                *(int *)local_1018 = *(int *)local_1018 + -1;
                local_c49 = *(int *)local_1018 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5aa58;
              }
              QArrayData::deallocate(local_1018,2,8);
            }
LAB_100d5aa58:
            if (*(int *)local_1010 != -1) {
              if (*(int *)local_1010 != 0) {
                LOCK();
                *(int *)local_1010 = *(int *)local_1010 + -1;
                local_c49 = *(int *)local_1010 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5aa94;
              }
              QArrayData::deallocate(local_1010,2,8);
            }
LAB_100d5aa94:
            bVar23 = 1;
            if (iVar4 == 0x8000000) {
              local_1028 = (QArrayData *)QString::fromAscii_helper(".",1);
              QString::split(&local_1020,&local_1000,&local_1028,0,1);
              if (*(int *)local_1028 != -1) {
                if (*(int *)local_1028 != 0) {
                  LOCK();
                  *(int *)local_1028 = *(int *)local_1028 + -1;
                  local_c49 = *(int *)local_1028 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5ab1d;
                }
                QArrayData::deallocate(local_1028,2,8);
              }
LAB_100d5ab1d:
              uVar19 = local_1020[2];
              bVar23 = 1;
              if (local_1020[3] - uVar19 == 2) {
                if (1 < *local_1020) {
                  FUN_100036c40(&local_1020,local_1020[1]);
                  uVar19 = local_1020[2];
                }
                local_fcc = QString::toInt((bool *)(local_1020 + (long)(int)uVar19 * 2 + 4),
                                           (int)&local_1029);
                if (local_1029 != 0) {
                  if (1 < *local_1020) {
                    FUN_100036c40(&local_1020,local_1020[1]);
                  }
                  local_fe4 = QString::toInt((bool *)(local_1020 + (long)(int)local_1020[2] * 2 + 6)
                                             ,(int)&local_1029);
                  bVar23 = local_1029 ^ 1;
                }
              }
              FUN_100039a80(&local_1020);
            }
            if (*(int *)local_1000 != -1) {
              if (*(int *)local_1000 != 0) {
                LOCK();
                *(int *)local_1000 = *(int *)local_1000 + -1;
                local_c49 = *(int *)local_1000 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5ac17;
              }
              QArrayData::deallocate(local_1000,2,8);
            }
LAB_100d5ac17:
            iVar4 = 0xff;
            if (bVar23 == 0) goto LAB_100d5ac25;
          }
          if (!bVar25) {
            LOCK();
            plVar15 = local_1238 + 1;
            lVar14 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)(*local_1238 + 0x10))();
            }
          }
          *param_2 = iVar4;
          if (*(int *)QVar3.field0_0x0 != -1) {
            if (*(int *)QVar3.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
              local_c49 = *(int *)QVar3.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5b2c4;
            }
            QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
          }
LAB_100d5b2c4:
          if (*(int *)local_1210 != -1) {
            if (*(int *)local_1210 != 0) {
              LOCK();
              *(int *)local_1210 = *(int *)local_1210 + -1;
              local_c49 = *(int *)local_1210 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5b300;
            }
            QArrayData::deallocate(local_1210,2,8);
          }
LAB_100d5b300:
          local_1218 = (QArrayData *)local_1208.field0_0x0;
          if (1 < *(int *)local_1208.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_1208.field0_0x0 = *(int *)local_1208.field0_0x0 + 1;
            local_c49 = *(int *)local_1208.field0_0x0 != 0;
            UNLOCK();
          }
          plVar15 = operator_new(0x18);
          FUN_100d6a4e0(plVar15,&local_1218,0x200);
          plVar16 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
          bVar25 = plVar16 == (long *)0x0;
          if (bVar25) {
            plVar22 = (long *)0x0;
            (**(code **)(*plVar15 + 8))(plVar15);
            plVar16 = (long *)0x0;
          }
          else {
            *(undefined4 *)(plVar16 + 1) = 1;
            plVar16[2] = (long)plVar15;
            *plVar16 = (long)&PTR_FUN_10230fa10;
            plVar22 = plVar15;
          }
          local_f30 = (QArrayData *)QString::fromAscii_helper("Select",6);
          local_f38 = (QArrayData *)QString::fromAscii_helper("Current",7);
          iVar4 = FUN_100d6e440(plVar22,&local_f30,&local_f38,&local_f24);
          if (*(int *)local_f38 != -1) {
            if (*(int *)local_f38 != 0) {
              LOCK();
              *(int *)local_f38 = *(int *)local_f38 + -1;
              local_c49 = *(int *)local_f38 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5b41c;
            }
            QArrayData::deallocate(local_f38,2,8);
          }
LAB_100d5b41c:
          if (*(int *)local_f30 != -1) {
            if (*(int *)local_f30 != 0) {
              LOCK();
              *(int *)local_f30 = *(int *)local_f30 + -1;
              local_c49 = *(int *)local_f30 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5b458;
            }
            QArrayData::deallocate(local_f30,2,8);
          }
LAB_100d5b458:
          uVar19 = 0;
          if (iVar4 == 0x8000000) {
            local_f40 = (QArrayData *)PTR_shared_null_1021e1288;
            local_f44 = 0;
            lVar14 = 0;
            if (!bVar25) {
              lVar14 = plVar16[2];
            }
            local_f58 = (QArrayData *)
                        QString::fromAscii_helper
                                  ("ControlSet00%1\\Control\\Session Manager\\Environment",0x32);
            QString::arg(&local_f50,&local_f58,local_f24,0,10,0x20);
            local_f60 = (QArrayData *)QString::fromAscii_helper("PROCESSOR_ARCHITECTURE",0x16);
            iVar4 = FUN_100d6e0a0(lVar14,&local_f50,&local_f60,&local_f44,&local_f40,0xffffffff);
            if (*(int *)local_f60 != -1) {
              if (*(int *)local_f60 != 0) {
                LOCK();
                *(int *)local_f60 = *(int *)local_f60 + -1;
                local_c49 = *(int *)local_f60 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5b54a;
              }
              QArrayData::deallocate(local_f60,2,8);
            }
LAB_100d5b54a:
            if (*(int *)local_f50 != -1) {
              if (*(int *)local_f50 != 0) {
                LOCK();
                *(int *)local_f50 = *(int *)local_f50 + -1;
                local_c49 = *(int *)local_f50 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5b586;
              }
              QArrayData::deallocate(local_f50,2,8);
            }
LAB_100d5b586:
            if (*(int *)local_f58 != -1) {
              if (*(int *)local_f58 != 0) {
                LOCK();
                *(int *)local_f58 = *(int *)local_f58 + -1;
                local_c49 = *(int *)local_f58 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5b5c2;
              }
              QArrayData::deallocate(local_f58,2,8);
            }
LAB_100d5b5c2:
            uVar19 = 0;
            if (iVar4 == 0x8000000) {
              local_f68 = (QArrayData *)QString::fromAscii_helper("64",2);
              iVar4 = QString::indexOf(&local_f40,&local_f68,0,1);
              if (*(int *)local_f68 != -1) {
                if (*(int *)local_f68 != 0) {
                  LOCK();
                  *(int *)local_f68 = *(int *)local_f68 + -1;
                  local_c49 = *(int *)local_f68 != 0;
                  UNLOCK();
                  if ((bool)local_c49) goto LAB_100d5b642;
                }
                QArrayData::deallocate(local_f68,2,8);
              }
LAB_100d5b642:
              uVar19 = 2;
              if (iVar4 == -1) {
                local_f70 = (QArrayData *)QString::fromAscii_helper("86",2);
                iVar4 = QString::indexOf(&local_f40,&local_f70,0,1);
                if (*(int *)local_f70 != -1) {
                  if (*(int *)local_f70 != 0) {
                    LOCK();
                    *(int *)local_f70 = *(int *)local_f70 + -1;
                    local_c49 = *(int *)local_f70 != 0;
                    UNLOCK();
                    if ((bool)local_c49) goto LAB_100d5b6bd;
                  }
                  QArrayData::deallocate(local_f70,2,8);
                }
LAB_100d5b6bd:
                uVar19 = (uint)(iVar4 != -1);
              }
            }
            if (*(int *)local_f40 != -1) {
              if (*(int *)local_f40 != 0) {
                LOCK();
                *(int *)local_f40 = *(int *)local_f40 + -1;
                local_c49 = *(int *)local_f40 != 0;
                UNLOCK();
                if ((bool)local_c49) goto LAB_100d5b702;
              }
              QArrayData::deallocate(local_f40,2,8);
            }
          }
LAB_100d5b702:
          if (!bVar25) {
            LOCK();
            plVar15 = plVar16 + 1;
            lVar14 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          *param_3 = uVar19;
          bVar26 = true;
          if (*(int *)local_1218 != -1) {
            if (*(int *)local_1218 != 0) {
              LOCK();
              *(int *)local_1218 = *(int *)local_1218 + -1;
              local_c49 = *(int *)local_1218 != 0;
              UNLOCK();
              if ((bool)local_c49) goto LAB_100d5b776;
            }
            QArrayData::deallocate(local_1218,2,8);
          }
        }
LAB_100d5b776:
        if (*(int *)local_1208.field0_0x0 != -1) {
          if (*(int *)local_1208.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1208.field0_0x0 = *(int *)local_1208.field0_0x0 + -1;
            local_c49 = *(int *)local_1208.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5b7b2;
          }
          QArrayData::deallocate((QArrayData *)local_1208.field0_0x0,2,8);
        }
LAB_100d5b7b2:
        if (*(int *)local_1200.field0_0x0 != -1) {
          if (*(int *)local_1200.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1200.field0_0x0 = *(int *)local_1200.field0_0x0 + -1;
            local_c49 = *(int *)local_1200.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_c49) goto LAB_100d5b7ee;
          }
          QArrayData::deallocate((QArrayData *)local_1200.field0_0x0,2,8);
        }
LAB_100d5b7ee:
        if (!bVar26) goto LAB_100d5b7f7;
      }
LAB_100d5bcc2:
      uVar21 = 0;
      if (*(int *)QVar24.field0_0x0 != -1) {
        if (*(int *)QVar24.field0_0x0 != 0) {
          LOCK();
          *(int *)QVar24.field0_0x0 = *(int *)QVar24.field0_0x0 + -1;
          local_c49 = *(int *)QVar24.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_c49) goto LAB_100d5bcf8;
        }
        QArrayData::deallocate((QArrayData *)QVar24.field0_0x0,2,8);
      }
LAB_100d5bcf8:
      lVar14 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100d5bd02;
    }
    FUN_100df99c0("DetectOS","DetectOS",0,"get_os_type - %s is not a directory",param_1);
  }
  else {
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    FUN_100df99c0("DetectOS","DetectOS",0,"get_os_type - can\'t stat %s: %s",param_1,pcVar7);
  }
  uVar21 = 1;
LAB_100d5bd02:
  if (lVar14 == local_38) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

