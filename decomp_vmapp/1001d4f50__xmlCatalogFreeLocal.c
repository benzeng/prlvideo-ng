
void _xmlCatalogFreeLocal(void *catalogs)

{
  if (DAT_1011b7f20 == 0) {
    _xmlInitializeCatalog();
  }
  if (catalogs != (void *)0x0) {
    FUN_1001cf258(catalogs);
  }
  return;
}

