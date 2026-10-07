
void FUN_1005483c0(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  
  if (0 < param_2) {
    puVar1 = param_1 + param_2;
    do {
      *param_1 = *param_1;
      param_1 = param_1 + 0x1000;
    } while (param_1 < puVar1);
  }
  return;
}

