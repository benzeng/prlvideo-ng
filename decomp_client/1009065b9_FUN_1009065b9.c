
byte * FUN_1009065b9(byte *param_1,long *param_2)

{
  long lVar1;
  byte *local_30;
  long local_28;
  int local_18;
  int local_14;
  byte local_d;
  
  local_18 = 0;
  local_14 = 0x32;
  *param_2 = 0;
  if (*param_1 == 0x22) {
    local_30 = param_1 + 1;
    local_d = 0x22;
  }
  else if (*param_1 == 0x27) {
    local_30 = param_1 + 1;
    local_d = 0x27;
  }
  else {
    local_d = 0x20;
    local_30 = param_1;
  }
  local_28 = (*(code *)_xmlMallocAtomic)(0x32);
  if (local_28 == 0) {
    FUN_10090273c("allocating public ID");
    return (byte *)0x0;
  }
  for (; ((((&_xmlIsPubidChar_tab)[(int)(uint)*local_30] != '\0' || (*local_30 == 0x3f)) &&
          ((*local_30 != local_d || (local_d == 0x20)))) &&
         ((local_d != 0x20 ||
          ((*local_30 != 0x20 && (((*local_30 < 9 || (10 < *local_30)) && (*local_30 != 0xd))))))));
      local_30 = local_30 + 1) {
    lVar1 = local_28;
    if (local_14 <= local_18 + 1) {
      local_14 = local_14 << 1;
      lVar1 = (*(code *)_xmlRealloc)(local_28,(long)local_14);
      if (lVar1 == 0) {
        FUN_10090273c("allocating public ID");
        (*(code *)_xmlFree)(local_28);
        return (byte *)0x0;
      }
    }
    local_28 = lVar1;
    *(byte *)(local_18 + local_28) = *local_30;
    local_18 = local_18 + 1;
  }
  *(undefined1 *)(local_18 + local_28) = 0;
  if (local_d == 0x20) {
    if (((*local_30 != 0x20) && ((*local_30 < 9 || (10 < *local_30)))) && (*local_30 != 0xd)) {
      (*(code *)_xmlFree)(local_28);
      return (byte *)0x0;
    }
  }
  else {
    if (*local_30 != local_d) {
      (*(code *)_xmlFree)(local_28);
      return (byte *)0x0;
    }
    local_30 = local_30 + 1;
  }
  *param_2 = local_28;
  return local_30;
}

