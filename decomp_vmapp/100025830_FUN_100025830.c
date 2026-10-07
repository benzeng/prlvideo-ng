
void FUN_100025830(long param_1,long *param_2,byte *param_3)

{
  if ((*param_3 & 0x20) != 0) {
    if (*(int *)(*param_2 + 0x58) == 2) {
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    else if (*(int *)(*param_2 + 0x58) == 1) {
      *(undefined1 *)(param_1 + 0x71) = 1;
      FUN_100025640();
      return;
    }
  }
  return;
}

