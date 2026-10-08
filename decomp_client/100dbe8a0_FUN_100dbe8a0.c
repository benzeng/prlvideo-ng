
undefined8 * FUN_100dbe8a0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  int *piVar2;
  byte bVar3;
  
  if (param_2[0x10] == 0) {
    piVar2 = (int *)param_2[0xf];
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  else {
    pcVar1 = *(code **)(param_2[0x10] + 8);
    if (pcVar1 == (code *)0x0) {
      piVar2 = (int *)param_2[0xf];
      *param_1 = piVar2;
      if (1 < *piVar2 + 1U) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
    }
    else {
      bVar3 = (*pcVar1)(*(undefined4 *)(*param_2 + 0x28),0,0);
      QString::number((int)param_1,(uint)bVar3);
    }
  }
  return param_1;
}

