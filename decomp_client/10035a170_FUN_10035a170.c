
void FUN_10035a170(QObject *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  QObject *pQVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_1[0x30] != (QObject)0x0) {
    if (DAT_10230ffd0 < 3) {
      return;
    }
    FUN_100df99c0("CRYSTAL_EDU_LOGIC","prl_client_app",3,
                  "educational dialog is not showing because tools are outdated");
    return;
  }
  if (DAT_102310920 == (void *)0x0) {
    pvVar3 = operator_new(0x50);
    FUN_1001d1080(pvVar3);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar3;
  }
  cVar1 = FUN_1001d1200(DAT_102310920);
  if (cVar1 != '\0') {
    return;
  }
  if (param_1[0x31] == (QObject)0x0) {
    return;
  }
  uVar9 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar9 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar4 = FUN_100319390(uVar9);
  if (lVar4 == 0) {
    return;
  }
  iVar2 = FUN_10018a9d0(lVar4);
  if (iVar2 != 0x30000004) {
    return;
  }
  cVar1 = FUN_100359d50(param_1);
  if (cVar1 != '\0') {
    return;
  }
  if (param_1[0x32] != (QObject)0x0) {
    return;
  }
  cVar1 = MessageUtils::isMessageHidden(0x3b14);
  if (cVar1 != '\0') goto LAB_10035a373;
  lVar8 = *(long *)(param_1 + 0x20);
  if (((lVar8 == 0) || (*(int *)(lVar8 + 4) == 0)) || (*(long *)(param_1 + 0x28) == 0)) {
    pQVar5 = operator_new(0x38);
    FUN_1007e6910(pQVar5,lVar4,0);
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
    piVar7 = *(int **)(param_1 + 0x20);
    if (piVar7 != piVar6) {
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        piVar7 = *(int **)(param_1 + 0x20);
      }
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if ((*piVar7 == 0) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar6;
      *(QObject **)(param_1 + 0x28) = pQVar5;
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        operator_delete(piVar6);
      }
    }
    pQVar5 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (pQVar5 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      pQVar5 = *(QObject **)(param_1 + 0x28);
    }
    QObject::installEventFilter(pQVar5);
    lVar8 = *(long *)(param_1 + 0x20);
    pQVar5 = (QObject *)0x0;
    if (lVar8 != 0) goto LAB_10035a34f;
  }
  else {
LAB_10035a34f:
    pQVar5 = (QObject *)0x0;
    if (*(int *)(lVar8 + 4) != 0) {
      pQVar5 = *(QObject **)(param_1 + 0x28);
    }
  }
  QTimer::singleShot(2000,pQVar5,"1show()");
  param_1[0x32] = (QObject)0x1;
LAB_10035a373:
  cVar1 = MessageUtils::isMessageHidden(0x3c58);
  if (cVar1 == '\0') {
    QTimer::singleShot(2000,param_1,"1bounceVmDockIcon()");
    param_1[0x32] = (QObject)0x1;
  }
  return;
}

