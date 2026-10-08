
void FUN_1008e7777(long *param_1)

{
  undefined8 local_20;
  long local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_18 = FUN_1008e5ee7(param_1,&local_20);
  if (local_18 == 0) {
    _xmlXPathErr(param_1,7);
  }
  else {
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if (*(char *)*param_1 == '(') {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      *(undefined4 *)(param_1[7] + 0x10) = 0xffffffff;
      if (*(char *)*param_1 != ')') {
        while (*(char *)*param_1 != '\0') {
          local_c = *(undefined4 *)(param_1[7] + 0x10);
          *(undefined4 *)(param_1[7] + 0x10) = 0xffffffff;
          FUN_1008e974c(param_1);
          if ((int)param_1[2] != 0) {
            return;
          }
          FUN_1008d9069(param_1[7],local_c,*(undefined4 *)(param_1[7] + 0x10),0xf,0,0,0,0,0);
          local_10 = local_10 + 1;
          if (*(char *)*param_1 == ')') break;
          if (*(char *)*param_1 != ',') {
            _xmlXPathErr(param_1,7);
            return;
          }
          if (*(char *)*param_1 != '\0') {
            *param_1 = *param_1 + 1;
          }
          while (((*(char *)*param_1 == ' ' ||
                  ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
                 (*(char *)*param_1 == '\r'))) {
            if (*(char *)*param_1 != '\0') {
              *param_1 = *param_1 + 1;
            }
          }
        }
      }
      FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xe,local_10,0,0,
                    local_18,local_20);
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      while ((*(char *)*param_1 == ' ' ||
             (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))
             )) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
    }
    else {
      _xmlXPathErr(param_1,7);
    }
  }
  return;
}

