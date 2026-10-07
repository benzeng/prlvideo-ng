
bool FUN_10040ec10(long param_1)

{
  if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x41) != '\0')) {
    if (*(long *)(param_1 + 0x60) == 0) {
      return false;
    }
  }
  else {
    if (*(long *)(param_1 + 0x60) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0x38) == 0) {
      return false;
    }
  }
  return *(long *)(param_1 + 0x68) != 0;
}

