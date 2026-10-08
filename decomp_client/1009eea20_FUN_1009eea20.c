
long * FUN_1009eea20(long *param_1,long *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  CProblemReport *this;
  undefined8 *puVar4;
  long lVar5;
  QString QVar6;
  long lVar7;
  long lVar8;
  QArrayData *pQVar9;
  long *plVar10;
  QArrayData *local_338;
  QArrayData *local_330;
  QArrayData *local_328;
  QArrayData *local_320;
  QArrayData *local_318;
  QArrayData *local_310;
  QArrayData *local_308;
  QArrayData *local_300;
  QArrayData *local_2f8;
  QArrayData *local_2f0;
  QArrayData *local_2e8;
  QArrayData *local_2e0;
  QArrayData *local_2d8;
  QArrayData *local_2d0;
  QArrayData *local_2c8;
  QArrayData *local_2c0;
  QArrayData *local_2b8;
  QArrayData *local_2b0;
  QArrayData *local_2a8;
  QArrayData *local_2a0;
  QArrayData *local_298;
  QArrayData *local_290;
  QArrayData *local_288;
  QArrayData *local_280;
  QArrayData *local_278;
  QArrayData *local_270;
  QArrayData *local_268;
  QArrayData *local_260;
  QArrayData *local_258;
  QArrayData *local_250;
  QArrayData *local_248;
  QArrayData *local_240;
  QArrayData *local_238;
  QArrayData *local_230;
  QArrayData *local_228;
  QArrayData *local_220;
  QArrayData *local_218;
  QArrayData *local_210;
  QArrayData *local_208;
  QArrayData *local_200;
  QArrayData *local_1f8;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  QArrayData *local_1e0;
  long local_1d8 [2];
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QString local_1b0;
  Data *local_1a8;
  Data *local_1a0;
  Data *local_198;
  undefined4 local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  long local_178 [2];
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QString local_150;
  Data *local_148;
  Data *local_140;
  Data *local_138;
  undefined4 local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  Data *local_f8;
  Data *local_f0;
  Data *local_e8;
  undefined4 local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  long local_c0 [2];
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QString local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  this = operator_new(600);
  CProblemReport::CProblemReport(this);
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)(*(long *)this + 0x20))(this);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = this;
    *puVar4 = &PTR_FUN_102280900;
  }
  *param_1 = (long)puVar4;
  (**(code **)(*param_2 + 0x278))();
  local_58 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  local_48.field0_0x0 = local_50.field0_0x0;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e3a4b7);
  QString::append(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eeb50;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1009eeb50:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eeb80;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1009eeb80:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eebb0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009eebb0:
  cVar2 = QFile::exists(&local_48);
  if (cVar2 == '\0') {
LAB_1009eec2a:
    lVar5 = 0;
    if (*param_1 != 0) {
      lVar5 = *(long *)(*param_1 + 0x10);
    }
    CBaseNode::toString(SUB81(&local_68,0),(bool)((char)param_2 + '\x10'));
    CBaseNode::fromString
              ((QTypedArrayData<unsigned_short> *)(lVar5 + 0x10),SUB81(&local_68,0),(QString *)0x0,
               (int *)0x0,(int *)0x0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009eec9a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
  else {
    lVar5 = *(long *)(*param_1 + 0x10);
    pcVar1 = *(code **)(*(long *)(lVar5 + 0x10) + 0x58);
    local_60 = (QArrayData *)local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    iVar3 = (*pcVar1)(lVar5 + 0x10,&local_60,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009eec26;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1009eec26:
    if (iVar3 < 0) goto LAB_1009eec2a;
  }
LAB_1009eec9a:
  CProblemReport::getUserDefinedData();
  lVar5 = CRepUserDefinedData::getScreenShots();
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  if (lVar5 != 0) {
    local_90 = *(Data **)(lVar5 + 0x98);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 == 0) {
        QListData::detach((int)&local_90);
        lVar7 = (long)*(int *)(local_90 + 8);
        lVar5 = *(long *)(lVar5 + 0x98);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_90 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_90 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_90 + 0xc))) {
          _memcpy(local_90 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
    }
    local_88 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
    local_80 = local_90 + (long)*(int *)(local_90 + 0xc) * 8 + 0x10;
    if (*(int *)(local_90 + 8) != *(int *)(local_90 + 0xc)) {
      do {
        local_78 = 1;
        QVar6.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_88;
        local_a8 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
        if (1 < *(int *)local_a0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_a0);
        CRepScreenShot::getName();
        local_98.field0_0x0 = local_a0.field0_0x0;
        if (1 < *(int *)local_a0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_98);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eee57;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1009eee57:
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eee8d;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_1009eee8d:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eeec3;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_1009eeec3:
        QFile::QFile((QFile *)local_c0,&local_98);
        cVar2 = QFile::open((QFile *)local_c0,1);
        if (cVar2 != '\0') {
          QIODevice::readAll();
          QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_c8);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009eef40;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
        }
LAB_1009eef40:
        QByteArray::toBase64();
        QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_d0);
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009eef8c;
          }
          QArrayData::deallocate(local_d0,1,8);
        }
LAB_1009eef8c:
        (**(code **)(local_c0[0] + 0x70))((QFile *)local_c0);
        lVar5 = 0;
        pQVar9 = local_70 + *(long *)(local_70 + 0x10);
        if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) != 0)) {
          lVar5 = 0;
          do {
            if (pQVar9[lVar5] == (QArrayData)0x0) break;
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < *(uint *)(local_70 + 4));
        }
        local_d8 = (QArrayData *)QString::fromAscii_helper((char *)pQVar9,(int)lVar5);
        CRepScreenShot::setData(QVar6);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef01e;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1009ef01e:
        QByteArray::clear();
        QFile::~QFile((QFile *)local_c0);
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef064;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_1009ef064:
        local_88 = local_88 + 8;
      } while (local_88 != local_80);
    }
    local_78 = 1;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009ef0b4;
      }
      QListData::dispose(local_90);
    }
  }
