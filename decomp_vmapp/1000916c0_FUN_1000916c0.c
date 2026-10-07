
undefined8 FUN_1000916c0(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x10818) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x10818) + 0x10))();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)(param_1 + 0x10818);
      goto LAB_1000916ef;
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x10810);
LAB_1000916ef:
  return *puVar2;
}

