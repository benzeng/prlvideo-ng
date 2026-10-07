
long FUN_00410c00(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x48) & 0x40) != 0) {
      free(*(void **)(param_1 + 0x10));
    }
    *(ushort *)(param_1 + 0x48) = *(ushort *)(param_1 + 0x48) & 0xffbf;
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return param_1;
}

