
void FUN_1001fc880(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar2 = FUN_100370280();
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    local_30 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_30);
  }
  pQVar3 = (QObject *)FUN_1003704b0(uVar2,&local_30,DAT_100e152b8);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = *(int **)(param_1 + 0x18);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x18);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar4;
    *(QObject **)(param_1 + 0x20) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_21 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar4);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001fc985;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1001fc985:
  pQVar3 = operator_new(0xf0);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007553c0(pQVar3,uVar2,uVar6);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  piVar4 = *(int **)(param_1 + 0x80);
  if (piVar4 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_21 = *piVar5 != 0;
      UNLOCK();
      piVar4 = *(int **)(param_1 + 0x80);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_21 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (*(void **)(param_1 + 0x80) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x80));
      }
    }
    *(int **)(param_1 + 0x80) = piVar5;
    *(QObject **)(param_1 + 0x88) = pQVar3;
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
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x80) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
  }
  QObject::connect(&local_38,uVar2,"2finished(int)",param_1,"1onDialogFinished(int)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (cVar1 != '\0') goto LAB_1001fcae6;
  }
  FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","connected",
                "Tasks/CTaskConvertOldFormatVmPD.cpp",0xbb,"processOpenConvertDialog");
LAB_1001fcae6:
  plVar7 = (long *)0x0;
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (plVar7 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
    plVar7 = *(long **)(param_1 + 0x88);
  }
  (**(code **)(*plVar7 + 0x1a0))();
  return;
}

