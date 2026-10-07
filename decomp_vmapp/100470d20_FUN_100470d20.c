
void FUN_100470d20(QObject *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_100bc18e0;
  QObject::disconnect(*(QObject **)(param_1 + 0x30),
                      "2sigClientDetached(const IOService::ClientDesc)",param_1,
                      "1onClientDetached(const IOService::ClientDesc)");
  QObject::disconnect(*(QObject **)(param_1 + 0x30),
                      "2sigClientAttached(const IOService::ClientDesc)",param_1,
                      "1onClientAttached(const IOService::ClientDesc)");
  FUN_100473290(param_1 + 0xa0);
  FUN_100473290(param_1 + 0x70);
  uVar1 = FUN_100472fa0(param_1 + 0x40);
  FUN_100473290(uVar1);
  FUN_100473290(param_1 + 0xd0);
  DAT_100bf9b04 = 0;
  DAT_100bf9b1d = DAT_100bf9b1d | 1;
  FUN_10046de90(param_1 + 0xd0);
  FUN_10046beb0(param_1 + 0xa0);
  FUN_10046beb0(param_1 + 0x70);
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10111c650;
  FUN_100473020(param_1 + 0x50);
  FUN_100472b30(param_1 + 0x40);
  FUN_100471f00(param_1);
  return;
}

