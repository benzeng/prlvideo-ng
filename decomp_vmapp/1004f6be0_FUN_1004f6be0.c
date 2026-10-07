
undefined1 FUN_1004f6be0(QString *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  QArrayData *pQVar8;
  QString local_230;
  QString local_228;
  QArrayData *local_220;
  QString local_218;
  QString local_210;
  QString local_208;
  QArrayData *local_200;
  QString local_1f8;
  long local_1f0 [2];
  undefined **local_1e0 [2];
  QArrayData *local_1d0;
  undefined **local_1c8 [2];
  undefined **local_1b8 [2];
  undefined **local_1a8 [2];
  undefined **local_198 [2];
  undefined **local_188 [2];
  undefined **local_178 [2];
  QString local_168;
  undefined **local_160 [2];
  undefined **local_150 [2];
  undefined **local_140 [2];
  QString local_130;
  char local_122;
  undefined1 local_121;
  undefined1 local_120 [76];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_2 = 0;
  local_1d0 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_38 = lVar1;
  FUN_10050cc70(local_1e0);
  local_1e0[0] = &PTR_FUN_10111cee0;
  QFile::QFile((QFile *)local_1f0,param_1);
  cVar3 = QFile::exists();
  pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (cVar3 == '\0') {
LAB_1004f6dfd:
    FUN_10050cc70(local_198);
    local_198[0] = &PTR_FUN_10111cf18;
    FUN_10050cc70(local_1a8);
    local_1a8[0] = &PTR_FUN_10111cf78;
    FUN_10050cc70(local_1b8);
    local_1b8[0] = &PTR_FUN_10111cfb8;
    FUN_10050cc70(local_1c8);
    local_1c8[0] = &PTR_FUN_10111cff8;
    FUN_10050cc70(local_178);
    local_178[0] = &PTR_FUN_10111d058;
    FUN_10050cc70(local_188);
    local_188[0] = &PTR_FUN_10111d098;
    iVar5 = FUN_10050db00(local_188,"");
    cVar6 = '\x03';
    cVar3 = '\x03';
    if (iVar5 == 0) {
      iVar5 = FUN_10050dcb0(local_198,1);
      cVar3 = '\x03';
      if (iVar5 == 0) {
        iVar5 = FUN_10050ddb0(local_198,local_188);
        cVar3 = '\x03';
        if (iVar5 == 0) {
          iVar5 = FUN_10050db80(local_178,1);
          cVar3 = '\x03';
          if (iVar5 == 0) {
            iVar5 = FUN_10050dea0(local_198,local_178);
            cVar3 = (iVar5 != 0) * '\x03';
          }
        }
      }
    }
    FUN_10050ccb0(local_188);
    FUN_10050ccb0(local_178);
    if ((((cVar3 == '\0') && (iVar5 = FUN_10050e0e0(local_1a8,1), iVar5 == 0)) &&
        (iVar5 = FUN_10050e2f0(local_1a8,local_198), iVar5 == 0)) &&
       (iVar5 = FUN_10050e020(local_1a8,2), iVar5 == 0)) {
      FUN_10050cce0(local_1c8,0);
      iVar5 = FUN_10050da40(local_1c8,DAT_1011bc248 + *(long *)(DAT_1011bc248 + 0x10));
      if (((iVar5 == 0) &&
          (iVar5 = FUN_10050da80(local_1c8,DAT_1011bc258 + *(long *)(DAT_1011bc258 + 0x10)),
          iVar5 == 0)) &&
         ((iVar5 = FUN_10050dac0(local_1c8,DAT_1011bc250 + *(long *)(DAT_1011bc250 + 0x10)),
          iVar5 == 0 &&
          ((iVar5 = FUN_10050e200(local_1a8,local_1c8), iVar5 == 0 &&
           (iVar5 = FUN_10050eca0(local_1e0,local_1a8), iVar5 == 0)))))) {
        FUN_10050cc70(local_140);
        local_140[0] = &PTR_FUN_10111d0f8;
        FUN_10050cc70(local_150);
        local_150[0] = &PTR_FUN_10111d138;
        FUN_10050cc70(local_160);
        local_160[0] = &PTR_FUN_10111d198;
        QString::toUtf8_helper(&local_168);
        iVar5 = FUN_10050d750(local_140,
                              (QArrayData *)
                              (local_168.field0_0x0 + *(long *)(local_168.field0_0x0 + 0x10)));
        if (*(int *)local_168.field0_0x0 != -1) {
          if (*(int *)local_168.field0_0x0 != 0) {
            LOCK();
            *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
            local_121 = *(int *)local_168.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_1004f70f6;
          }
          QArrayData::deallocate((QArrayData *)local_168.field0_0x0,1,8);
        }
LAB_1004f70f6:
        if ((((iVar5 == 0) && (iVar5 = FUN_10050e3e0(local_150,local_140), iVar5 == 0)) &&
            (iVar5 = FUN_10050e4d0(local_160,1), iVar5 == 0)) &&
           (iVar5 = FUN_10050e5d0(local_160,local_150), iVar5 == 0)) {
          iVar5 = FUN_10050e7c0(local_1b8,local_160);
          FUN_10050ccb0(local_160);
          FUN_10050ccb0(local_150);
          FUN_10050ccb0(local_140);
          if (iVar5 == 0) {
            iVar5 = FUN_10050ed90(local_1e0,local_1b8);
            cVar6 = (iVar5 != 0) * '\x03';
          }
        }
        else {
          FUN_10050ccb0(local_160);
          FUN_10050ccb0(local_150);
          FUN_10050ccb0(local_140);
        }
      }
    }
    FUN_10050ccb0(local_1c8);
    FUN_10050ccb0(local_1b8);
    FUN_10050ccb0(local_1a8);
    FUN_10050ccb0(local_198);
    if (cVar6 != '\0') {
      if (0 < DAT_1011b55f8) {
        QString::toUtf8_helper(&local_210);
        FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                      "Failed to create shared link for path \'%s\'",
                      (QArrayData *)(local_210.field0_0x0 + *(long *)(local_210.field0_0x0 + 0x10)))
        ;
        if (*(int *)local_210.field0_0x0 != -1) {
          if (*(int *)local_210.field0_0x0 != 0) {
            LOCK();
            *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
            local_121 = *(int *)local_210.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_1004f7224;
          }
          QArrayData::deallocate((QArrayData *)local_210.field0_0x0,1,8);
        }
      }
      goto LAB_1004f7224;
    }
    local_220 = (QArrayData *)QString::fromAscii_helper("%1 ",3);
    QString::arg(&local_218,&local_220,param_1,0,0x20);
    if (*(int *)local_220 != -1) {
      if (*(int *)local_220 != 0) {
        LOCK();
        *(int *)local_220 = *(int *)local_220 + -1;
        local_121 = *(int *)local_220 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1004f729d;
      }
      QArrayData::deallocate(local_220,2,8);
    }
LAB_1004f729d:
    QString::toUtf8_helper(&local_228);
    iVar5 = FUN_10050ebb0(local_1e0,
                          (QArrayData *)
                          (local_228.field0_0x0 + *(long *)(local_228.field0_0x0 + 0x10)),100);
    if (*(int *)local_228.field0_0x0 != -1) {
      if (*(int *)local_228.field0_0x0 != 0) {
        LOCK();
        *(int *)local_228.field0_0x0 = *(int *)local_228.field0_0x0 + -1;
        local_121 = *(int *)local_228.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1004f730a;
      }
      QArrayData::deallocate((QArrayData *)local_228.field0_0x0,1,8);
    }
LAB_1004f730a:
    if (iVar5 == 0) {
      QString::toUtf8_helper(&local_130);
      iVar5 = _FSPathMakeRef((QArrayData *)
                             (local_130.field0_0x0 + *(long *)(local_130.field0_0x0 + 0x10)),
                             local_88,&local_122);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_121 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_1004f7408;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,1,8);
      }