LAB_1009ef0b4:
  lVar5 = CProblemReport::getSystemLogs();
  if (lVar5 != 0) {
    local_f8 = *(Data **)(lVar5 + 0x98);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 == 0) {
        QListData::detach((int)&local_f8);
        lVar7 = (long)*(int *)(local_f8 + 8);
        lVar5 = *(long *)(lVar5 + 0x98);
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_f8 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_f8 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_f8 + 0xc))) {
          _memcpy(local_f8 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8)
                  ,lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + 1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
      }
    }
    local_f0 = local_f8 + (long)*(int *)(local_f8 + 8) * 8 + 0x10;
    local_e8 = local_f8 + (long)*(int *)(local_f8 + 0xc) * 8 + 0x10;
    if (*(int *)(local_f8 + 8) != *(int *)(local_f8 + 0xc)) {
      do {
        local_e0 = 1;
        QVar6.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_f0;
        local_110 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
        if (1 < *(int *)local_108.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
          local_31 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_108);
        CRepSystemLog::getName();
        local_100.field0_0x0 = local_108.field0_0x0;
        if (1 < *(int *)local_108.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + 1;
          local_31 = *(int *)local_108.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_100);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef263;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1009ef263:
        if (*(int *)local_108.field0_0x0 != -1) {
          if (*(int *)local_108.field0_0x0 != 0) {
            LOCK();
            *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
            local_31 = *(int *)local_108.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef299;
          }
          QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
        }
LAB_1009ef299:
        if (*(int *)local_110 != -1) {
          if (*(int *)local_110 != 0) {
            LOCK();
            *(int *)local_110 = *(int *)local_110 + -1;
            local_31 = *(int *)local_110 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef2cf;
          }
          QArrayData::deallocate(local_110,2,8);
        }
LAB_1009ef2cf:
        FUN_100d7ea20(&local_100,0x200000,&local_70,1);
        pQVar9 = local_70 + *(long *)(local_70 + 0x10);
        if ((pQVar9 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) != 0)) {
          lVar5 = 0;
          do {
            if (pQVar9[lVar5] == (QArrayData)0x0) break;
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < *(uint *)(local_70 + 4));
          if ((int)lVar5 == -1) {
            _strlen((char *)pQVar9);
          }
        }
        QString::fromUtf8_helper((char *)&local_128,(int)pQVar9);
        QString::normalized(&local_120,&local_128,1,0);
        CRepSystemLog::setData(QVar6);
        if (*(int *)local_120 != -1) {
          if (*(int *)local_120 != 0) {
            LOCK();
            *(int *)local_120 = *(int *)local_120 + -1;
            local_31 = *(int *)local_120 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef38e;
          }
          QArrayData::deallocate(local_120,2,8);
        }
LAB_1009ef38e:
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef3c4;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_1009ef3c4:
        QByteArray::clear();
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef403;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
LAB_1009ef403:
        local_f0 = local_f0 + 8;
      } while (local_f0 != local_e8);
    }
    local_e0 = 1;
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009ef45f;
      }
      QListData::dispose(local_f8);
    }
  }
