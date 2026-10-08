
char * FUN_100bec9b0(long param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    iVar1 = (int)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x18);
    pcVar3 = "unknown";
    if (iVar1 == 2) {
      pcVar3 = "SSLv2";
    }
    pcVar2 = "TLSv1/SSLv3";
    if (iVar1 != 3) {
      pcVar2 = pcVar3;
    }
    return pcVar2;
  }
  return "(NONE)";
}

