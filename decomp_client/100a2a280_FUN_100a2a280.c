
void FUN_100a2a280(undefined1 *param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_100a332c0(param_1 + 0x10,0,0,0,0,0);
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x60) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined1 **)(param_1 + 0x70) = param_1 + 0x70;
  *(undefined1 **)(param_1 + 0x78) = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}

