
htmlEntityDesc * _htmlEntityLookup(xmlChar *name)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0xfc < local_c) {
      return (htmlEntityDesc *)0x0;
    }
    iVar1 = _xmlStrEqual(name,(&PTR_s_quot_102231948)[(ulong)local_c * 3]);
    if (iVar1 != 0) break;
    local_c = local_c + 1;
  }
  return (htmlEntityDesc *)(&DAT_102231940 + (ulong)local_c * 0x18);
}

