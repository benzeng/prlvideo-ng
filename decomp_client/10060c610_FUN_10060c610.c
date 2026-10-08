
undefined1 FUN_10060c610(long param_1,QString *param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  QObject *pQVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined1 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  QObject *local_70;
  long local_60;
  QVariant local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_48 = 0;
  uStack_40 = 0;
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  lVar12 = 0;
  if (lVar4 == 0) {
LAB_10060c696:
    lVar10 = 0;
  }
  else {
    do {
      while (lVar10 = lVar4, cVar2 = operator<((QString *)(lVar10 + 0x18),param_2), cVar2 == '\0') {
        lVar4 = *(long *)(lVar10 + 8);
        lVar12 = lVar10;
        if (*(long *)(lVar10 + 8) == 0) goto LAB_10060c686;
      }
      lVar4 = *(long *)(lVar10 + 0x10);
    } while (*(long *)(lVar10 + 0x10) != 0);
    lVar10 = lVar12;
    if (lVar12 == 0) goto LAB_10060c696;
LAB_10060c686:
    cVar2 = operator<(param_2,(QString *)(lVar10 + 0x18));
    if (cVar2 != '\0') goto LAB_10060c696;
  }
  puVar7 = &local_48;
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)(lVar10 + 0x20);
  }
  piVar8 = (int *)*puVar7;
  local_70 = (QObject *)puVar7[1];
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    local_31 = *piVar8 != 0;
    UNLOCK();
    if ((local_70 != (QObject *)0x0) && (piVar8[1] != 0)) {
      QWidget::raise();
      uVar9 = 0;
      FUN_100df99c0("","prl_client_app",0,"CUnregisteredDialog already shown.");
      goto LAB_10060c8b0;
    }
  }
  uVar3 = FUN_100152280();
  lVar4 = FUN_100152bc0(uVar3,param_2);
  if (lVar4 == 0) {
    uVar9 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    pQVar5 = operator_new(0xb0);
    FUN_100639b40(pQVar5,lVar4,param_3);
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    piVar11 = piVar8;
    if (piVar8 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        local_31 = *piVar6 != 0;
        UNLOCK();
      }
      piVar11 = piVar6;
      local_70 = pQVar5;
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar8);
        }
      }
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar6);
      }
    }
    puVar1 = PTR_s_serverID_102274838;
    pQVar5 = (QObject *)0x0;
    if ((piVar11 != (int *)0x0) && (pQVar5 = (QObject *)0x0, piVar11[1] != 0)) {
      pQVar5 = local_70;
    }
    QVariant::QVariant(&local_58,param_2);
    QObject::setProperty((char *)pQVar5,(QVariant *)puVar1);
    QVariant::~QVariant(&local_58);
    puVar7 = (undefined8 *)FUN_1006137e0(param_1 + 0x20,param_2);
    piVar8 = (int *)*puVar7;
    if (piVar8 != piVar11) {
      if (piVar11 != (int *)0x0) {
        LOCK();
        *piVar11 = *piVar11 + 1;
        local_31 = *piVar11 != 0;
        UNLOCK();
        piVar8 = (int *)*puVar7;
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_31 = *piVar8 != 0;
        UNLOCK();
        if ((!(bool)local_31) && ((void *)*puVar7 != (void *)0x0)) {
          operator_delete((void *)*puVar7);
        }
      }
      *puVar7 = piVar11;
      puVar7[1] = local_70;
    }
    pQVar5 = (QObject *)0x0;
    if ((piVar11 != (int *)0x0) && (pQVar5 = (QObject *)0x0, piVar11[1] != 0)) {
      pQVar5 = local_70;
    }
    QObject::connect(&local_60,pQVar5,"2finished(int)",param_1,"1onUnregisteredDlgClosed(int)",0);
    if (local_60 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar9 = 1;
    (**(code **)(*(long *)local_70 + 0x1a0))();
    piVar8 = piVar11;
  }
  if (piVar8 == (int *)0x0) {
    return uVar9;
  }
LAB_10060c8b0:
  LOCK();
  *piVar8 = *piVar8 + -1;
  local_31 = *piVar8 != 0;
  UNLOCK();
  if (!(bool)local_31) {
    operator_delete(piVar8);
  }
  return uVar9;
}

