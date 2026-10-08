
void FUN_1001d61e0(long param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  long lVar10;
  CHelpErrorHandler *pCVar11;
  CHostHardwareInfo *pCVar12;
  CPrlStyle *this;
  void *pvVar13;
  Data *pDVar14;
  Data *pDVar15;
  long local_1a0;
  QSettings local_198 [16];
  undefined1 local_188 [24];
  CHostHardwareInfo *local_170;
  QVariant local_98;
  QString local_88;
  QString local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  Data *local_48;
  undefined4 local_40;
  QTime local_38 [7];
  undefined1 local_31;
  
  cVar5 = FUN_100d80680();
  if (cVar5 != '\0') {
    FUN_100ae8a70(*(undefined8 *)(param_1 + 0x10));
  }
  QTime::QTime(local_38,0,0,0,0);
  local_40 = QTime::currentTime();
  uVar6 = QTime::secsTo(local_38);
  qsrand(uVar6);
  FUN_100066970(param_1);
  local_48 = (Data *)PTR_shared_null_1021e15e8;
  pQVar8 = (QArrayData *)QString::fromAscii_helper("ctl",3);
  local_50 = pQVar8;
  FUN_1000341d0(&local_48,&local_50);
  pQVar9 = (QArrayData *)QString::fromAscii_helper("app",3);
  local_58 = pQVar9;
  FUN_1000341d0(&local_48,&local_58);
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d62c1;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_1001d62c1:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_31 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d62ee;
    }
    QArrayData::deallocate(pQVar8,2,8);
  }
LAB_1001d62ee:
  local_78 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_78);
      iVar7 = *(int *)(local_78 + 8);
      if (iVar7 != *(int *)(local_78 + 0xc)) {
        pDVar14 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
        pDVar15 = local_78 + (long)iVar7 * 8 + 0x10;
        lVar10 = (long)*(int *)(local_78 + 0xc) * 8 + (long)iVar7 * -8;
        do {
          piVar1 = *(int **)pDVar14;
          *(int **)pDVar15 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar15 = pDVar15 + 8;
          pDVar14 = pDVar14 + 8;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  puVar3 = PTR_shared_null_1021e1288;
  pDVar14 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_70 = pDVar14;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
      local_70 = pDVar14;
      FUN_10011c040(&local_88,&local_80,pDVar14);
      PrlGui::setUpdaterFilePathAndUpdateMode(&local_88,&local_80,(QString *)pDVar14);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d6400;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1001d6400:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001d6430;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1001d6430:
      pDVar14 = local_70 + 8;
      local_70 = pDVar14;
    } while (pDVar14 != local_68);
  }
  pDVar14 = local_78;
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001d64e1;
    }
    iVar7 = *(int *)(local_78 + 0xc);
    if (iVar7 != *(int *)(local_78 + 8)) {
      lVar10 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar7 * -8;
      pDVar15 = local_78 + (long)iVar7 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar8 == 0) {
LAB_1001d64c0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar15;
            goto LAB_1001d64c0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar14);
  }
LAB_1001d64e1:
  pCVar11 = operator_new(8);
  *(undefined ***)pCVar11 = &PTR_FUN_102271320;
  AppHelpUtils::setErrorHandler(pCVar11);
  FUN_1001d6a70(param_1);
  puVar3 = PTR_self_1021e1388;
  QObject::installEventFilter(*(QObject **)PTR_self_1021e1388);
  puVar4 = PTR_s_AppContext_102270dc0;
  pcVar2 = *(char **)puVar3;
  QVariant::QVariant(&local_98,1);
  QObject::setProperty(pcVar2,(QVariant *)puVar4);
  QVariant::~QVariant(&local_98);
  iVar7 = FUN_100d7e9e0();
  if (iVar7 == 0) {
    FUN_100afa180(local_188);
    FUN_100aed250(local_188,0xffffffffffffffff);
    if (local_170 == (CHostHardwareInfo *)0x0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get client host device list.");
    }
    else {
      pCVar12 = operator_new(0x1c8);
      CHostHardwareInfo::CHostHardwareInfo(pCVar12,local_170);
      *(CHostHardwareInfo **)(param_1 + 0x38) = pCVar12;
    }
    FUN_100afa2a0();
  }
  else {
    pCVar12 = operator_new(0x1c8);
    CHostHardwareInfo::CHostHardwareInfo(pCVar12);
    *(CHostHardwareInfo **)(param_1 + 0x38) = pCVar12;
  }
  QGuiApplication::setQuitOnLastWindowClosed(false);
  QSettings::QSettings(local_198,(QObject *)0x0);
  FUN_100986130(local_198);
  FUN_1007f0630();
  FUN_1007f0700();
  FUN_1007f08a0();
  FUN_1007f0970();
  FUN_1007f0a40();
  FUN_1007f0b10();
  FUN_1007f0be0();
  FUN_1007f0cb0();
  FUN_1007f0d80();
  FUN_1007f0e50();
  FUN_1007f0f20();
  FUN_1007f0ff0();
  FUN_1007f10c0();
  FUN_1007f1190();
  FUN_1007f1260();
  FUN_1001de550(*(undefined8 *)(param_1 + 0x18));
  this = operator_new(0x18);
  CPrlStyle::CPrlStyle(this);
  QApplication::setStyle((QStyle *)this);
  if (DAT_102310920 == (void *)0x0) {
    pvVar13 = operator_new(0x50);
    FUN_1001d1080(pvVar13);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar13;
  }
  QObject::connect(&local_1a0,DAT_102310920,"2quitCanceled()",param_1,"1onAppQuitCancelled()",0);
  if (local_1a0 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_1a0);
  QSettings::~QSettings(local_198);
  pDVar14 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar7 = *(int *)(local_48 + 0xc);
    if (iVar7 != *(int *)(local_48 + 8)) {
      lVar10 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar7 * -8;
      pDVar15 = local_48 + (long)iVar7 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar15;
        if (*(int *)pQVar8 == 0) {
LAB_1001d67f0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar15;
            goto LAB_1001d67f0;
          }
        }
        pDVar15 = pDVar15 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar14);
  }
  return;
}

