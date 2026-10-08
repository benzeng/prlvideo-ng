
undefined4 FUN_10021c650(long param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  QObject *pQVar11;
  int *piVar12;
  int *piVar13;
  Connection local_78 [8];
  QArrayData *local_70;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar7 = FUN_100152280();
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_38,uVar8);
  uVar8 = FUN_1001547d0(uVar7,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021c6cb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10021c6cb:
  uVar7 = FUN_10016f500(uVar8);
  uVar9 = FUN_1001d50a0();
  uVar9 = FUN_1001d50d0(uVar9);
  cVar3 = FUN_1001df380(uVar9);
  if (cVar3 == '\0') {
    return 0x80000009;
  }
  FUN_10061abe0(&local_48,uVar7,0);
  iVar5 = QVariant::toInt((bool *)&local_48);
  if (iVar5 == 0) {
    bVar2 = false;
LAB_10021c73d:
    cVar3 = FUN_10061b500(uVar7,0x2030);
    if (cVar3 != '\0') {
      bVar4 = FUN_10061c4a0(uVar7);
      bVar4 = bVar4 ^ 1;
      if (bVar2) goto LAB_10021c76a;
      goto LAB_10021c773;
    }
    if (bVar2) goto LAB_10021c767;
    QVariant::~QVariant(&local_48);
  }
  else {
    FUN_10061abe0(&local_58,uVar7,0);
    iVar5 = QVariant::toInt((bool *)&local_58);
    bVar2 = true;
    if (iVar5 == -0x7ffeefa8) goto LAB_10021c73d;
LAB_10021c767:
    bVar4 = 0;
LAB_10021c76a:
    QVariant::~QVariant(&local_58);
LAB_10021c773:
    QVariant::~QVariant(&local_48);
    if (bVar4 != 0) {
      return 0x3bfa;
    }
  }
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (pcVar1 = *(char **)(param_1 + 0x58), pcVar1 != (char *)0x0)) {
    QVariant::QVariant(&local_68,true);
    QObject::setProperty(pcVar1,(QVariant *)"UseParentGeometry");
    QVariant::~QVariant(&local_68);
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar10 = operator_new(0x18);
    FUN_100612710(pvVar10);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar10;
  }
  pvVar10 = DAT_102310958;
  FUN_10015a2b0(&local_70,uVar8);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x50) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
  }
  pQVar11 = (QObject *)FUN_100612b70(pvVar10,&local_70,uVar8,0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10021c86c;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10021c86c:
  uVar6 = 0x80000009;
  if (pQVar11 != (QObject *)0x0) {
    piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
    piVar13 = *(int **)(param_1 + 0x68);
    if (piVar13 != piVar12) {
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        local_29 = *piVar12 != 0;
        UNLOCK();
        piVar13 = *(int **)(param_1 + 0x68);
      }
      if (piVar13 != (int *)0x0) {
        LOCK();
        *piVar13 = *piVar13 + -1;
        local_29 = *piVar13 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x68));
        }
      }
      *(int **)(param_1 + 0x68) = piVar12;
      *(QObject **)(param_1 + 0x70) = pQVar11;
    }
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_29 = *piVar12 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar12);
      }
    }
    cVar3 = CAbstractTask::isFinished();
    if (cVar3 == '\0') {
      uVar6 = 0;
      QObject::connect(local_78,pQVar11,"2taskFinished(PRL_RESULT)",param_1,
                       "1taskValidateLicenseFinished(PRL_RESULT)",0);
      QMetaObject::Connection::~Connection(local_78);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
    else {
      CAbstractTask::getResult();
      uVar6 = FUN_10021ca10(param_1);
    }
  }
  return uVar6;
}

