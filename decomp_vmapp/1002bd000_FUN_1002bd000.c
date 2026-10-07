
undefined8 FUN_1002bd000(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_1011c568c) {
    iVar1 = 0;
    FUN_1008e3970("","USB",0,"StaticDeinit cport %08x",DAT_1011c5610);
  }
  do {
    FUN_1002b6210(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3d);
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"CloseUsbManager");
  }
  if (DAT_1011c5610 != 0) {
    _IOServiceClose();
    DAT_1011c5610 = 0;
  }
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"CloseUsbManager finished");
  }
  return 0;
}

