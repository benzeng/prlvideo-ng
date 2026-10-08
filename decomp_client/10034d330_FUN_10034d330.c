
void FUN_10034d330(QObject *param_1,QDateTime *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_48;
  QObject *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021efbb0;
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x10),param_2);
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = param_1;
  uVar1 = QDateTime::toTime_t();
  lVar2 = _CFRunLoopTimerCreate
                    ((double)uVar1 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1970_1021e18c8,0,0,
                     0,0,FUN_10034d480,&local_48);
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 == 0) {
    FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "m_timerRef","VmDesktop/Logics/CVmDesktopWinUpdateLogic.cpp",0x2a,
                  "SpecificTimeTimer");
  }
  uVar3 = _CFRunLoopGetCurrent();
  _CFRunLoopAddTimer(uVar3,*(undefined8 *)(param_1 + 0x18),
                     *(undefined8 *)PTR__kCFRunLoopCommonModes_1021e1948);
  uVar3 = _CFNotificationCenterGetLocalCenter();
  _CFNotificationCenterAddObserver
            (uVar3,param_1,FUN_10034d4b0,&cf_NSSystemClockDidChangeNotification,0,4);
  return;
}

