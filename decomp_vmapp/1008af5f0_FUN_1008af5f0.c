
undefined8 FUN_1008af5f0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((((0 < param_2) && (uVar2 = 0, 1 < param_2)) && (pcVar1 = (char *)*param_1, *pcVar1 == '\0'))
     && (pcVar1[1] == '\0')) {
    *param_1 = pcVar1 + 2;
    uVar2 = 1;
  }
  return uVar2;
}

