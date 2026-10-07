
undefined4
FUN_100489150(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,int param_5,
             uint param_6,long *param_7)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  char *pcVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  int *piVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  bool bVar12;
  long *local_1a0;
  int *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  undefined *local_68;
  undefined *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  piVar9 = (int *)PTR_shared_null_100ba20d0;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_60 = PTR_shared_null_100ba2188;
  local_68 = PTR_shared_null_100ba2188;
  if (param_5 == 7) {
    QString::fromUtf8_helper((char *)&local_40,0xa36af3);
    QString::operator=(&local_58,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100489553;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100489553:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("-c",2);
    local_160 = pQVar4;
    FUN_10000c490(&local_60,&local_160);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004895a9;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1004895a9:
    pQVar4 = (QArrayData *)
             QString::fromAscii_helper
                       ("uid=501\nget_uid()\n{\n\tfor u in `dscl . -list users`; do\n\t\tx=`dscl . -read /Users/$u UniqueID | sed \'s/UniqueID: //\'`\n\t\tif echo \"$x\" | grep \'^[0-9]\'; then\n\t\t\t[ $x -ge \"$uid\" ] && let uid++\n\t\tfi\n\tdone\n}\nadduser_dscl()\n{\n\tget_uid\n\tdscl . -create \"/Users/$USER_NAME\" || return 1\n\tdscl . -create \"/Users/$USER_NAME\" UserShell /bin/bash || return 1\n\tdscl . -create \"/Users/$USER_NAME\" UniqueID \"$uid\" || return 1\n\tdscl . -create \"/Users/$USER_NAME\" NFSHomeDirectory \"/Users/$USER_NAME\" || return 1\n\tcp -r \"/System/Library/User Template/English.lproj\" \"/Users/$USER_NAME\" || return 1\n\tchown -R \"$USER_NAME:staff\" \"/Users/$USER_NAME\"\n}\nif [ -x /usr/bin/dscl ]; then\n\tif ! dscl . -read \"/Users/$USER_NAME\"; then\n\t\tadduser_dscl\n\t\tif [ $? -ne 0 ]; then\n\t\t\tdscl . -delete \"/Users/$USER_NAME\"\n\t\t\texit 1\n\t\tfi\n\tfi\nfi\necho -e \"${USER_PASSWD}\n${USER_PASSWD}\n\" | passwd \"${USER_NAME}\" || exit 1\nLOGIN_CHAIN=\"/Users/${USER_NAME}/Library/Keychains/login.keychain\" \nif [ ! -e \"${LOGIN_CHAIN}\" ]; then\n  LOGIN_CHAIN=\"/var/${USER_NAME}/Library/Keychains/login.keychain\" \nfi\nsecurity delete-keychain \"${LOGIN_CHAIN}\" && security create-keychain -p \"${USER_PASSWD}\" \"${LOGIN_CHAIN}\" \nexit 0"
                        ,0x48c);
    local_168 = pQVar4;
    FUN_10000c490(&local_60,&local_168);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004895ff;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1004895ff:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("PATH=/bin:/sbin:/usr/bin:/usr/sbin",0x22);
    local_170 = pQVar4;
    FUN_10000c490(&local_68,&local_170);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100489655;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100489655:
    local_178 = (QArrayData *)piVar9;
    bVar12 = *(int *)(*param_3 + 4) == 0;
    if (bVar12) {
      pcVar6 = "root";
    }
    else {
      QString::toUtf8();
      pcVar6 = (char *)(local_180 + *(long *)(local_180 + 0x10));
    }
    uVar5 = QString::sprintf((char *)&local_178,"USER_NAME=%s",pcVar6);
    FUN_10000c490(&local_68,uVar5);
    if ((!bVar12) && (*(int *)local_180 != -1)) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100489bab;
      }
      QArrayData::deallocate(local_180,1,8);
    }
LAB_100489bab:
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100489be1;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100489be1:
    local_188 = (QArrayData *)piVar9;
    QString::toUtf8();
    uVar5 = QString::sprintf((char *)&local_188,"USER_PASSWD=%s",
                             local_190 + *(long *)(local_190 + 0x10));
    FUN_10000c490(&local_68,uVar5);
    if (*(int *)local_190 != -1) {
      if (*(int *)local_190 != 0) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + -1;
        local_31 = *(int *)local_190 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100489c59;
      }
      QArrayData::deallocate(local_190,1,8);
    }
LAB_100489c59:
    uVar5 = 0x1800;
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_31 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048a024;
      }
      QArrayData::deallocate(local_188,2,8);
    }
