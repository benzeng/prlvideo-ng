
undefined8 FUN_100573750(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1128);
  if (puVar2 != *(undefined8 **)(param_1 + 0x1130)) {
    do {
      cVar1 = FUN_1005949c0(*puVar2);
      if (cVar1 != '\0') {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x1130));
  }
  return 0;
}

