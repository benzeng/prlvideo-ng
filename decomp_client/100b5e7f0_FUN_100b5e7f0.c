
void FUN_100b5e7f0(long param_1)

{
  ulong in_RAX;
  ssize_t sVar1;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  QSocketNotifier::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x28),0));
  uStack_18 = uStack_18 & 0xffffffffffffff;
  sVar1 = _read(*(int *)(param_1 + 0x20),(void *)((long)&uStack_18 + 7),1);
  if ((sVar1 == 1) && (uStack_18._7_1_ == '\x01')) {
    FUN_100b5f450(*(undefined8 *)(param_1 + 0x10));
    FUN_100b5f470(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  }
  else {
    FUN_100df99c0("","UnixSignalHandler",0,"Error on read from socket");
  }
  QSocketNotifier::setEnabled(SUB81(*(undefined8 *)(param_1 + 0x28),0));
  return;
}

