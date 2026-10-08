
char * FUN_100ba2c50(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = "";
  if (((param_1 != 0) && (*(long **)(param_1 + 0x48) != (long *)0x0)) &&
     (lVar1 = **(long **)(param_1 + 0x48), lVar1 != 0)) {
    pcVar2 = (char *)(lVar1 + 0xf8);
  }
  return pcVar2;
}

