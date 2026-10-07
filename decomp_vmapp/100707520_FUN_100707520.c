
void FUN_100707520(void)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_1007da300("devices.hdd.fsync",1);
  uVar2 = 3;
  if (uVar1 < 4) {
    uVar2 = (ulong)uVar1;
  }
  DAT_1011bdaa0 = *(undefined8 *)(&DAT_100bcdcb0 + uVar2 * 8);
  FUN_1008e3970("","AbstractFile",0,"hdd: sync mode - %s",(&PTR_s_disabled_100bcdcd0)[uVar2]);
  return;
}

