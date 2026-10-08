
void FUN_100d3f230(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    piVar1 = (int *)*param_3;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)QListData::insert((int)param_1);
    *puVar2 = piVar1;
  }
  else {
    puVar2 = (undefined8 *)FUN_100034280((int)param_1,param_2,1);
    piVar1 = (int *)*param_3;
    *puVar2 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return;
}

