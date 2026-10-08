
void FUN_10060d6d0(long param_1,QString *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CTaskGenericId *pCVar6;
  undefined8 uVar7;
  long lVar8;
  CReminder *pCVar9;
  int *piVar10;
  undefined8 *puVar11;
  int *piVar12;
  QArrayData *pQVar13;
  long lVar14;
  CReminder *pCVar15;
  long lVar16;
  int *piVar17;
  QDateTime local_b0;
  QDateTime local_a8;
  QString local_a0;
  QArrayData *local_98;
  long local_90;
  QVariant local_88;
  QVariant local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined **local_50 [3];
  undefined1 local_31;
  
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    return;
  }
  pCVar6 = (CTaskGenericId *)CTaskManager::instance();
  CTaskGenericId::CTaskGenericId((CTaskGenericId *)local_50,0x53);
  local_50[0] = &PTR_FUN_10226c710;
  cVar3 = CTaskManager::isTaskRunning(pCVar6);
  CTaskGenericId::~CTaskGenericId((CTaskGenericId *)local_50);
  if (cVar3 != '\0') {
    return;
  }
  uVar7 = FUN_100152280();
  lVar8 = FUN_100152bc0(uVar7,param_2);
  if (lVar8 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_68 = 0;
  uStack_60 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  lVar16 = 0;
  if (lVar1 == 0) {
LAB_10060d7c1:
    lVar14 = 0;
  }
  else {
    do {
      while (lVar14 = lVar1, cVar3 = operator<((QString *)(lVar14 + 0x18),param_2), cVar3 == '\0') {
        lVar1 = *(long *)(lVar14 + 8);
        lVar16 = lVar14;
        if (*(long *)(lVar14 + 8) == 0) goto LAB_10060d7b1;
      }
      lVar1 = *(long *)(lVar14 + 0x10);
    } while (*(long *)(lVar14 + 0x10) != 0);
    lVar14 = lVar16;
    if (lVar16 == 0) goto LAB_10060d7c1;
LAB_10060d7b1:
    cVar3 = operator<(param_2,(QString *)(lVar14 + 0x18));
    if (cVar3 != '\0') goto LAB_10060d7c1;
  }
  puVar11 = &local_68;
  if (lVar14 != 0) {
    puVar11 = (undefined8 *)(lVar14 + 0x20);
  }
  piVar12 = (int *)*puVar11;
  pCVar15 = (CReminder *)puVar11[1];
  if (piVar12 != (int *)0x0) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    local_31 = *piVar12 != 0;
    UNLOCK();
  }
  iVar4 = FUN_10015a6e0(lVar8);
  piVar17 = piVar12;
  if (iVar4 != 0) {
    if (piVar12 == (int *)0x0) {
      return;
    }
    if (((pCVar15 != (CReminder *)0x0) && (piVar12[1] != 0)) &&
       (-1 < *(int *)(*(long *)(pCVar15 + 0x10) + 0x10))) {
      if (1 < DAT_10230ffd0) {
        FUN_100df99c0("","prl_client_app",2,"[updateGracePeriodTimer] Stop timer.");
      }
      QTimer::stop();
    }
    goto LAB_10060dcc3;
  }
  uVar7 = FUN_10016f500(lVar8);
  cVar3 = FUN_10061b500(uVar7,1);
  if (cVar3 == '\0') {
    uVar7 = FUN_10016f500(lVar8);
    cVar3 = FUN_10061b4d0(uVar7,0x20);
    if (cVar3 == '\0') {
      uVar7 = FUN_10016f500(lVar8);
      cVar3 = FUN_10061b4d0(uVar7,0x2010);
      if (cVar3 == '\0') {
        uVar7 = FUN_10016f500(lVar8);
        cVar3 = FUN_10061b4d0(uVar7,0x8000);
        if (cVar3 == '\0') goto LAB_10060dcbe;
      }
      uVar7 = FUN_10016f500(lVar8);
      FUN_10061abe0(&local_78,uVar7,0);
      uVar5 = QVariant::toInt((bool *)&local_78);
      QVariant::~QVariant(&local_78);
      if (1 < DAT_10230ffd0) {
        uVar7 = FUN_100dddcf0(uVar5);
        FUN_100df99c0("","prl_client_app",2,
                      "[updateGracePeriodTimer] Renewable license status: [%.8X] \'%s\'",uVar5,uVar7
                     );
      }
      iVar4 = FUN_10060de60(param_1);
      if (-1 < iVar4) {
        if (((piVar12 == (int *)0x0) || (pCVar15 == (CReminder *)0x0)) || (piVar12[1] == 0)) {
          pCVar9 = operator_new(0x20);
          CReminder::CReminder(pCVar9,(QObject *)0x0);
          piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar9);
          if (piVar12 != piVar10) {
            if (piVar10 != (int *)0x0) {
              LOCK();
              *piVar10 = *piVar10 + 1;
              local_31 = *piVar10 != 0;
              UNLOCK();
            }
            pCVar15 = pCVar9;
            piVar17 = piVar10;
            if (piVar12 != (int *)0x0) {
              LOCK();
              *piVar12 = *piVar12 + -1;
              local_31 = *piVar12 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                operator_delete(piVar12);
              }
            }
          }
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + -1;
            local_31 = *piVar10 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar10);
            }
          }
          puVar2 = PTR_s_serverID_102274838;
          pCVar9 = (CReminder *)0x0;
          if ((piVar17 != (int *)0x0) && (pCVar9 = (CReminder *)0x0, piVar17[1] != 0)) {
            pCVar9 = pCVar15;
          }
          QVariant::QVariant(&local_88,param_2);
          QObject::setProperty((char *)pCVar9,(QVariant *)puVar2);
          QVariant::~QVariant(&local_88);
          puVar11 = (undefined8 *)FUN_100613c20(param_1 + 0x48,param_2);
          piVar12 = (int *)*puVar11;
          if (piVar12 != piVar17) {
            if (piVar17 != (int *)0x0) {
              LOCK();
              *piVar17 = *piVar17 + 1;
              local_31 = *piVar17 != 0;
              UNLOCK();
              piVar12 = (int *)*puVar11;
            }
            if (piVar12 != (int *)0x0) {
              LOCK();
              *piVar12 = *piVar12 + -1;
              local_31 = *piVar12 != 0;
              UNLOCK();
              if ((!(bool)local_31) && ((void *)*puVar11 != (void *)0x0)) {
                operator_delete((void *)*puVar11);
              }
            }
            *puVar11 = piVar17;
            puVar11[1] = pCVar15;
          }
          pCVar9 = (CReminder *)0x0;
          if ((piVar17 != (int *)0x0) && (pCVar9 = (CReminder *)0x0, piVar17[1] != 0)) {
            pCVar9 = pCVar15;
          }
          QObject::connect(&local_90,pCVar9,"2timeout()",param_1,"1onGracePeriodTimerTimeout()",0);
          if (local_90 != 0) {
            QMetaObject::Connection::isConnected_helper();
          }
          QMetaObject::Connection::~Connection((Connection *)&local_90);
        }
        else if (-1 < *(int *)(*(long *)(pCVar15 + 0x10) + 0x10)) {
          QTimer::stop();
        }
        QTimer::setInterval((int)*(undefined8 *)(pCVar15 + 0x10));
        if (1 < DAT_10230ffd0) {
          iVar4 = *(int *)(*(long *)(pCVar15 + 0x10) + 0x14);
          QDateTime::currentDateTime();
          QDateTime::addMSecs((longlong)&local_a8);
          pQVar13 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
          QDateTime::toString(&local_a0);
          QString::toUtf8();
          FUN_100df99c0("","prl_client_app",2,
                        "[updateGracePeriodTimer] Setup timer for grace period reminder on %d secs (%s)."
                        ,iVar4 / 1000,local_98 + *(long *)(local_98 + 0x10));
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10060dc22;
            }
            QArrayData::deallocate(local_98,1,8);
          }
LAB_10060dc22:
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10060dc58;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_10060dc58:
          if (*(int *)pQVar13 != -1) {
            if (*(int *)pQVar13 != 0) {
              LOCK();
              *(int *)pQVar13 = *(int *)pQVar13 + -1;
              local_31 = *(int *)pQVar13 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10060dc8e;
            }
            QArrayData::deallocate(pQVar13,2,8);
          }
LAB_10060dc8e:
          QDateTime::~QDateTime(&local_a8);
          QDateTime::~QDateTime(&local_b0);
        }
        CReminder::start();
      }
    }
  }
LAB_10060dcbe:
  if (piVar17 == (int *)0x0) {
    return;
  }
LAB_10060dcc3:
  LOCK();
  *piVar17 = *piVar17 + -1;
  local_31 = *piVar17 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar17);
  }
  return;
}

