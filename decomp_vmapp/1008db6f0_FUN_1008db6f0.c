
undefined8 FUN_1008db6f0(int param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return 1;
  }
  if (param_1 - 10U < 4) {
    uVar1 = *param_2;
    switch(param_1) {
    case 10:
      iVar2 = FUN_1008db940(param_4 + 2,uVar1);
      if (iVar2 < 1) {
        return 0;
      }
    case 0xc:
      lVar3 = FUN_1008da900(uVar1,*param_4);
      param_4[1] = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
      break;
    default:
      iVar2 = FUN_1008daa10(uVar1,param_4[1]);
      if (iVar2 < 1) {
        return 0;
      }
    }
  }
  return 1;
}

