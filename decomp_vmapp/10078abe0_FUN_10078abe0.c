
undefined8 * FUN_10078abe0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  QString *pQVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  QString local_90;
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
  
  if ((DAT_1011bff28 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_1011bff28), iVar4 != 0)) {
    DAT_1011bff20 = PTR_shared_null_100ba20d8;
    ___cxa_atexit(FUN_10078b350,&DAT_1011bff20,0x100000000);
    ___cxa_guard_release(&DAT_1011bff28);
  }
  if (*(int *)(DAT_1011bff20 + 4) == 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("USD",3);
    pQVar5 = (QString *)FUN_100037140(&DAT_1011bff20,&local_68);
    QString::fromUtf8_helper((char *)&local_60,0xaf50a1);
    QString::operator=(pQVar5,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078accf;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_10078accf:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078acff;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_10078acff:
    local_70 = (QArrayData *)QString::fromAscii_helper("CAD",3);
    pQVar5 = (QString *)FUN_100037140(&DAT_1011bff20,&local_70);
    QString::fromUtf8_helper((char *)&local_58,0xaf50a1);
    QString::operator=(pQVar5,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078ad78;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10078ad78:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078ada8;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_10078ada8:
    local_78 = (QArrayData *)QString::fromAscii_helper("GBP",3);
    pQVar5 = (QString *)FUN_100037140(&DAT_1011bff20,&local_78);
    QString::fromUtf8_helper((char *)&local_50,0xaf50ab);
    QString::operator=(pQVar5,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078ae21;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10078ae21:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078ae51;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_10078ae51:
    local_80 = (QArrayData *)QString::fromAscii_helper("EUR",3);
    pQVar5 = (QString *)FUN_100037140(&DAT_1011bff20,&local_80);
    QString::fromUtf8_helper((char *)&local_48,0xaf50b2);
    QString::operator=(pQVar5,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078aeca;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_10078aeca:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078aefa;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_10078aefa:
    local_88 = (QArrayData *)QString::fromAscii_helper("JPY",3);
    pQVar5 = (QString *)FUN_100037140(&DAT_1011bff20,&local_88);
    QString::fromUtf8_helper((char *)&local_40,0xaf50ba);
    QString::operator=(pQVar5,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078af73;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_10078af73:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10078afa3;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_10078afa3:
  QString::toUpper();
  if (*(long *)(DAT_1011bff20 + 0x10) != 0) {
    lVar2 = *(long *)(DAT_1011bff20 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_90), cVar3 == '\0') {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_10078b006;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 != 0) {
LAB_10078b006:
      cVar3 = operator<(&local_90,(QString *)(lVar7 + 0x18));
      if (cVar3 == '\0') goto LAB_10078b01c;
    }
  }
  lVar7 = 0;
LAB_10078b01c:
  puVar6 = (undefined8 *)(lVar7 + 0x20);
  if (lVar7 == 0) {
    puVar6 = param_2;
  }
  piVar1 = (int *)*puVar6;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_90.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
  return param_1;
}

