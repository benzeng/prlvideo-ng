
void FUN_1008eaedb(long *param_1)

{
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '/') {
    while (*(char *)*param_1 == '/') {
      if ((*(char *)*param_1 == '/') && (*(char *)(*param_1 + 1) == '/')) {
        *param_1 = *param_1 + 2;
        while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
               || (*(char *)*param_1 == '\r'))) {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
        FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xb,6,1,0,0,0);
        FUN_1008eaab5(param_1);
      }
      else if (*(char *)*param_1 == '/') {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
               || (*(char *)*param_1 == '\r'))) {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
        if ((*(char *)*param_1 != '\0') &&
           ((((0x40 < *(byte *)*param_1 && (*(byte *)*param_1 < 0x5b)) ||
             ((0x60 < *(byte *)*param_1 && (*(byte *)*param_1 < 0x7b)))) ||
            ((((*(char *)*param_1 == '_' || (*(char *)*param_1 == '.')) ||
              (*(char *)*param_1 == '@')) || (*(char *)*param_1 == '*')))))) {
          FUN_1008eaab5(param_1);
        }
      }
    }
  }
  else {
    FUN_1008eaab5(param_1);
  }
  return;
}