LAB_1009ef45f:
  lVar5 = *(long *)(*param_1 + 0x10);
  local_148 = *(Data **)(lVar5 + 0xf8);
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 == 0) {
      QListData::detach((int)&local_148);
      lVar7 = (long)*(int *)(local_148 + 8);
      lVar5 = *(long *)(lVar5 + 0xf8);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_148 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_148 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_148 + 0xc))) {
        _memcpy(local_148 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + 1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
    }
  }
  local_140 = local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10;
  local_138 = local_148 + (long)*(int *)(local_148 + 0xc) * 8 + 0x10;
  if (*(int *)(local_148 + 8) != *(int *)(local_148 + 0xc)) {
    do {
      local_130 = 1;
      lVar5 = *(long *)local_140;
      if (lVar5 != 0) {
        local_160 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_158.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
        if (1 < *(int *)local_158.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + 1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_158);
        CRepCrashDump::getNameInArchive();
        local_150.field0_0x0 = local_158.field0_0x0;
        if (1 < *(int *)local_158.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + 1;
          local_31 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_150);
        if (*(int *)local_168 != -1) {
          if (*(int *)local_168 != 0) {
            LOCK();
            *(int *)local_168 = *(int *)local_168 + -1;
            local_31 = *(int *)local_168 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef600;
          }
          QArrayData::deallocate(local_168,2,8);
        }
LAB_1009ef600:
        if (*(int *)local_158.field0_0x0 != -1) {
          if (*(int *)local_158.field0_0x0 != 0) {
            LOCK();
            *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
            local_31 = *(int *)local_158.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef636;
          }
          QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
        }
LAB_1009ef636:
        if (*(int *)local_160 != -1) {
          if (*(int *)local_160 != 0) {
            LOCK();
            *(int *)local_160 = *(int *)local_160 + -1;
            local_31 = *(int *)local_160 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef66c;
          }
          QArrayData::deallocate(local_160,2,8);
        }
LAB_1009ef66c:
        QFile::QFile((QFile *)local_178,&local_150);
        cVar2 = QFile::open((QFile *)local_178,1);
        if (cVar2 != '\0') {
          QIODevice::readAll();
          QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_180);
          if (*(int *)local_180 != -1) {
            if (*(int *)local_180 != 0) {
              LOCK();
              *(int *)local_180 = *(int *)local_180 + -1;
              local_31 = *(int *)local_180 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009ef6e0;
            }
            QArrayData::deallocate(local_180,1,8);
          }
        }
LAB_1009ef6e0:
        (**(code **)(local_178[0] + 0x70))((QFile *)local_178);
        QByteArray::toBase64();
        CRepCrashDump::setDump(lVar5,&local_188);
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_31 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef73c;
          }
          QArrayData::deallocate(local_188,1,8);
        }
LAB_1009ef73c:
        QByteArray::clear();
        QFile::~QFile((QFile *)local_178);
        if (*(int *)local_150.field0_0x0 != -1) {
          if (*(int *)local_150.field0_0x0 != 0) {
            LOCK();
            *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
            local_31 = *(int *)local_150.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef782;
          }
          QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
        }
      }
LAB_1009ef782:
      local_140 = local_140 + 8;
    } while (local_140 != local_138);
  }
  local_130 = 1;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009ef7de;
    }
    QListData::dispose(local_148);
  }
