
char * FUN_1003a0c60(undefined8 param_1,int param_2)

{
  if (param_2 < 0x18000000) {
    if (param_2 == 0) {
      return "";
    }
    if (param_2 == 0x10000000) {
      return "_2d";
    }
  }
  else {
    if (param_2 == 0x18000000) {
      return "_cube";
    }
    if (param_2 == 0x20000000) {
      return "_volume";
    }
  }
  return "_sampler?";
}

