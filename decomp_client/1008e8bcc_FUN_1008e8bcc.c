
void FUN_1008e8bcc(long *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  FUN_1008e89f9(param_1);
  if ((int)param_1[2] == 0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while (((*(char *)*param_1 == '*' ||
            (((*(char *)*param_1 == 'd' && (*(char *)(*param_1 + 1) == 'i')) &&
             (*(char *)(*param_1 + 2) == 'v')))) ||
           (((*(char *)*param_1 == 'm' && (*(char *)(*param_1 + 1) == 'o')) &&
            (*(char *)(*param_1 + 2) == 'd'))))) {
      local_10 = 0xffffffff;
      uVar1 = *(undefined4 *)(param_1[7] + 0x10);
      if (*(char *)*param_1 == '*') {
        local_10 = 0;
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      else if (*(char *)*param_1 == 'd') {
        local_10 = 1;
        *param_1 = *param_1 + 3;
      }
      else if (*(char *)*param_1 == 'm') {
        local_10 = 2;
        *param_1 = *param_1 + 3;
      }
      while ((*(char *)*param_1 == ' ' ||
             (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))
             )) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1008e89f9(param_1);
      if ((int)param_1[2] != 0) {
        return;
      }
      FUN_1008d9069(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),6,local_10,0,0,0,0);
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
    }
  }
  return;
}

