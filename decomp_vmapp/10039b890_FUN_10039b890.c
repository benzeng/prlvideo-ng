
char * FUN_10039b890(undefined8 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "";
  if (param_2 == 1) {
    pcVar2 = "i";
  }
  pcVar1 = "u";
  if (param_2 != 2) {
    pcVar1 = pcVar2;
  }
  return pcVar1;
}

