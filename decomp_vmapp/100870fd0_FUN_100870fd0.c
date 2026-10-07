
void FUN_100870fd0(long param_1)

{
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_100850af0();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffff77 | 0x80;
  return;
}

