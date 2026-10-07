
undefined8 FUN_10037f9f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  FUN_10036e390(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18));
  if ((**(long **)(param_1 + 8) == 0) ||
     (lVar1 = *(long *)(**(long **)(param_1 + 8) + 0x3f0), lVar1 == 0)) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(char *)(lVar1 + 0x240) == '\0') {
      return 0;
    }
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)(lVar1 + 0xbe) != '\0';
    lVar1 = *(long *)(param_1 + 0x10);
    if (bVar3 == (*(char *)(lVar1 + 0x240) != '\0')) {
      return 0;
    }
  }
  *(bool *)(lVar1 + 0x240) = bVar3;
  if (*(char *)(lVar1 + 0x240) == '\0') {
    puVar2 = &DAT_1011c5bc0;
  }
  else {
    puVar2 = &DAT_1011c5c78;
  }
  (*(code *)*puVar2)(0x8642);
  return 0;
}

