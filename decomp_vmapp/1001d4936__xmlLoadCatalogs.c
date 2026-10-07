
void _xmlLoadCatalogs(char *paths)

{
  xmlChar *pxVar1;
  xmlChar *local_20;
  
  local_20 = (xmlChar *)paths;
  if (paths != (char *)0x0) {
    while ((local_20 != (xmlChar *)0x0 && (*local_20 != '\0'))) {
      for (; (pxVar1 = local_20, *local_20 == ' ' ||
             ((('\b' < (char)*local_20 && ((char)*local_20 < '\v')) || (*local_20 == '\r'))));
          local_20 = local_20 + 1) {
      }
      if (*local_20 != '\0') {
        for (; (((*local_20 != '\0' && (*local_20 != ':')) &&
                ((*local_20 != ' ' && (((char)*local_20 < '\t' || ('\n' < (char)*local_20)))))) &&
               (*local_20 != '\r')); local_20 = local_20 + 1) {
        }
        pxVar1 = _xmlStrndup(pxVar1,(int)local_20 - (int)pxVar1);
        if (pxVar1 != (xmlChar *)0x0) {
          _xmlLoadCatalog((char *)pxVar1);
          (*(code *)_xmlFree)(pxVar1);
        }
      }
      for (; *local_20 == ':'; local_20 = local_20 + 1) {
      }
    }
  }
  return;
}

