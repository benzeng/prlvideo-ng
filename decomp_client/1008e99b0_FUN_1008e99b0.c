
void FUN_1008e99b0(long *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1[7] + 0x10);
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '[') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    *(undefined4 *)(param_1[7] + 0x10) = 0xffffffff;
    FUN_1008e974c(param_1);
    if ((int)param_1[2] == 0) {
      if (*(char *)*param_1 == ']') {
        if (param_2 == 0) {
          FUN_1008d9069(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),0x10,0,0,0,0,0);
        }
        else {
          FUN_1008d9069(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),0x11,0,0,0,0,0);
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
               || (*(char *)*param_1 == '\r'))) {
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
        }
      }
      else {
        _xmlXPathErr(param_1,6);
      }
    }
  }
  else {
    _xmlXPathErr(param_1,6);
  }
  return;
}

