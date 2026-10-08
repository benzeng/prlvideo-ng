
void FUN_10093556d(int *param_1,undefined8 param_2)

{
  int *local_10;
  
  if ((param_1 != (int *)0x0) && ((*param_1 == 5 || (*param_1 == 4)))) {
    local_10 = param_1;
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_10093548d(param_2,param_1,*(undefined8 *)(param_1 + 0x1c));
    }
    else {
      do {
        FUN_10093548d(param_2,local_10,*(undefined8 *)(local_10 + 0x1c));
        local_10 = *(int **)(local_10 + 0x20);
      } while (local_10 != (int *)0x0);
    }
  }
  return;
}

