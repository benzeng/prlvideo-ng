
char * FUN_1000ef7e0(byte param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 1 << (param_1 & 0x1f);
  if (iVar2 < 1) {
    if (iVar2 == -0x80000000) {
      return "HYPERVISOR";
    }
  }
  else if (iVar2 < 0x10) {
    pcVar1 = "SSE3";
    switch(iVar2) {
    case 1:
      goto switchD_1000ef82c_caseD_1;
    case 2:
      return "PCLMULQDQ";
    case 4:
      return "DTE64";
    case 8:
      return "MONITOR_MWAIT";
    }
  }
  else if (iVar2 < 0x100) {
    if (iVar2 < 0x40) {
      if (iVar2 == 0x10) {
        return "DSCPL";
      }
      if (iVar2 == 0x20) {
        return "VMX";
      }
    }
    else {
      if (iVar2 == 0x40) {
        return "SMX";
      }
      if (iVar2 == 0x80) {
        return "EST";
      }
    }
  }
  else if (iVar2 < 0x4000) {
    if (iVar2 < 0x1000) {
      if (iVar2 == 0x100) {
        return "TM2";
      }
      if (iVar2 == 0x200) {
        return "SSSE3";
      }
    }
    else {
      if (iVar2 == 0x1000) {
        return "FMA";
      }
      if (iVar2 == 0x2000) {
        return "CX16";
      }
    }
  }
  else if (iVar2 < 0x100000) {
    if (iVar2 < 0x20000) {
      if (iVar2 == 0x4000) {
        return "XTPR";
      }
      if (iVar2 == 0x8000) {
        return "PDCM";
      }
    }
    else {
      if (iVar2 == 0x20000) {
        return "PCID";
      }
      if (iVar2 == 0x80000) {
        return "SSE41";
      }
    }
  }
  else if (iVar2 < 0x1000000) {
    if (iVar2 < 0x400000) {
      if (iVar2 == 0x100000) {
        return "SSE42";
      }
      if (iVar2 == 0x200000) {
        return "X2APIC";
      }
    }
    else {
      if (iVar2 == 0x400000) {
        return "MOVBE";
      }
      if (iVar2 == 0x800000) {
        return "POPCNT";
      }
    }
  }
  else if (iVar2 < 0x10000000) {
    if (iVar2 < 0x4000000) {
      if (iVar2 == 0x1000000) {
        return "TSCDL";
      }
      if (iVar2 == 0x2000000) {
        return "AES";
      }
    }
    else {
      if (iVar2 == 0x4000000) {
        return "XSAVE";
      }
      if (iVar2 == 0x8000000) {
        return "OSXSAVE";
      }
    }
  }
  else {
    if (iVar2 == 0x10000000) {
      return "AVX";
    }
    if (iVar2 == 0x20000000) {
      return "F16C";
    }
    if (iVar2 == 0x40000000) {
      return "RDRAND";
    }
  }
  pcVar1 = "UNK";
switchD_1000ef82c_caseD_1:
  return pcVar1;
}

