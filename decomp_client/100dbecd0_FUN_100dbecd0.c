
undefined8 * FUN_100dbecd0(undefined8 *param_1,long param_2)

{
  int *piVar1;
  
  if (*(char *)(param_2 + 8) == '\0') {
    QString::number((int)param_1,*(int *)(param_2 + 0x50));
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

