
char FUN_10035f5e0(long param_1,char param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(*(long *)(param_1 + 0x10) + 0x4c);
  cVar2 = param_2;
  if (cVar1 != param_2) {
    cVar2 = cVar1 != '\0';
    *(char *)(*(long *)(param_1 + 0x10) + 0x4c) = param_2;
    _CGAssociateMouseAndMouseCursorPosition();
  }
  return cVar2;
}

