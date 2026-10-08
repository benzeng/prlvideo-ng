
void FUN_100609af0(long param_1,QString *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  CReminder *pCVar7;
  int *piVar8;
  int *piVar9;
  QArrayData *pQVar10;
  int *piVar11;
  CReminder *local_80;
  QDateTime local_70;
  QDateTime local_68;
  QString local_60;
  QArrayData *local_58;
  Connection local_50 [8];
  QVariant local_48;
  undefined1 local_31;
  
  puVar4 = (undefined8 *)FUN_100613c20(param_1 + 0x60);
  piVar9 = (int *)*puVar4;
  local_80 = (CReminder *)puVar4[1];
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    local_31 = *piVar9 != 0;
    UNLOCK();
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_100152bc0(uVar5,param_2);
  piVar11 = piVar9;
  if ((lVar6 != 0) && (iVar3 = FUN_10015a6e0(lVar6), iVar3 == 0)) {
    uVar5 = FUN_10016f500(lVar6);
    cVar2 = FUN_10061b500(uVar5);
    if (cVar2 == '\0') {
      if (((piVar9 == (int *)0x0) || (local_80 == (CReminder *)0x0)) || (piVar9[1] == 0)) {
        pCVar7 = operator_new(0x20);
        CReminder::CReminder(pCVar7,(QObject *)0x0);
        piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pCVar7);
        if (piVar9 != piVar8) {
          if (piVar8 != (int *)0x0) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            local_31 = *piVar8 != 0;
            UNLOCK();
          }
          piVar11 = piVar8;
          local_80 = pCVar7;
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            local_31 = *piVar9 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar9);
            }
          }
        }
        if (piVar8 != (int *)0x0) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          local_31 = *piVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar8);
          }
        }
        puVar1 = PTR_s_serverID_102274838;
        pCVar7 = (CReminder *)0x0;
        if ((piVar11 != (int *)0x0) && (pCVar7 = (CReminder *)0x0, piVar11[1] != 0)) {
          pCVar7 = local_80;
        }
        QVariant::QVariant(&local_48,param_2);
        QObject::setProperty((char *)pCVar7,(QVariant *)puVar1);
        QVariant::~QVariant(&local_48);
        puVar4 = (undefined8 *)FUN_100613c20(param_1 + 0x60,param_2);
        piVar9 = (int *)*puVar4;
        if (piVar9 != piVar11) {
          if (piVar11 != (int *)0x0) {
            LOCK();
            *piVar11 = *piVar11 + 1;
            local_31 = *piVar11 != 0;
            UNLOCK();
            piVar9 = (int *)*puVar4;
          }
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + -1;
            local_31 = *piVar9 != 0;
            UNLOCK();
            if ((!(bool)local_31) && ((void *)*puVar4 != (void *)0x0)) {
              operator_delete((void *)*puVar4);
            }
          }
          *puVar4 = piVar11;
          puVar4[1] = local_80;
        }
        pCVar7 = (CReminder *)0x0;
        if ((piVar11 != (int *)0x0) && (pCVar7 = (CReminder *)0x0, piVar11[1] != 0)) {
          pCVar7 = local_80;
        }
        QObject::connect(local_50,pCVar7,"2timeout()",param_1,"1onTrialPromoTimerTimeout()",0);
        QMetaObject::Connection::~Connection(local_50);
      }
      else if (-1 < *(int *)(*(long *)(local_80 + 0x10) + 0x10)) {
        QTimer::stop();
      }
      QTimer::setInterval((int)*(undefined8 *)(local_80 + 0x10));
      if (1 < DAT_10230ffd0) {
        iVar3 = *(int *)(*(long *)(local_80 + 0x10) + 0x14);
        QDateTime::currentDateTime();
        QDateTime::addMSecs((longlong)&local_68);
        pQVar10 = (QArrayData *)QString::fromAscii_helper("dd.MM.yyyy hh:mm:ss",0x13);
        QDateTime::toString(&local_60);
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",2,"[updateTrialPromoTimer] Setup timer for %d secs (%s).",
                      iVar3 / 1000,local_58 + *(long *)(local_58 + 0x10));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100609e6b;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_100609e6b:
        if (*(int *)local_60.field0_0x0 != -1) {
          if (*(int *)local_60.field0_0x0 != 0) {
            LOCK();
            *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
            local_31 = *(int *)local_60.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100609e9b;
          }
          QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
        }
LAB_100609e9b:
        if (*(int *)pQVar10 != -1) {
          if (*(int *)pQVar10 != 0) {
            LOCK();
            *(int *)pQVar10 = *(int *)pQVar10 + -1;
            local_31 = *(int *)pQVar10 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100609ecb;
          }
          QArrayData::deallocate(pQVar10,2,8);
        }
LAB_100609ecb:
        QDateTime::~QDateTime(&local_68);
        QDateTime::~QDateTime(&local_70);
      }
      CReminder::start();
      if (piVar11 == (int *)0x0) {
        return;
      }
      goto LAB_100609efc;
    }
  }
  if (piVar9 == (int *)0x0) {
    return;
  }
  if (((local_80 != (CReminder *)0x0) && (piVar9[1] != 0)) &&
     (-1 < *(int *)(*(long *)(local_80 + 0x10) + 0x10))) {
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"[updateTrialPromoTimer] Stop timer.");
    }
    QTimer::stop();
  }
LAB_100609efc:
  LOCK();
  *piVar11 = *piVar11 + -1;
  local_31 = *piVar11 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar11);
  }
  return;
}

