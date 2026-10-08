
void FUN_100c33190(long param_1)

{
  if (param_1 != 0) {
    FUN_100c26640(param_1 + 8);
    FUN_100c26640(param_1 + 0x20);
    FUN_100c26640(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

