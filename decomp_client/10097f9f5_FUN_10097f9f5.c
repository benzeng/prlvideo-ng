
void FUN_10097f9f5(long *param_1)

{
  int iVar1;
  
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '/') {
    *(uint *)(param_1[4] + 0x20) = *(uint *)(param_1[4] + 0x20) | 0x100;
  }
  else if ((*(char *)*param_1 == '.') || ((*(uint *)(param_1[4] + 0x20) & 7) != 0)) {
    *(uint *)(param_1[4] + 0x20) = *(uint *)(param_1[4] + 0x20) | 0x200;
  }
  if ((*(char *)*param_1 == '/') && (*(char *)(*param_1 + 1) == '/')) {
    iVar1 = FUN_10097db38(param_1,param_1[4],6,0,0);
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  else if ((*(char *)*param_1 == '.') &&
          ((*(char *)(*param_1 + 1) == '/' && (*(char *)(*param_1 + 2) == '/')))) {
    iVar1 = FUN_10097db38(param_1,param_1[4],6,0,0);
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  if (*(char *)*param_1 == '@') {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    FUN_10097ef53(param_1);
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    if (*(char *)*param_1 != '\0') {
      FUN_10097f211(param_1);
    }
  }
  else {
    if (*(char *)*param_1 == '/') {
      iVar1 = FUN_10097db38(param_1,param_1[4],1,0,0);
      if (iVar1 != 0) {
        return;
      }
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    FUN_10097f211(param_1);
    while ((*(char *)*param_1 == ' ' ||
           (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r')))))
    {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
    while (*(char *)*param_1 == '/') {
      if (*(char *)(*param_1 + 1) == '/') {
        iVar1 = FUN_10097db38(param_1,param_1[4],6,0,0);
        if (iVar1 != 0) {
          return;
        }
        if (*(char *)*param_1 != '\0') {
          *param_1 = *param_1 + 1;
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
        FUN_10097f211(param_1);
      }
      else {
        iVar1 = FUN_10097db38(param_1,param_1[4],5,0,0);
        if (iVar1 != 0) {
          return;
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
        if (*(char *)*param_1 != '\0') {
          FUN_10097f211(param_1);
        }
      }
    }
  }
  if (*(char *)*param_1 != '\0') {
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}

