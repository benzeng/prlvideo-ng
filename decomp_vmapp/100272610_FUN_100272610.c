
void FUN_100272610(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = *(long *)(*(long *)(param_1 + 8) + lVar2 * 8);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x168) != '\0')) {
      FUN_100257c20();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}

