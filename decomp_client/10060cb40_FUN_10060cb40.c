
undefined1 FUN_10060cb40(long param_1,QString *param_2,undefined8 param_3)

{
  QObject *pQVar1;
  undefined *puVar2;
  char cVar3;
  CTaskGenericId *pCVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined1 *puVar10;
  long lVar11;
  QObject *pQVar12;
  int *piVar13;
  undefined1 uVar14;
  long lVar15;
  int *piVar16;
  QObject *local_90;
  long local_80;
  QVariant local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  pCVar4 = (CTaskGenericId *)CTaskManager::instance();
  FUN_100613f40(local_50,param_2);
  cVar3 = CTaskManager::isTaskRunning(pCVar4);
  CTaskGenericId::~CTaskGenericId(local_50);
  if (cVar3 != '\0') {
    return 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  lVar15 = 0;
  if (lVar6 == 0) {
LAB_10060cc06:
    lVar11 = 0;
  }
  else {
    do {
      while (lVar11 = lVar6, cVar3 = operator<((QString *)(lVar11 + 0x18),param_2), cVar3 == '\0') {
        lVar6 = *(long *)(lVar11 + 8);
        lVar15 = lVar11;
        if (*(long *)(lVar11 + 8) == 0) goto LAB_10060cbf6;
      }
      lVar6 = *(long *)(lVar11 + 0x10);
    } while (*(long *)(lVar11 + 0x10) != 0);
    lVar11 = lVar15;
    if (lVar15 == 0) goto LAB_10060cc06;
LAB_10060cbf6:
    cVar3 = operator<(param_2,(QString *)(lVar11 + 0x18));
    if (cVar3 != '\0') goto LAB_10060cc06;
  }
  puVar8 = &local_68;
  if (lVar11 != 0) {
    puVar8 = (undefined8 *)(lVar11 + 0x20);
  }
  piVar9 = (int *)*puVar8;
  local_90 = (QObject *)puVar8[1];
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if ((local_90 != (QObject *)0x0) && (piVar9[1] != 0)) {
      QWidget::raise();
      uVar14 = 1;
      FUN_100df99c0("","prl_client_app",0,"RenewLicenseDialog already shown.");
      goto LAB_10060ce71;
    }
  }
  uVar5 = FUN_100152280();
  lVar6 = FUN_100152bc0(uVar5,param_2);
  if (lVar6 == 0) {
    uVar14 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    pvVar7 = operator_new(0x38);
    FUN_10062e670(pvVar7,lVar6,param_3);
    piVar13 = (int *)0x0;
    pQVar12 = (QObject *)0x0;
    if (*(long *)((long)pvVar7 + 0x28) != 0) {
      piVar13 = (int *)0x0;
      pQVar12 = (QObject *)0x0;
      if (*(int *)(*(long *)((long)pvVar7 + 0x28) + 4) != 0) {
        pQVar1 = *(QObject **)((long)pvVar7 + 0x30);
        piVar13 = (int *)0x0;
        pQVar12 = (QObject *)0x0;
        if (pQVar1 != (QObject *)0x0) {
          piVar13 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
          pQVar12 = pQVar1;
        }
      }
    }
    piVar16 = piVar9;
    if (piVar9 != piVar13) {
      if (piVar13 != (int *)0x0) {
        LOCK();
        *piVar13 = *piVar13 + 1;
        local_31 = *piVar13 != 0;
        UNLOCK();
      }
      piVar16 = piVar13;
      local_90 = pQVar12;
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
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + -1;
      local_31 = *piVar13 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar13);
      }
    }
    puVar2 = PTR_s_serverID_102274838;
    pQVar12 = (QObject *)0x0;
    if ((piVar16 != (int *)0x0) && (pQVar12 = (QObject *)0x0, piVar16[1] != 0)) {
      pQVar12 = local_90;
    }
    QVariant::QVariant(&local_78,param_2);
    QObject::setProperty((char *)pQVar12,(QVariant *)puVar2);
    QVariant::~QVariant(&local_78);
    puVar8 = (undefined8 *)FUN_1006139b0(param_1 + 0x30,param_2);
    piVar9 = (int *)*puVar8;
    if (piVar9 != piVar16) {
      if (piVar16 != (int *)0x0) {
        LOCK();
        *piVar16 = *piVar16 + 1;
        local_31 = *piVar16 != 0;
        UNLOCK();
        piVar9 = (int *)*puVar8;
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_31 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((void *)*puVar8 != (void *)0x0)) {
          operator_delete((void *)*puVar8);
        }
      }
      *puVar8 = piVar16;
      puVar8[1] = local_90;
    }
    puVar10 = (undefined1 *)FUN_100613a70(param_1 + 0x38,param_2);
    *puVar10 = 1;
    pQVar12 = (QObject *)0x0;
    if ((piVar16 != (int *)0x0) && (pQVar12 = (QObject *)0x0, piVar16[1] != 0)) {
      pQVar12 = local_90;
    }
    QObject::connect(&local_80,pQVar12,"2finished(int)",param_1,"1onRenewLicenseDialogClosed(int)",0
                    );
    if (local_80 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar14 = 1;
    CAbstractTask::execute();
    piVar9 = piVar16;
  }
  if (piVar9 == (int *)0x0) {
    return uVar14;
  }
LAB_10060ce71:
  LOCK();
  *piVar9 = *piVar9 + -1;
  local_31 = *piVar9 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar9);
  }
  return uVar14;
}

