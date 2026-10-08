
undefined1 FUN_100d402e0(QString *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  QTranslator *pQVar7;
  int *piVar8;
  undefined1 uVar9;
  QTranslator *pQVar10;
  QString local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QDir local_80 [8];
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QArrayData *local_60;
  QDir local_58 [8];
  QString local_50;
  QFileInfo local_48 [8];
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","PrlLocale",2,"Load the translation files from \'%s\'",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d40368;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_100d40368:
  if ((DAT_102318888 == '\0') && (iVar6 = ___cxa_guard_acquire(&DAT_102318888), iVar6 != 0)) {
    DAT_102318880 = (QTranslator *)0x0;
    DAT_102318878 = (int *)0x0;
    ___cxa_atexit(FUN_100d40f40,&DAT_102318878,0x100000000);
    ___cxa_guard_release(&DAT_102318888);
  }
  if (((DAT_102318878 == (int *)0x0) || (DAT_102318878[1] == 0)) ||
     (DAT_102318880 == (QTranslator *)0x0)) {
    pQVar7 = operator_new(0x10);
    QTranslator::QTranslator(pQVar7,*(QObject **)PTR_self_1021e1388);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar7);
    piVar3 = DAT_102318878;
    pQVar10 = DAT_102318880;
    if (DAT_102318878 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_29 = *piVar8 != 0;
        UNLOCK();
      }
      piVar2 = DAT_102318878;
      piVar3 = piVar8;
      pQVar10 = pQVar7;
      if (DAT_102318878 != (int *)0x0) {
        LOCK();
        *DAT_102318878 = *DAT_102318878 + -1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (DAT_102318878 != (int *)0x0)) {
          operator_delete(DAT_102318878);
        }
      }
    }
    DAT_102318880 = pQVar10;
    DAT_102318878 = piVar3;
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
  }
  if ((DAT_1023188a0 == '\0') && (iVar6 = ___cxa_guard_acquire(&DAT_1023188a0), iVar6 != 0)) {
    DAT_102318898 = (QTranslator *)0x0;
    DAT_102318890 = (int *)0x0;
    ___cxa_atexit(FUN_100d40f40,&DAT_102318890,0x100000000);
    ___cxa_guard_release(&DAT_1023188a0);
  }
  if (((DAT_102318890 == (int *)0x0) || (DAT_102318890[1] == 0)) ||
     (DAT_102318898 == (QTranslator *)0x0)) {
    pQVar7 = operator_new(0x10);
    QTranslator::QTranslator(pQVar7,*(QObject **)PTR_self_1021e1388);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar7);
    piVar3 = DAT_102318890;
    pQVar10 = DAT_102318898;
    if (DAT_102318890 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_29 = *piVar8 != 0;
        UNLOCK();
      }
      piVar2 = DAT_102318890;
      piVar3 = piVar8;
      pQVar10 = pQVar7;
      if (DAT_102318890 != (int *)0x0) {
        LOCK();
        *DAT_102318890 = *DAT_102318890 + -1;
        local_29 = *piVar2 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (DAT_102318890 != (int *)0x0)) {
          operator_delete(DAT_102318890);
        }
      }
    }
    DAT_102318898 = pQVar10;
    DAT_102318890 = piVar3;
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
  }
  QDir::QDir(local_58,param_1);
  local_60 = (QArrayData *)QString::fromAscii_helper("parallels.qm",0xc);
  QDir::absoluteFilePath(&local_50);
  QFileInfo::QFileInfo(local_48,&local_50);
  QFileInfo::canonicalFilePath();
  QFileInfo::~QFileInfo(local_48);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4060b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d4060b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d4063b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100d4063b:
  QDir::~QDir(local_58);
  QDir::QDir(local_80,param_1);
  local_88 = (QArrayData *)QString::fromAscii_helper("qt.qm",5);
  QDir::absoluteFilePath(&local_78);
  QFileInfo::QFileInfo(local_70,&local_78);
  QFileInfo::canonicalFilePath();
  QFileInfo::~QFileInfo(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d406c9;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100d406c9:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d406f9;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100d406f9:
  QDir::~QDir(local_80);
  puVar1 = PTR_shared_null_1021e1288;
  pQVar10 = (QTranslator *)0x0;
  if ((DAT_102318878 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318878[1] != 0)) {
    pQVar10 = DAT_102318880;
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_98.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
  cVar4 = QTranslator::load((QString *)pQVar10,&local_40,&local_90,&local_98);
  bVar5 = 1;
  if (cVar4 != '\0') {
    pQVar10 = (QTranslator *)0x0;
    if ((DAT_102318890 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318890[1] != 0)) {
      pQVar10 = DAT_102318898;
    }
    local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
    bVar5 = QTranslator::load((QString *)pQVar10,&local_68,&local_a8,&local_b0);
    if (*(int *)puVar1 != -1) {
      if (*(int *)puVar1 != 0) {
        LOCK();
        *(int *)puVar1 = *(int *)puVar1 + -1;
        local_29 = *(int *)puVar1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d407ed;
      }
      QArrayData::deallocate((QArrayData *)puVar1,2,8);
    }
LAB_100d407ed:
    if (*(int *)local_b0.field0_0x0 != -1) {
      if (*(int *)local_b0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
        local_29 = *(int *)local_b0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d40823;
      }
      QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
    }
LAB_100d40823:
    bVar5 = bVar5 ^ 1;
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_29 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d4085d;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
  }
LAB_100d4085d:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d40893;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100d40893:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d408c9;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100d408c9:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d408ff;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100d408ff:
  if (bVar5 == 0) {
    pQVar10 = (QTranslator *)0x0;
    if ((DAT_102318878 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318878[1] != 0)) {
      pQVar10 = DAT_102318880;
    }
    QCoreApplication::installTranslator(pQVar10);
    pQVar10 = (QTranslator *)0x0;
    if ((DAT_102318890 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318890[1] != 0)) {
      pQVar10 = DAT_102318898;
    }
    uVar9 = 1;
    QCoreApplication::installTranslator(pQVar10);
  }
  else {
    pQVar10 = (QTranslator *)0x0;
    if ((DAT_102318878 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318878[1] != 0)) {
      pQVar10 = DAT_102318880;
    }
    QCoreApplication::removeTranslator(pQVar10);
    if (((DAT_102318878 != (int *)0x0) && (DAT_102318878[1] != 0)) &&
       (DAT_102318880 != (QTranslator *)0x0)) {
      (**(code **)(*(long *)DAT_102318880 + 0x20))();
    }
    pQVar10 = (QTranslator *)0x0;
    if ((DAT_102318890 != (int *)0x0) && (pQVar10 = (QTranslator *)0x0, DAT_102318890[1] != 0)) {
      pQVar10 = DAT_102318898;
    }
    QCoreApplication::removeTranslator(pQVar10);
    if (((DAT_102318890 != (int *)0x0) && (DAT_102318890[1] != 0)) &&
       (DAT_102318898 != (QTranslator *)0x0)) {
      (**(code **)(*(long *)DAT_102318898 + 0x20))();
    }
    if (DAT_10230ffd0 < 2) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      FUN_100df99c0("","PrlLocale",2,"Failed to load the translation files");
    }
  }
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d40a37;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100d40a37:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar9;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar9;
}

