
void FUN_100814c00(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      uVar3 = *(undefined8 *)param_4[1];
      uVar2 = *(undefined1 *)param_4[2];
      break;
    case 1:
      uVar3 = *(undefined8 *)param_4[1];
      uVar2 = 0;
      break;
    case 2:
      FUN_10023ade0();
      return;
    case 3:
      FUN_10023b870();
      return;
    case 4:
      FUN_10023b6b0();
      return;
    case 5:
      FUN_10023b660();
      return;
    default:
      goto switchD_100814c22_default;
    }
    uVar1 = FUN_10023b480(param_1,uVar3,uVar2);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100814c22_default:
  return;
}

