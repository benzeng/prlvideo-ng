
void FUN_10033c630(long param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  
  if ((param_3 & 0x20) != 0) {
    cVar1 = FUN_10033c480(param_1);
    if (cVar1 != '\0') {
      FUN_10033c680(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(undefined1 *)(param_1 + 0x20) = 0;
      FUN_10082f080(param_1);
      return;
    }
  }
  return;
}

