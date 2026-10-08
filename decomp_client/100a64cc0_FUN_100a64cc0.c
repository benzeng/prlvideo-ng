
void FUN_100a64cc0(long param_1)

{
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    _write(*(int *)(param_1 + 0x14),(void *)(param_1 + 0x10),1);
    return;
  }
  return;
}

