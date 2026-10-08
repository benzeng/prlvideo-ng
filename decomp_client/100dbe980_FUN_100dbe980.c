
undefined8 * FUN_100dbe980(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  int local_30 [6];
  
  iVar2 = _proc_pidinfo(*(int *)(*param_2 + 0x28),0xc,0,local_30,0x10);
  if (iVar2 < 1) {
    piVar1 = (int *)param_2[0xf];
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    QString::number((uint)param_1,local_30[0]);
  }
  return param_1;
}