LAB_10048a024:
    param_7 = (long *)*param_7;
    if (param_7 != (long *)0x0) {
      LOCK();
      *(int *)(param_7 + 1) = (int)param_7[1] + 1;
      UNLOCK();
    }
    local_1a0 = param_7;
    local_198 = piVar9;
    uVar3 = FUN_100486cb0(param_1,param_2,&local_58,&local_60,&local_68,uVar5,&local_1a0,&local_198,
                          FUN_1004887a0,2);
    if (param_7 != (long *)0x0) {
      LOCK();
      plVar1 = param_7 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*param_7 + 0x10))(param_7);
      }
    }
    if (*piVar9 != -1) {
      if (*piVar9 != 0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10048a0eb;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
    }
  }
  else {
    if (param_5 == 8) {
      QString::fromUtf8_helper((char *)&local_48,0x9f65b5);
      QString::operator=(&local_58,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004891f8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_1004891f8:
      pQVar4 = (QArrayData *)QString::fromAscii_helper("/C",2);
      local_b0 = pQVar4;
      FUN_10000c490(&local_60,&local_b0);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10048924e;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_10048924e:
      if (*(uint *)(param_1 + 0x40) < 0x10002) {
        if (*(int *)(*param_3 + 4) == 0) {
          local_b8 = (QArrayData *)piVar9;
          QString::toUtf8();
          pQVar4 = local_c0;
          lVar2 = *(long *)(local_c0 + 0x10);
          QString::toUtf8();
          uVar5 = QString::sprintf((char *)&local_b8,
                                   "prl_userpasswd \"\" \"%s\" || net user Administrator %s",
                                   pQVar4 + lVar2,local_c8 + *(long *)(local_c8 + 0x10));
          FUN_10000c490(&local_60,uVar5);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489d3a;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
LAB_100489d3a:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489d70;
            }
            QArrayData::deallocate(local_c0,1,8);
          }
LAB_100489d70:
          uVar5 = 0x1800;
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048a024;
            }
            QArrayData::deallocate(local_b8,2,8);
          }
        }
        else {
          local_d0 = (QArrayData *)piVar9;
          QString::toUtf8();
          pQVar7 = local_d8 + *(long *)(local_d8 + 0x10);
          QString::toUtf8();
          pQVar10 = local_e0 + *(long *)(local_e0 + 0x10);
          QString::toUtf8();
          pQVar11 = local_e8 + *(long *)(local_e8 + 0x10);
          QString::toUtf8();
          pQVar8 = local_f0 + *(long *)(local_f0 + 0x10);
          QString::toUtf8();
          pQVar4 = local_f8;
          lVar2 = *(long *)(local_f8 + 0x10);
          QString::toUtf8();
          uVar5 = QString::sprintf((char *)&local_d0,
                                   "prl_userpasswd  \"%s\" \"%s\" || net user %s %s || net user %s %s /ADD"
                                   ,pQVar7,pQVar10,pQVar11,pQVar8,pQVar4 + lVar2,
                                   local_100 + *(long *)(local_100 + 0x10));
          FUN_10000c490(&local_60,uVar5);
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004893a0;
            }
            QArrayData::deallocate(local_100,1,8);
          }
LAB_1004893a0:
          piVar9 = (int *)PTR_shared_null_100ba20d0;
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004893dd;
            }
            QArrayData::deallocate(local_f8,1,8);
          }
LAB_1004893dd:
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489413;
            }
            QArrayData::deallocate(local_f0,1,8);
          }
LAB_100489413:
          if (*(int *)local_e8 != -1) {
            if (*(int *)local_e8 != 0) {
              LOCK();
              *(int *)local_e8 = *(int *)local_e8 + -1;
              local_31 = *(int *)local_e8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489449;
            }
            QArrayData::deallocate(local_e8,1,8);
          }
LAB_100489449:
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048947f;
            }
            QArrayData::deallocate(local_e0,1,8);
          }
LAB_10048947f:
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004894b5;
            }
            QArrayData::deallocate(local_d8,1,8);
          }
LAB_1004894b5:
          uVar5 = 0x1800;
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048a024;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
        }
      }
      else {
        local_108 = (QArrayData *)piVar9;
        QString::toUtf8();
        uVar5 = QString::sprintf((char *)&local_108,"USER_NAME=%s",
                                 local_110 + *(long *)(local_110 + 0x10));
        FUN_10000c490(&local_68,uVar5);
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048988e;
          }
          QArrayData::deallocate(local_110,1,8);
        }
LAB_10048988e:
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            local_31 = *(int *)local_108 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004898c4;
          }
          QArrayData::deallocate(local_108,2,8);
        }
LAB_1004898c4:
        local_118 = (QArrayData *)piVar9;
        QString::toUtf8();
        uVar5 = QString::sprintf((char *)&local_118,"USER_PASSWD=%s",
                                 local_120 + *(long *)(local_120 + 0x10));
        FUN_10000c490(&local_68,uVar5);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048993c;
          }
          QArrayData::deallocate(local_120,1,8);
        }
LAB_10048993c:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100489972;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_100489972:
        if (*(int *)(*param_3 + 4) == 0) {
          local_128 = (QArrayData *)piVar9;
          QString::toUtf8();
          uVar5 = QString::sprintf((char *)&local_128,"prl_userpasswd || net user Administrator %s",
                                   local_130 + *(long *)(local_130 + 0x10));
          FUN_10000c490(&local_60,uVar5);
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_31 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489fe8;
            }
            QArrayData::deallocate(local_130,1,8);
          }
