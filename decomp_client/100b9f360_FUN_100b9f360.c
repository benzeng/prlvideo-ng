
undefined8 FUN_100b9f360(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _strcasecmp(param_2,PTR_s_Darwin_1022d0068);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar1 = _strcasecmp(param_2,PTR_s_Linux_1022d0070);
    iVar2 = 2;
    if (iVar1 != 0) {
      iVar1 = _strcasecmp(param_2,PTR_s_Windows_1022d0078);
      iVar2 = 3;
      if (iVar1 != 0) {
        iVar1 = _strcasecmp(param_2,PTR_s_Solaris_1022d0080);
        iVar2 = 4;
        if (iVar1 != 0) {
          iVar2 = _strcasecmp(param_2,PTR_s_Any_1022d0088);
          iVar2 = (uint)(iVar2 == 0) * 5;
        }
      }
    }
  }
  *param_1 = iVar2;
  return 0;
}

