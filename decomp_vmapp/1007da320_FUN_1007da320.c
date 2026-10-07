
undefined4 FUN_1007da320(int *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_24;
  
  if (*param_1 != 0) {
    local_24 = param_3;
    pcVar2 = (char *)FUN_1007da3c0(param_1,param_2);
    if (pcVar2 != (char *)0x0) {
      iVar1 = _strncasecmp(pcVar2,"0x",2);
      if (iVar1 == 0) {
        pcVar3 = "0x%x";
      }
      else {
        pcVar3 = "%u";
      }
      _sscanf(pcVar2,pcVar3,&local_24);
      FUN_1008e3970("","Std",0,"SystemFlag \'%s\' = 0x%x (%u)",param_2,local_24,local_24);
      param_3 = local_24;
    }
  }
  return param_3;
}

