
undefined1 FUN_1002a6cf0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QProcess local_30 [23];
  undefined1 local_19;
  
  QProcess::QProcess(local_30,(QObject *)0x0);
  QProcess::start(local_30,param_1,3);
  cVar1 = QProcess::waitForStarted((int)local_30);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Starting command is failed : %s",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002a7019;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
  else {
    QProcess::waitForFinished((int)local_30);
    iVar2 = QProcess::exitCode();
    uVar4 = 1;
    if (iVar2 == 0) goto LAB_1002a701b;
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Command is failed : %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002a6db5;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1002a6db5:
    uVar3 = QProcess::exitCode();
    FUN_100df99c0("","prl_client_app",0,"ExitCode : %d",uVar3);
    uVar3 = QProcess::error();
    FUN_100df99c0("","prl_client_app",0,"ErrorCode : %d",uVar3);
    QProcess::readAllStandardError();
    iVar2 = *(int *)(local_48 + 4);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002a6e4d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_1002a6e4d:
    if (iVar2 != 0) {
      QProcess::readAllStandardError();
      if ((1 < *(uint *)local_50) || (*(long *)(local_50 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_50,*(uint *)(local_50 + 4) + 1,*(uint *)(local_50 + 8) >> 0x1f);
      }
      FUN_100df99c0("","prl_client_app",0,"ErrorStr : %s",local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_19 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1002a6edf;
        }
        QArrayData::deallocate(local_50,1,8);
      }
    }
LAB_1002a6edf:
    QProcess::readAllStandardOutput();
    iVar2 = *(int *)(local_58 + 4);
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_19 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002a6f1f;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1002a6f1f:
    if (iVar2 != 0) {
      QProcess::readAllStandardOutput();
      if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
      }
      FUN_100df99c0("","prl_client_app",0,"Output : %s",local_60 + *(long *)(local_60 + 0x10));
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_19 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1002a7019;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_1002a7019:
  uVar4 = 0;
LAB_1002a701b:
  QProcess::~QProcess(local_30);
  return uVar4;
}

