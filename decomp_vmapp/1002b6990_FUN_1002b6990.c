
undefined8 FUN_1002b6990(void)

{
  int iVar1;
  char *pcVar2;
  
  if (1 < DAT_1011c568c) {
    pcVar2 = "no";
    if (DAT_1011c5610 != 0) {
      pcVar2 = "yes";
    }
    FUN_1008e3970("","USB",0,"StaticInit cport = %08X, usb_initialized = %s",DAT_1011c5610,pcVar2);
  }
  DAT_1011c5680 = 0xffffffff;
  DAT_1011c5684 = 0xffffffff;
  DAT_1011c5678 = 0;
  if (DAT_1011c5610 == 0) {
    iVar1 = 0;
    do {
      FUN_1002b6210(iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x3d);
    FUN_1002b6a60();
    DAT_1011c5620._0_4_ = 0x11c5620;
    DAT_1011c5620._4_4_ = 1;
    uRam00000001011c5628 = 0x11c5620;
    uRam00000001011c562c = 1;
    DAT_1011c5630._0_4_ = 0x11c5630;
    DAT_1011c5630._4_4_ = 1;
    uRam00000001011c5638 = 0x11c5630;
    uRam00000001011c563c = 1;
  }
  return 0;
}

