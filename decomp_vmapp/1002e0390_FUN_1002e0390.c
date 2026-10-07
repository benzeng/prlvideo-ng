
void FUN_1002e0390(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  if (*(long **)(DAT_1011c3698 + 0x10810) == (long *)0x0) {
    pcVar2 = "USB mouse died, no PS/2 mouse to fallback";
  }
  else {
    cVar1 = (**(code **)(**(long **)(DAT_1011c3698 + 0x10810) + 0x10))();
    if (cVar1 != '\0') {
      FUN_1008e3970("","USB",0,"USB mouse died, switch to PS/2");
      *(undefined1 *)(param_1 + 0x52) = 1;
      FUN_1000d7a90(*(undefined8 *)(DAT_1011c3698 + 0x107f8),0xfffffffd);
      return;
    }
    pcVar2 = "USB mouse died, PS/2 mouse not ready";
  }
  FUN_1008e3970("","USB",0,pcVar2);
  return;
}

