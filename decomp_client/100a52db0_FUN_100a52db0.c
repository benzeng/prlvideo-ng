
undefined1 FUN_100a52db0(QString *param_1)

{
  undefined *puVar1;
  undefined *self;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
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
  (*(code *)puVar1)(uVar4,PTR_s_setNumberStyle__10226a2d0,1);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_negativePrefix_10226a2f8);
  if (self == (undefined *)0x0) {
    local_68 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_68,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_negativeSuffix_10226a300);
  if (puVar1 == (undefined *)0x0) {
    local_70 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_70,(ID)puVar1,PTR_s_QStringWithString__1022696d0,uVar4);
  }
  QString::trimmed();
  iVar2 = QString::compare_helper
                    (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),"(",
                     0xffffffff,1);
  if (iVar2 == 0) {
    QString::trimmed();
    iVar2 = QString::compare_helper
                      (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),")",
                       0xffffffff,1);
    bVar7 = iVar2 == 0;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a52f42;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
  else {
    bVar7 = false;
  }
LAB_100a52f42:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a52f72;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100a52f72:
  if (bVar7) {
    QString::fromUtf8_helper((char *)&local_60,0x1e25514);
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a53379;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a53379:
    uVar6 = 1;
  }
  else {
    iVar2 = QString::compare_helper
                      (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),"-",
                       0xffffffff,1);
    if (iVar2 == 0) {
      QString::trimmed();
      iVar2 = *(int *)(local_88 + 4);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a5303d;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100a5303d:
      if (iVar2 == 0) {
        QString::fromUtf8_helper((char *)&local_58,0x1e289c2);
        QString::operator=(param_1,&local_58);
        if (*(int *)local_58.field0_0x0 != -1) {
          if (*(int *)local_58.field0_0x0 != 0) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a53379;
          }
          QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
        }
        goto LAB_100a53379;
      }
    }
    iVar2 = QString::compare_helper
                      (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),"- ",
                       0xffffffff,1);
    if (iVar2 == 0) {
      QString::trimmed();
      iVar2 = *(int *)(local_90 + 4);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a530b7;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100a530b7:
      if (iVar2 == 0) {
        QString::fromUtf8_helper((char *)&local_50,0x1df9dd7);
        QString::operator=(param_1,&local_50);
        if (*(int *)local_50.field0_0x0 != -1) {
          if (*(int *)local_50.field0_0x0 != 0) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a53379;
          }
          QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        }
        goto LAB_100a53379;
      }
    }
    QString::trimmed();
    if (*(int *)(local_98 + 4) == 0) {
      QString::trimmed();
      iVar2 = QString::compare_helper
                        (local_a0 + *(long *)(local_a0 + 0x10),*(undefined4 *)(local_a0 + 4),"-",
                         0xffffffff,1);
      bVar7 = iVar2 == 0;
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a53153;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
    }
    else {
      bVar7 = false;
    }
LAB_100a53153:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a53189;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a53189:
    if (bVar7) {
      QString::fromUtf8_helper((char *)&local_48,0x1e3cf90);
      QString::operator=(param_1,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a53379;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
      goto LAB_100a53379;
    }
    QString::trimmed();
    if (*(int *)(local_a8 + 4) == 0) {
      iVar2 = QString::compare_helper
                        (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4)," -",
                         0xffffffff,1);
      bVar7 = iVar2 == 0;
    }
    else {
      bVar7 = false;
    }
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a532cd;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_100a532cd:
    if (bVar7) {
      QString::fromUtf8_helper((char *)&local_40,0x1e3cf95);
      QString::operator=(param_1,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a53379;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
      goto LAB_100a53379;
    }
    uVar6 = 0;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar3,PTR_s_release_1022699b8);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a533bb;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100a533bb:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return uVar6;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return uVar6;
}

