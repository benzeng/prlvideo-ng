
undefined8 FUN_100a53e50(QString *param_1)

{
  undefined *puVar1;
  undefined *self;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QString *pQVar6;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumberFormatter_10226aa98,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)puVar1)(uVar5,PTR_s_setNumberStyle__10226a2d0,1);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar1)(uVar5);
  if (self == (undefined *)0x0) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  puVar1 = PTR_shared_null_1021e1288;
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar2 = FUN_100a52a30(&local_60);
  if ((cVar2 != '\0') && (*(int *)(local_60.field0_0x0 + 4) != 0)) {
    local_68 = (QArrayData *)QString::fromAscii_helper("",0);
    pQVar6 = (QString *)QString::replace(&local_58,&local_60,&local_68,1);
    QString::operator=(&local_58,pQVar6);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a53f8b;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_100a53f8b:
  QString::fromUtf8_helper((char *)&local_50,0x1e41978);
  QString::operator=(&local_60,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a53fda;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100a53fda:
  FUN_100a528d0(&local_60);
  if (*(int *)(local_60.field0_0x0 + 4) != 0) {
    local_70 = (QArrayData *)QString::fromAscii_helper("",0);
    pQVar6 = (QString *)QString::replace(&local_58,&local_60,&local_70,1);
    QString::operator=(&local_58,pQVar6);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a54051;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100a54051:
  if (0 < *(int *)(local_58.field0_0x0 + 4)) {
    QString::left((int)&local_78);
    QString::operator=(&local_58,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a540aa;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  }
LAB_100a540aa:
  iVar3 = QString::compare_helper
                    ((QArrayData *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_58.field0_0x0 + 4),"0",0xffffffff,1);
  if (iVar3 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e289c2);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a54177;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_40,0x1e25514);
    QString::operator=(param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a54177;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100a54177:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a541b6;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100a541b6:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a541e6;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100a541e6:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return 1;
}

