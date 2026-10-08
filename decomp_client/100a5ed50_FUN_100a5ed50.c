
void FUN_100a5ed50(QMutex *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  QMutex::QMutex(param_1,0);
  auVar2._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar2._0_8_ = PTR_shared_null_1021e15e8;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  uVar1 = _CFNotificationCenterGetDistributedCenter();
  _CFNotificationCenterAddObserver
            (uVar1,param_1,FUN_100a5ee00,
             *(undefined8 *)PTR__kTISNotifySelectedKeyboardInputSourceChanged_1021e1bc0,0,4);
  return;
}

