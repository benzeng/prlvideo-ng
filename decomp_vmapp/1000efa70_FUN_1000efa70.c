
char * FUN_1000efa70(byte param_1)

{
  int iVar1;
  
  iVar1 = 1 << (param_1 & 0x1f);
  if (iVar1 < 0x2000) {
    if (iVar1 < 0x20) {
      if (iVar1 == 1) {
        return "LAHF_64";
      }
      if (iVar1 == 4) {
        return "SVM";
      }
    }
    else {
      if (iVar1 == 0x20) {
        return "ABM";
      }
      if (iVar1 == 0x40) {
        return "SSE4A";
      }
    }
  }
  else if (iVar1 == 0x2000) {
    return "WDT";
  }
  return "UNK";
}

