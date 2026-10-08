
int _xmlCatalogSetDebug(int level)

{
  int iVar1;
  
  iVar1 = DAT_102312c80;
  DAT_102312c80 = level;
  if (level < 1) {
    DAT_102312c80 = 0;
  }
  return iVar1;
}

