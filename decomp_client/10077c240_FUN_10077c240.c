
void FUN_10077c240(long param_1)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  QArrayData *pQVar9;
  long *local_148;
  QArrayData *local_138;
  QDateTime local_130;
  QDateTime local_128;
  QArrayData *local_120;
  QDateTime local_118;
  QString local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QDateTime local_f0;
  QDateTime local_e8;
  QDateTime local_e0;
  QDateTime local_d8;
  QArrayData *local_d0;
  QDateTime local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QDateTime local_a0;
  QDateTime local_98;
  QDateTime local_90;
  QDateTime local_88;
  QDateTime local_80;
  QDateTime local_78;
  QDateTime local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if ((*(long *)(param_1 + 0x10) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x10) + 0x10))) {
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Timer stopped");
    QTimer::stop();
  }
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
LAB_10077c2b8:
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"No promo will be shown");
    return;
  }
  uVar4 = FUN_10016f500(lVar5);
  cVar3 = FUN_10061b500(uVar4,2);
  if (cVar3 != '\0') goto LAB_10077c2b8;
  local_58 = *(Data **)(param_1 + 0x18);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar6 = (long)*(int *)(local_58 + 8);
      lVar5 = *(long *)(param_1 + 0x18);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_58 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar6 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  local_40 = 1;
  bVar2 = true;
  local_148 = (long *)0x0;
  plVar8 = (long *)0x0;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    local_148 = (long *)0x0;
    plVar8 = (long *)0x0;
    do {
      local_40 = 1;
      plVar1 = *(long **)local_50;
      cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*plVar1 + 0x78))(plVar1);
        if (cVar3 != '\0') {
          local_68 = (QArrayData *)plVar1[2];
          if (1 < *(int *)local_68 + 1U) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + 1;
            local_31 = *(int *)local_68 != 0;
            UNLOCK();
          }
          QString::toUtf8();
          FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Active promo %s",
                        local_60 + *(long *)(local_60 + 0x10));
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10077c514;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_10077c514:
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10077c544;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10077c544:
          FUN_10077bd00(param_1,14400000);
          bVar2 = false;
          break;
        }
        cVar3 = '\x01';
        if (local_148 != (long *)0x0) {
          (**(code **)(*local_148 + 0x70))(&local_70);
          (**(code **)(*plVar1 + 0x70))(&local_78,plVar1);
          cVar3 = QDateTime::operator<(&local_78,&local_70);
          QDateTime::~QDateTime(&local_78);
          QDateTime::~QDateTime(&local_70);
        }
        if (cVar3 != '\0') {
          local_148 = plVar1;
        }
      }
      bVar2 = true;
      cVar3 = '\x01';
      if (plVar8 != (long *)0x0) {
        FUN_1007752e0(&local_80,plVar8);
        FUN_1007752e0(&local_88,plVar1);
        cVar3 = QDateTime::operator<(&local_80,&local_88);
        QDateTime::~QDateTime(&local_88);
        QDateTime::~QDateTime(&local_80);
      }
      if (cVar3 != '\0') {
        plVar8 = plVar1;
      }
      local_50 = local_50 + 8;
      local_40 = 1;
    } while (local_50 != local_48);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077c57e;
    }
    QListData::dispose(local_58);
  }
LAB_10077c57e:
  if (!bVar2) {
    return;
  }
  if (local_148 == (long *)0x0) {
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"All promo are disabled");
    FUN_10077bd00(param_1,14400000);
    return;
  }
  QDateTime::currentDateTime();
  if (plVar8 != (long *)0x0) {
    FUN_1007752e0(&local_a0,plVar8);
    QDateTime::addMSecs((longlong)&local_98);
    cVar3 = QDateTime::operator<(&local_90,&local_98);
    QDateTime::~QDateTime(&local_98);
    QDateTime::~QDateTime(&local_a0);
    if (cVar3 != '\0') {
      local_b0 = (QArrayData *)plVar8[2];
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      QString::toUtf8();
      pQVar9 = local_a8 + *(long *)(local_a8 + 0x10);
      FUN_1007752e0(&local_c8,plVar8);
      local_d0 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
      QDateTime::toString(&local_c0);
      QString::toUtf8();
      FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Last promo %s was shown %s",pQVar9,
                    local_b8 + *(long *)(local_b8 + 0x10));
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077c6fa;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_10077c6fa:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077c730;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_10077c730:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077c766;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_10077c766:
      QDateTime::~QDateTime(&local_c8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077c7a8;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
LAB_10077c7a8:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10077c7de;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_10077c7de:
      FUN_1007752e0(&local_e0,plVar8);
      QDateTime::addMSecs((longlong)&local_d8);
      QDateTime::~QDateTime(&local_e0);
      QDateTime::addMSecs((longlong)&local_e8);
      cVar3 = QDateTime::operator<(&local_d8,&local_e8);
      uVar4 = 0x240c8400;
      if (cVar3 != '\0') {
        uVar4 = QDateTime::msecsTo(&local_90);
      }
      FUN_10077bd00(param_1,uVar4);
      QDateTime::~QDateTime(&local_e8);
      QDateTime::~QDateTime(&local_d8);
      goto LAB_10077cc46;
    }
  }
  (**(code **)(*local_148 + 0x70))(&local_f0);
  cVar3 = QDateTime::operator<(&local_90,&local_f0);
  QDateTime::~QDateTime(&local_f0);
  if (cVar3 == '\0') {
    pQVar9 = (QArrayData *)local_148[2];
    if (1 < *(int *)pQVar9 + 1U) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + 1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Show promo %s",
                  local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077cbf0;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_10077cbf0:
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077cc26;
      }
      QArrayData::deallocate(pQVar9,2,8);
    }
LAB_10077cc26:
    (**(code **)(*local_148 + 0x80))();
    FUN_10077bd00(param_1,14400000);
    goto LAB_10077cc46;
  }
  local_100 = (QArrayData *)local_148[2];
  if (1 < *(int *)local_100 + 1U) {
    LOCK();
    *(int *)local_100 = *(int *)local_100 + 1;
    local_31 = *(int *)local_100 != 0;
    UNLOCK();
  }
  QString::toUtf8();
  pQVar9 = local_f8 + *(long *)(local_f8 + 0x10);
  (**(code **)(*local_148 + 0x70))(&local_118);
  local_120 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_110);
  QString::toUtf8();
  FUN_100df99c0("[HOST_PROMO]","prl_client_app",0,"Promo %s must be shown %s",pQVar9,
                local_108 + *(long *)(local_108 + 0x10));
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_31 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077c9c1;
    }
    QArrayData::deallocate(local_108,1,8);
  }
LAB_10077c9c1:
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077c9f7;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_10077c9f7:
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077ca2d;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_10077ca2d:
  QDateTime::~QDateTime(&local_118);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077ca6f;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_10077ca6f:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077caa5;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_10077caa5:
  (**(code **)(*local_148 + 0x70))(&local_128);
  QDateTime::addMSecs((longlong)&local_130);
  cVar3 = QDateTime::operator<(&local_128,&local_130);
  uVar4 = 0x240c8400;
  if (cVar3 != '\0') {
    uVar4 = QDateTime::msecsTo(&local_90);
  }
  FUN_10077bd00(param_1,uVar4);
  QDateTime::~QDateTime(&local_130);
  QDateTime::~QDateTime(&local_128);
LAB_10077cc46:
  QDateTime::~QDateTime(&local_90);
  return;
}

