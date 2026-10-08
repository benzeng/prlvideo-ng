
undefined8 * FUN_100dbdc80(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)(param_2 + 8) == '\0') {
    iVar3 = *(int *)(param_2 + 0x74);
    if (iVar3 < 0) {
      cVar2 = FUN_100dbf830(param_2,*(undefined4 *)(param_2 + 100));
      if (cVar2 != '\0') {
        piVar1 = *(int **)(param_2 + 0x78);
        *param_1 = piVar1;
        if (*piVar1 + 1U < 2) {
          return param_1;
        }
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        return param_1;
      }
      iVar3 = *(int *)(param_2 + 0x74);
    }
    QString::number((double)iVar3 / DAT_100e19930,(char)param_1,0x67);
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

