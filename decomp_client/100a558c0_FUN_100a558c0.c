
undefined1 FUN_100a558c0(QString *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  bool bVar8;
  QString local_1a8;
  QString local_1a0;
  QString local_198;
  QString local_190;
  QString local_188;
  QString local_180;
  QString local_178;
  QString local_170;
  QString local_168;
  QString local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QString local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  QString local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QString local_b0;
  QString local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar5,PTR_s_setNumberStyle__10226a2d0,2);
  puVar1 = PTR_shared_null_1021e1288;
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100a545d0(&local_f0);
  local_f8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  FUN_100a53730(&local_f8);
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_negativePrefix_10226a2f8);
  if (puVar1 == (undefined *)0x0) {
    local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_100,(ID)puVar1,PTR_s_QStringWithString__1022696d0,uVar6)
    ;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar5,PTR_s_negativeSuffix_10226a300);
  if (puVar1 == (undefined *)0x0) {
    local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_108,(ID)puVar1,PTR_s_QStringWithString__1022696d0,uVar5)
    ;
  }
  FUN_100a557d0(&local_100);
  FUN_100a557d0(&local_108);
  QString::fromUtf8_helper((char *)&local_110,0x1e1dac2);
  QString::append(&local_110);
  cVar2 = operator==(&local_100,&local_110);
  if (cVar2 == '\0') {
    bVar8 = false;
  }
  else {
    iVar3 = QString::compare_helper
                      ((QArrayData *)(local_108.field0_0x0 + *(long *)(local_108.field0_0x0 + 0x10))
                       ,*(undefined4 *)(local_108.field0_0x0 + 4),")",0xffffffff,1);
    bVar8 = iVar3 == 0;
  }
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_29 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a55aa9;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100a55aa9:
  if (bVar8) {
    QString::fromUtf8_helper((char *)&local_e8,0x1e25514);
    QString::operator=(param_1,&local_e8);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_29 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56dd3;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_100a56dd3:
    uVar7 = 1;
  }
  else {
    local_118.field0_0x0 = local_f8.field0_0x0;
    if (1 < *(int *)local_f8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_118);
    cVar2 = operator==(&local_100,&local_118);
    if (cVar2 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(local_108.field0_0x0 + 4) == 0;
    }
    if (*(int *)local_118.field0_0x0 != -1) {
      if (*(int *)local_118.field0_0x0 != 0) {
        LOCK();
        *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
        local_29 = *(int *)local_118.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a55ba8;
      }
      QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
    }
LAB_100a55ba8:
    if (bVar8) {
      QString::fromUtf8_helper((char *)&local_e0,0x1e289c2);
      QString::operator=(param_1,&local_e0);
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_29 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    local_120.field0_0x0 = local_f0.field0_0x0;
    if (1 < *(int *)local_f0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_120);
    cVar2 = operator==(&local_100,&local_120);
    if (cVar2 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(local_108.field0_0x0 + 4) == 0;
    }
    if (*(int *)local_120.field0_0x0 != -1) {
      if (*(int *)local_120.field0_0x0 != 0) {
        LOCK();
        *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
        local_29 = *(int *)local_120.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a55ca7;
      }
      QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
    }
LAB_100a55ca7:
    if (bVar8) {
      QString::fromUtf8_helper((char *)&local_d8,0x1df9dd7);
      QString::operator=(param_1,&local_d8);
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_29 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    cVar2 = operator==(&local_100,&local_f0);
    if ((cVar2 != '\0') && (cVar2 = operator==(&local_108,&local_f8), cVar2 != '\0')) {
      QString::fromUtf8_helper((char *)&local_d0,0x1e3cf90);
      QString::operator=(param_1,&local_d0);
      if (*(int *)local_d0.field0_0x0 != -1) {
        if (*(int *)local_d0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
          local_29 = *(int *)local_d0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    iVar3 = QString::compare_helper
                      ((QArrayData *)(local_100.field0_0x0 + *(long *)(local_100.field0_0x0 + 0x10))
                       ,*(undefined4 *)(local_100.field0_0x0 + 4),"(",0xffffffff,1);
    if (iVar3 == 0) {
      local_128.field0_0x0 = local_f0.field0_0x0;
      if (1 < *(int *)local_f0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
        local_29 = *(int *)local_f0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_c8,0x1e1dad6);
      QString::append(&local_128);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_29 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a55e61;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_100a55e61:
      cVar2 = operator==(&local_108,&local_128);
      if (*(int *)local_128.field0_0x0 != -1) {
        if (*(int *)local_128.field0_0x0 != 0) {
          LOCK();
          *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
          local_29 = *(int *)local_128.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a55eac;
        }
        QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
      }
LAB_100a55eac:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_c0,0x1e3cf95);
        QString::operator=(param_1,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_29 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
    }
    cVar2 = operator==(&local_100,&local_f8);
    if ((cVar2 != '\0') && (cVar2 = operator==(&local_108,&local_f0), cVar2 != '\0')) {
      QString::fromUtf8_helper((char *)&local_b8,0x1e3cf97);
      QString::operator=(param_1,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_29 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    if (*(int *)(local_100.field0_0x0 + 4) == 0) {
      local_130.field0_0x0 = local_f8.field0_0x0;
      if (1 < *(int *)local_f8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
        local_29 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_130);
      cVar2 = operator==(&local_108,&local_130);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_29 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56044;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_100a56044:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_b0,0x1e3cf99);
        QString::operator=(param_1,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_29 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
      if (*(int *)(local_100.field0_0x0 + 4) == 0) {
        local_138.field0_0x0 = local_f0.field0_0x0;
        if (1 < *(int *)local_f0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
          local_29 = *(int *)local_f0.field0_0x0 != 0;
          UNLOCK();
        }
        QString::append(&local_138);
        cVar2 = operator==(&local_108,&local_138);
        if (*(int *)local_138.field0_0x0 != -1) {
          if (*(int *)local_138.field0_0x0 != 0) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
            local_29 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56140;
          }
          QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
        }
LAB_100a56140:
        if (cVar2 != '\0') {
          QString::fromUtf8_helper((char *)&local_a8,0x1e3cf9b);
          QString::operator=(param_1,&local_a8);
          if (*(int *)local_a8.field0_0x0 != -1) {
            if (*(int *)local_a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
              local_29 = *(int *)local_a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_100a56dd3;
            }
            QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
          }
          goto LAB_100a56dd3;
        }
      }
    }
    cVar2 = operator==(&local_100,&local_f8);
    if (cVar2 != '\0') {
      QString::fromUtf8_helper((char *)&local_140,0x1e31adc);
      QString::append(&local_140);
      cVar2 = operator==(&local_108,&local_140);
      if (*(int *)local_140.field0_0x0 != -1) {
        if (*(int *)local_140.field0_0x0 != 0) {
          LOCK();
          *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
          local_29 = *(int *)local_140.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a5623f;
        }
        QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
      }
LAB_100a5623f:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_a0,0x1e3cf9d);
        QString::operator=(param_1,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_29 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
    }
    local_150.field0_0x0 = local_f8.field0_0x0;
    if (1 < *(int *)local_f8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_150);
    local_148.field0_0x0 = local_150.field0_0x0;
    if (1 < *(int *)local_150.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + 1;
      local_29 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_98,0x1e31adc);
    QString::append(&local_148);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a5635f;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a5635f:
    cVar2 = operator==(&local_100,&local_148);
    if (cVar2 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(local_108.field0_0x0 + 4) == 0;
    }
    if (*(int *)local_148.field0_0x0 != -1) {
      if (*(int *)local_148.field0_0x0 != 0) {
        LOCK();
        *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
        local_29 = *(int *)local_148.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a563be;
      }
      QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
    }
LAB_100a563be:
    if (*(int *)local_150.field0_0x0 != -1) {
      if (*(int *)local_150.field0_0x0 != 0) {
        LOCK();
        *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
        local_29 = *(int *)local_150.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a563f4;
      }
      QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
    }
LAB_100a563f4:
    if (bVar8) {
      QString::fromUtf8_helper((char *)&local_90,0x1e3cf9f);
      QString::operator=(param_1,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_29 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    if (*(int *)(local_100.field0_0x0 + 4) == 0) {
      QString::fromUtf8_helper((char *)&local_160,0x1e31adc);
      QString::append(&local_160);
      local_158.field0_0x0 = local_160.field0_0x0;
      if (1 < *(int *)local_160.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + 1;
        local_29 = *(int *)local_160.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_158);
      cVar2 = operator==(&local_108,&local_158);
      if (*(int *)local_158.field0_0x0 != -1) {
        if (*(int *)local_158.field0_0x0 != 0) {
          LOCK();
          *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
          local_29 = *(int *)local_158.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a5651c;
        }
        QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
      }
LAB_100a5651c:
      if (*(int *)local_160.field0_0x0 != -1) {
        if (*(int *)local_160.field0_0x0 != 0) {
          LOCK();
          *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
          local_29 = *(int *)local_160.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56552;
        }
        QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
      }
LAB_100a56552:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_88,0x1e3cfa1);
        QString::operator=(param_1,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_29 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
    }
    local_168.field0_0x0 = local_f0.field0_0x0;
    if (1 < *(int *)local_f0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_80,0x1e31adc);
    QString::append(&local_168);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_29 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56629;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100a56629:
    cVar2 = operator==(&local_100,&local_168);
    if (cVar2 == '\0') {
      cVar2 = '\0';
    }
    else {
      cVar2 = operator==(&local_108,&local_f8);
    }
    if (*(int *)local_168.field0_0x0 != -1) {
      if (*(int *)local_168.field0_0x0 != 0) {
        LOCK();
        *(int *)local_168.field0_0x0 = *(int *)local_168.field0_0x0 + -1;
        local_29 = *(int *)local_168.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a566d5;
      }
      QArrayData::deallocate((QArrayData *)local_168.field0_0x0,2,8);
    }
LAB_100a566d5:
    if (cVar2 != '\0') {
      QString::fromUtf8_helper((char *)&local_78,0x1e3cfa4);
      QString::operator=(param_1,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    local_178.field0_0x0 = local_f0.field0_0x0;
    if (1 < *(int *)local_f0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + 1;
      local_29 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_70,0x1e31adc);
    QString::append(&local_178);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a567ab;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100a567ab:
    local_170.field0_0x0 = local_178.field0_0x0;
    if (1 < *(int *)local_178.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + 1;
      local_29 = *(int *)local_178.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_170);
    cVar2 = operator==(&local_100,&local_170);
    if (cVar2 == '\0') {
      bVar8 = false;
    }
    else {
      bVar8 = *(int *)(local_108.field0_0x0 + 4) == 0;
    }
    if (*(int *)local_170.field0_0x0 != -1) {
      if (*(int *)local_170.field0_0x0 != 0) {
        LOCK();
        *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
        local_29 = *(int *)local_170.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a5683c;
      }
      QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
    }
LAB_100a5683c:
    if (*(int *)local_178.field0_0x0 != -1) {
      if (*(int *)local_178.field0_0x0 != 0) {
        LOCK();
        *(int *)local_178.field0_0x0 = *(int *)local_178.field0_0x0 + -1;
        local_29 = *(int *)local_178.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56872;
      }
      QArrayData::deallocate((QArrayData *)local_178.field0_0x0,2,8);
    }
LAB_100a56872:
    if (bVar8) {
      QString::fromUtf8_helper((char *)&local_68,0x1e3cfa7);
      QString::operator=(param_1,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_29 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    if (*(int *)(local_100.field0_0x0 + 4) == 0) {
      local_188.field0_0x0 = local_f8.field0_0x0;
      if (1 < *(int *)local_f8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + 1;
        local_29 = *(int *)local_f8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_60,0x1e31adc);
      QString::append(&local_188);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56959;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100a56959:
      local_180.field0_0x0 = local_188.field0_0x0;
      if (1 < *(int *)local_188.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + 1;
        local_29 = *(int *)local_188.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_180);
      cVar2 = operator==(&local_108,&local_180);
      if (*(int *)local_180.field0_0x0 != -1) {
        if (*(int *)local_180.field0_0x0 != 0) {
          LOCK();
          *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
          local_29 = *(int *)local_180.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a569d7;
        }
        QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
      }
LAB_100a569d7:
      if (*(int *)local_188.field0_0x0 != -1) {
        if (*(int *)local_188.field0_0x0 != 0) {
          LOCK();
          *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
          local_29 = *(int *)local_188.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56a0d;
        }
        QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
      }
LAB_100a56a0d:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_58,0x1e3cfaa);
        QString::operator=(param_1,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_29 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
    }
    QString::fromUtf8_helper((char *)&local_198,0x1e1dac2);
    QString::append(&local_198);
    local_190.field0_0x0 = local_198.field0_0x0;
    if (1 < *(int *)local_198.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + 1;
      local_29 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1e31adc);
    QString::append(&local_190);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56b0f;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100a56b0f:
    cVar2 = operator==(&local_100,&local_190);
    if (cVar2 == '\0') {
      bVar8 = false;
    }
    else {
      iVar3 = QString::compare_helper
                        ((QArrayData *)
                         (local_108.field0_0x0 + *(long *)(local_108.field0_0x0 + 0x10)),
                         *(undefined4 *)(local_108.field0_0x0 + 4),")",0xffffffff,1);
      bVar8 = iVar3 == 0;
    }
    if (*(int *)local_190.field0_0x0 != -1) {
      if (*(int *)local_190.field0_0x0 != 0) {
        LOCK();
        *(int *)local_190.field0_0x0 = *(int *)local_190.field0_0x0 + -1;
        local_29 = *(int *)local_190.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56b8d;
      }
      QArrayData::deallocate((QArrayData *)local_190.field0_0x0,2,8);
    }
LAB_100a56b8d:
    if (*(int *)local_198.field0_0x0 != -1) {
      if (*(int *)local_198.field0_0x0 != 0) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
        local_29 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a56bc3;
      }
      QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
    }
LAB_100a56bc3:
    if (bVar8) {
      QString::fromUtf8_helper((char *)&local_48,0x1e3cfad);
      QString::operator=(param_1,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_29 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56dd3;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      goto LAB_100a56dd3;
    }
    iVar3 = QString::compare_helper
                      ((QArrayData *)(local_100.field0_0x0 + *(long *)(local_100.field0_0x0 + 0x10))
                       ,*(undefined4 *)(local_100.field0_0x0 + 4),"(",0xffffffff,1);
    if (iVar3 == 0) {
      QString::fromUtf8_helper((char *)&local_1a8,0x1e31adc);
      QString::append(&local_1a8);
      local_1a0.field0_0x0 = local_1a8.field0_0x0;
      if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
        local_29 = *(int *)local_1a8.field0_0x0 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_40,0x1e1dad6);
      QString::append(&local_1a0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56cf7;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100a56cf7:
      cVar2 = operator==(&local_108,&local_1a0);
      if (*(int *)local_1a0.field0_0x0 != -1) {
        if (*(int *)local_1a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
          local_29 = *(int *)local_1a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56d43;
        }
        QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
      }
LAB_100a56d43:
      if (*(int *)local_1a8.field0_0x0 != -1) {
        if (*(int *)local_1a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
          local_29 = *(int *)local_1a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a56d79;
        }
        QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
      }
LAB_100a56d79:
      if (cVar2 != '\0') {
        QString::fromUtf8_helper((char *)&local_38,0x1e3cfb0);
        QString::operator=(param_1,&local_38);
        if (*(int *)local_38.field0_0x0 != -1) {
          if (*(int *)local_38.field0_0x0 != 0) {
            LOCK();
            *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
            local_29 = *(int *)local_38.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100a56dd3;
          }
          QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
        }
        goto LAB_100a56dd3;
      }
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
    }
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_29 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a56e1b;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100a56e1b:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_29 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a56e51;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100a56e51:
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_29 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a56e87;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100a56e87:
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_f0.field0_0x0 != 0) {
        return uVar7;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
  return uVar7;
}

