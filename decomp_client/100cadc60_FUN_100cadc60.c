
undefined8
FUN_100cadc60(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  
  switch(param_1) {
  case 10:
    iVar1 = FUN_100caebc0(param_4 + 2,*param_2);
    if (iVar1 < 1) {
      return 0;
    }
  case 0xc:
    lVar2 = FUN_100caecd0(*param_2,*param_4);
    param_4[1] = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    break;
  case 0xb:
  case 0xd:
    iVar1 = FUN_100cafed0(*param_2,param_4[1]);
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}

