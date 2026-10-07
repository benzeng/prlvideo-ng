
void FUN_10052f9f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  FUN_100519220();
  *param_1 = &PTR_FUN_100bc5030;
  puVar2 = operator_new(0xb0);
  FUN_100041050(puVar2);
  *puVar2 = &PTR_FUN_10111d620;
  puVar2[0x15] = param_1;
  param_1[8] = puVar2;
  if (DAT_1011c3698 == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","VmCliPathResolverHost",1,
                    "Virtual machine doesn\'t exist, so the tool cannot be registered");
    }
  }
  else {
    FUN_10051a6b0(DAT_1011c3698 + 0x10f0,0xd,param_1);
    lVar1 = param_1[8];
    uVar3 = lVar1 + 0x80;
    if ((uVar3 & 1) == 0) {
      QReadWriteLock::lockForWrite();
      uVar3 = uVar3 | 1;
    }
    *(undefined1 *)(lVar1 + 0x94) = 1;
    if ((uVar3 & 1) != 0) {
      QReadWriteLock::unlock();
    }
  }
  return;
}

