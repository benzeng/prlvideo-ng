
undefined8
FUN_1008d26e0(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  switch(param_1) {
  case 10:
    iVar1 = FUN_1008d3640(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
  case 0xc:
    lVar2 = FUN_1008d3750(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    break;
  case 0xb:
  case 0xd:
    iVar1 = FUN_1008d4950(*param_2,param_4[1]);
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}

