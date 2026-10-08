
void FUN_100ad9470(long param_1,undefined1 param_2)

{
  char cVar1;
  
  *(undefined1 *)(param_1 + 0xae0) = param_2;
  cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar1 != '\0') {
    FUN_100ad3cf0(param_1);
    return;
  }
  return;
}

