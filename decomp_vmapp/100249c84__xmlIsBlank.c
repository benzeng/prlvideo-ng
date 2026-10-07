
int _xmlIsBlank(uint ch)

{
  undefined4 local_10;
  
  if ((ch < 0x100) && ((ch == 0x20 || (((8 < ch && (ch < 0xb)) || (ch == 0xd)))))) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