LAB_1004f7408:
      if (((iVar5 == 0) && (local_122 == '\0')) &&
         (sVar4 = _FSGetCatalogInfo(local_88,0x800,local_120,0,0,0), sVar4 == 0)) {
        local_d0 = 0x50534158;
        local_d4 = 0x50534135;
        _FSSetCatalogInfo(local_88,0x800,local_120);
      }
      QFile::rename(&local_218,param_1);
      uVar7 = 1;
      if ((*(int *)(pQVar8 + 4) != 0) && (cVar3 = FUN_1004f7910(param_1,&local_1d0), cVar3 != '\0'))
      {
        *param_2 = 1;
      }
    }
    else {
      if (0 < DAT_1011b55f8) {
        QString::toUtf8_helper(&local_230);
        FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                      "Failed to write shared link for path \'%s\'",
                      (QArrayData *)(local_230.field0_0x0 + *(long *)(local_230.field0_0x0 + 0x10)))
        ;
        if (*(int *)local_230.field0_0x0 != -1) {
          if (*(int *)local_230.field0_0x0 != 0) {
            LOCK();
            *(int *)local_230.field0_0x0 = *(int *)local_230.field0_0x0 + -1;
            local_121 = *(int *)local_230.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_1004f7395;
          }
          QArrayData::deallocate((QArrayData *)local_230.field0_0x0,1,8);
        }
      }
