
void FUN_100a67a10(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x25) != '\0') && (*(char *)(param_1 + 0x24) == '\0')) {
    QTimer::start();
    return;
  }
  QTimer::stop();
  uVar1 = *(uint *)(param_1 + 0x20) & 0xfffffff7;
  if (*(uint *)(param_1 + 0x20) != uVar1) {
    *(uint *)(param_1 + 0x20) = uVar1;
    FUN_100a4a170(param_1 + 0x10,(undefined4 *)(param_1 + 0x20),4);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("ENERGYSAVER","EnergySavingClient",3,"Set guest energy saving flags to %x",
                    *(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

