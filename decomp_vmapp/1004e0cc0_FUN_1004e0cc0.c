
char FUN_1004e0cc0(long param_1)

{
  char cVar1;
  
  cVar1 = QIODevice::isOpen();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x70))(param_1 + 0x18);
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf0;
  }
  return cVar1;
}

