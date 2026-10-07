
void FUN_1005065a0(long param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x30)) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  *(char *)(param_1 + 0x30) = param_2;
  return;
}

