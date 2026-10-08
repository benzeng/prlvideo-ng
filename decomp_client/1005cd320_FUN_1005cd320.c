
long * FUN_1005cd320(long *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  QArrayData *pQVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  int iVar10;
  QArrayData *local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  undefined4 local_e0;
  undefined *local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  *param_1 = (long)PTR_shared_null_1021e15e8;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("/Applications",0xd);
  local_98 = pQVar6;
  FUN_1000341d0(param_1,&local_98);
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cd397;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_1005cd397:
  puVar2 = PTR_shared_null_1021e1288;
  local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar4 = FUN_100d6e4c0(6,&local_a0,0);
  if (cVar4 != '\0') {
    FUN_1000341d0(param_1,&local_a0);
  }
  cVar4 = FUN_100d80630(1);
  if (cVar4 == '\0') {
    cVar4 = FUN_100d6e4c0(2,&local_a0,0);
    if (cVar4 != '\0') {
      FUN_1000341d0(param_1,&local_a0);
    }
    cVar4 = FUN_100d6e4c0(1,&local_a0,0);
    if (cVar4 != '\0') {
      FUN_1000341d0(param_1);
    }
  }
  else {
    FUN_100d898d0(&local_b0);
    local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b0;
    if (1 < *(int *)local_b0 + 1U) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_90,0x1de2dfd);
    QString::append(&local_a8);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cd469;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1005cd469:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cd49f;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1005cd49f:
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
    local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    cVar4 = SandboxFileAccessHelpers::checkAvailability(&local_a8,&local_b8,false,&local_c0);
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cd512;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_1005cd512:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cd548;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1005cd548:
    if (cVar4 != '\0') {
      FUN_1000341d0(param_1,&local_a8);
    }
    cVar4 = FUN_100d6e4c0(1,&local_a0,0);
    if (cVar4 != '\0') {
      local_c8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMD]",5);
      local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
      cVar4 = SandboxFileAccessHelpers::checkAvailability(&local_a0,&local_c8,false,&local_d0);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_31 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cd5e9;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
LAB_1005cd5e9:
      if (*(int *)local_c8.field0_0x0 != -1) {
        if (*(int *)local_c8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
          local_31 = *(int *)local_c8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cd61f;
        }
        QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
      }
LAB_1005cd61f:
      if (cVar4 != '\0') {
        FUN_1000341d0(param_1);
      }
    }
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cd6b6;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
  }
LAB_1005cd6b6:
  cVar4 = FUN_100d80630(1);
  if (cVar4 != '\0') goto LAB_1005cd8c5;
  local_d8 = puVar3;
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
  QSettings::beginGroup((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cd72c;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cd72c:
  local_58 = (QArrayData *)QString::fromAscii_helper("DirsForSearch",0xd);
  iVar5 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cd784;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cd784:
  if (0 < iVar5) {
    iVar10 = 0;
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_78 = (QArrayData *)QString::fromAscii_helper("Directory",9);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      QSettings::value((QString *)&local_70,&local_48);
      QVariant::toString();
      FUN_1000341d0(&local_d8,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cd83a;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005cd83a:
      QVariant::~QVariant(&local_70);
      QVariant::~QVariant((QVariant *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cd87a;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1005cd87a:
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar5);
  }
  QSettings::endArray();
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_48);
  FUN_1001d3590(param_1,&local_d8);
  FUN_100039a80(&local_d8);
LAB_1005cd8c5:
  local_f8 = (int *)*param_1;
  if (*local_f8 != -1) {
    if (*local_f8 == 0) {
      QListData::detach((int)&local_f8);
      iVar5 = local_f8[2];
      if (iVar5 != local_f8[3]) {
        puVar8 = (undefined8 *)(*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
        piVar9 = local_f8 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_f8[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = (int *)*puVar8;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_f8 = *local_f8 + 1;
      local_31 = *local_f8 != 0;
      UNLOCK();
    }
  }
  local_f0 = local_f8 + (long)local_f8[2] * 2 + 4;
  local_e8 = local_f8 + (long)local_f8[3] * 2 + 4;
  if (local_f8[2] != local_f8[3]) {
    do {
      local_e0 = 1;
      if (3 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",4,"directory to search== %s",
                      local_100 + *(long *)(local_100 + 0x10));
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005cda30;
          }
          QArrayData::deallocate(local_100,1,8);
        }
      }
LAB_1005cda30:
      local_f0 = local_f0 + 2;
    } while (local_f0 != local_e8);
  }
  local_e0 = 1;
  FUN_100039a80(&local_f8);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_a0.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
  return param_1;
}

