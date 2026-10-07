
undefined8 FUN_100091870(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((DAT_1011c5668 < 2) && (*(long **)(param_1 + 0x10800) != (long *)0x0)) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10800) + 0x10))();
    if (cVar1 == '\0') goto LAB_10009189b;
  }
  else {
LAB_10009189b:
    if (*(long **)(param_1 + 0x10808) != (long *)0x0) {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x10808) + 0x10))();
      if (cVar1 != '\0') {
        puVar2 = (undefined8 *)(param_1 + 0x10808);
        goto LAB_1000918c1;
      }
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x10800);
LAB_1000918c1:
  return *puVar2;
}