LAB_1009ef7de:
  lVar5 = *(long *)(*param_1 + 0x10);
  local_1a8 = *(Data **)(lVar5 + 0x100);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 == 0) {
      QListData::detach((int)&local_1a8);
      lVar7 = (long)*(int *)(local_1a8 + 8);
      lVar5 = *(long *)(lVar5 + 0x100);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_1a8 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_1a8 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= *(int *)(local_1a8 + 0xc))) {
        _memcpy(local_1a8 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + 1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
    }
  }
  local_1a0 = local_1a8 + (long)*(int *)(local_1a8 + 8) * 8 + 0x10;
  local_198 = local_1a8 + (long)*(int *)(local_1a8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_1a8 + 8) != *(int *)(local_1a8 + 0xc)) {
    do {
      local_190 = 1;
      lVar5 = *(long *)local_1a0;
      if (lVar5 != 0) {
        local_1c0 = (QArrayData *)QString::fromAscii_helper("/",1);
        local_1b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_2[0x4d];
        if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
          local_31 = *(int *)local_1b8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_1b8);
        CRepMemoryDump::getNameInArchive();
        local_1b0.field0_0x0 = local_1b8.field0_0x0;
        if (1 < *(int *)local_1b8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + 1;
          local_31 = *(int *)local_1b8.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_1b0);
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef980;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
LAB_1009ef980:
        if (*(int *)local_1b8.field0_0x0 != -1) {
          if (*(int *)local_1b8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
            local_31 = *(int *)local_1b8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef9b6;
          }
          QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
        }
LAB_1009ef9b6:
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_31 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009ef9ec;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_1009ef9ec:
        QFile::QFile((QFile *)local_1d8,&local_1b0);
        cVar2 = QFile::open((QFile *)local_1d8,1);
        if (cVar2 != '\0') {
          QIODevice::readAll();
          QByteArray::operator=((QByteArray *)&local_70,(QByteArray *)&local_1e0);
          if (*(int *)local_1e0 != -1) {
            if (*(int *)local_1e0 != 0) {
              LOCK();
              *(int *)local_1e0 = *(int *)local_1e0 + -1;
              local_31 = *(int *)local_1e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009efa60;
            }
            QArrayData::deallocate(local_1e0,1,8);
          }
        }
LAB_1009efa60:
        (**(code **)(local_1d8[0] + 0x70))((QFile *)local_1d8);
        QByteArray::toBase64();
        CRepMemoryDump::setDump(lVar5,&local_1e8);
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_31 = *(int *)local_1e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009efabc;
          }
          QArrayData::deallocate(local_1e8,1,8);
        }
LAB_1009efabc:
        QByteArray::clear();
        QFile::~QFile((QFile *)local_1d8);
        if (*(int *)local_1b0.field0_0x0 != -1) {
          if (*(int *)local_1b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
            local_31 = *(int *)local_1b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1009efb02;
          }
          QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
        }
      }
LAB_1009efb02:
      local_1a0 = local_1a0 + 8;
    } while (local_1a0 != local_198);
  }
  local_190 = 1;
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_31 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009efb5e;
    }
    QListData::dispose(local_1a8);
  }
LAB_1009efb5e:
  plVar10 = (long *)0x0;
  if (*param_1 != 0) {
    plVar10 = *(long **)(*param_1 + 0x10);
  }
  lVar5 = (**(code **)(*plVar10 + 0xb8))();
  if (lVar5 != 0) {
    QVar6.field0_0x0 = operator_new(0xb8);
    CRepAdvancedVmInfo::CRepAdvancedVmInfo((CRepAdvancedVmInfo *)QVar6.field0_0x0);
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xb8))();
    CRepAdvancedVmInfo::getNameInArchive();
    FUN_1009f2400(&local_1f0,param_2,&local_1f8);
    CBaseNode::fromString(QVar6,SUB81(&local_1f0,0),(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_1f0 != -1) {
      if (*(int *)local_1f0 != 0) {
        LOCK();
        *(int *)local_1f0 = *(int *)local_1f0 + -1;
        local_31 = *(int *)local_1f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efc28;
      }
      QArrayData::deallocate(local_1f0,2,8);
    }
LAB_1009efc28:
    if (*(int *)local_1f8 != -1) {
      if (*(int *)local_1f8 != 0) {
        LOCK();
        *(int *)local_1f8 = *(int *)local_1f8 + -1;
        local_31 = *(int *)local_1f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efc5e;
      }
      QArrayData::deallocate(local_1f8,2,8);
    }
LAB_1009efc5e:
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xc0))(plVar10,QVar6.field0_0x0);
  }
  plVar10 = (long *)0x0;
  if (*param_1 != 0) {
    plVar10 = *(long **)(*param_1 + 0x10);
  }
  lVar5 = (**(code **)(*plVar10 + 0xe8))();
  if (lVar5 != 0) {
    QVar6.field0_0x0 = operator_new(0xd0);
    ClientInfo::ClientInfo((ClientInfo *)QVar6.field0_0x0);
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xe8))();
    ClientInfo::getNameInArchive();
    FUN_1009f2400(&local_200,param_2,&local_208);
    CBaseNode::fromString(QVar6,false,(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_200 != -1) {
      if (*(int *)local_200 != 0) {
        LOCK();
        *(int *)local_200 = *(int *)local_200 + -1;
        local_31 = *(int *)local_200 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efd45;
      }
      QArrayData::deallocate(local_200,2,8);
    }
LAB_1009efd45:
    if (*(int *)local_208 != -1) {
      if (*(int *)local_208 != 0) {
        LOCK();
        *(int *)local_208 = *(int *)local_208 + -1;
        local_31 = *(int *)local_208 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efd7b;
      }
      QArrayData::deallocate(local_208,2,8);
    }
LAB_1009efd7b:
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xf0))(plVar10,QVar6.field0_0x0);
  }
  plVar10 = (long *)0x0;
  if (*param_1 != 0) {
    plVar10 = *(long **)(*param_1 + 0x10);
  }
  lVar5 = (**(code **)(*plVar10 + 0xd8))();
  if (lVar5 != 0) {
    QVar6.field0_0x0 = operator_new(0xa8);
    KeyboardMouseProfiles::KeyboardMouseProfiles((KeyboardMouseProfiles *)QVar6.field0_0x0);
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xd8))();
    KeyboardMouseProfiles::getNameInArchive();
    FUN_1009f2400(&local_210,param_2,&local_218);
    CBaseNode::fromString(QVar6,SUB81(&local_210,0),(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_210 != -1) {
      if (*(int *)local_210 != 0) {
        LOCK();
        *(int *)local_210 = *(int *)local_210 + -1;
        local_31 = *(int *)local_210 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efe62;
      }
      QArrayData::deallocate(local_210,2,8);
    }
LAB_1009efe62:
    if (*(int *)local_218 != -1) {
      if (*(int *)local_218 != 0) {
        LOCK();
        *(int *)local_218 = *(int *)local_218 + -1;
        local_31 = *(int *)local_218 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009efe98;
      }
      QArrayData::deallocate(local_218,2,8);
    }
LAB_1009efe98:
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = *(long **)(*param_1 + 0x10);
    }
    (**(code **)(*plVar10 + 0xe0))(plVar10,QVar6.field0_0x0);
  }
  if (*param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x100);
  (**(code **)(*plVar10 + 0xf8))(&local_228,plVar10);
  FUN_1009f2400(&local_220,param_2,&local_228);
  (*pcVar1)(plVar10,&local_220);
  if (*(int *)local_220 != -1) {
    if (*(int *)local_220 != 0) {
      LOCK();
      *(int *)local_220 = *(int *)local_220 + -1;
      local_31 = *(int *)local_220 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eff3f;
    }
    QArrayData::deallocate(local_220,2,8);
  }
