
void FUN_100cd95a0(undefined8 *param_1)

{
  byte bVar1;
  long local_40 [2];
  
  FUN_100cd22d0();
  *param_1 = &PTR_FUN_10225a2b8;
  *(undefined2 *)(param_1 + 0x7c) = 1;
  QMutex::QMutex((QMutex *)(param_1 + 0x7e),0);
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x86] = param_1 + 0x86;
  param_1[0x87] = param_1 + 0x86;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  *(undefined1 *)((long)param_1 + 0x44c) = 0;
  *(undefined1 *)(param_1 + 0x90) = 1;
  FUN_100cd78f0(param_1 + 0x93,param_1);
  param_1[0xa0] = PTR_shared_null_1021e12f0;
  param_1[0xa1] = 1;
  param_1[0xa2] = 0;
  FUN_100cde960("CKeyEventStatistic",0,0);
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  QObject::connect(local_40,param_1,"2signalKeycode(PRL_KEY, bool)",param_1,
                   "1slotKeycode(PRL_KEY, bool)",0);
  bVar1 = 1;
  if (local_40[0] != 0) {
    bVar1 = QMetaObject::Connection::isConnected_helper();
    bVar1 = bVar1 ^ 1;
  }
  QMetaObject::Connection::~Connection((Connection *)local_40);
  if (bVar1 != 0) {
    FUN_100df99c0("","hid",0,
                  "[CHIDMacHook] Can\'t establish signal-slot onnection for keyboard events");
  }
  return;
}

