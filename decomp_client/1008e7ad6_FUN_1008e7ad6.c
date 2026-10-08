
void FUN_1008e7ad6(long *param_1)

{
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '$') {
    FUN_1008e7525(param_1);
  }
  else if (*(char *)*param_1 == '(') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    FUN_1008e974c(param_1);
    if ((int)param_1[2] != 0) {
      return;
    }
    if (*(char *)*param_1 != ')') {
      _xmlXPathErr(param_1,7);
      return;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
  }
  else if (((*(byte *)*param_1 < 0x30) || (0x39 < *(byte *)*param_1)) &&
          ((*(char *)*param_1 != '.' ||
           ((*(byte *)(*param_1 + 1) < 0x30 || (0x39 < *(byte *)(*param_1 + 1))))))) {
    if ((*(char *)*param_1 == '\'') || (*(char *)*param_1 == '\"')) {
      FUN_1008e722b(param_1);
    }
    else {
      FUN_1008e7777(param_1);
    }
  }
  else {
    FUN_1008e6b88(param_1);
  }
  while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
         (*(char *)*param_1 == '\r'))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

