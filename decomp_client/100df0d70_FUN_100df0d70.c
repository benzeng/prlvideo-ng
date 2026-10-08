
undefined8 * FUN_100df0d70(undefined8 *param_1,undefined8 *param_2)

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
  
  if ((DAT_102319778 == '\0') && (iVar4 = ___cxa_guard_acquire(&DAT_102319778), iVar4 != 0)) {
    DAT_102319770 = PTR_shared_null_1021e12f0;
    ___cxa_atexit(FUN_100df14e0,&DAT_102319770,0x100000000);
    ___cxa_guard_release(&DAT_102319778);
  }
  if (*(int *)(DAT_102319770 + 4) == 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("USD",3);
    pQVar5 = (QString *)FUN_1006f3180(&DAT_102319770,&local_68);
    QString::fromUtf8_helper((char *)&local_60,0x1f1eff4);
    QString::operator=(pQVar5,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0e5f;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100df0e5f:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0e8f;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100df0e8f:
    local_70 = (QArrayData *)QString::fromAscii_helper("CAD",3);
    pQVar5 = (QString *)FUN_1006f3180(&DAT_102319770,&local_70);
    QString::fromUtf8_helper((char *)&local_58,0x1f1eff4);
    QString::operator=(pQVar5,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0f08;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100df0f08:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0f38;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100df0f38:
    local_78 = (QArrayData *)QString::fromAscii_helper("GBP",3);
    pQVar5 = (QString *)FUN_1006f3180(&DAT_102319770,&local_78);
    QString::fromUtf8_helper((char *)&local_50,0x1f1effe);
    QString::operator=(pQVar5,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0fb1;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100df0fb1:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df0fe1;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100df0fe1:
    local_80 = (QArrayData *)QString::fromAscii_helper("EUR",3);
    pQVar5 = (QString *)FUN_1006f3180(&DAT_102319770,&local_80);
    QString::fromUtf8_helper((char *)&local_48,0x1f1f005);
    QString::operator=(pQVar5,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df105a;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100df105a:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df108a;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100df108a:
    local_88 = (QArrayData *)QString::fromAscii_helper("JPY",3);
    pQVar5 = (QString *)FUN_1006f3180(&DAT_102319770,&local_88);
    QString::fromUtf8_helper((char *)&local_40,0x1f1f00d);
    QString::operator=(pQVar5,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df1103;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100df1103:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100df1133;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_100df1133:
  QString::toUpper();
  if (*(long *)(DAT_102319770 + 0x10) != 0) {
    lVar2 = *(long *)(DAT_102319770 + 0x10);
    lVar8 = 0;
    do {
      while (lVar7 = lVar2, cVar3 = operator<((QString *)(lVar7 + 0x18),&local_90), cVar3 == '\0') {
        lVar2 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_100df1196;
      }
      lVar2 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 != 0) {
LAB_100df1196:
      cVar3 = operator<(&local_90,(QString *)(lVar7 + 0x18));
      if (cVar3 == '\0') goto LAB_100df11ac;
    }
  }
  lVar7 = 0;
LAB_100df11ac:
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

