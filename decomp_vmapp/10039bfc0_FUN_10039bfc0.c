
char * FUN_10039bfc0(undefined8 param_1,int param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  
  pcVar1 = "";
  if (param_2 != param_3) {
    if (param_2 == 2) {
      bVar3 = param_3 == 0;
      pcVar2 = "U2F";
      pcVar1 = "ivec4";
    }
    else if (param_2 == 1) {
      bVar3 = param_3 == 0;
      pcVar2 = "I2F";
      pcVar1 = "uvec4";
    }
    else {
      if (param_2 != 0) {
        return "";
      }
      bVar3 = param_3 == 1;
      pcVar2 = "F2I";
      pcVar1 = "F2U";
    }
    if (bVar3) {
      pcVar1 = pcVar2;
    }
  }
  return pcVar1;
}

