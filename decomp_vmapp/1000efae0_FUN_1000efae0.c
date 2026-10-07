
char * FUN_1000efae0(byte param_1)

{
  int iVar1;
  
  iVar1 = 1 << (param_1 & 0x1f);
  if (iVar1 < 1) {
    if (iVar1 == -0x80000000) {
      return "AMD_3DNOW";
    }
  }
  else if (iVar1 < 0x10) {
    switch(iVar1) {
    case 1:
      return "FPU";
    case 2:
      return "VME";
    case 4:
      return "DE";
    case 8:
      return "PSE";
    }
  }
  else if (iVar1 < 0x100) {
    if (iVar1 < 0x40) {
      if (iVar1 == 0x10) {
        return "TSC";
      }
      if (iVar1 == 0x20) {
        return "MSR";
      }
    }
    else {
      if (iVar1 == 0x40) {
        return "PAE";
      }
      if (iVar1 == 0x80) {
        return "MCE";
      }
    }
  }
  else if (iVar1 < 0x4000) {
    if (iVar1 < 0x800) {
      if (iVar1 == 0x100) {
        return "CX8";
      }
      if (iVar1 == 0x200) {
        return "APIC";
      }
    }
    else {
      if (iVar1 == 0x800) {
        return "SYSCALL";
      }
      if (iVar1 == 0x2000) {
        return "PGE";
      }
    }
  }
  else if (iVar1 < 0x400000) {
    if (iVar1 < 0x10000) {
      if (iVar1 == 0x4000) {
        return "MCA";
      }
      if (iVar1 == 0x8000) {
        return "CMOV";
      }
    }
    else {
      if (iVar1 == 0x10000) {
        return "PAT";
      }
      if (iVar1 == 0x100000) {
        return "NX";
      }
    }
  }
  else if (iVar1 < 0x4000000) {
    if (iVar1 < 0x1000000) {
      if (iVar1 == 0x400000) {
        return "AMD_MMX";
      }
      if (iVar1 == 0x800000) {
        return "MMX";
      }
    }
    else {
      if (iVar1 == 0x1000000) {
        return "FXSR";
      }
      if (iVar1 == 0x2000000) {
        return "FFXSR";
      }
    }
  }
  else if (iVar1 < 0x20000000) {
    if (iVar1 == 0x4000000) {
      return "1GBPG";
    }
    if (iVar1 == 0x8000000) {
      return "RDTSCP";
    }
  }
  else {
    if (iVar1 == 0x20000000) {
      return "EM64T";
    }
    if (iVar1 == 0x40000000) {
      return "AMD_3DNOW_EXT";
    }
  }
  return "UNK";
}

