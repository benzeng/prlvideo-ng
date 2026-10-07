
int FUN_10071fb00(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  char *local_30;
  
  for (lVar3 = 0; (cVar1 = param_2[lVar3], cVar1 != '\0' && (cVar1 != '.')); lVar3 = lVar3 + 1) {
    if (param_3 == lVar3) {
      return -2;
    }
  }
  if ((param_2 + lVar3 != param_2 + param_3) && (cVar1 != '\0')) {
    uVar2 = _strtoul(param_2 + lVar3 + 1,&local_30,10);
    *param_1 = (int)uVar2;
    if (param_2 + param_3 == local_30) {
      uVar2 = _strtoul(param_2,&local_30,10);
      param_1[1] = (int)uVar2;
      if (local_30 != (char *)0x0) {
        if (*local_30 != '.') {
          return -2;
        }
        return param_3;
      }
    }
  }
  return -2;
}

