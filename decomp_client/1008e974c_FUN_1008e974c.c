
void FUN_1008e974c(long *param_1)

{
  undefined4 uVar1;
  
  FUN_1008e9561(param_1);
  if ((int)param_1[2] == 0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while ((*(char *)*param_1 == 'o' && (*(char *)(*param_1 + 1) == 'r'))) {
      uVar1 = *(undefined4 *)(param_1[7] + 0x10);
      *param_1 = *param_1 + 2;
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1008e9561(param_1);
      if ((int)param_1[2] != 0) {
        return;
      }
      FUN_1008d9069(param_1[7],uVar1,*(undefined4 *)(param_1[7] + 0x10),2,0,0,0,0,0);
      while ((*(char *)*param_1 == ' ' ||
             (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))
             )) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
    }
    if (*(int *)(*(long *)(param_1[7] + 8) + (long)*(int *)(param_1[7] + 0x10) * 0x38) != 0xc) {
      FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0x12,0,0,0,0,0);
    }
  }
  return;
}

