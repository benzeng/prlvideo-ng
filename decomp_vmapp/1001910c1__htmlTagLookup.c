
htmlElemDesc * _htmlTagLookup(xmlChar *tag)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0x5a < local_c) {
      return (htmlElemDesc *)0x0;
    }
    iVar1 = _xmlStrcasecmp(tag,(&PTR_s_a_100bab7c0)[(ulong)local_c * 8]);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return (htmlElemDesc *)(&PTR_s_a_100bab7c0 + (ulong)local_c * 8);
}

