
int _xmlCatalogSetDebug(int level)

{
  int iVar1;
  
  iVar1 = DAT_1011b7f00;
  DAT_1011b7f00 = level;
  if (level < 1) {
    DAT_1011b7f00 = 0;
  }
  return iVar1;
}

