
char * FUN_1003a1340(undefined8 param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  
  if ((param_2 & 0xffff) != 0x42) {
    uVar1 = param_2 >> 0x10 & 0xff;
    if (uVar1 < 7) {
      return (&PTR_s__100bbd940)[uVar1];
    }
    return "_ctrl?";
  }
  if ((param_2 & 0x20000) == 0) {
    pcVar2 = "p";
    if ((param_2 & 0x10000) == 0) {
      pcVar2 = "";
    }
    return pcVar2;
  }
  return "b";
}