LAB_1009eff3f:
  if (*(int *)local_228 != -1) {
    if (*(int *)local_228 != 0) {
      LOCK();
      *(int *)local_228 = *(int *)local_228 + -1;
      local_31 = *(int *)local_228 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009eff75;
    }
    QArrayData::deallocate(local_228,2,8);
  }
LAB_1009eff75:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x110);
  (**(code **)(*plVar10 + 0x108))(&local_238,plVar10);
  FUN_1009f2400(&local_230,param_2,&local_238);
  (*pcVar1)(plVar10,&local_230);
  if (*(int *)local_230 != -1) {
    if (*(int *)local_230 != 0) {
      LOCK();
      *(int *)local_230 = *(int *)local_230 + -1;
      local_31 = *(int *)local_230 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009effff;
    }
    QArrayData::deallocate(local_230,2,8);
  }
LAB_1009effff:
  if (*(int *)local_238 != -1) {
    if (*(int *)local_238 != 0) {
      LOCK();
      *(int *)local_238 = *(int *)local_238 + -1;
      local_31 = *(int *)local_238 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0035;
    }
    QArrayData::deallocate(local_238,2,8);
  }
LAB_1009f0035:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x120);
  (**(code **)(*plVar10 + 0x118))(&local_248,plVar10);
  FUN_1009f2400(&local_240,param_2,&local_248);
  (*pcVar1)(plVar10,&local_240);
  if (*(int *)local_240 != -1) {
    if (*(int *)local_240 != 0) {
      LOCK();
      *(int *)local_240 = *(int *)local_240 + -1;
      local_31 = *(int *)local_240 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f00bf;
    }
    QArrayData::deallocate(local_240,2,8);
  }
LAB_1009f00bf:
  if (*(int *)local_248 != -1) {
    if (*(int *)local_248 != 0) {
      LOCK();
      *(int *)local_248 = *(int *)local_248 + -1;
      local_31 = *(int *)local_248 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f00f5;
    }
    QArrayData::deallocate(local_248,2,8);
  }
