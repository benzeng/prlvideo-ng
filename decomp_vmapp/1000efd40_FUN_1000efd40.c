
char * FUN_1000efd40(byte param_1)

{
  int iVar1;
  
  iVar1 = 1 << (param_1 & 0x1f);
  if (iVar1 < 0x20) {
    if (iVar1 < 8) {
      if (iVar1 == 1) {
        return "RDFSGSBASE";
      }
      if (iVar1 == 2) {
        return "ADJTSC";
      }
    }
    else {
      if (iVar1 == 8) {
        return "BMI1";
      }
      if (iVar1 == 0x10) {
        return "HLE";
      }
    }
  }
  else if (iVar1 < 0x400) {
    if (iVar1 < 0x100) {
      if (iVar1 == 0x20) {
        return "AVX2";
      }
      if (iVar1 == 0x80) {
        return "SMEP";
      }
    }
    else {
      if (iVar1 == 0x100) {
        return "BMI2";
      }
      if (iVar1 == 0x200) {
        return "ERMSB";
      }
    }
  }
  else if (iVar1 < 0x8000) {
    if (iVar1 < 0x1000) {
      if (iVar1 == 0x400) {
        return "INVPCID";
      }
      if (iVar1 == 0x800) {
        return "RTM";
      }
    }
    else {
      if (iVar1 == 0x1000) {
        return "QM";
      }
      if (iVar1 == 0x2000) {
        return "FPUCS";
      }
    }
  }
  else if (iVar1 < 0x80000) {
    if (iVar1 == 0x8000) {
      return "PQE";
    }
    if (iVar1 == 0x40000) {
      return "RDSEED";
    }
  }
  else {
    if (iVar1 == 0x80000) {
      return "ADX";
    }
    if (iVar1 == 0x100000) {
      return "SMAP";
    }
  }
  return "UNK";
}

