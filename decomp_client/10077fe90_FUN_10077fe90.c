
void FUN_10077fe90(long param_1,QString *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  QArrayData *pQVar4;
  void *pvVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long local_120;
  uint local_118 [2];
  QString local_110;
  undefined1 local_108 [16];
  undefined1 local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QDateTime local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QDateTime local_b8;
  QDateTime local_b0;
  QDateTime local_a8;
  QDateTime local_a0;
  QDateTime local_98;
  QDateTime local_90;
  QVariant local_88;
  QString local_78;
  QString local_70;
  QVariant local_68;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QTimer::stop();
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001554a0(uVar2);
  if (lVar3 != 0) {
    uVar2 = FUN_10016f500(lVar3);
    cVar1 = FUN_10061b4d0(uVar2,0x80);
    if (cVar1 != '\0') {
      uVar2 = FUN_10016f500(lVar3);
      cVar1 = FUN_10061b4d0(uVar2,0x20);
      if (cVar1 == '\0') goto LAB_1007800e5;
    }
    pQVar4 = (QArrayData *)QString::fromAscii_helper("ProductPromo",0xc);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
    QString::append(&local_78);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077ffaa;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10077ffaa:
    local_70.field0_0x0 = local_78.field0_0x0;
    if (1 < *(int *)local_78.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1db96e7);
    QString::append(&local_70);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100780015;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100780015:
    QVariant::QVariant(&local_88,false);
    QSettings::value((QString *)&local_68,&local_58);
    cVar1 = QVariant::toBool();
    QVariant::~QVariant(&local_68);
    QVariant::~QVariant(&local_88);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100780082;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100780082:
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007800b2;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1007800b2:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007800e1;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1007800e1:
    if (cVar1 == '\0') {
      cVar1 = FUN_100781dd0(*(undefined8 *)(param_1 + 0x30));
      uVar7 = 0;
      if (((cVar1 != '\0') && (uVar7 = 0, param_3 < 5)) &&
         (uVar7 = 0, *(int *)(param_2->field0_0x0 + 4) == 0)) {
        if ((0x19U >> (param_3 & 0x1f) & 1) == 0) {
          uVar7 = 0;
        }
        else {
          puVar9 = *(undefined8 **)(param_1 + 0x38);
          if ((*(int *)((long)puVar9 + 0x14) != 0) && (*(uint *)(puVar9 + 4) != 0)) {
            uVar6 = *(uint *)((long)puVar9 + 0x24) ^ param_3;
            for (puVar8 = *(undefined8 **)
                           (puVar9[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar9 + 4)) * 8);
                puVar8 != puVar9; puVar8 = (undefined8 *)*puVar8) {
              if ((*(uint *)(puVar8 + 1) == uVar6) && (*(uint *)((long)puVar8 + 0xc) == param_3)) {
                if (puVar8 != puVar9) {
                  QDateTime::QDateTime(&local_90,(QDateTime *)(puVar8 + 2));
                  goto LAB_1007801c1;
                }
                break;
              }
            }
          }
          QDateTime::QDateTime(&local_90);
LAB_1007801c1:
          cVar1 = QDateTime::isValid();
          if (cVar1 == '\0') {
            cVar1 = '\0';
          }
          else {
            puVar9 = *(undefined8 **)(param_1 + 0x38);
            if ((*(int *)((long)puVar9 + 0x14) != 0) && (*(uint *)(puVar9 + 4) != 0)) {
              uVar6 = *(uint *)((long)puVar9 + 0x24) ^ param_3;
              for (puVar8 = *(undefined8 **)
                             (puVar9[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar9 + 4)) * 8);
                  puVar8 != puVar9; puVar8 = (undefined8 *)*puVar8) {
                if ((*(uint *)(puVar8 + 1) == uVar6) && (*(uint *)((long)puVar8 + 0xc) == param_3))
                {
                  if (puVar8 != puVar9) {
                    QDateTime::QDateTime(&local_a0,(QDateTime *)(puVar8 + 2));
                    goto LAB_100780233;
                  }
                  break;
                }
              }
            }
            QDateTime::QDateTime(&local_a0);
LAB_100780233:
            QDateTime::addDays((longlong)&local_98);
            QDateTime::currentDateTime();
            cVar1 = QDateTime::operator<(&local_a8,&local_98);
            QDateTime::~QDateTime(&local_a8);
            QDateTime::~QDateTime(&local_98);
            QDateTime::~QDateTime(&local_a0);
          }
          QDateTime::~QDateTime(&local_90);
          uVar7 = 1;
          if (cVar1 != '\0') {
            QDateTime::currentDateTime();
            QDateTime::addMSecs((longlong)&local_b0);
            QDateTime::~QDateTime(&local_b8);
            if (1 < DAT_10230ffd0) {
              puVar9 = *(undefined8 **)(param_1 + 0x38);
              if ((*(int *)((long)puVar9 + 0x14) != 0) && (*(uint *)(puVar9 + 4) != 0)) {
                uVar6 = *(uint *)((long)puVar9 + 0x24) ^ param_3;
                for (puVar8 = *(undefined8 **)
                               (puVar9[1] + ((ulong)uVar6 % (ulong)*(uint *)(puVar9 + 4)) * 8);
                    puVar8 != puVar9; puVar8 = (undefined8 *)*puVar8) {
                  if ((*(uint *)(puVar8 + 1) == uVar6) && (*(uint *)((long)puVar8 + 0xc) == param_3)
                     ) {
                    if (puVar8 != puVar9) {
                      QDateTime::QDateTime(&local_d0,(QDateTime *)(puVar8 + 2));
                      goto LAB_100780422;
                    }
                    break;
                  }
                }
              }
              QDateTime::QDateTime(&local_d0);
LAB_100780422:
              local_d8 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
              QDateTime::toString(&local_c8);
              QString::toUtf8();
              pQVar4 = local_c0 + *(long *)(local_c0 + 0x10);
              local_f0 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
              QDateTime::toString(&local_e8);
              QString::toUtf8();
              FUN_100df99c0("[APP_PROMO]","prl_client_app",2,
                            "Promo with type %d blocked at %s, next time blocker will be checked at: %s"
                            ,param_3,pQVar4,local_e0 + *(long *)(local_e0 + 0x10));
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100780523;
                }
                QArrayData::deallocate(local_e0,1,8);
              }
LAB_100780523:
              if (*(int *)local_e8.field0_0x0 != -1) {
                if (*(int *)local_e8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                  local_31 = *(int *)local_e8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100780559;
                }
                QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
              }
LAB_100780559:
              if (*(int *)local_f0 != -1) {
                if (*(int *)local_f0 != 0) {
                  LOCK();
                  *(int *)local_f0 = *(int *)local_f0 + -1;
                  local_31 = *(int *)local_f0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_10078058f;
                }
                QArrayData::deallocate(local_f0,2,8);
              }
LAB_10078058f:
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007805c5;
                }
                QArrayData::deallocate(local_c0,1,8);
              }
LAB_1007805c5:
              if (*(int *)local_c8.field0_0x0 != -1) {
                if (*(int *)local_c8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
                  local_31 = *(int *)local_c8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1007805fb;
                }
                QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
              }
LAB_1007805fb:
              if (*(int *)local_d8 != -1) {
                if (*(int *)local_d8 != 0) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + -1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100780631;
                }
                QArrayData::deallocate(local_d8,2,8);
              }
