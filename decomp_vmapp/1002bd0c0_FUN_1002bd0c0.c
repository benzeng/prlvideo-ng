
undefined8 FUN_1002bd0c0(void)

{
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
  return 1;
}

