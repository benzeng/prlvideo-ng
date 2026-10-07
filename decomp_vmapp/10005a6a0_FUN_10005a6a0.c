
ulong FUN_10005a6a0(int param_1)

{
  undefined8 in_RAX;
  
  if (param_1 - 4U < 4) {
    return CONCAT71((int7)((ulong)in_RAX >> 8),0xb >> ((byte)(param_1 - 4U) & 0xf)) &
           0xffffffffffffff01;
  }
  return 0;
}

