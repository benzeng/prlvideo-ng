
int FUN_1008017b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  iVar1 = CSdkCommunicator::qt_metacall();
  if (-1 < iVar1) {
    switch(param_2) {
    case 0:
      if (iVar1 < 0x74) {
        FUN_1007fdb80(param_1,0,iVar1,param_4);
      }
      iVar1 = iVar1 + -0x74;
      break;
    case 1:
    case 2:
    case 3:
    case 0xb:
      FUN_1007fdb80(param_1,param_2,iVar1,param_4);
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      iVar1 = iVar1 + -3;
      break;
    case 0xc:
      if (iVar1 < 0x74) {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
      iVar1 = iVar1 + -0x74;
    }
  }
  return iVar1;
}

