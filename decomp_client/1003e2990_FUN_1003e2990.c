
void FUN_1003e2990(long param_1)

{
  char cVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  undefined8 uVar5;
  int *local_d0;
  QObject *local_c8;
  int *local_c0;
  QObject *local_b8;
  int *local_b0;
  QObject *local_a8;
  int *local_a0;
  QObject *local_98;
  int *local_90;
  QObject *local_88;
  int *local_80;
  QObject *local_78;
  int *local_70;
  QObject *local_68;
  int *local_60;
  QObject *local_58;
  int *local_50;
  QObject *local_48;
  int *local_40;
  QObject *local_38;
  undefined1 local_29;
  
  lVar2 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,0x13,0);
    lVar2 = param_1 + 0x28;
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_40 = piVar4;
    local_38 = pQVar3;
    FUN_1003e66e0(lVar2,&local_40);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,8,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_50 = piVar4;
    local_48 = pQVar3;
    FUN_1003e66e0(lVar2,&local_50);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,4,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_60 = piVar4;
    local_58 = pQVar3;
    FUN_1003e66e0(lVar2,&local_60);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    cVar1 = FUN_100d80630(1);
    if (cVar1 == '\0') {
      pQVar3 = operator_new(0x18);
      FUN_1003a4d40(pQVar3,9,0);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      local_70 = piVar4;
      local_68 = pQVar3;
      FUN_1003e66e0(lVar2,&local_70);
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
    }
    uVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    uVar5 = FUN_1001766b0(uVar5);
    cVar1 = FUN_100615c20(uVar5,0x16,0);
    if (cVar1 == '\0') {
      pQVar3 = operator_new(0x18);
      FUN_1003a4d40(pQVar3,0x14,0);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      local_80 = piVar4;
      local_78 = pQVar3;
      FUN_1003e66e0(lVar2,&local_80);
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,6,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_90 = piVar4;
    local_88 = pQVar3;
    FUN_1003e66e0(lVar2,&local_90);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,0x19,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_a0 = piVar4;
    local_98 = pQVar3;
    FUN_1003e66e0(lVar2,&local_a0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,0x1c,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_b0 = piVar4;
    local_a8 = pQVar3;
    FUN_1003e66e0(lVar2,&local_b0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    cVar1 = FUN_100124e00();
    if (cVar1 != '\0') {
      pQVar3 = operator_new(0x18);
      FUN_1003a4d40(pQVar3,0x1a,0);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
      local_c0 = piVar4;
      local_b8 = pQVar3;
      FUN_1003e66e0(lVar2,&local_c0);
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
    }
    pQVar3 = operator_new(0x18);
    FUN_1003a4d40(pQVar3,3,0);
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    local_d0 = piVar4;
    local_c8 = pQVar3;
    FUN_1003e66e0(lVar2,&local_d0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar4);
      }
    }
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  return;
}

