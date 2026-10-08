
void FUN_100db2650(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_100ddbe80("devices.hdd.fsync",1);
  uVar2 = 3;
  if (uVar1 < 4) {
    uVar2 = (ulong)uVar1;
  }
  DAT_1023191b0 = *(undefined8 *)(&DAT_10225c120 + uVar2 * 8);
  FUN_100df99c0("","AbstractFile",0,"hdd: sync mode - %s",(&PTR_s_disabled_10225c140)[uVar2]);
  return;
}

