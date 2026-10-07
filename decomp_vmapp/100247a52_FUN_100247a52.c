
undefined8 FUN_100247a52(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *local_18;
  
  local_18 = param_2;
  do {
    if (param_3 <= local_18) {
      return 0;
    }
    cVar1 = *local_18;
    local_18 = local_18 + 1;
  } while (cVar1 != '&');
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + 1;
  uVar2 = _xmlStringLenDecodeEntities(param_1,param_2,(int)param_3 - (int)param_2,1,0,0,0);
  *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
  return uVar2;
}

