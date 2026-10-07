
htmlEntityDesc * _htmlEntityValueLookup(uint value)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (0xfc < local_c) {
      return (htmlEntityDesc *)0x0;
    }
    if (value <= *(uint *)(&DAT_100bacf40 + (ulong)local_c * 0x18)) break;
    local_c = local_c + 1;
  }
  if (value < *(uint *)(&DAT_100bacf40 + (ulong)local_c * 0x18)) {
    return (htmlEntityDesc *)0x0;
  }
  return (htmlEntityDesc *)(&DAT_100bacf40 + (ulong)local_c * 0x18);
}

