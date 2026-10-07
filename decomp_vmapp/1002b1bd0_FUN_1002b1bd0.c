
undefined8 FUN_1002b1bd0(int param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  int local_40;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = FUN_100097250(DAT_1011c3698);
  FUN_1008e3970("","LocalDevices",0,"VGPU [SetWindowSize] %d %dx%d",*(undefined1 *)(lVar1 + 0x118a1)
                ,param_1,param_2);
  if ((*(char *)(lVar1 + 0x118a1) != '\0') && (*(long *)(lVar1 + 0x9b8) != 0)) {
    local_40 = param_1;
    local_3c = param_2;
    _CGLSetParameter(*(long *)(lVar1 + 0x9b8),0x130,&local_40);
    _CGLEnable(*(undefined8 *)(lVar1 + 0x9b8),0x131);
  }
  lVar2 = FUN_1000e99d0(*(undefined8 *)(DAT_1011c3698 + 0x1158),0x67,0);
  QMutex::lock();
  *(undefined4 *)(lVar2 + 8) = 1;
  *(undefined4 *)(lVar1 + 0x940) = 0x20;
  *(undefined1 *)(lVar2 + 0xc) = 0x20;
  *(int *)(lVar1 + 0x938) = param_1;
  *(short *)(lVar2 + 0xe) = (short)param_1;
  *(undefined4 *)(lVar1 + 0x93c) = param_2;
  *(short *)(lVar2 + 0x10) = (short)param_2;
  *(undefined4 *)(lVar1 + 0x934) = 0;
  *(undefined2 *)(lVar2 + 0x12) = 0;
  *(undefined4 *)(lVar1 + 0x930) = 0;
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x980) = 0;
  *(undefined4 *)(lVar2 + 0x1c) = 0;
  *(undefined4 *)(lVar1 + 0x984) = 0;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  QMutex::unlock();
  FUN_100434440(*(undefined8 *)(DAT_1011c3698 + 0xf0),0,0,0,param_1,param_2,0x20,param_1 * 4);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

