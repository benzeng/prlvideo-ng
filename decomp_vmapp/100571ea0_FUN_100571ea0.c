
undefined1 FUN_100571ea0(long param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x1128);
  while( true ) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x1130)) {
      return 1;
    }
    cVar1 = FUN_10058ffe0(*puVar2);
    if (cVar1 == '\0') break;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

