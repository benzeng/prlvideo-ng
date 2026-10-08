
void FUN_100baa410(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) != (code *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  puVar3 = (undefined8 *)param_1[0xc];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    (*(code *)puVar3[3])(puVar3[1]);
    FUN_100bf3910(puVar3);
    puVar3 = puVar1;
  }
  param_1[0xc] = 0;
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    if (*(code **)(*plVar2 + 0x50) != (code *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2);
    }
    FUN_100bf3910(plVar2);
  }
  if ((param_1[2] != 0) && ((*(byte *)((long)param_1 + 0x24) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)((long)param_1 + 0x24) & 1) == 0) {
    param_1[2] = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((param_1[5] != 0) && ((*(byte *)((long)param_1 + 0x3c) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)((long)param_1 + 0x3c) & 1) == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_100bf3910();
  }
  if (param_1[10] != 0) {
    FUN_100bf3910();
  }
  FUN_100bf3910(param_1);
  return;
}

