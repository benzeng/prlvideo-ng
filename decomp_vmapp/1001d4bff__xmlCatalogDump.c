
void _xmlCatalogDump(FILE *out)

{
  if (out != (FILE *)0x0) {
    if (DAT_1011b7f20 == 0) {
      _xmlInitializeCatalog();
    }
    _xmlACatalogDump(DAT_1011b7f10,out);
  }
  return;
}

