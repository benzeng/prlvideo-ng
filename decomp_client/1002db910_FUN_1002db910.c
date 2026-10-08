
void FUN_1002db910(long *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  QMapNodeBase *pQVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  Data_conflict *pDVar11;
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_170;
  QArrayData *local_168;
  QArrayData *local_160;
  Data_conflict local_158;
  undefined4 local_150;
  QString local_148;
  QVariant local_140;
  Data_conflict local_130;
  undefined4 local_128;
  QString local_120;
  QVariant local_118;
  QString local_108;
  Data_conflict local_100;
  undefined4 local_f8;
  QString local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  undefined4 local_d0;
  QVariant local_c8;
  QMapNodeBase *local_b8;
  byte local_b0 [8];
  QString local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  QString local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  if (-1 < param_2) {
    QVariant::toMap();
    FUN_100221b80(&local_68,&local_40);
    local_60 = local_68;
    if (*local_68 != -1) {
      if (*local_68 == 0) {
        QListData::detach((int)&local_60);
        iVar1 = local_60[2];
        if (iVar1 != local_60[3]) {
          local_68 = local_68 + (long)local_68[2] * 2 + 4;
          piVar9 = local_60 + (long)iVar1 * 2 + 4;
          lVar8 = (long)local_60[3] * 8 + (long)iVar1 * -8;
          do {
            piVar2 = *(int **)local_68;
            *(int **)piVar9 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            piVar9 = piVar9 + 2;
            local_68 = local_68 + 2;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
      else {
        LOCK();
        *local_68 = *local_68 + 1;
        local_31 = *local_68 != 0;
        UNLOCK();
      }
    }
    local_58 = local_60 + (long)local_60[2] * 2 + 4;
    local_50 = local_60 + (long)local_60[3] * 2 + 4;
    local_48 = 1;
    FUN_100036370(&local_68);
    puVar3 = PTR_shared_null_1021e1288;
    if (local_48 != 0) {
      auVar14._8_4_ = (int)PTR_shared_null_1021e1288;
      auVar14._0_8_ = PTR_shared_null_1021e1288;
      auVar14._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
      do {
        if (local_58 == local_50) break;
        local_70.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_58;
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        if (local_48 != 0) {
          local_b0[0] = 1;
          uStack_170 = auVar14._8_8_;
          local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
          uStack_a0 = uStack_170;
          local_98 = puVar3;
          uStack_90 = uStack_170;
          local_88 = puVar3;
          uStack_80 = uStack_170;
          local_78 = 0;
          local_d0 = 0x80000000;
          local_d8.field7 = 0;
          lVar8 = *(long *)(local_40 + 0x10);
          lVar12 = 0;
          if (*(long *)(local_40 + 0x10) == 0) {
LAB_1002dbb39:
            lVar10 = 0;
          }
          else {
            do {
              while (lVar10 = lVar8, cVar6 = operator<((QString *)(lVar10 + 0x18),&local_70),
                    cVar6 != '\0') {
                lVar8 = *(long *)(lVar10 + 0x10);
                if (*(long *)(lVar10 + 0x10) == 0) {
                  lVar10 = lVar12;
                  if (lVar12 == 0) goto LAB_1002dbb39;
                  goto LAB_1002dbb28;
                }
              }
              lVar8 = *(long *)(lVar10 + 8);
              lVar12 = lVar10;
            } while (*(long *)(lVar10 + 8) != 0);
LAB_1002dbb28:
            cVar6 = operator<(&local_70,(QString *)(lVar10 + 0x18));
            if (cVar6 != '\0') goto LAB_1002dbb39;
          }
          pDVar11 = (Data_conflict *)(lVar10 + 0x20);
          if (lVar10 == 0) {
            pDVar11 = &local_d8;
          }
          QVariant::QVariant(&local_c8,(QVariant *)pDVar11);
          QVariant::toMap();
          QVariant::~QVariant(&local_c8);
          QVariant::~QVariant((QVariant *)&local_d8);
          local_f0.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("permitted",9);
          local_f8 = 0x80000000;
          local_100.field7 = 0;
          lVar8 = *(long *)(local_b8 + 0x10);
          lVar12 = 0;
          if (*(long *)(local_b8 + 0x10) == 0) {
LAB_1002dbc0c:
            lVar10 = 0;
          }
          else {
            do {
              while (lVar10 = lVar8, cVar6 = operator<((QString *)(lVar10 + 0x18),&local_f0),
                    cVar6 != '\0') {
                lVar8 = *(long *)(lVar10 + 0x10);
                if (*(long *)(lVar10 + 0x10) == 0) {
                  lVar10 = lVar12;
                  if (lVar12 == 0) goto LAB_1002dbc0c;
                  goto LAB_1002dbbf8;
                }
              }
              lVar8 = *(long *)(lVar10 + 8);
              lVar12 = lVar10;
            } while (*(long *)(lVar10 + 8) != 0);
LAB_1002dbbf8:
            cVar6 = operator<(&local_f0,(QString *)(lVar10 + 0x18));
            if (cVar6 != '\0') goto LAB_1002dbc0c;
          }
          pDVar11 = (Data_conflict *)(lVar10 + 0x20);
          if (lVar10 == 0) {
            pDVar11 = &local_100;
          }
          QVariant::QVariant(&local_e8,(QVariant *)pDVar11);
          local_b0[0] = QVariant::toBool();
          local_b0[0] = local_b0[0] ^ 1;
          QVariant::~QVariant(&local_e8);
          QVariant::~QVariant((QVariant *)&local_100);
          if (*(int *)local_f0.field0_0x0 != -1) {
            if (*(int *)local_f0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
              local_31 = *(int *)local_f0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dbc82;
            }
            QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
          }
LAB_1002dbc82:
          local_120.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("catalog",7);
          local_128 = 0x80000000;
          local_130.field7 = 0;
          lVar8 = *(long *)(local_b8 + 0x10);
          lVar12 = 0;
          if (*(long *)(local_b8 + 0x10) == 0) {
LAB_1002dbd1c:
            lVar10 = 0;
          }
          else {
            do {
              while (lVar10 = lVar8, cVar6 = operator<((QString *)(lVar10 + 0x18),&local_120),
                    cVar6 != '\0') {
                lVar8 = *(long *)(lVar10 + 0x10);
                if (*(long *)(lVar10 + 0x10) == 0) {
                  lVar10 = lVar12;
                  if (lVar12 == 0) goto LAB_1002dbd1c;
                  goto LAB_1002dbd08;
                }
              }
              lVar8 = *(long *)(lVar10 + 8);
              lVar12 = lVar10;
            } while (*(long *)(lVar10 + 8) != 0);
LAB_1002dbd08:
            cVar6 = operator<(&local_120,(QString *)(lVar10 + 0x18));
            if (cVar6 != '\0') goto LAB_1002dbd1c;
          }
          pDVar11 = (Data_conflict *)(lVar10 + 0x20);
          if (lVar10 == 0) {
            pDVar11 = &local_130;
          }
          QVariant::QVariant(&local_118,(QVariant *)pDVar11);
          QVariant::toString();
          QString::operator=(&local_a8,&local_108);
          if (*(int *)local_108.field0_0x0 != -1) {
            if (*(int *)local_108.field0_0x0 != 0) {
              LOCK();
              *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
              local_31 = *(int *)local_108.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dbd90;
            }
            QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
          }
LAB_1002dbd90:
          QVariant::~QVariant(&local_118);
          QVariant::~QVariant((QVariant *)&local_130);
          if (*(int *)local_120.field0_0x0 != -1) {
            if (*(int *)local_120.field0_0x0 != 0) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dbdda;
            }
            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
          }
LAB_1002dbdda:
          local_148.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("major_version",0xd);
          local_150 = 0x80000000;
          local_158.field7 = 0;
          lVar8 = *(long *)(local_b8 + 0x10);
          lVar12 = 0;
          if (*(long *)(local_b8 + 0x10) == 0) {
LAB_1002dbe7c:
            lVar10 = 0;
          }
          else {
            do {
              while (lVar10 = lVar8, cVar6 = operator<((QString *)(lVar10 + 0x18),&local_148),
                    cVar6 != '\0') {
                lVar8 = *(long *)(lVar10 + 0x10);
                if (*(long *)(lVar10 + 0x10) == 0) {
                  lVar10 = lVar12;
                  if (lVar12 == 0) goto LAB_1002dbe7c;
                  goto LAB_1002dbe68;
                }
              }
              lVar8 = *(long *)(lVar10 + 8);
              lVar12 = lVar10;
            } while (*(long *)(lVar10 + 8) != 0);
LAB_1002dbe68:
            cVar6 = operator<(&local_148,(QString *)(lVar10 + 0x18));
            if (cVar6 != '\0') goto LAB_1002dbe7c;
          }
          pDVar11 = (Data_conflict *)(lVar10 + 0x20);
          if (lVar10 == 0) {
            pDVar11 = &local_158;
          }
          QVariant::QVariant(&local_140,(QVariant *)pDVar11);
          local_78 = QVariant::toUInt((bool *)&local_140);
          QVariant::~QVariant(&local_140);
          QVariant::~QVariant((QVariant *)&local_158);
          if (*(int *)local_148.field0_0x0 != -1) {
            if (*(int *)local_148.field0_0x0 != 0) {
              LOCK();
              *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
              local_31 = *(int *)local_148.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dbeef;
            }
            QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
          }
LAB_1002dbeef:
          FUN_1002dc4b0(param_1 + 3,&local_70,local_b0);
          if (2 < DAT_10230ffd0) {
            QString::toUtf8();
            bVar5 = local_b0[0];
            lVar8 = *(long *)(local_160 + 0x10);
            QString::toUtf8();
            FUN_100df99c0("","prl_client_app",3,
                          "product %s information recieved banned =%d, catalog url==%s, version==%d"
                          ,local_160 + lVar8,bVar5,local_168 + *(long *)(local_168 + 0x10),local_78)
            ;
            if (*(int *)local_168 != -1) {
              if (*(int *)local_168 != 0) {
                LOCK();
                *(int *)local_168 = *(int *)local_168 + -1;
                local_31 = *(int *)local_168 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002dbfc5;
              }
              QArrayData::deallocate(local_168,1,8);
            }
LAB_1002dbfc5:
            if (*(int *)local_160 != -1) {
              if (*(int *)local_160 != 0) {
                LOCK();
                *(int *)local_160 = *(int *)local_160 + -1;
                local_31 = *(int *)local_160 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1002dc010;
              }
              QArrayData::deallocate(local_160,1,8);
            }
          }
LAB_1002dc010:
          pQVar4 = local_b8;
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              local_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1002dc062;
            }
            if (*(long *)(local_b8 + 0x10) != 0) {
              FUN_100037d60();
              QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
            }
            QMapDataBase::freeData((QMapDataBase *)pQVar4);
          }
LAB_1002dc062:
          FUN_10012ac30(local_b0);
          local_48 = 0;
        }
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1002dc0ac;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1002dc0ac:
        local_58 = local_58 + 2;
        uVar7 = local_48 ^ 1;
        bVar13 = local_48 != 1;
        local_48 = uVar7;
      } while (bVar13);
    }
    FUN_100036370(&local_60);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002dc12d;
      }
      if (*(long *)(local_40 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_40);
    }
  }
LAB_1002dc12d:
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

