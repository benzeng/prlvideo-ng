
undefined8 FUN_1007da540(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 local_28;
  
  if (*param_1 != 0) {
    local_28 = param_3;
    pcVar2 = (char *)FUN_1007da3c0(param_1,param_2);
    if (pcVar2 != (char *)0x0) {
      iVar1 = _strncasecmp(pcVar2,"0x",2);
      if (iVar1 == 0) {
        pcVar3 = "0x%llx";
      }
      else {
        pcVar3 = "%llu";
      }
      _sscanf(pcVar2,pcVar3,&local_28);
      FUN_1008e3970("","Std",0,"SystemFlag \'%s\' = 0x%llx (%llu)",param_2,local_28,local_28);
      param_3 = local_28;
    }
  }
  return param_3;
}

