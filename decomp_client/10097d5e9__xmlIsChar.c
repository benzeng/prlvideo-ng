
int _xmlIsChar(uint ch)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (ch < 0x100) {
    if ((((ch < 9) || (10 < ch)) && (ch != 0xd)) && (ch < 0x20)) {
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
    local_18 = local_14;
  }
  else {
    if ((((ch < 0x100) || (0xd7ff < ch)) && ((ch < 0xe000 || (0xfffd < ch)))) &&
       ((ch < 0x10000 || (0x10ffff < ch)))) {
      local_10 = 0;
    }
    else {
      local_10 = 1;
    }
    local_18 = local_10;
  }
  return local_18;
}

