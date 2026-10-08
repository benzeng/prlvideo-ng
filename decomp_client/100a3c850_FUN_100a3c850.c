
void FUN_100a3c850(void)

{
  long *plVar1;
  
  if (DAT_1023112a8 != (long *)0x0) {
    plVar1 = DAT_1023112a8;
    if ((long *)DAT_1023112a8[2] != (long *)0x0) {
      (**(code **)(*(long *)DAT_1023112a8[2] + 0x18))();
      plVar1 = DAT_1023112a8;
      if ((long *)DAT_1023112a8[2] != (long *)0x0) {
        (**(code **)(*(long *)DAT_1023112a8[2] + 8))();
        if ((long *)plVar1[2] != (long *)0x0) {
          (**(code **)(*(long *)plVar1[2] + 0x48))();
        }
        plVar1[2] = 0;
      }
    }
    if ((long *)plVar1[3] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[3] + 8))();
    }
    if (DAT_1023112a8 != (long *)0x0) {
      (**(code **)(*DAT_1023112a8 + 0x20))();
    }
    DAT_1023112a8 = (long *)0x0;
  }
  return;
}

