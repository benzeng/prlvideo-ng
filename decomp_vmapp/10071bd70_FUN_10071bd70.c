
undefined8 FUN_10071bd70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != param_1) {
    do {
      plVar1 = (long *)*plVar2;
      if ((void *)plVar2[2] != (void *)0x0) {
        _free((void *)plVar2[2]);
      }
      if ((void *)plVar2[3] != (void *)0x0) {
        _free((void *)plVar2[3]);
      }
      if ((void *)plVar2[4] != (void *)0x0) {
        _free((void *)plVar2[4]);
      }
      _free(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != param_1);
    param_1[1] = (long)param_1;
    *param_1 = (long)param_1;
  }
  return 0;
}

