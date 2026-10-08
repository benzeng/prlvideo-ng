
int FUN_10082df90(long *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  iVar1 = QObject::qt_metacall();
  if (iVar1 < 0) {
    return iVar1;
  }
  if (param_2 == 0xc) {
    if (iVar1 < 6) {
      if ((iVar1 == 3) && (*(uint *)param_4[1] < 2)) {
        uVar2 = FUN_10082e280();
        *(undefined4 *)*param_4 = uVar2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    goto switchD_10082dff3_default;
  }
  if (param_2 != 0) {
    return iVar1;
  }
  switch(iVar1) {
  case 0:
    lVar3 = *param_1;
    uVar2 = *(undefined4 *)param_4[1];
    goto LAB_10082e01e;
  case 1:
    lVar3 = *param_1;
    uVar2 = 0;
LAB_10082e01e:
    (**(code **)(lVar3 + 0x60))(param_1,uVar2);
    break;
  case 2:
    (**(code **)(*param_1 + 0x68))(param_1);
    break;
  case 3:
    (**(code **)(*param_1 + 0x70))(param_1,param_4[1],param_4[2]);
    break;
  case 4:
    (**(code **)(*param_1 + 0x78))(param_1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x80))(param_1,param_4[1],param_4[2]);
  }
switchD_10082dff3_default:
  return iVar1 + -6;
}

