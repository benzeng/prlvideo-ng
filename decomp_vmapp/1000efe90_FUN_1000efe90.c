
char * FUN_1000efe90(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "UNK";
  if (param_1 == 3) {
    pcVar2 = "PERFBIAS";
  }
  pcVar1 = "APERF_MPERF";
  if (param_1 != 0) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

