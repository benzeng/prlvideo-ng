
char * FUN_1003a7a00(int param_1)

{
  if (param_1 < 0xf) {
    switch(param_1) {
    case 1:
      return "u";
    case 2:
      return "i";
    case 4:
      return "b";
    case 8:
      return "";
    }
  }
  else if (param_1 == 0xf) {
    return "a";
  }
  return "?";
}

