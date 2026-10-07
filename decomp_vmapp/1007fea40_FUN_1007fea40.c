
undefined8 FUN_1007fea40(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 0x80) + 0xf0) != 0) {
    FUN_1007fe960(*(undefined8 *)(param_1 + 0x170),1,
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xf8));
    *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xf0) = 0;
  }
  return 1;
}

