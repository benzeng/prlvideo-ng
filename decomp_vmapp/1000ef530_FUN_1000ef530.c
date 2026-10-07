
char * FUN_1000ef530(byte param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 1 << (param_1 & 0x1f);
  if (iVar2 < 1) {
    if (iVar2 == -0x80000000) {
      return "PBE";
    }
  }
  else if (iVar2 < 0x10) {
    pcVar1 = "FPU";
    switch(iVar2) {
    case 1:
      goto switchD_1000ef57c_caseD_1;
    case 2:
      return "VME";
    case 4:
      return "DE";
    case 8:
      return "PSE";
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar2 < 0x40) {
      if (iVar2 == 0x10) {
        return "TSC";
      }
      if (iVar2 == 0x20) {
        return "MSR";
      }
    }
    else {
      if (iVar2 == 0x40) {
        return "PAE";
      }
      if (iVar2 == 0x80) {
        return "MCE";
      }
    }
  }
  else if (iVar2 < 0x2000) {
    if (iVar2 < 0x800) {
      if (iVar2 == 0x100) {
        return "CX8";
      }
      if (iVar2 == 0x200) {
        return "APIC";
      }
    }
    else {
      if (iVar2 == 0x800) {
        return "SEP";
      }
      if (iVar2 == 0x1000) {
        return "MTRR";
      }
    }
  }
  else if (iVar2 < 0x20000) {
    if (iVar2 < 0x8000) {
      if (iVar2 == 0x2000) {
        return "PGE";
      }
      if (iVar2 == 0x4000) {
        return "MCA";
      }
    }
    else {
      if (iVar2 == 0x8000) {
        return "CMOV";
      }
      if (iVar2 == 0x10000) {
        return "PAT";
      }
    }
  }
  else if (iVar2 < 0x400000) {
    if (iVar2 < 0x80000) {
      if (iVar2 == 0x20000) {
        return "PSE36";
      }
      if (iVar2 == 0x40000) {
        return "PN";
      }
    }
    else {
      if (iVar2 == 0x80000) {
        return "CFLUSH";
      }
      if (iVar2 == 0x200000) {
        return "DS";
      }
    }
  }
  else if (iVar2 < 0x4000000) {
    if (iVar2 < 0x1000000) {
      if (iVar2 == 0x400000) {
        return "AMD_MMX";
      }
      if (iVar2 == 0x800000) {
        return "MMX";
      }
    }
    else {
      if (iVar2 == 0x1000000) {
        return "FXSR";
      }
      if (iVar2 == 0x2000000) {
        return "SSE";
      }
    }
  }
  else if (iVar2 < 0x10000000) {
    if (iVar2 == 0x4000000) {
      return "SSE2";
    }
    if (iVar2 == 0x8000000) {
      return "SS";
    }
  }
  else {
    if (iVar2 == 0x10000000) {
      return "MTT";
    }
    if (iVar2 == 0x20000000) {
      return "ACC";
    }
  }
  pcVar1 = "UNK";
switchD_1000ef57c_caseD_1:
  return pcVar1;
}

