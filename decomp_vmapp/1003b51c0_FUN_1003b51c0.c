
bool FUN_1003b51c0(undefined8 param_1,long param_2,long param_3,byte param_4)

{
  bool bVar1;
  
  if ((*(byte *)(param_2 + 0x39) & 1) == 0) {
    if ((*(byte *)(param_3 + 0x39) & 1) == 0) {
      if (*(char *)(param_2 + 0x38) == *(char *)(param_3 + 0x38)) {
        if (*(int *)(param_2 + 0x2c) == *(int *)(param_3 + 0x2c)) {
          if ((((*(byte *)(param_2 + 0x35) & 2) == 0) && ((*(byte *)(param_3 + 0x35) & 2) == 0)) &&
             (*(int *)(param_2 + 0x28) != *(int *)(param_3 + 0x28))) {
            bVar1 = false;
          }
          else {
            bVar1 = (*(byte *)(param_3 + 0x30) & *(byte *)(param_2 + 0x30) & param_4) != 0;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

