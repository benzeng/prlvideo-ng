
void FUN_100a67b20(long param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getTravelOptions();
  cVar3 = CVmTravelOptions::isEnabled();
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = uVar1 & 0xfffffff8;
  if (cVar3 != '\0') {
    uVar2 = uVar1 | 7;
  }
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x20) = uVar2;
    FUN_100a4a170(param_1 + 0x10,(undefined4 *)(param_1 + 0x20),4);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("ENERGYSAVER","EnergySavingClient",3,"Set guest energy saving flags to %x",
                    *(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

