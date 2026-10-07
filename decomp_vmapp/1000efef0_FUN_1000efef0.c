
char * FUN_1000efef0(byte param_1)

{
  int iVar1;
  
  iVar1 = 1 << (param_1 & 0x1f);
  if (iVar1 < 0x20) {
    if (iVar1 < 4) {
      if (iVar1 == 1) {
        return "DTHERM";
      }
      if (iVar1 == 2) {
        return "BOOST";
      }
    }
    else {
      if (iVar1 == 4) {
        return "ARAT";
      }
      if (iVar1 == 0x10) {
        return "PLN";
      }
    }
  }
  else if (iVar1 < 0x200) {
    if (iVar1 < 0x80) {
      if (iVar1 == 0x20) {
        return "ECMD";
      }
      if (iVar1 == 0x40) {
        return "PTM";
      }
    }
    else {
      if (iVar1 == 0x80) {
        return "HWP_BASE";
      }
      if (iVar1 == 0x100) {
        return "HWP_NOTIFY";
      }
    }
  }
  else if (iVar1 < 0x800) {
    if (iVar1 == 0x200) {
      return "HWP_ACT";
    }
    if (iVar1 == 0x400) {
      return "HWP_EPP";
    }
  }
  else {
    if (iVar1 == 0x800) {
      return "HWP_PLR";
    }
    if (iVar1 == 0x2000) {
      return "HDC";
    }
  }
  return "UNK";
}

