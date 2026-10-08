
undefined8 * FUN_100bf5d30(time_t *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  tm *ptVar2;
  undefined8 *puVar3;
  
  ptVar2 = _gmtime(param_1);
  puVar3 = (undefined8 *)0x0;
  if (ptVar2 != (tm *)0x0) {
    param_2[6] = ptVar2->tm_zone;
    param_2[5] = ptVar2->tm_gmtoff;
    param_2[4] = *(undefined8 *)&ptVar2->tm_isdst;
    param_2[3] = *(undefined8 *)&ptVar2->tm_wday;
    param_2[2] = *(undefined8 *)&ptVar2->tm_mon;
    uVar1 = *(undefined8 *)ptVar2;
    param_2[1] = *(undefined8 *)&ptVar2->tm_hour;
    *param_2 = uVar1;
    puVar3 = param_2;
  }
  return puVar3;
}

