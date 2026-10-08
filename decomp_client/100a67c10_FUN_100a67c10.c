
void FUN_100a67c10(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  
  lVar4 = FUN_10098ae20();
  bVar2 = true;
  if (*(int *)(lVar4 + 0x14) != 1) {
    dVar5 = (double)_CGEventSourceSecondsSinceLastEventType(1,0xffffffff);
    bVar2 = dVar5 < DAT_100e11088;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar3 = uVar1 & 0xfffffff7;
  if (bVar2) {
    uVar3 = uVar1 | 8;
  }
  if (uVar1 != uVar3) {
    *(uint *)(param_1 + 0x20) = uVar3;
    FUN_100a4a170(param_1 + 0x10,(undefined4 *)(param_1 + 0x20),4);
    if (2 < DAT_10230ffd0) {
      FUN_100df99c0("ENERGYSAVER","EnergySavingClient",3,"Set guest energy saving flags to %x",
                    *(undefined4 *)(param_1 + 0x20));
      return;
    }
  }
  return;
}

