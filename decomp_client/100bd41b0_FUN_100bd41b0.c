
undefined8 FUN_100bd41b0(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x80) + 0xf0) != 0) {
    FUN_100bd40d0(*(undefined8 *)(param_1 + 0x170),1,
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xf8));
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xf0) = 0;
  }
  return 1;
}

