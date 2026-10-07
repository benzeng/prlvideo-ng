
undefined8 FUN_1002015f9(int *param_1)

{
  int *local_10;
  
  for (local_10 = param_1; (local_10 != (int *)0x0 && (*local_10 == 4));
      local_10 = *(int **)(local_10 + 0x1c)) {
    if (*(long *)(local_10 + 0x2a) != 0) {
      return *(undefined8 *)(local_10 + 0x2a);
    }
  }
  return 0;
}

