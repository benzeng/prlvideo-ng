
undefined1 FUN_100a54c00(QString *param_1)

{
  undefined *puVar1;
  undefined *self;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar4,PTR_s_setNumberStyle__10226a2d0,2);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_positivePrefix_10226a308);
  if (self == (undefined *)0x0) {
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_68,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_positiveSuffix_10226a310);
  if (puVar1 == (undefined *)0x0) {
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_70,(ID)puVar1,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::trimmed();
  if (*(int *)(local_78 + 4) == 0) {
    bVar7 = false;
  }
  else {
    QString::trimmed();
    cVar2 = operator==(&local_80,&local_68);
    if (cVar2 == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *(int *)(local_70.field0_0x0 + 4) == 0;
    }
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_31 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a54d6c;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
  }
LAB_100a54d6c:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a54d9c;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a54d9c:
  if (bVar7) {
    QString::fromUtf8_helper((char *)&local_60,0x1e25514);
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a5525e;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a5525e:
    uVar6 = 1;
  }
  else {
    QString::trimmed();
    if (*(int *)(local_88 + 4) == 0) {
      bVar7 = false;
    }
    else {
      QString::trimmed();
      cVar2 = operator==(&local_90,&local_70);
      if (cVar2 == '\0') {
        bVar7 = false;
      }
      else {
        bVar7 = *(int *)(local_68.field0_0x0 + 4) == 0;
      }
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a54e82;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
LAB_100a54e82:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a54eb2;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_100a54eb2:
    if (bVar7) {
      QString::fromUtf8_helper((char *)&local_58,0x1e289c2);
      QString::operator=(param_1,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5525e;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
      goto LAB_100a5525e;
    }
    QString::trimmed();
    if (*(int *)(local_98 + 4) == 0) {
      bVar7 = false;
    }
    else {
      QString::trimmed();
      local_a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_a8;
      if (1 < *(int *)local_a8 + 1U) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + 1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
      }
      QString::fromUtf8_helper((char *)&local_50,0x1e31adc);
      QString::append(&local_a0);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a54fb9;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100a54fb9:
      cVar2 = operator==(&local_a0,&local_68);
      if (cVar2 == '\0') {
        bVar7 = false;
      }
      else {
        bVar7 = *(int *)(local_70.field0_0x0 + 4) == 0;
      }
      if (*(int *)local_a0.field0_0x0 != -1) {
        if (*(int *)local_a0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
          local_31 = *(int *)local_a0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a55016;
        }
        QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
      }
LAB_100a55016:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5504c;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_100a5504c:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a55082;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a55082:
    if (bVar7) {
      QString::fromUtf8_helper((char *)&local_48,0x1df9dd7);
      QString::operator=(param_1,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5525e;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      goto LAB_100a5525e;
    }
    QString::trimmed();
    if (*(int *)(local_b0 + 4) == 0) {
      bVar7 = false;
    }
    else {
      QString::trimmed();
      QString::fromUtf8_helper((char *)&local_b8,0x1e31adc);
      QString::append(&local_b8);
      cVar2 = operator==(&local_b8,&local_70);
      if (cVar2 == '\0') {
        bVar7 = false;
      }
      else {
        bVar7 = *(int *)(local_68.field0_0x0 + 4) == 0;
      }
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a55199;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_100a55199:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a551cf;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
    }
LAB_100a551cf:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a55205;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100a55205:
    if (bVar7) {
      QString::fromUtf8_helper((char *)&local_40,0x1e3cf90);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5525e;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
      goto LAB_100a5525e;
    }
    uVar6 = 0;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a552a0;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100a552a0:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return uVar6;
}

