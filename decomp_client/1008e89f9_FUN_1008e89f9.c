
void FUN_1008e89f9(long *param_1)

{
  bool bVar1;
  int local_10;
  
  local_10 = 0;
  bVar1 = false;
  while ((*(char *)*param_1 == ' ' ||
         (((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)) || (*(char *)*param_1 == '\r'))))) {
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
  }
  while (*(char *)*param_1 == '-') {
    local_10 = 1 - local_10;
    bVar1 = true;
    if (*(char *)*param_1 != '\0') {
      *param_1 = *param_1 + 1;
    }
    while (((*(char *)*param_1 == ' ' || ((8 < *(byte *)*param_1 && (*(byte *)*param_1 < 0xb)))) ||
           (*(char *)*param_1 == '\r'))) {
      if (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
    }
  }
  FUN_1008e87ef(param_1);
  if (((int)param_1[2] == 0) && (bVar1)) {
    if (local_10 == 0) {
      FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,5,3,0,0,0,0);
    }
    else {
      FUN_1008d9069(param_1[7],*(undefined4 *)(param_1[7] + 0x10),0xffffffff,5,2,0,0,0,0);
    }
  }
  return;
}

