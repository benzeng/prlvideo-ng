
void FUN_100066a70(long param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = QUrl::isEmpty();
  if (cVar1 == '\0') {
    cVar1 = FUN_1001e20b0(*(undefined8 *)(param_1 + 0x18),param_2);
    if (cVar1 == '\0') {
      FUN_100a38150(param_2);
      return;
    }
  }
  return;
}

