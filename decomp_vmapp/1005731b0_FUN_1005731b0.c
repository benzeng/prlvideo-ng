
undefined4 FUN_1005731b0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x11d8) == '\0') {
    plVar2 = *(long **)(param_1 + 0x11c8);
    if (plVar2 == (long *)0x0) {
      FUN_1008e3970("","vdisk",0,"Try to finalize at uninitialized manager");
      uVar1 = 0x80000007;
    }
    else {
      if (*(long *)(param_1 + 0x12e0) != 0) {
        FUN_1005f4c10(*(long *)(param_1 + 0x12e0),param_1);
        *(undefined8 *)(param_1 + 0x12e0) = 0;
        plVar2 = *(long **)(param_1 + 0x11c8);
      }
      uVar1 = (**(code **)(*plVar2 + 0x20))();
      FUN_100573280(param_1);
      QMutex::lock();
      (**(code **)**(undefined8 **)(param_1 + 0x11c8))();
      *(undefined8 *)(param_1 + 0x11c8) = 0;
      QMutex::unlock();
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x11d8) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

