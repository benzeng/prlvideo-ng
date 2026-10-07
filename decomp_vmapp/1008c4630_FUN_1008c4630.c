
char * FUN_1008c4630(byte *param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)0x0;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    pcVar2 = (char *)FUN_10081ddd0(param_2 * 3 + 1U & 0xffffffff,"v3_utl.c",0x19f);
    if (pcVar2 == (char *)0x0) {
      FUN_100887ce0(0x22,0x6f,0x41,"v3_utl.c",0x1a0);
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar3 = pcVar2;
      if (0 < param_2) {
        lVar1 = param_2 * 3;
        do {
          *pcVar3 = "0123456789ABCDEF"[*param_1 >> 4];
          pcVar3[1] = "0123456789ABCDEF"[(ulong)*param_1 & 0xf];
          pcVar3[2] = ':';
          param_1 = param_1 + 1;
          pcVar3 = pcVar3 + 3;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        pcVar3 = pcVar2 + lVar1;
      }
      pcVar3[-1] = '\0';
    }
  }
  return pcVar2;
}

