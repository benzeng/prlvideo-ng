
void _xmlCatalogDump(FILE *out)

{
  if (out != (FILE *)0x0) {
    if (DAT_102312ca0 == 0) {
      _xmlInitializeCatalog();
    }
    _xmlACatalogDump(DAT_102312c90,out);
  }
  return;
}

