
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100613b80(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_10111e728 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10111e728);
    if (iVar2 != 0) {
      DAT_10111e720 = (int *)QString::fromAscii_helper("Undefined operation",0x13);
      ___cxa_atexit(FUN_10002f530,&DAT_10111e720,0x100000000);
      ___cxa_guard_release(&DAT_10111e728);
    }
  }
  if (DAT_10111e790 == '\0') {
    iVar2 = ___cxa_guard_acquire(&DAT_10111e790);
    if (iVar2 != 0) {
      _DAT_10111e730 = QString::fromAscii_helper("Awaiting initialization",0x17);
      _DAT_10111e738 = QString::fromAscii_helper("Adding elements",0xf);
      _DAT_10111e740 = QString::fromAscii_helper("Processing elements",0x13);
      _DAT_10111e748 = QString::fromAscii_helper("Elements processed",0x12);
      _DAT_10111e750 = QString::fromAscii_helper("Backing up elements",0x13);
      _DAT_10111e758 = QString::fromAscii_helper("Elements backed up",0x12);
      _DAT_10111e760 = QString::fromAscii_helper("Renaming elements",0x11);
      _DAT_10111e768 = QString::fromAscii_helper("Elements renamed",0x10);
      _DAT_10111e770 = QString::fromAscii_helper("Cleaning elements",0x11);
      _DAT_10111e778 = QString::fromAscii_helper("Elements cleaned",0x10);
      DAT_10111e780 = QString::fromAscii_helper("Rolling back elements",0x15);
      DAT_10111e788 = QString::fromAscii_helper("Stucked",7);
      ___cxa_atexit(FUN_100613e70,0,0x100000000);
      ___cxa_guard_release(&DAT_10111e790);
    }
  }
  piVar1 = DAT_10111e720;
  if ((int)param_2 < 0xc) {
    piVar1 = *(int **)(&DAT_10111e730 + (ulong)param_2 * 8);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    *param_1 = DAT_10111e720;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

