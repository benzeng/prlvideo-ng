
void FUN_10076a660(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  QObject *pQVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = param_2;
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001554a0(uVar5);
  if (lVar6 == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  iVar1 = *(int *)(lVar3 + 8);
  plVar10 = (long *)(lVar3 + 0x10 + (long)iVar1 * 8);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (iVar1 == iVar2) {
LAB_10076a6d1:
    if (plVar10 != (long *)(lVar3 + 0x10 + (long)iVar2 * 8)) {
      return;
    }
  }
  else {
    lVar11 = (long)iVar2 * 8 + (long)iVar1 * -8;
    do {
      if (*plVar10 == param_2) goto LAB_10076a6d1;
      plVar10 = plVar10 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  if (((*(long *)(param_1 + 0x20) == 0) || (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) ||
     (*(long *)(param_1 + 0x28) == 0)) {
    pQVar7 = operator_new(0x18);
    FUN_100769b30(pQVar7,lVar6,param_1);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    piVar9 = *(int **)(param_1 + 0x20);
    if (piVar9 != piVar8) {
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + 1;
        local_29 = *piVar8 != 0;
        UNLOCK();
        piVar9 = *(int **)(param_1 + 0x20);
      }
      if (piVar9 != (int *)0x0) {
        LOCK();
        *piVar9 = *piVar9 + -1;
        local_29 = *piVar9 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(param_1 + 0x20) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x20));
        }
      }
      *(int **)(param_1 + 0x20) = piVar8;
      *(QObject **)(param_1 + 0x28) = pQVar7;
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar8);
      }
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
    }
    QObject::connect(&local_40,uVar5,"2canFreeDiskSpaceChanged(bool)",
                     *(undefined8 *)(param_1 + 0x10),"2canFreeDiskSpaceChanged(bool)",0);
    if (local_40 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      QObject::connect(&local_48,param_2,"2destroyed(QObject*)",param_1,
                       "1onObserverDestroyed(QObject*)",0);
      goto LAB_10076a85b;
    }
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,param_2,"2destroyed(QObject*)",param_1,
                     "1onObserverDestroyed(QObject*)",0);
    if (cVar4 == '\0') goto LAB_10076a85b;
  }
  else {
    QObject::connect(&local_48,param_2,"2destroyed(QObject*)",param_1,
                     "1onObserverDestroyed(QObject*)",0);
  }
  if (local_48 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
LAB_10076a85b:
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  FUN_1000630f0(param_1 + 0x18,&local_38);
  return;
}

