
void FUN_1000917d0(long param_1,undefined1 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(uint *)(param_1 + 0xa4) < 0xe) {
    return;
  }
  if ((DAT_1011c5668 < 2) && (*(long **)(param_1 + 0x10800) != (long *)0x0)) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10800) + 0x10))();
    if (cVar1 == '\0') goto LAB_100091812;
  }
  else {
LAB_100091812:
    if (*(long **)(param_1 + 0x10808) != (long *)0x0) {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x10808) + 0x10))();
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)(param_1 + 0x10808);
        goto LAB_100091844;
      }
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x10800);
LAB_100091844:
  (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,param_2,param_3);
  FUN_1000918d0(param_1,param_2,param_3);
  return;
}

