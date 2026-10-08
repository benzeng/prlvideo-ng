
int _htmlIsBooleanAttr(xmlChar *name)

{
  int iVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if ((&PTR_s_checked_1022791c0)[local_c] == (undefined *)0x0) {
      return 0;
    }
    iVar1 = _xmlStrcasecmp((&PTR_s_checked_1022791c0)[local_c],name);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return 1;
}

