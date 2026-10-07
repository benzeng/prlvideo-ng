
int FUN_10036bb90(long param_1,long param_2,undefined8 *param_3,char param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*(int *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x8c) == 0)) &&
     ((param_3 == (undefined8 *)0x0 || (*(uint *)*param_3 < 0xffff0300)))) {
    if (param_2 == 0) {
      if (param_4 != '\0') {
        return param_5 + 7 + (uint)param_5;
      }
      if (3 < *(uint *)(param_1 + 0x230)) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0xc0);
      iVar2 = 7;
      switch(*(uint *)(param_1 + 0x230)) {
      case 1:
        return (uint)(iVar1 != 0) * 3 + 1;
      case 2:
        return (uint)(iVar1 != 0) * 3 + 2;
      case 3:
        iVar2 = (uint)(iVar1 != 0) * 3 + 3;
      }
    }
    else {
      iVar2 = 8;
      if (*(char *)(param_2 + 0xbd) == '\0') {
        return 0;
      }
    }
  }
  return iVar2;
}

