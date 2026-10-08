
void FUN_1008e8e80(long *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_1008e8bcc(param_1);
  if ((int)param_1[2] == 0) {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while ((*(char *)*param_1 == '+' || (*(char *)*param_1 == '-'))) {
      uVar2 = *(undefined4 *)(param_1[7] + 0x10);
      cVar1 = *(char *)*param_1;
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      FUN_1008e8bcc(param_1);
      if ((int)param_1[2] != 0) {
        return;
      }
      FUN_1008d9069(param_1[7],uVar2,*(undefined4 *)(param_1[7] + 0x10),5,cVar1 == '+',0,0,0,0);
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

