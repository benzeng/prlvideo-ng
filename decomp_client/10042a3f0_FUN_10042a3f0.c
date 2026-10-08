
undefined8 FUN_10042a3f0(long param_1)

{
  char cVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  Connection local_30 [13];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0xe8) == 0) {
    uVar5 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xe8) + 4) == 0) {
    uVar5 = 0;
  }
  else if (*(long *)(param_1 + 0xf0) == 0) {
    uVar5 = 0;
  }
  else if (*(long *)(param_1 + 0xf8) == 0) {
    uVar5 = 0;
  }
  else if (*(int *)(*(long *)(param_1 + 0xf8) + 4) == 0) {
    uVar5 = 0;
  }
  else if (*(long *)(param_1 + 0x100) == 0) {
    uVar5 = 0;
  }
  else {
    cVar1 = FUN_10042dc80(param_1);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      cVar1 = QAbstractButton::isChecked();
      uVar8 = 0x1000;
      if (cVar1 != '\0') {
        uVar8 = 0x2000;
      }
      cVar1 = QAbstractButton::isChecked();
      uVar6 = 0x8000;
      if (cVar1 != '\0') {
        uVar6 = 0x4000;
      }
      uVar5 = 0;
      if ((*(long *)(param_1 + 0xe8) != 0) &&
         (uVar5 = 0, *(int *)(*(long *)(param_1 + 0xe8) + 4) != 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0xf0);
      }
      uVar7 = 0;
      if ((*(long *)(param_1 + 0xf8) != 0) &&
         (uVar7 = 0, *(int *)(*(long *)(param_1 + 0xf8) + 4) != 0)) {
        uVar7 = *(undefined8 *)(param_1 + 0x100);
      }
      pQVar2 = (QObject *)FUN_100196570(uVar5,uVar7,uVar6 | uVar8);
      piVar3 = (int *)0x0;
      if (pQVar2 != (QObject *)0x0) {
        piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
      }
      piVar4 = *(int **)(param_1 + 0x118);
      if (piVar4 != piVar3) {
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          local_23 = *piVar3 != 0;
          UNLOCK();
          piVar4 = *(int **)(param_1 + 0x118);
        }
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          local_22 = *piVar4 != 0;
          UNLOCK();
          if ((!(bool)local_22) && (*(void **)(param_1 + 0x118) != (void *)0x0)) {
            operator_delete(*(void **)(param_1 + 0x118));
          }
        }
        *(int **)(param_1 + 0x118) = piVar3;
        *(QObject **)(param_1 + 0x120) = pQVar2;
      }
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + -1;
        local_21 = *piVar3 != 0;
        UNLOCK();
        if (!(bool)local_21) {
          operator_delete(piVar3);
        }
      }
      if (*(long *)(param_1 + 0x118) == 0) {
        uVar5 = 0;
      }
      else if (*(int *)(*(long *)(param_1 + 0x118) + 4) == 0) {
        uVar5 = 0;
      }
      else if (*(long *)(param_1 + 0x120) == 0) {
        uVar5 = 0;
      }
      else {
        QObject::connect(local_30,*(long *)(param_1 + 0x120),"2jobCompleted(PRL_RESULT)",param_1,
                         "1onConvertCompleted(PRL_RESULT)",0);
        QMetaObject::Connection::~Connection(local_30);
        FUN_10042d570(param_1,3);
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

