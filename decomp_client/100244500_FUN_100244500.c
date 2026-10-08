
void FUN_100244500(QObject *param_1)

{
  int iVar1;
  uint uVar2;
  QTimer *this;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  char *pcVar4;
  Connection local_20 [8];
  
  FUN_100df99c0("","prl_client_app",0,"Init timeout...");
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 4) {
    FUN_100df99c0("","prl_client_app",0,"Init timeout. Manual Mode.");
    if ((*(long *)(param_1 + 0x38) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x38) + 0x10))) {
      QTimer::stop();
    }
    if ((*(long *)(param_1 + 0x30) != 0) && (-1 < *(int *)(*(long *)(param_1 + 0x30) + 0x10))) {
      QTimer::stop();
    }
    FUN_1002425c0(param_1,0x18a89);
    param_1[0x4d] = (QObject)0x1;
    iVar1 = CAbstractTask::getCurrentSubTask();
    if (iVar1 == 3) {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0xb0);
      uVar3 = 0;
      goto LAB_100244761;
    }
    uVar2 = CAbstractTask::getCurrentSubTask();
    if (uVar2 < 8) goto LAB_10024471e;
    pcVar4 = "Unknown";
  }
  else {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar3 = 0;
      FUN_100df99c0("","prl_client_app",0,"Call reset.");
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_1001937e0(uVar3,0);
      FUN_100243dd0(param_1,DAT_100e152a4);
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x28) = 4;
      if (*(long *)(param_1 + 0x30) != 0) {
        QTimer::stop();
        QTimer::start();
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        QTimer::stop();
        if (*(long **)(param_1 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x40) + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
      this = operator_new(0x20);
      QTimer::QTimer(this,param_1);
      *(QTimer **)(param_1 + 0x40) = this;
      QTimer::setInterval((int)this);
      *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x40) + 0x1c) | 1;
      QObject::connect(local_20,*(undefined8 *)(param_1 + 0x40),"2timeout()",param_1,
                       "1onProccessSendEscapeInVm()",0);
      QMetaObject::Connection::~Connection(local_20);
      FUN_100243ff0(param_1);
      return;
    }
    FUN_100df99c0("","prl_client_app",0,"Init timeout. Abort.");
    FUN_1002425c0(param_1,0x18a89);
    uVar2 = CAbstractTask::getCurrentSubTask();
    if (uVar2 < 8) {
LAB_10024471e:
      pcVar4 = (&PTR_s_Prepare_1021ef300)[(int)uVar2];
    }
    else {
      pcVar4 = "Unknown";
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Exit from upgrade task. Last sub task \"%s\".",
                pcVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x98);
  uVar3 = 0x80000009;
LAB_100244761:
                    /* WARNING: Could not recover jumptable at 0x00010024476c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

