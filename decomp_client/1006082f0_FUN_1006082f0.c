
QObject * FUN_1006082f0(long param_1,QString *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *piVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  QObject *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_100152bc0(uVar4,param_2);
  if (lVar5 == 0) {
    pcVar10 = "(!)Error: Server instance is null.";
LAB_10060835d:
    FUN_100df99c0("","prl_client_app",0,pcVar10);
    return (QObject *)0x0;
  }
  iVar3 = FUN_10015a6e0(lVar5);
  if (iVar3 != 0) {
    pcVar10 = "Server is not connected.";
    goto LAB_10060835d;
  }
  local_48 = 0;
  uStack_40 = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  lVar12 = 0;
  if (lVar1 == 0) {
LAB_1006083e1:
    lVar11 = 0;
  }
  else {
    do {
      while (lVar11 = lVar1, cVar2 = operator<((QString *)(lVar11 + 0x18),param_2), cVar2 == '\0') {
        lVar1 = *(long *)(lVar11 + 8);
        lVar12 = lVar11;
        if (*(long *)(lVar11 + 8) == 0) goto LAB_1006083d1;
      }
      lVar1 = *(long *)(lVar11 + 0x10);
    } while (*(long *)(lVar11 + 0x10) != 0);
    lVar11 = lVar12;
    if (lVar12 == 0) goto LAB_1006083e1;
LAB_1006083d1:
    cVar2 = operator<(param_2,(QString *)(lVar11 + 0x18));
    if (cVar2 != '\0') goto LAB_1006083e1;
  }
  puVar8 = &local_48;
  if (lVar11 != 0) {
    puVar8 = (undefined8 *)(lVar11 + 0x20);
  }
  piVar9 = (int *)*puVar8;
  local_50 = (QObject *)puVar8[1];
  piVar13 = piVar9;
  if (piVar9 != (int *)0x0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    local_31 = *piVar9 != 0;
    UNLOCK();
    if ((local_50 != (QObject *)0x0) && (piVar9[1] != 0)) {
      (**(code **)(*(long *)local_50 + 0x80))();
      goto LAB_100608530;
    }
  }
  pQVar6 = operator_new(0x58);
  uVar4 = FUN_10016f500(lVar5);
  FUN_100245340(pQVar6,uVar4,param_4,param_3);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  if (piVar9 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_31 = *piVar7 != 0;
      UNLOCK();
    }
    piVar13 = piVar7;
    local_50 = pQVar6;
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
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_31 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar7);
    }
  }
  puVar8 = (undefined8 *)FUN_100612ea0(param_1 + 0x18,param_2);
  piVar9 = (int *)*puVar8;
  if (piVar9 != piVar13) {
    if (piVar13 != (int *)0x0) {
      LOCK();
      *piVar13 = *piVar13 + 1;
      local_31 = *piVar13 != 0;
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
    *puVar8 = piVar13;
    puVar8[1] = local_50;
  }
  CAbstractTask::execute();
  if (piVar13 == (int *)0x0) {
    return (QObject *)0x0;
  }
LAB_100608530:
  pQVar6 = (QObject *)0x0;
  if (piVar13[1] != 0) {
    pQVar6 = local_50;
  }
  LOCK();
  *piVar13 = *piVar13 + -1;
  local_31 = *piVar13 != 0;
  UNLOCK();
  if ((bool)local_31) {
    return pQVar6;
  }
  operator_delete(piVar13);
  return pQVar6;
}

