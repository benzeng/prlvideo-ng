
ulong FUN_1003a7890(int param_1)

{
  undefined8 in_RAX;
  
  if (param_1 - 1U < 8) {
    return CONCAT71((int7)((ulong)in_RAX >> 8),0x8b >> ((byte)(param_1 - 1U) & 0x1f)) &
           0xffffffffffffff01;
  }
  return 0;
}

