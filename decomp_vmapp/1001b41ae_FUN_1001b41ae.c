
void FUN_1001b41ae(long *param_1)

{
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '$') {
    FUN_1001b3bfd(param_1);
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
    FUN_1001b5e24(param_1);
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
      FUN_1001b3903(param_1);
    }
    else {
      FUN_1001b3e4f(param_1);
    }
  }
  else {
    FUN_1001b3260(param_1);
  }
  while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
         (*(char *)*param_1 == '\r'))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

