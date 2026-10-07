
void FUN_100362300(long param_1,long param_2)

{
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    FUN_10038d3b0();
  }
  else {
    FUN_10038d590(*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_1 + 0x38));
  }
  *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
  FUN_10032f000(param_2 + 0x68,*(undefined8 *)(param_2 + 0x70));
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(long *)(param_2 + 0x68) = param_2 + 0x70;
  *(undefined8 *)(param_2 + 0x70) = 0;
  return;
}

