
int _htmlIsScriptAttribute(xmlChar *name)

{
  int iVar1;
  uint local_c;
  
  if (((name != (xmlChar *)0x0) && (*name == 'o')) && (name[1] == 'n')) {
    for (local_c = 0; local_c < 0x12; local_c = local_c + 1) {
      iVar1 = _xmlStrEqual(name,(&PTR_s_onclick_101110e60)[local_c]);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

