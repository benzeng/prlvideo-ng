
void _xmlCatalogFreeLocal(void *catalogs)

{
  if (DAT_102312ca0 == 0) {
    _xmlInitializeCatalog();
  }
  if (catalogs != (void *)0x0) {
    FUN_100902b80(catalogs);
  }
  return;
}

