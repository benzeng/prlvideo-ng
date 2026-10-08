
bool FUN_100ab10b0(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x28);
  FUN_100ab0640(puVar2);
  *puVar2 = &PTR_FUN_1022821a8;
  puVar2[4] = param_1;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  cVar1 = FUN_100ab0710(puVar2,*(undefined4 *)((long)param_1 + 0xec));
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x1b) = *(int *)(param_1 + 0x1b) + 1;
  }
  return cVar1 != '\0';
}

