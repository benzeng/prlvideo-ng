
void FUN_1006103a0(long param_1,QString *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  CTaskGenericId *pCVar5;
  undefined8 uVar6;
  long lVar7;
  CReminder *pCVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  QArrayData *pQVar12;
  long lVar13;
  long lVar14;
  CReminder *local_b8;
  int *local_b0;
  QDateTime local_a0;
  QDateTime local_98;
  QString local_90;
  QArrayData *local_88;
  long local_80;
  QVariant local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_50 [3];
  undefined1 local_31;
  
  pCVar5 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_50,0x53);
  local_50[0] = &PTR_FUN_10226c710;
  cVar3 = CTaskManager::isTaskRunning(pCVar5);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_50);
  if (cVar3 != '\0') {
    return;
  }
  uVar6 = FUN_100152280();
  lVar7 = FUN_100152bc0(uVar6,param_2);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar6 = FUN_10016f500(lVar7);
  cVar3 = FUN_100624c50(uVar6);
  if (cVar3 == '\0') {
    return;
  }
  local_68 = 0;
  uStack_60 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x10);
  lVar14 = 0;
  if (lVar1 == 0) {
LAB_1006104b4:
    lVar13 = 0;
  }
  else {
    do {
      while (lVar13 = lVar1, cVar3 = operator<((QString *)(lVar13 + 0x18),param_2), cVar3 == '\0') {
        lVar1 = *(long *)(lVar13 + 8);
        lVar14 = lVar13;
        if (*(long *)(lVar13 + 8) == 0) goto LAB_1006104a4;
      }
      lVar1 = *(long *)(lVar13 + 0x10);
    } while (*(long *)(lVar13 + 0x10) != 0);
    lVar13 = lVar14;
    if (lVar14 == 0) goto LAB_1006104b4;
LAB_1006104a4:
    cVar3 = operator<(param_2,(QString *)(lVar13 + 0x18));
    if (cVar3 != '\0') goto LAB_1006104b4;
  }
  puVar10 = &local_68;
  if (lVar13 != 0) {
    puVar10 = (undefined8 *)(lVar13 + 0x20);
  }
  piVar11 = (int *)*puVar10;
  local_b8 = (CReminder *)puVar10[1];
  if (piVar11 != (int *)0x0) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    local_31 = *piVar11 != 0;
    UNLOCK();
  }
  iVar4 = FUN_10015a6e0(lVar7);
  local_b0 = piVar11;
  if (iVar4 != 0) {
    if (piVar11 == (int *)0x0) {
      return;
    }
    if (((local_b8 != (CReminder *)0x0) && (piVar11[1] != 0)) &&
       (-1 < *(int *)(*(long *)(local_b8 + 0x10) + 0x10))) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,"[updateExpiredVolumeLicenseTimer] Stop timer.");
      }
      QTimer::stop();
    }
    goto LAB_10061091a;
  }
  iVar4 = FUN_10060fe50();
  if (-1 < iVar4) {
    if (((piVar11 == (int *)0x0) || (local_b8 == (CReminder *)0x0)) || (piVar11[1] == 0)) {
      pCVar8 = operator_new(0x20);
      CReminder::CReminder(pCVar8,(QObject *)0x0);
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar8);
      if (piVar11 != piVar9) {
        if (piVar9 != (int *)0x0) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          local_31 = *piVar9 != 0;
          UNLOCK();
        }
        local_b0 = piVar9;
        local_b8 = pCVar8;
        if (piVar11 != (int *)0x0) {
          LOCK();
          *piVar11 = *piVar11 + -1;
          local_31 = *piVar11 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar11);
          }
        }
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar9);
        }
      }
      puVar2 = PTR_s_serverID_102274838;
      pCVar8 = (CReminder *)0x0;
      if ((local_b0 != (int *)0x0) && (pCVar8 = (CReminder *)0x0, local_b0[1] != 0)) {
        pCVar8 = local_b8;
      }
      QVariant::QVariant(&local_78,param_2);
      QObject::setProperty((char *)pCVar8,(QVariant *)puVar2);
      QVariant::~QVariant(&local_78);
      puVar10 = (undefined8 *)FUN_100613c20(param_1 + 0x58,param_2);
      piVar11 = (int *)*puVar10;
      if (piVar11 != local_b0) {
        if (local_b0 != (int *)0x0) {
          LOCK();
          *local_b0 = *local_b0 + 1;
          local_31 = *local_b0 != 0;
          UNLOCK();
          piVar11 = (int *)*puVar10;
        }
        if (piVar11 != (int *)0x0) {
          LOCK();
          *piVar11 = *piVar11 + -1;
          local_31 = *piVar11 != 0;
          UNLOCK();
          if ((!(bool)local_31) && ((void *)*puVar10 != (void *)0x0)) {
            operator_delete((void *)*puVar10);
          }
        }
        *puVar10 = local_b0;
        puVar10[1] = local_b8;
      }
      pCVar8 = (CReminder *)0x0;
      if ((local_b0 != (int *)0x0) && (pCVar8 = (CReminder *)0x0, local_b0[1] != 0)) {
        pCVar8 = local_b8;
      }
      QObject::connect(&local_80,pCVar8,"2timeout()",param_1,"1onExpiredVolumeLicenseTimerTimeout()"
                       ,0);
      if (local_80 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_80);
    }
    else if (-1 < *(int *)(*(long *)(local_b8 + 0x10) + 0x10)) {
      QTimer::stop();
    }
    QTimer::setInterval((int)*(undefined8 *)(local_b8 + 0x10));
    if (1 < DAT_10230ffd0) {
      iVar4 = *(int *)(*(long *)(local_b8 + 0x10) + 0x14);
      QDateTime::currentDateTime();
      QDateTime::addMSecs((longlong)&local_98);
      pQVar12 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
      QDateTime::toString(&local_90);
      QString::toUtf8();
      FUN_100df99c0("","prl_client_app",2,
                    "[updateExpiredVolumeLicenseTimer] Setup timer for %d secs (%s).",iVar4 / 1000,
                    local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10061086a;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_10061086a:
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006108a0;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
LAB_1006108a0:
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006108d6;
        }
        QArrayData::deallocate(pQVar12,2,8);
      }
LAB_1006108d6:
      QDateTime::~QDateTime(&local_98);
      QDateTime::~QDateTime(&local_a0);
    }
    CReminder::start();
  }
  if (local_b0 == (int *)0x0) {
    return;
  }
LAB_10061091a:
  LOCK();
  *local_b0 = *local_b0 + -1;
  local_31 = *local_b0 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(local_b0);
  }
  return;
}

