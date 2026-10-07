
undefined4 FUN_100696020(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char *pcVar3;
  QArrayData *pQVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uid_t uVar8;
  int iVar9;
  size_t sVar10;
  uint *puVar11;
  bool bVar12;
  undefined4 uVar13;
  long lVar14;
  uint *puVar15;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  QArrayData *local_378;
  QArrayData *local_370;
  QArrayData *local_368;
  QArrayData *local_360;
  QArrayData *local_358;
  QString local_350;
  undefined1 local_348 [14];
  int local_33a;
  char *local_32c;
  undefined1 local_318 [518];
  short local_112;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QString local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar1 = (undefined8 *)(param_1 + 0x68);
  FUN_100038db0();
  puVar2 = PTR_shared_null_100ba20d0;
  local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_d0 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(int *)local_d0 + 1U) {
    LOCK();
    *(int *)local_d0 = *(int *)local_d0 + 1;
    local_b9 = *(int *)local_d0 != 0;
    UNLOCK();
  }
  local_d8 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  cVar5 = QString::startsWith(&local_d0,&local_d8,1);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_b9 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1006960f0;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1006960f0:
  if (cVar5 != '\0') {
    local_e0 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
    local_e8 = (QArrayData *)puVar2;
    QString::replace(&local_d0,&local_e0,&local_e8,1);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_b9 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_100696172;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100696172:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_b9 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_b9) goto LAB_1006961ae;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1006961ae:
    if (2 < DAT_1011b55f8) {
      QString::toUtf8();
      pQVar4 = local_f0;
      lVar14 = *(long *)(local_f0 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","dimg",3,"Umount: /dev/ removed from device name %s. Result is %s",
                    pQVar4 + lVar14,local_f8 + *(long *)(local_f8 + 0x10));
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_b9 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_10069625d;
        }
        QArrayData::deallocate(local_f8,1,8);
      }
LAB_10069625d:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_b9 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_100696299;
        }
        QArrayData::deallocate(local_f0,1,8);
      }
    }
  }
