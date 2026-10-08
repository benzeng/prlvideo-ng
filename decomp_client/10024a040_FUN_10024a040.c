
undefined8 FUN_10024a040(long param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_30;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar3 = 0x80000009;
  if (iVar1 < 0x30dae) {
    if (iVar1 < 0x40c) {
      uVar4 = 0x2f;
      switch(iVar1) {
      case 0x3e9:
        break;
      case 0x3ea:
        uVar4 = 0x35;
        break;
      default:
        goto switchD_10024a08b_caseD_3eb;
      case 0x3ee:
        uVar4 = 0x36;
        break;
      case 0x3ef:
        uVar4 = 0x34;
        break;
      case 0x3f0:
        uVar4 = 0x30;
        break;
      case 0x3f3:
        uVar4 = 0x37;
        break;
      case 0x3f4:
        uVar4 = 0x38;
      }
    }
    else if (iVar1 == 0x40c) {
      uVar4 = 0x33;
    }
    else {
      if (iVar1 != 0x40f) {
        return 0x80000009;
      }
      uVar4 = 0x32;
    }
  }
  else {
    if (iVar1 != 0x30dae) {
      return 0x80000009;
    }
    uVar4 = 0x31;
  }
  pvVar2 = operator_new(0x40);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100299220(pvVar2,uVar4,uVar3,0);
  uVar3 = 0;
  QObject::connect(&local_30,pvVar2,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0);
  if (local_30 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  CAbstractTask::setWaitForSubTaskCompletion();
  CAbstractTask::execute();
switchD_10024a08b_caseD_3eb:
  return uVar3;
}

