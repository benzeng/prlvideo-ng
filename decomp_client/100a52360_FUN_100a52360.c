
undefined8 FUN_100a52360(QString *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  QArrayData *pQVar10;
  undefined8 *puVar11;
  ulong uVar12;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar6 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar6 = (*(code *)puVar2)(uVar6,PTR_s_init_102268ca8);
  uVar7 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSCalendar_10226aa90,PTR_s_currentCalendar_10226a2c0);
  uVar7 = (*(code *)puVar2)(uVar7,PTR_s_calendarIdentifier_10226a2c8);
  uVar7 = (*(code *)puVar2)(uVar7,PTR_s_autorelease_102269a10);
  QString::fromUtf8_helper((char *)&local_40,0x1e41978);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a52422;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100a52422:
  cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar7,PTR_s_isEqualToString__102268f68,
                     *(undefined8 *)PTR__NSGregorianCalendar_1021e10e0);
  puVar4 = PTR__OBJC_CLASS___NSLocale_10226aa88;
  puVar3 = PTR_s_isEqualToString__102268f68;
  if (cVar5 == '\0') {
    puVar11 = &DAT_1023116c8;
    uVar12 = 0;
    do {
      cVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)(*puVar11,puVar3,uVar7);
      if ((cVar5 != '\0') && (*(int *)(puVar11 + -1) != -1)) {
        local_70 = (QArrayData *)QString::fromAscii_helper("%1",2);
        QString::arg(&local_68,&local_70,(long)*(int *)(puVar11 + -1),0,10,0x20);
        QString::operator=(param_1,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a52612;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100a52612:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a52650;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_100a52650:
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 2;
    } while (uVar12 < 0x10);
    goto LAB_100a526fc;
  }
  uVar7 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSLocale_10226aa88,PTR_s_currentLocale_10226a2a0);
  uVar7 = (*(code *)puVar2)(uVar7,PTR_s_localeIdentifier_10226a2a8);
  uVar8 = (*(code *)puVar2)(puVar4,PTR_s_componentsFromLocaleIdentifier__10226a2b0,uVar7);
  uVar7 = *(undefined8 *)PTR__NSLocaleCountryCode_1021e1118;
  lVar9 = (*(code *)puVar2)(uVar8,PTR_s_objectForKeyedSubscript__102269240,uVar7);
  if (lVar9 == 0) goto LAB_100a526fc;
  uVar7 = (*(code *)puVar2)(uVar8,PTR_s_objectForKeyedSubscript__102269240,uVar7);
  cVar5 = (*(code *)puVar2)(uVar7,PTR_s_isEqualToString__102268f68,&cf_US);
  if (cVar5 == '\0') {
    local_60 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_58,&local_60,1,0,10,0x20);
    QString::operator=(param_1,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a526cc;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100a526cc:
    if (*(int *)local_60 == -1) goto LAB_100a526fc;
    pQVar10 = local_60;
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      iVar1 = *(int *)local_60;
      UNLOCK();
      goto joined_r0x000100a526e7;
    }
  }
  else {
    local_50 = (QArrayData *)QString::fromAscii_helper("%1",2);
    QString::arg(&local_48,&local_50,2,0,10,0x20);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a52539;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100a52539:
    if (*(int *)local_50 == -1) goto LAB_100a526fc;
    pQVar10 = local_50;
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      iVar1 = *(int *)local_50;
      UNLOCK();
joined_r0x000100a526e7:
      local_31 = iVar1 != 0;
      if ((bool)local_31) goto LAB_100a526fc;
    }
  }
  QArrayData::deallocate(pQVar10,2,8);
LAB_100a526fc:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_release_1022699b8);
  return CONCAT71((int7)((ulong)param_1->field0_0x0 >> 8),*(int *)(param_1->field0_0x0 + 4) != 0);
}

