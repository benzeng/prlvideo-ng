
void FUN_100a67bb0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) != param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    FUN_100a4a170(param_1 + 0x10,(undefined4 *)(param_1 + 0x20),4);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("ENERGYSAVER","EnergySavingClient",3,"Set guest energy saving flags to %x",
                    *(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

