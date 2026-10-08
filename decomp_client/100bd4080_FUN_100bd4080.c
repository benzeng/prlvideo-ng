
undefined8 FUN_100bd4080(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x108) != 0) {
    FUN_100bd40d0(*(undefined8 *)(param_1 + 0x170),0,
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x110));
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x108) = 0;
  }
  return 1;
}

