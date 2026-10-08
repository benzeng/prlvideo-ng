
undefined8 * FUN_100dbe780(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  
  if (*(char *)(param_2 + 8) == '\0') {
    if ((*(int *)(param_2 + 0x70) < 0) &&
       (cVar2 = FUN_100dbf830(param_2,*(undefined4 *)(param_2 + 100)), cVar2 != '\0')) {
      piVar1 = *(int **)(param_2 + 0x78);
      *param_1 = piVar1;
      if (1 < *piVar1 + 1U) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
    }
    else {
      FUN_100dbfa40(param_1);
    }
  }
  else {
    piVar1 = *(int **)(param_2 + 0x78);
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return param_1;
}

