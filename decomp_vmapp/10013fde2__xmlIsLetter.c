
undefined4 _xmlIsLetter(uint param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((int)param_1 < 0x100) {
    if (((((int)param_1 < 0x41) || (0x5a < (int)param_1)) &&
        (((int)param_1 < 0x61 || (0x7a < (int)param_1)))) &&
       (((((int)param_1 < 0xc0 || (0xd6 < (int)param_1)) &&
         (((int)param_1 < 0xd8 || (0xf6 < (int)param_1)))) && ((int)param_1 < 0xf8)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  else {
    iVar2 = _xmlCharInRange(param_1,(xmlChRangeGroup *)&_xmlIsBaseCharGroup);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if ((0xff < (int)param_1) &&
     ((((0x4dff < (int)param_1 && ((int)param_1 < 0x9fa6)) || (param_1 == 0x3007)) ||
      ((0x3020 < (int)param_1 && ((int)param_1 < 0x302a)))))) {
    return 1;
  }
  return 0;
}