LAB_1009f00f5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x130);
  (**(code **)(*plVar10 + 0x128))(&local_258,plVar10);
  FUN_1009f2400(&local_250,param_2,&local_258);
  (*pcVar1)(plVar10,&local_250);
  if (*(int *)local_250 != -1) {
    if (*(int *)local_250 != 0) {
      LOCK();
      *(int *)local_250 = *(int *)local_250 + -1;
      local_31 = *(int *)local_250 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f017f;
    }
    QArrayData::deallocate(local_250,2,8);
  }
LAB_1009f017f:
  if (*(int *)local_258 != -1) {
    if (*(int *)local_258 != 0) {
      LOCK();
      *(int *)local_258 = *(int *)local_258 + -1;
      local_31 = *(int *)local_258 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f01b5;
    }
    QArrayData::deallocate(local_258,2,8);
  }
LAB_1009f01b5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x140);
  (**(code **)(*plVar10 + 0x138))(&local_268,plVar10);
  FUN_1009f2400(&local_260,param_2,&local_268);
  (*pcVar1)(plVar10,&local_260);
  if (*(int *)local_260 != -1) {
    if (*(int *)local_260 != 0) {
      LOCK();
      *(int *)local_260 = *(int *)local_260 + -1;
      local_31 = *(int *)local_260 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f023f;
    }
    QArrayData::deallocate(local_260,2,8);
  }
LAB_1009f023f:
  if (*(int *)local_268 != -1) {
    if (*(int *)local_268 != 0) {
      LOCK();
      *(int *)local_268 = *(int *)local_268 + -1;
      local_31 = *(int *)local_268 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0275;
    }
    QArrayData::deallocate(local_268,2,8);
  }
LAB_1009f0275:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x170);
  (**(code **)(*plVar10 + 0x168))(&local_278,plVar10);
  FUN_1009f2400(&local_270,param_2,&local_278);
  (*pcVar1)(plVar10,&local_270);
  if (*(int *)local_270 != -1) {
    if (*(int *)local_270 != 0) {
      LOCK();
      *(int *)local_270 = *(int *)local_270 + -1;
      local_31 = *(int *)local_270 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f02ff;
    }
    QArrayData::deallocate(local_270,2,8);
  }
LAB_1009f02ff:
  if (*(int *)local_278 != -1) {
    if (*(int *)local_278 != 0) {
      LOCK();
      *(int *)local_278 = *(int *)local_278 + -1;
      local_31 = *(int *)local_278 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0335;
    }
    QArrayData::deallocate(local_278,2,8);
  }
LAB_1009f0335:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x150);
  (**(code **)(*plVar10 + 0x148))(&local_288,plVar10);
  FUN_1009f2400(&local_280,param_2,&local_288);
  (*pcVar1)(plVar10,&local_280);
  if (*(int *)local_280 != -1) {
    if (*(int *)local_280 != 0) {
      LOCK();
      *(int *)local_280 = *(int *)local_280 + -1;
      local_31 = *(int *)local_280 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f03bf;
    }
    QArrayData::deallocate(local_280,2,8);
  }
LAB_1009f03bf:
  if (*(int *)local_288 != -1) {
    if (*(int *)local_288 != 0) {
      LOCK();
      *(int *)local_288 = *(int *)local_288 + -1;
      local_31 = *(int *)local_288 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f03f5;
    }
    QArrayData::deallocate(local_288,2,8);
  }
LAB_1009f03f5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x160);
  (**(code **)(*plVar10 + 0x158))(&local_298,plVar10);
  FUN_1009f2400(&local_290,param_2,&local_298);
  (*pcVar1)(plVar10,&local_290);
  if (*(int *)local_290 != -1) {
    if (*(int *)local_290 != 0) {
      LOCK();
      *(int *)local_290 = *(int *)local_290 + -1;
      local_31 = *(int *)local_290 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f047f;
    }
    QArrayData::deallocate(local_290,2,8);
  }
LAB_1009f047f:
  if (*(int *)local_298 != -1) {
    if (*(int *)local_298 != 0) {
      LOCK();
      *(int *)local_298 = *(int *)local_298 + -1;
      local_31 = *(int *)local_298 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f04b5;
    }
    QArrayData::deallocate(local_298,2,8);
  }
LAB_1009f04b5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x180);
  (**(code **)(*plVar10 + 0x178))(&local_2a8,plVar10);
  FUN_1009f2400(&local_2a0,param_2,&local_2a8);
  (*pcVar1)(plVar10,&local_2a0);
  if (*(int *)local_2a0 != -1) {
    if (*(int *)local_2a0 != 0) {
      LOCK();
      *(int *)local_2a0 = *(int *)local_2a0 + -1;
      local_31 = *(int *)local_2a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f053f;
    }
    QArrayData::deallocate(local_2a0,2,8);
  }
