
undefined4 _xmlUCSIsCatPc(int param_1)

{
  undefined4 local_10;
  
  if (((((param_1 == 0x5f) ||
        ((((0x203e < param_1 && (param_1 < 0x2041)) || (param_1 == 0x2054)) || (param_1 == 0x30fb)))
        ) || ((0xfe32 < param_1 && (param_1 < 0xfe35)))) ||
      ((0xfe4c < param_1 && (param_1 < 0xfe50)))) || ((param_1 == 0xff3f || (param_1 == 0xff65)))) {
    local_10 = 1;
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

