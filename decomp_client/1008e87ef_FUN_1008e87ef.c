
void FUN_1008e87ef(long *param_1)

{
  undefined4 uVar1;
  
  FUN_1008e81aa(param_1);
  if ((int)param_1[2] == 0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while (*(char *)*param_1 == '|') {
      uVar1 = *(undefined4 *)(param_1[7] + 0x10);
      FUN_1008d9069(param_1[7],0xffffffff,0xffffffff,9,0,0,0,0,0);
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1008e81aa(param_1);
      FUN_1008d9069(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),7,0,0,0,0,0);
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