LAB_1009f053f:
  if (*(int *)local_2a8 != -1) {
    if (*(int *)local_2a8 != 0) {
      LOCK();
      *(int *)local_2a8 = *(int *)local_2a8 + -1;
      local_31 = *(int *)local_2a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0575;
    }
    QArrayData::deallocate(local_2a8,2,8);
  }
LAB_1009f0575:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 400);
  (**(code **)(*plVar10 + 0x188))(&local_2b8,plVar10);
  FUN_1009f2400(&local_2b0,param_2,&local_2b8);
  (*pcVar1)(plVar10,&local_2b0);
  if (*(int *)local_2b0 != -1) {
    if (*(int *)local_2b0 != 0) {
      LOCK();
      *(int *)local_2b0 = *(int *)local_2b0 + -1;
      local_31 = *(int *)local_2b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f05ff;
    }
    QArrayData::deallocate(local_2b0,2,8);
  }
LAB_1009f05ff:
  if (*(int *)local_2b8 != -1) {
    if (*(int *)local_2b8 != 0) {
      LOCK();
      *(int *)local_2b8 = *(int *)local_2b8 + -1;
      local_31 = *(int *)local_2b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0635;
    }
    QArrayData::deallocate(local_2b8,2,8);
  }
LAB_1009f0635:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x1a0);
  (**(code **)(*plVar10 + 0x188))(&local_2c8,plVar10);
  FUN_1009f2400(&local_2c0,param_2,&local_2c8);
  (*pcVar1)(plVar10,&local_2c0);
  if (*(int *)local_2c0 != -1) {
    if (*(int *)local_2c0 != 0) {
      LOCK();
      *(int *)local_2c0 = *(int *)local_2c0 + -1;
      local_31 = *(int *)local_2c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f06bf;
    }
    QArrayData::deallocate(local_2c0,2,8);
  }
LAB_1009f06bf:
  if (*(int *)local_2c8 != -1) {
    if (*(int *)local_2c8 != 0) {
      LOCK();
      *(int *)local_2c8 = *(int *)local_2c8 + -1;
      local_31 = *(int *)local_2c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f06f5;
    }
    QArrayData::deallocate(local_2c8,2,8);
  }
LAB_1009f06f5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x1c0);
  (**(code **)(*plVar10 + 0x1b8))(&local_2d8,plVar10);
  FUN_1009f2400(&local_2d0,param_2,&local_2d8);
  (*pcVar1)(plVar10,&local_2d0);
  if (*(int *)local_2d0 != -1) {
    if (*(int *)local_2d0 != 0) {
      LOCK();
      *(int *)local_2d0 = *(int *)local_2d0 + -1;
      local_31 = *(int *)local_2d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f077f;
    }
    QArrayData::deallocate(local_2d0,2,8);
  }
LAB_1009f077f:
  if (*(int *)local_2d8 != -1) {
    if (*(int *)local_2d8 != 0) {
      LOCK();
      *(int *)local_2d8 = *(int *)local_2d8 + -1;
      local_31 = *(int *)local_2d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f07b5;
    }
    QArrayData::deallocate(local_2d8,2,8);
  }
LAB_1009f07b5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x1d0);
  (**(code **)(*plVar10 + 0x1c8))(&local_2e8,plVar10);
  FUN_1009f2400(&local_2e0,param_2,&local_2e8);
  (*pcVar1)(plVar10,&local_2e0);
  if (*(int *)local_2e0 != -1) {
    if (*(int *)local_2e0 != 0) {
      LOCK();
      *(int *)local_2e0 = *(int *)local_2e0 + -1;
      local_31 = *(int *)local_2e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f083f;
    }
    QArrayData::deallocate(local_2e0,2,8);
  }
LAB_1009f083f:
  if (*(int *)local_2e8 != -1) {
    if (*(int *)local_2e8 != 0) {
      LOCK();
      *(int *)local_2e8 = *(int *)local_2e8 + -1;
      local_31 = *(int *)local_2e8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0875;
    }
    QArrayData::deallocate(local_2e8,2,8);
  }