LAB_100489fe8:
          uVar5 = 0x2001800;
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048a024;
            }
            QArrayData::deallocate(local_128,2,8);
          }
        }
        else {
          local_138 = (QArrayData *)piVar9;
          QString::toUtf8();
          pQVar7 = local_140 + *(long *)(local_140 + 0x10);
          QString::toUtf8();
          pQVar8 = local_148 + *(long *)(local_148 + 0x10);
          QString::toUtf8();
          pQVar4 = local_150;
          lVar2 = *(long *)(local_150 + 0x10);
          QString::toUtf8();
          uVar5 = QString::sprintf((char *)&local_138,
                                   "prl_userpasswd || net user %s %s || net user %s %s /ADD",pQVar7,
                                   pQVar8,pQVar4 + lVar2,local_158 + *(long *)(local_158 + 0x10));
          FUN_10000c490(&local_60,uVar5);
          if (*(int *)local_158 != -1) {
            if (*(int *)local_158 != 0) {
              LOCK();
              *(int *)local_158 = *(int *)local_158 + -1;
              local_31 = *(int *)local_158 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489a55;
            }
            QArrayData::deallocate(local_158,1,8);
          }
LAB_100489a55:
          if (*(int *)local_150 != -1) {
            if (*(int *)local_150 != 0) {
              LOCK();
              *(int *)local_150 = *(int *)local_150 + -1;
              local_31 = *(int *)local_150 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489a8b;
            }
            QArrayData::deallocate(local_150,1,8);
          }
LAB_100489a8b:
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_31 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489ac1;
            }
            QArrayData::deallocate(local_148,1,8);
          }
LAB_100489ac1:
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_31 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100489af7;
            }
            QArrayData::deallocate(local_140,1,8);
          }
LAB_100489af7:
          piVar9 = (int *)PTR_shared_null_100ba20d0;
          uVar5 = 0x2001800;
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_31 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048a024;
            }
            QArrayData::deallocate(local_138,2,8);
          }
        }
      }
      goto LAB_10048a024;
    }
    uVar3 = 0x80000008;
    if (param_5 == 9) {
      QString::fromUtf8_helper((char *)&local_50,0xa36af3);
      QString::operator=(&local_58,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004896f3;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_1004896f3:
      pQVar4 = (QArrayData *)QString::fromAscii_helper("-c",2);
      local_70 = pQVar4;
      FUN_10000c490(&local_60,&local_70);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489743;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_100489743:
      pQVar4 = (QArrayData *)
               QString::fromAscii_helper
                         ("if ! grep -q -E \"^${USER_NAME}:\" /etc/passwd; then\n       useradd -m \"${USER_NAME}\" || exit 1\nfi\nif [ ! -z \"$crypted\" ]; then\n\techo \"${USER_NAME}:${USER_PASSWD}\" | chpasswd -e || exit 1\nelse\n\techo \"${USER_PASSWD}\" | passwd --stdin \"${USER_NAME}\"\n\tif [ $? -ne 0 ]; then\n       \techo \"${USER_NAME}:${USER_PASSWD}\" | chpasswd --md5 >/dev/null 2>&1 ||\n               echo \"${USER_NAME}:${USER_PASSWD}\" | chpasswd || exit 1\n\tfi\nfi\n"
                          ,0x1aa);
      local_78 = pQVar4;
      FUN_10000c490(&local_60,&local_78);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489793;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_100489793:
      pQVar4 = (QArrayData *)QString::fromAscii_helper("PATH=/bin:/sbin:/usr/bin:/usr/sbin",0x22);
      local_80 = pQVar4;
      FUN_10000c490(&local_68,&local_80);
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004897e3;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1004897e3:
      local_88 = (QArrayData *)piVar9;
      bVar12 = *(int *)(*param_3 + 4) == 0;
      if (bVar12) {
        pcVar6 = "root";
      }
      else {
        QString::toUtf8();
        pcVar6 = (char *)(local_90 + *(long *)(local_90 + 0x10));
      }
      uVar5 = QString::sprintf((char *)&local_88,"USER_NAME=%s",pcVar6);
      FUN_10000c490(&local_68,uVar5);
      if ((!bVar12) && (*(int *)local_90 != -1)) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489e1a;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100489e1a:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489e4a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100489e4a:
      local_98 = (QArrayData *)piVar9;
      QString::toUtf8();
      uVar5 = QString::sprintf((char *)&local_98,"USER_PASSWD=%s",
                               local_a0 + *(long *)(local_a0 + 0x10));
      FUN_10000c490(&local_68,uVar5);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489ec2;
        }
        QArrayData::deallocate(local_a0,1,8);
      }
LAB_100489ec2:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100489ef8;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100489ef8:
      uVar5 = 0x1800;
      if ((param_6 & 0x800) != 0) {
        pQVar4 = (QArrayData *)QString::fromAscii_helper("crypted=yes",0xb);
        local_a8 = pQVar4;
        FUN_10000c490(&local_68,&local_a8);
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10048a024;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
      goto LAB_10048a024;
    }
  }
LAB_10048a0eb:
  FUN_100013180(&local_68);
  FUN_100013180(&local_60);
  if (*piVar9 != -1) {
    if (*piVar9 != 0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10048a130;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10048a130:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return uVar3;
}

