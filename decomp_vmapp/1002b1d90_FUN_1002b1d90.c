
undefined8 FUN_1002b1d90(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_100097250(DAT_1011c3698);
  FUN_1008e3970("","LocalDevices",0,"VGPU [GetWindowContext] %d",*(undefined1 *)(lVar1 + 0x118a2));
  if (*(char *)(lVar1 + 0x118a2) != '\0') {
    QMutex::lock();
    if (DAT_1011c4a88 != 0) {
      DAT_1011c4a88 = 0;
      _CGLSetCurrentContext(0);
    }
    FUN_1002adbf0(lVar1,lVar1 + 0x930);
    *(undefined1 *)(lVar1 + 0x9e4) = 1;
    FUN_1002ade20();
    *(undefined8 *)(lVar1 + 0x9b8) = 0;
    FUN_1002ae740(lVar1,0);
    if (DAT_1011c4a88 != 0) {
      DAT_1011c4a88 = 0;
      _CGLSetCurrentContext(0);
    }
    QMutex::unlock();
  }
  *param_1 = *(undefined8 *)(lVar1 + 0x9b8);
  return 0;
}

