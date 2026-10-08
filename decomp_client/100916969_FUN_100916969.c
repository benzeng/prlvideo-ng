
ushort FUN_100916969(byte *param_1)

{
  byte bVar1;
  byte *local_20;
  ushort local_c;
  
  local_c = 0;
  if (param_1 != (byte *)0x0) {
    local_c = ((ushort)*param_1 + (ushort)*param_1) * 0xf;
    local_20 = param_1;
    while( true ) {
      bVar1 = *local_20;
      local_20 = local_20 + 1;
      if (bVar1 == 0) break;
      local_c = local_c ^ local_c * 0x20 + (local_c >> 3) + (short)(char)bVar1;
    }
  }
  return local_c;
}

