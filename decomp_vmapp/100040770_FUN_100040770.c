
void FUN_100040770(long param_1,undefined8 param_2)

{
  size_t sVar1;
  char *pcVar2;
  long lVar3;
  
  FUN_10000c2c0(param_1 + 0xb0);
  if ((*(long *)(param_1 + 0x100) == 0) && (0 < DAT_1011b55f8)) {
    FUN_1008e3970("SHAH","vm",1,"Warning: failed to find host applications using internal scanner");
  }
  for (lVar3 = *(long *)(param_1 + 0xf8); lVar3 != param_1 + 0xf0; lVar3 = *(long *)(lVar3 + 8)) {
    if ((*(byte *)(lVar3 + 0x58) & 1) == 0) {
      pcVar2 = (char *)(lVar3 + 0x59);
    }
    else {
      pcVar2 = *(char **)(lVar3 + 0x68);
    }
    sVar1 = _strlen(pcVar2);
    FUN_100040e10(param_2,3,pcVar2,(int)sVar1 + 1);
    if ((*(byte *)(lVar3 + 0x40) & 1) == 0) {
      pcVar2 = (char *)(lVar3 + 0x41);
    }
    else {
      pcVar2 = *(char **)(lVar3 + 0x50);
    }
    sVar1 = _strlen(pcVar2);
    FUN_100040e10(param_2,3,pcVar2,(int)sVar1 + 1);
  }
  return;
}

