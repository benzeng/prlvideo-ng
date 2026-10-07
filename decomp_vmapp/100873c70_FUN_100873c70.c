
bool FUN_100873c70(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(long *)(lVar1 + 0x18) != 0) && (*(long *)(lVar1 + 0x20) != 0)) {
    return *(long *)(lVar1 + 0x28) == 0;
  }
  return true;
}

