
void FUN_1007ae700(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_48;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  FUN_1007ae9b0();
  pQVar3 = operator_new(0x78);
  FUN_1007a9140(pQVar3,param_2,param_1);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar5 = *(int **)(param_1 + 0x128);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_29 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x128);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_29 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x128) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x128));
      }
    }
    *(int **)(param_1 + 0x128) = piVar4;
    *(QObject **)(param_1 + 0x130) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_29 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar4);
    }
  }
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x120);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x130);
  }
  cVar1 = '\0';
  QObject::connect(&local_38,uVar7,"2createSnapshotProgressChanged(uint)",uVar6,"1setProgress(uint)"
                   ,0);
  if (local_38 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x120);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x130);
  }
  cVar2 = '\0';
  QObject::connect(&local_40,uVar7,"2revertToSnapshotProgressChanged(uint)",uVar6,
                   "1setProgress(uint)",0);
  if (cVar1 != '\0') {
    if (local_40 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  uVar7 = 0;
  if ((*(long *)(param_1 + 0x118) != 0) &&
     (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x118) + 4) != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x120);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x130);
  }
  QObject::connect(&local_48,uVar7,"2deleteSnapshotProgressChanged(uint)",uVar6,"1setProgress(uint)"
                   ,0);
  if ((cVar2 != '\0') && (local_48 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_48);
  plVar8 = (long *)0x0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (plVar8 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    plVar8 = *(long **)(param_1 + 0x130);
  }
  (**(code **)(*plVar8 + 0x1a0))();
  return;
}

