
bool FUN_10054eed0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    cVar1 = '\0';
  }
  else if (*(long *)(*(long *)(param_1 + 0x28) + 0x18) == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::close() no data written");
      *(undefined1 *)(param_1 + 0x20) = 0;
      return false;
    }
    FUN_10054d390(param_1);
    cVar1 = *(char *)(param_1 + 0x20);
  }
  return cVar1 != '\0';
}