LAB_100780631:
              QDateTime::~QDateTime(&local_d0);
            }
            if (param_3 == 4) {
              puVar9 = (undefined8 *)(param_1 + 0x20);
            }
            else if (param_3 == 3) {
              puVar9 = (undefined8 *)(param_1 + 0x18);
            }
            else {
              puVar9 = (undefined8 *)(param_1 + 0x10);
            }
            QTimer::start((int)*puVar9);
            QDateTime::~QDateTime(&local_b0);
            goto LAB_1007803d1;
          }
        }
      }
      local_110.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      local_108._8_4_ = (int)PTR_shared_null_1021e15e8;
      local_108._0_8_ = PTR_shared_null_1021e15e8;
      local_108._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
      local_f8 = 0;
      local_118[0] = param_3;
      QString::operator=(&local_110,param_2);
      local_f8 = uVar7;
      pvVar5 = operator_new(0x30);
      FUN_1002dce60(pvVar5,local_118);
      QObject::connect(&local_120,pvVar5,"2taskFinished(PRL_RESULT)",param_1,
                       "1onShowPromoFinished(PRL_RESULT)",0);
      if (local_120 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_120);
      CAbstractTask::execute();
      FUN_1002748b0(local_118);
      goto LAB_1007803d1;
    }
  }
LAB_1007800e5:
  FUN_100df99c0("[APP_PROMO]","prl_client_app",0,"Refused to show promo screen.");
  uVar2 = 0x240c8400;
  if (param_3 - 3 < 2) {
    uVar2 = 86400000;
  }
  FUN_10077f270(param_1,uVar2,param_3);
LAB_1007803d1:
  QSettings::~QSettings((QSettings *)&local_58);
  return;
}

