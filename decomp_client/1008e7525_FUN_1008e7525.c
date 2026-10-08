
void FUN_1008e7525(long *param_1)

{
  undefined8 local_18;
  long local_10;
  
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '$') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    local_10 = FUN_1008e5ee7(param_1,&local_18);
    if (local_10 == 0) {
      _xmlXPathErr(param_1,4);
    }
    else {
      *(undefined4 *)(param_1[7] + 0x10) = 0xffffffff;
      FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,0xd,0,0,0,local_10,
                    local_18);
      while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb))))
             || (*(char *)*param_1 == '\r'))) {
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
        }
      }
      if ((param_1[3] != 0) && ((*(uint *)(param_1[3] + 0x150) >> 1 & 1) != 0)) {
        _xmlXPathErr(param_1,5);
      }
    }
  }
  else {
    _xmlXPathErr(param_1,4);
  }
  return;
}

