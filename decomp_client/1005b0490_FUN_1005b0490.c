
void FUN_1005b0490(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = FUN_1005b86c0(uVar1);
  if (lVar2 == 0) {
    return;
  }
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1005b86c0(uVar1);
  local_30 = (QArrayData *)QString::fromAscii_helper("{257F77D1-1EC9-4002-AEA4-DD38BFE57A98}",0x26);
  lVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar1 = 0;
  if ((*(long *)(lVar2 + 400) != 0) && (uVar1 = 0, *(int *)(*(long *)(lVar2 + 400) + 4) != 0)) {
    uVar1 = *(undefined8 *)(lVar2 + 0x198);
  }
  FUN_10018d980(&local_38,uVar1);
  pQVar4 = (QObject *)FUN_100175d50(uVar3,&local_30,&local_38,0);
  piVar5 = (int *)0x0;
  if (pQVar4 != (QObject *)0x0) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  }
  piVar6 = *(int **)(param_1 + 0x58);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x58);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_21 = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar5;
    *(QObject **)(param_1 + 0x60) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_21 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar5);
    }
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b05c7;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005b05c7:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005b05f7;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1005b05f7:
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x60), lVar2 != 0)) {
    *(undefined1 *)(lVar2 + 0x60) = 1;
    QObject::connect(&local_40,lVar2,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onRequestThirdPartyVmJobCompleted(PRL_RESULT)",0);
    if (local_40 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
  }
  return;
}

