
undefined8 FUN_10037f2c0(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x1c);
  if (*(int *)(param_2 + 0x84e0) == 0) {
    bVar3 = false;
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    bVar3 = *(int *)(param_2 + 0xbb74) == 1;
    if ((cVar1 != '\0') == bVar3) {
      return 0;
    }
  }
  *(bool *)(*(long *)(param_1 + 8) + 0x1c) = bVar3;
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    if (bVar3 == false) {
      puVar2 = &DAT_1011c5bc0;
    }
    else {
      puVar2 = &DAT_1011c5c78;
    }
    (*(code *)*puVar2)(0x8861);
  }
  return 3;
}

