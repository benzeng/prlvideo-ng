
ulong FUN_10077f250(uint param_1)

{
  undefined8 in_RAX;
  
  if (param_1 < 5) {
    return CONCAT71((int7)((ulong)in_RAX >> 8),0x19 >> ((byte)param_1 & 0x1f)) & 0xffffffffffffff01;
  }
  return 0;
}

