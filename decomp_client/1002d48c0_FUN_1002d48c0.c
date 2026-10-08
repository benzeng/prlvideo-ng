
undefined8 FUN_1002d48c0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  long local_50;
  QArrayData *local_48;
  long local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 0x58);
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Cannot start migrated VM reconfiguration. VM instance is 0"
                 );
    return 0x80000009;
  }
  uVar1 = FUN_10018f890(lVar5);
  if (((((uVar1 & 0xffffff00) != 0x900) &&
       (uVar1 = FUN_10018f890(lVar5), (uVar1 & 0xffffff00) != 0xf00)) &&
      (uVar1 = FUN_10018f890(lVar5), (uVar1 & 0xffffff00) != 0x1000)) ||
     ((uVar1 = FUN_10018f890(lVar5), (uVar1 & 0xffffff00) == 0xf00 ||
      (uVar1 = FUN_10018f890(lVar5), (uVar1 & 0xffffff00) == 0x1000)))) {
    FUN_100df99c0("","prl_client_app",0,"Linux reconfig: skip non linux vm.");
    return 0x3bfa;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  uVar2 = FUN_100d7e9e0();
  uVar3 = FUN_10018f890(lVar5);
  FUN_100d888e0(&local_38,uVar2,uVar3);
  pQVar6 = operator_new(0x28);
  FUN_10018c250(&local_40,lVar5);
  local_48 = (QArrayData *)QString::fromAscii_helper("/reconfiguration_p2v",0x14);
  FUN_1001b9020(pQVar6,&local_40,&local_48,&local_38);
  piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  piVar8 = *(int **)(param_1 + 0x60);
  if (piVar8 != piVar7) {
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      piVar8 = *(int **)(param_1 + 0x60);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x60));
      }
    }
    *(int **)(param_1 + 0x60) = piVar7;
    *(QObject **)(param_1 + 0x68) = pQVar6;
  }
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + -1;
    local_29 = *piVar7 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar7);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002d4ab7;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002d4ab7:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  QObject::connect(&local_50,uVar4,"2finished()",param_1,"1onLinuxReconfigFinished()",0);
  if (local_50 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x60) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x60) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x68);
  }
  QThread::start(uVar4,7);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

