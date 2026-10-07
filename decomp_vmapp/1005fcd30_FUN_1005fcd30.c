
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1005fcd30(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_10111e588 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10111e588);
    if (iVar2 != 0) {
      DAT_10111e580 = (int *)QString::fromAscii_helper("Undefined operation",0x13);
      ___cxa_atexit(FUN_10002f530,&DAT_10111e580,0x100000000);
      ___cxa_guard_release(&DAT_10111e588);
    }
  }
  if (DAT_10111e5f0 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10111e5f0);
    if (iVar2 != 0) {
      _DAT_10111e590 = QString::fromAscii_helper("Awaiting initialization",0x17);
      _DAT_10111e598 = QString::fromAscii_helper("Adding elements",0xf);
      _DAT_10111e5a0 = QString::fromAscii_helper("Processing elements",0x13);
      _DAT_10111e5a8 = QString::fromAscii_helper("Elements processed",0x12);
      _DAT_10111e5b0 = QString::fromAscii_helper("Backing up elements",0x13);
      _DAT_10111e5b8 = QString::fromAscii_helper("Elements backed up",0x12);
      _DAT_10111e5c0 = QString::fromAscii_helper("Renaming elements",0x11);
      _DAT_10111e5c8 = QString::fromAscii_helper("Elements renamed",0x10);
      _DAT_10111e5d0 = QString::fromAscii_helper("Cleaning elements",0x11);
      _DAT_10111e5d8 = QString::fromAscii_helper("Elements cleaned",0x10);
      DAT_10111e5e0 = QString::fromAscii_helper("Rolling back elements",0x15);
      DAT_10111e5e8 = QString::fromAscii_helper("Stucked",7);
      ___cxa_atexit(FUN_1005fd020,0,0x100000000);
      ___cxa_guard_release(&DAT_10111e5f0);
    }
  }
  piVar1 = DAT_10111e580;
  if ((int)param_2 < 0xc) {
    piVar1 = *(int **)(&DAT_10111e590 + (ulong)param_2 * 8);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = DAT_10111e580;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

