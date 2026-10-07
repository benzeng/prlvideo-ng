
bool FUN_10040e7d0(long param_1)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x41) != '\0')) {
    lVar1 = *(long *)(param_1 + 0x60);
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
      return false;
    }
    lVar1 = *(long *)(param_1 + 0x38);
  }
  return lVar1 != 0;
}

