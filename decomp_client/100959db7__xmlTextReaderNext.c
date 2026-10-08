
int _xmlTextReaderNext(long param_1)

{
  long lVar1;
  int iVar2;
  int local_24;
  
  if (param_1 == 0) {
    local_24 = -1;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    lVar1 = *(long *)(param_1 + 0x70);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 8) != 1)) {
      local_24 = _xmlTextReaderRead(param_1);
    }
    else if ((*(int *)(param_1 + 0x18) == 2) || (*(int *)(param_1 + 0x18) == 4)) {
      local_24 = _xmlTextReaderRead(param_1);
    }
    else if ((*(ushort *)(lVar1 + 0x72) & 1) == 0) {
      do {
        iVar2 = _xmlTextReaderRead(param_1);
        if (iVar2 != 1) {
          return iVar2;
        }
      } while (*(long *)(param_1 + 0x70) != lVar1);
      local_24 = _xmlTextReaderRead(param_1);
    }
    else {
      local_24 = _xmlTextReaderRead(param_1);
    }
  }
  else {
    local_24 = FUN_10095a172(param_1);
  }
  return local_24;
}

