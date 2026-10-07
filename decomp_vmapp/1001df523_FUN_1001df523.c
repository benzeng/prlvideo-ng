
int FUN_1001df523(long param_1)

{
  int local_24;
  undefined1 local_10 [8];
  
  local_24 = _xmlStringCurrentChar(0,*(undefined8 *)(param_1 + 8),local_10);
  if ((((((local_24 == 0x2e) || (local_24 == 0x5c)) || (local_24 == 0x3f)) ||
       ((local_24 == 0x2a || (local_24 == 0x2b)))) ||
      ((local_24 == 0x28 || ((local_24 == 0x29 || (local_24 == 0x7c)))))) ||
     ((local_24 == 0x5b || ((local_24 == 0x5d || (local_24 == 0)))))) {
    local_24 = -1;
  }
  return local_24;
}

