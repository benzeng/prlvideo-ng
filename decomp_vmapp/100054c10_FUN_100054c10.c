
undefined8 FUN_100054c10(long param_1,longlong *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  cVar1 = QIODevice::isOpen();
  uVar4 = 5;
  if (cVar1 != '\0') {
    lVar2 = QIODevice::write((char *)(param_1 + 0x58),*param_2);
    if (lVar2 == param_2[1] - *param_2) {
      uVar3 = lVar2 + *(long *)(param_1 + 0x48);
      *(ulong *)(param_1 + 0x48) = uVar3;
      uVar4 = 0;
      if (*(ulong *)(param_1 + 0x30) < uVar3) {
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
    }
  }
  return uVar4;
}

