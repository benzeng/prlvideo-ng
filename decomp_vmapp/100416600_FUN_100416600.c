
bool FUN_100416600(long param_1)

{
  long lVar1;
  
  lVar1 = QIODevice::write((char *)(*(long *)(param_1 + 0x660) + 0x18),0x100b21a38);
  return lVar1 == 1;
}

