
undefined8 FUN_100720580(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _strcasecmp(param_2,PTR_s_Darwin_10116e698);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_Linux_10116e6a0);
    iVar2 = 2;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_Windows_10116e6a8);
      iVar2 = 3;
      if (iVar1 != 0) {
        iVar1 = _strcasecmp(param_2,PTR_s_Solaris_10116e6b0);
        iVar2 = 4;
        if (iVar1 != 0) {
          iVar2 = _strcasecmp(param_2,PTR_s_Any_10116e6b8);
          iVar2 = (uint)(iVar2 == 0) * 5;
        }
      }
    }
  }
  *param_1 = iVar2;
  return 0;
}

