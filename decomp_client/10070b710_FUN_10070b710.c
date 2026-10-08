
void FUN_10070b710(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  undefined8 *puVar9;
  long lVar10;
  QKeySequence *pQVar11;
  QKeySequence *pQVar12;
  long lVar13;
  QString *pQVar14;
  int local_200;
  int local_1f0;
  QKeySequence local_1e0 [8];
  QKeySequence local_1d8 [16];
  QKeySequence local_1c8 [8];
  QKeySequence local_1c0 [16];
  QKeySequence local_1b0 [8];
  QKeySequence local_1a8 [8];
  undefined4 local_1a0;
  QKeySequence local_198 [8];
  QKeySequence local_190 [8];
  undefined4 local_188;
  QKeySequence local_180 [8];
  QKeySequence local_178 [16];
  QKeySequence local_168 [8];
  QKeySequence local_160 [16];
  QKeySequence local_150 [8];
  QKeySequence local_148 [8];
  undefined4 local_140;
  QKeySequence local_138 [8];
  QKeySequence local_130 [8];
  undefined4 local_128;
  QKeySequence local_120 [8];
  QKeySequence local_118 [8];
  QKeySequence local_110 [8];
  QKeySequence local_108 [16];
  QKeySequence local_f8 [8];
  QKeySequence local_f0 [16];
  QKeySequence local_e0 [8];
  QKeySequence local_d8 [8];
  undefined4 local_d0;
  QKeySequence local_c8 [8];
  QKeySequence local_c0 [8];
  undefined4 local_b8;
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  Data_conflict local_68;
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  uint *local_40;
  undefined1 local_31;
  
  FUN_100713fb0(&local_40,&DAT_102312388);
  uVar5 = *local_40;
  if ((int)local_40[2] < (int)local_40[3]) {
    puVar9 = (undefined8 *)(param_1 + 0x18);
    lVar13 = 0;
    do {
      if (1 < uVar5) {
        FUN_1001c4bd0(&local_40,local_40[1]);
      }
      puVar1 = *(undefined8 **)(local_40 + ((int)local_40[2] + lVar13) * 2 + 4);
      local_50 = (QArrayData *)*puVar1;
      if (1 < *(int *)local_50 + 1U) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + 1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
      }
      local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1[1];
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
      local_80 = (QArrayData *)QString::fromAscii_helper("/",1);
      QString::fromUtf8_helper((char *)&local_78,0x1e13453);
      QString::append(&local_78);
      local_70.field0_0x0 = local_78.field0_0x0;
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_70);
      local_68.field15 = (QObject *)local_70.field0_0x0;
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append((QString *)&local_68);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070b87d;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10070b87d:
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070b8ad;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10070b8ad:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070b8dd;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10070b8dd:
      QVariant::QVariant(&local_a0,false);
      QSettings::value((QString *)&local_90,&local_60);
      cVar4 = QVariant::toBool();
      QVariant::~QVariant(&local_90);
      QVariant::~QVariant(&local_a0);
      if (cVar4 == '\0') {
        QVariant::QVariant(&local_b0,true);
        QSettings::setValue((QString *)&local_60,(QVariant *)&local_68);
        QVariant::~QVariant(&local_b0);
        puVar6 = (uint *)*puVar9;
        lVar10 = 0;
        if ((int)puVar6[2] < (int)puVar6[3]) {
          do {
            if (1 < *puVar6) {
              FUN_10055a380(puVar9,puVar6[1]);
              puVar6 = (uint *)*puVar9;
            }
            pQVar14 = *(QString **)(puVar6 + ((int)puVar6[2] + lVar10) * 2 + 4);
            cVar4 = operator==(pQVar14,&local_48);
            if (cVar4 != '\0') {
              pQVar8 = pQVar14[2].field0_0x0;
              if ((int)*(uint *)(pQVar8 + 8) < (int)*(uint *)(pQVar8 + 0xc)) {
                pQVar14 = pQVar14 + 2;
                local_1f0 = -1;
                lVar10 = 0;
                local_200 = -1;
                do {
                  if (1 < *(uint *)pQVar8) {
                    FUN_100559bb0(pQVar14,*(uint *)(pQVar8 + 4));
                    pQVar8 = pQVar14->field0_0x0;
                  }
                  uVar2 = *(undefined8 *)(pQVar8 + ((int)*(uint *)(pQVar8 + 8) + lVar10) * 8 + 0x10)
                  ;
                  FUN_1007143b0(local_110);
                  lVar7 = FUN_1007149b0(DAT_102312388,&local_50);
                  pQVar11 = (QKeySequence *)(lVar7 + 0x28);
                  if (lVar7 == 0) {
                    pQVar11 = local_110;
                  }
                  QKeySequence::QKeySequence(local_e0,pQVar11);
                  QKeySequence::QKeySequence(local_d8,pQVar11 + 8);
                  local_d0 = *(undefined4 *)(pQVar11 + 0x10);
                  QKeySequence::QKeySequence(local_c8,pQVar11 + 0x18);
                  QKeySequence::QKeySequence(local_c0,pQVar11 + 0x20);
                  local_b8 = *(undefined4 *)(pQVar11 + 0x28);
                  cVar4 = FUN_100714bd0(uVar2,local_e0);
                  QKeySequence::~QKeySequence(local_c0);
                  QKeySequence::~QKeySequence(local_c8);
                  QKeySequence::~QKeySequence(local_d8);
                  QKeySequence::~QKeySequence(local_e0);
                  QKeySequence::~QKeySequence(local_f0);
                  QKeySequence::~QKeySequence(local_f8);
                  QKeySequence::~QKeySequence(local_108);
                  QKeySequence::~QKeySequence(local_110);
                  iVar3 = (int)lVar10;
                  if (cVar4 == '\0') {
                    FUN_100714b50(local_118,uVar2);
                    FUN_1007143b0(local_180);
                    lVar7 = FUN_1007149b0(DAT_102312388,&local_50);
                    pQVar11 = (QKeySequence *)(lVar7 + 0x28);
                    if (lVar7 == 0) {
                      pQVar11 = local_180;
                    }
                    QKeySequence::QKeySequence(local_150,pQVar11);
                    QKeySequence::QKeySequence(local_148,pQVar11 + 8);
                    local_140 = *(undefined4 *)(pQVar11 + 0x10);
                    QKeySequence::QKeySequence(local_138,pQVar11 + 0x18);
                    QKeySequence::QKeySequence(local_130,pQVar11 + 0x20);
                    local_128 = *(undefined4 *)(pQVar11 + 0x28);
                    FUN_100714b50(local_120,local_138);
                    cVar4 = QKeySequence::operator==(local_118,local_120);
                    QKeySequence::~QKeySequence(local_120);
                    QKeySequence::~QKeySequence(local_130);
                    QKeySequence::~QKeySequence(local_138);
                    QKeySequence::~QKeySequence(local_148);
                    QKeySequence::~QKeySequence(local_150);
                    QKeySequence::~QKeySequence(local_160);
                    QKeySequence::~QKeySequence(local_168);
                    QKeySequence::~QKeySequence(local_178);
                    QKeySequence::~QKeySequence(local_180);
                    QKeySequence::~QKeySequence(local_118);
                    iVar3 = local_200;
                    if (cVar4 != '\0') {
                      local_1f0 = (int)lVar10;
                    }
                  }
                  local_200 = iVar3;
                  lVar10 = lVar10 + 1;
                  pQVar8 = pQVar14->field0_0x0;
                } while (lVar10 < (long)(int)*(uint *)(pQVar8 + 0xc) -
                                  (long)(int)*(uint *)(pQVar8 + 8));
                if ((local_200 == -1) || (local_1f0 == -1)) {
                  if (local_200 != -1) {
                    if (1 < *(uint *)pQVar8) {
                      FUN_100559bb0(pQVar14,*(uint *)(pQVar8 + 4));
                      pQVar8 = pQVar14->field0_0x0;
                    }
                    pQVar11 = *(QKeySequence **)
                               (pQVar8 + ((long)local_200 + (long)(int)*(uint *)(pQVar8 + 8)) * 8 +
                                         0x10);
                    FUN_1007143b0(local_1e0);
                    lVar10 = FUN_1007149b0(DAT_102312388,&local_50);
                    pQVar12 = (QKeySequence *)(lVar10 + 0x28);
                    if (lVar10 == 0) {
                      pQVar12 = local_1e0;
                    }
                    QKeySequence::QKeySequence(local_1b0,pQVar12);
                    QKeySequence::QKeySequence(local_1a8,pQVar12 + 8);
                    local_1a0 = *(undefined4 *)(pQVar12 + 0x10);
                    QKeySequence::QKeySequence(local_198,pQVar12 + 0x18);
                    QKeySequence::QKeySequence(local_190,pQVar12 + 0x20);
                    local_188 = *(undefined4 *)(pQVar12 + 0x28);
                    QKeySequence::operator=(pQVar11,local_198);
                    QKeySequence::operator=(pQVar11 + 8,local_190);
                    *(undefined4 *)(pQVar11 + 0x10) = local_188;
                    QKeySequence::~QKeySequence(local_190);
                    QKeySequence::~QKeySequence(local_198);
                    QKeySequence::~QKeySequence(local_1a8);
                    QKeySequence::~QKeySequence(local_1b0);
                    QKeySequence::~QKeySequence(local_1c0);
                    QKeySequence::~QKeySequence(local_1c8);
                    QKeySequence::~QKeySequence(local_1d8);
                    QKeySequence::~QKeySequence(local_1e0);
                  }
                }
                else {
                  FUN_100714070(pQVar14);
                }
              }
              break;
            }
            lVar10 = lVar10 + 1;
            puVar6 = (uint *)*puVar9;
          } while (lVar10 < (long)(int)puVar6[3] - (long)(int)puVar6[2]);
        }
      }
      if (*(int *)local_68.field15 != -1) {
        if (*(int *)local_68.field15 != 0) {
          LOCK();
          *(int *)local_68.field15 = *(int *)local_68.field15 + -1;
          local_31 = *(int *)local_68.field15 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070be3b;
        }
        QArrayData::deallocate((QArrayData *)local_68.field15,2,8);
      }
LAB_10070be3b:
      QSettings::~QSettings((QSettings *)&local_60);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070be74;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_10070be74:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10070bea4;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_10070bea4:
      lVar13 = lVar13 + 1;
      uVar5 = *local_40;
    } while (lVar13 < (long)(int)local_40[3] - (long)(int)local_40[2]);
  }
  if (uVar5 != 0xffffffff) {
    if (uVar5 != 0) {
      LOCK();
      *local_40 = *local_40 - 1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1001c45d0(&local_40,local_40);
  }
  return;
}