LAB_1004f7395:
      uVar7 = 0;
    }
    if (*(int *)local_218.field0_0x0 != -1) {
      if (*(int *)local_218.field0_0x0 != 0) {
        LOCK();
        *(int *)local_218.field0_0x0 = *(int *)local_218.field0_0x0 + -1;
        local_121 = *(int *)local_218.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1004f74d3;
      }
      QArrayData::deallocate((QArrayData *)local_218.field0_0x0,2,8);
    }
  }
  else {
    QString::toUtf8_helper(&local_1f8);
    iVar5 = FUN_10050e9c0(local_1e0,
                          (QArrayData *)
                          (local_1f8.field0_0x0 + *(long *)(local_1f8.field0_0x0 + 0x10)),0);
    if (*(int *)local_1f8.field0_0x0 != -1) {
      if (*(int *)local_1f8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_1f8.field0_0x0 = *(int *)local_1f8.field0_0x0 + -1;
        local_121 = *(int *)local_1f8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_121) goto LAB_1004f6cce;
      }
      QArrayData::deallocate((QArrayData *)local_1f8.field0_0x0,1,8);
    }
LAB_1004f6cce:
    pQVar8 = (QArrayData *)PTR_shared_null_100ba20d0;
    if (iVar5 != 0) {
      QFile::open(local_1f0,1);
      QIODevice::readAll();
      pQVar8 = local_200;
      puVar2 = PTR_shared_null_100ba20d0;
      local_1d0 = local_200;
      local_200 = (QArrayData *)PTR_shared_null_100ba20d0;
      if (*(int *)PTR_shared_null_100ba20d0 != -1) {
        if (*(int *)PTR_shared_null_100ba20d0 != 0) {
          LOCK();
          *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
          local_121 = *(int *)puVar2 != 0;
          UNLOCK();
          if ((bool)local_121) goto LAB_1004f6d59;
        }
        QArrayData::deallocate((QArrayData *)puVar2,1,8);
      }
LAB_1004f6d59:
      (**(code **)(local_1f0[0] + 0x70))(local_1f0);
      cVar3 = QFile::remove(param_1);
      if (cVar3 == '\0' && 0 < DAT_1011b55f8) {
        QString::toUtf8_helper(&local_208);
        FUN_1008e3970("SharedLinkFile","SharedFoldersHost",1,
                      "createSharedLinkFile: cannot remove old file \'%s\'",
                      (QArrayData *)(local_208.field0_0x0 + *(long *)(local_208.field0_0x0 + 0x10)))
        ;
        if (*(int *)local_208.field0_0x0 != -1) {
          if (*(int *)local_208.field0_0x0 != 0) {
            LOCK();
            *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
            local_121 = *(int *)local_208.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_121) goto LAB_1004f6dfd;
          }
          QArrayData::deallocate((QArrayData *)local_208.field0_0x0,1,8);
        }
      }
      goto LAB_1004f6dfd;
    }
LAB_1004f7224:
    uVar7 = 0;
  }
LAB_1004f74d3:
  QFile::~QFile((QFile *)local_1f0);
  FUN_10050ccb0(local_1e0);
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_121 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_121) goto LAB_1004f7520;
    }
    QArrayData::deallocate(pQVar8,1,8);
  }
LAB_1004f7520:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

