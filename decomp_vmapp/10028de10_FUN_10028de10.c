
void FUN_10028de10(undefined1 *param_1,undefined2 *param_2)

{
  *param_2 = 0x34;
  *(undefined1 *)((long)param_2 + 0xb) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 1) = *param_1;
  *(undefined1 *)((long)param_2 + 3) = param_1[1];
  *(undefined1 *)(param_2 + 2) = param_1[5];
  *(undefined1 *)((long)param_2 + 5) = param_1[6];
  *(undefined1 *)(param_2 + 3) = param_1[7];
  *(undefined1 *)((long)param_2 + 7) = param_1[3];
  *(undefined1 *)(param_2 + 4) = param_1[10];
  *(undefined1 *)((long)param_2 + 9) = param_1[0xb];
  *(undefined1 *)(param_2 + 5) = param_1[0xc];
  *(undefined1 *)(param_2 + 6) = param_1[4];
  *(undefined1 *)((long)param_2 + 0xd) = param_1[9];
  if ((param_1[2] & 2) == 0) {
    *(undefined1 *)((long)param_2 + 1) = 0x40;
  }
  return;
}

