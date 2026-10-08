
void FUN_100249310(long param_1)

{
  do {
    if (*(long *)(param_1 + 0x20) != 0) {
      _PrlHandle_Free();
    }
    if (*(long *)(param_1 + 8) != 0) {
      FUN_100249310();
    }
    param_1 = *(long *)(param_1 + 0x10);
  } while (param_1 != 0);
  return;
}