LAB_1009f0875:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x1e0);
  (**(code **)(*plVar10 + 0x1d8))(&local_2f8,plVar10);
  FUN_1009f2400(&local_2f0,param_2,&local_2f8);
  (*pcVar1)(plVar10,&local_2f0);
  if (*(int *)local_2f0 != -1) {
    if (*(int *)local_2f0 != 0) {
      LOCK();
      *(int *)local_2f0 = *(int *)local_2f0 + -1;
      local_31 = *(int *)local_2f0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f08ff;
    }
    QArrayData::deallocate(local_2f0,2,8);
  }
LAB_1009f08ff:
  if (*(int *)local_2f8 != -1) {
    if (*(int *)local_2f8 != 0) {
      LOCK();
      *(int *)local_2f8 = *(int *)local_2f8 + -1;
      local_31 = *(int *)local_2f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0935;
    }
    QArrayData::deallocate(local_2f8,2,8);
  }
LAB_1009f0935:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x1f0);
  (**(code **)(*plVar10 + 0x1e8))(&local_308,plVar10);
  FUN_1009f2400(&local_300,param_2,&local_308);
  (*pcVar1)(plVar10,&local_300);
  if (*(int *)local_300 != -1) {
    if (*(int *)local_300 != 0) {
      LOCK();
      *(int *)local_300 = *(int *)local_300 + -1;
      local_31 = *(int *)local_300 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f09bf;
    }
    QArrayData::deallocate(local_300,2,8);
  }
LAB_1009f09bf:
  if (*(int *)local_308 != -1) {
    if (*(int *)local_308 != 0) {
      LOCK();
      *(int *)local_308 = *(int *)local_308 + -1;
      local_31 = *(int *)local_308 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f09f5;
    }
    QArrayData::deallocate(local_308,2,8);
  }
LAB_1009f09f5:
  if (*param_1 == 0) goto LAB_1009f0ddb;
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x200);
  (**(code **)(*plVar10 + 0x1f8))(&local_318,plVar10);
  FUN_1009f2400(&local_310,param_2,&local_318);
  (*pcVar1)(plVar10,&local_310);
  if (*(int *)local_310 != -1) {
    if (*(int *)local_310 != 0) {
      LOCK();
      *(int *)local_310 = *(int *)local_310 + -1;
      local_31 = *(int *)local_310 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0a7f;
    }
    QArrayData::deallocate(local_310,2,8);
  }
LAB_1009f0a7f:
  if (*(int *)local_318 != -1) {
    if (*(int *)local_318 != 0) {
      LOCK();
      *(int *)local_318 = *(int *)local_318 + -1;
      local_31 = *(int *)local_318 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0ab5;
    }
    QArrayData::deallocate(local_318,2,8);
  }
LAB_1009f0ab5:
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*param_1 != 0) {
    QVar6.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*param_1 + 0x10);
  }
  CProblemReport::getFilesMd5InProductBundle();
  FUN_1009f2400(&local_320,param_2,&local_328);
  CProblemReport::setFilesMd5InProductBundle(QVar6);
  if (*(int *)local_320 != -1) {
    if (*(int *)local_320 != 0) {
      LOCK();
      *(int *)local_320 = *(int *)local_320 + -1;
      local_31 = *(int *)local_320 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0b31;
    }
    QArrayData::deallocate(local_320,2,8);
  }
LAB_1009f0b31:
  if (*(int *)local_328 != -1) {
    if (*(int *)local_328 != 0) {
      LOCK();
      *(int *)local_328 = *(int *)local_328 + -1;
      local_31 = *(int *)local_328 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0b67;
    }
    QArrayData::deallocate(local_328,2,8);
  }
LAB_1009f0b67:
  if (*param_1 == 0) {
LAB_1009f0ddb:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  plVar10 = *(long **)(*param_1 + 0x10);
  pcVar1 = *(code **)(*plVar10 + 0x230);
  (**(code **)(*plVar10 + 0x228))(&local_338,plVar10);
  FUN_1009f2400(&local_330,param_2,&local_338);
  (*pcVar1)(plVar10,&local_330);
  if (*(int *)local_330 != -1) {
    if (*(int *)local_330 != 0) {
      LOCK();
      *(int *)local_330 = *(int *)local_330 + -1;
      local_31 = *(int *)local_330 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0bf1;
    }
    QArrayData::deallocate(local_330,2,8);
  }
LAB_1009f0bf1:
  if (*(int *)local_338 != -1) {
    if (*(int *)local_338 != 0) {
      LOCK();
      *(int *)local_338 = *(int *)local_338 + -1;
      local_31 = *(int *)local_338 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0c27;
    }
    QArrayData::deallocate(local_338,2,8);
  }
LAB_1009f0c27:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009f0c57;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_1009f0c57:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