LAB_100696299:
  local_100 = (QArrayData *)QString::fromAscii_helper("rdisk",5);
  cVar5 = QString::startsWith(&local_d0,&local_100,1);
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_b9 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100696307;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100696307:
  if (cVar5 == '\0') goto LAB_1006963d6;
  local_108 = (QArrayData *)QString::fromAscii_helper("rdisk",5);
  local_110 = (QArrayData *)QString::fromAscii_helper("disk",4);
  QString::replace(&local_d0,&local_108,&local_110,1);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_b9 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_10069639a;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10069639a:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_b9 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_1006963d6;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006963d6:
  lVar14 = 1;
  do {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    sVar6 = _FSGetVolumeInfo(0,lVar14,&local_112,0x4000,&local_b8,local_318,0);
    if (sVar6 == 0) {
      iVar9 = _FSGetVolumeParms((int)local_112,local_348,0x2c);
      pcVar3 = local_32c;
      if (iVar9 == 0) {
        iVar9 = 0;
        if (local_33a == 0) {
          iVar9 = -1;
          if (local_32c != (char *)0x0) {
            sVar10 = _strlen(local_32c);
            iVar9 = (int)sVar10;
          }
          local_350.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar3,iVar9);
          QString::operator=(&local_c8,&local_350);
          if (*(int *)local_350.field0_0x0 != -1) {
            if (*(int *)local_350.field0_0x0 != 0) {
              LOCK();
              *(int *)local_350.field0_0x0 = *(int *)local_350.field0_0x0 + -1;
              local_b9 = *(int *)local_350.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_b9) goto LAB_100696533;
            }
            QArrayData::deallocate((QArrayData *)local_350.field0_0x0,2,8);
          }
LAB_100696533:
          if (2 < DAT_1011b55f8) {
            QString::toUtf8();
            FUN_1008e3970("","dimg",3,"Found volume: %s",local_358 + *(long *)(local_358 + 0x10));
            if (*(int *)local_358 != -1) {
              if (*(int *)local_358 != 0) {
                LOCK();
                *(int *)local_358 = *(int *)local_358 + -1;
                local_b9 = *(int *)local_358 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_1006965ba;
              }
              QArrayData::deallocate(local_358,1,8);
            }
          }
LAB_1006965ba:
          iVar7 = QString::indexOf(&local_c8,&local_d0,0,1);
          iVar9 = 0;
          if (iVar7 != -1) {
            QString::toUtf8();
            FUN_1008e3970("","dimg",0,"Add \"%s\" to unmount list",
                          local_360 + *(long *)(local_360 + 0x10));
            if (*(int *)local_360 != -1) {
              if (*(int *)local_360 != 0) {
                LOCK();
                *(int *)local_360 = *(int *)local_360 + -1;
                local_b9 = *(int *)local_360 != 0;
                UNLOCK();
                if ((bool)local_b9) goto LAB_100696655;
              }
              QArrayData::deallocate(local_360,1,8);
            }
LAB_100696655:
            FUN_10000c490(puVar1,&local_c8);
          }
        }
      }
      else {
        FUN_1008e3970("","dimg",0,"PBHGetVolParmsSync returned %d",iVar9);
      }
    }
    else {
      iVar9 = (int)sVar6;
    }
    lVar14 = lVar14 + 1;
  } while (iVar9 != -0x23);
  puVar11 = (uint *)*puVar1;
  if (1 < *puVar11) {
    FUN_100022c80(puVar1,puVar11[1]);
    puVar11 = (uint *)*puVar1;
  }
  puVar15 = puVar11 + (long)(int)puVar11[2] * 2 + 4;
  bVar12 = false;
  do {
    if (1 < *puVar11) {
      FUN_100022c80(puVar1,puVar11[1]);
      puVar11 = (uint *)*puVar1;
    }
    if (puVar15 == puVar11 + (long)(int)puVar11[3] * 2 + 4) goto LAB_100696a08;
    uVar8 = _geteuid();
    if (uVar8 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Unmount \"%s\" directly",local_368 + *(long *)(local_368 + 0x10));
      if (*(int *)local_368 != -1) {
        if (*(int *)local_368 != 0) {
          LOCK();
          *(int *)local_368 = *(int *)local_368 + -1;
          local_b9 = *(int *)local_368 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_10069687c;
        }
        QArrayData::deallocate(local_368,1,8);
      }
LAB_10069687c:
      iVar9 = FUN_100785e20(puVar15);
      if (iVar9 == 0) {
        QString::toUtf8();
        FUN_1008e3970("","dimg",0,"Unmount \"%s\" succeed (direct)",
                      local_378 + *(long *)(local_378 + 0x10));
        if (*(int *)local_378 != -1) {
          if (*(int *)local_378 != 0) {
            LOCK();
            *(int *)local_378 = *(int *)local_378 + -1;
            local_b9 = *(int *)local_378 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_1006966c0;
          }
          QArrayData::deallocate(local_378,1,8);
        }
      }
      else {
        QString::toUtf8();
        FUN_1008e3970("","dimg",0,"Unmount \"%s\" failed (direct)",
                      local_370 + *(long *)(local_370 + 0x10));
        bVar12 = true;
        if (*(int *)local_370 != -1) {
          if (*(int *)local_370 != 0) {
            LOCK();
            *(int *)local_370 = *(int *)local_370 + -1;
            local_b9 = *(int *)local_370 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_1006966c0;
          }
          QArrayData::deallocate(local_370,1,8);
        }
      }
    }
    else {
      if (2 < DAT_1011b55f8) {
        QString::toUtf8();
        FUN_1008e3970("","dimg",3,"Umount \"%s\" via dispatcher",
                      local_380 + *(long *)(local_380 + 0x10));
        if (*(int *)local_380 != -1) {
          if (*(int *)local_380 != 0) {
            LOCK();
            *(int *)local_380 = *(int *)local_380 + -1;
            local_b9 = *(int *)local_380 != 0;
            UNLOCK();
            if ((bool)local_b9) goto LAB_100696780;
          }
          QArrayData::deallocate(local_380,1,8);
        }
      }
LAB_100696780:
      iVar9 = FUN_10042eec0(puVar15);
      if (iVar9 < 0) break;
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Unmount \"%s\" succeed (dispatcher)",
                    local_390 + *(long *)(local_390 + 0x10));
      if (*(int *)local_390 != -1) {
        if (*(int *)local_390 != 0) {
          LOCK();
          *(int *)local_390 = *(int *)local_390 + -1;
          local_b9 = *(int *)local_390 != 0;
          UNLOCK();
          if ((bool)local_b9) goto LAB_1006966c0;
        }
        QArrayData::deallocate(local_390,1,8);
      }
    }
LAB_1006966c0:
    puVar15 = puVar15 + 2;
    puVar11 = (uint *)*puVar1;
  } while( true );
  QString::toUtf8();
  FUN_1008e3970("","dimg",0,"Unmount \"%s\" failed (dispatcher): 0x%x",
                local_388 + *(long *)(local_388 + 0x10),iVar9);
  if (*(int *)local_388 != -1) {
    if (*(int *)local_388 != 0) {
      LOCK();
      *(int *)local_388 = *(int *)local_388 + -1;
      local_b9 = *(int *)local_388 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100696a08;
    }
    QArrayData::deallocate(local_388,1,8);
  }
LAB_100696a08:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_b9 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100696a44;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100696a44:
  uVar13 = 0x80024002;
  if (!bVar12) {
    uVar13 = 0;
  }
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_b9 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_b9) goto LAB_100696a93;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100696a93:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

