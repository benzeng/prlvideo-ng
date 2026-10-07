
void FUN_1005b1ea0(long param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x78) == -1) {
    if (DAT_1011b55f8 < 3) {
      return;
    }
    pcVar1 = "Skip save for closed cache";
  }
  else {
    if ((*(byte *)(param_1 + 0xe8) & 2) != 0) {
      FUN_1005b0790(param_1 + 0x48);
      return;
    }
    if (DAT_1011b55f8 < 3) {
      return;
    }
    pcVar1 = "Skip save for RO cache";
  }
  FUN_1008e3970("","vdisk",3,pcVar1);
  return;
}

