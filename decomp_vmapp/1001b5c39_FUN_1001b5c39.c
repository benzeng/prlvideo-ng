
void FUN_1001b5c39(long *param_1)

{
  undefined4 uVar1;
  
  FUN_1001b59fa(param_1);
  if ((int)param_1[2] == 0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while (((*(char *)*param_1 == 'a' && (*(char *)(*param_1 + 1) == 'n')) &&
           (*(char *)(*param_1 + 2) == 'd'))) {
      uVar1 = *(undefined4 *)(param_1[7] + 0x10);
      *param_1 = *param_1 + 3;
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1001b59fa(param_1);
      if ((int)param_1[2] != 0) {
        return;
      }
      FUN_1001a5741(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),1,0,0,0,0,0);
      while ((*(char *)*param_1 == ' ' ||
             (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))
             )) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
    }
  }
  return;
}

