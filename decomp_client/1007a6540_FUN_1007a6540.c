
void FUN_1007a6540(long param_1)

{
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  FUN_1007a6580(param_1,0);
  FUN_1007a6660(param_1,1);
  return;
}

