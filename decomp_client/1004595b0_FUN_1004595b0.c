
void * FUN_1004595b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  uVar1 = FUN_1003a4d50();
  switch(uVar1) {
  case 1:
    pvVar2 = operator_new(0x48);
    FUN_100460870(pvVar2,param_1,param_2,param_3);
    break;
  case 2:
    pvVar2 = operator_new(0x40);
    FUN_100450520(pvVar2,param_1,param_2,param_3);
    break;
  case 3:
    pvVar2 = operator_new(0x40);
    FUN_100492da0(pvVar2,param_1,param_2,param_3);
    break;
  case 4:
    pvVar2 = operator_new(0x48);
    FUN_100497ac0(pvVar2,param_1,param_2,param_3);
    break;
  case 5:
    pvVar2 = operator_new(0x40);
    FUN_1004c9de0(pvVar2,param_1,param_2,param_3);
    break;
  case 6:
    pvVar2 = operator_new(0x40);
    FUN_10046f4c0(pvVar2,param_1,param_2,param_3);
    break;
  case 7:
    pvVar2 = operator_new(0x40);
    FUN_100486d50(pvVar2,param_1,param_2,param_3);
    break;
  case 8:
    pvVar2 = operator_new(0x40);
    FUN_10047f630(pvVar2,param_1,param_2,param_3);
    break;
  case 9:
    pvVar2 = operator_new(0x40);
    FUN_1004a0ed0(pvVar2,param_1,param_2,param_3);
    break;
  case 10:
    pvVar2 = operator_new(0x48);
    FUN_1004b6b30(pvVar2,param_1,param_2,param_3);
    break;
  case 0xb:
    pvVar2 = operator_new(0x70);
    FUN_100459b90(pvVar2,param_1,param_2,param_3);
    break;
  case 0xc:
    pvVar2 = operator_new(0x70);
    FUN_100456390(pvVar2,param_1,param_2,param_3);
    break;
  case 0xd:
    pvVar2 = operator_new(0x78);
    FUN_100468620(pvVar2,param_1,param_2,param_3);
    break;
  case 0xe:
    pvVar2 = operator_new(0x70);
    FUN_100490fa0(pvVar2,param_1,param_2,param_3);
    break;
  case 0xf:
    pvVar2 = operator_new(0x70);
    FUN_1004847d0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x10:
    pvVar2 = operator_new(0x70);
    FUN_100471860(pvVar2,param_1,param_2,param_3);
    break;
  case 0x11:
    pvVar2 = operator_new(0x70);
    FUN_1004a5c40(pvVar2,param_1,param_2,param_3);
    break;
  case 0x12:
    pvVar2 = operator_new(0x70);
    FUN_1004b3470(pvVar2,param_1,param_2,param_3);
    break;
  case 0x13:
    pvVar2 = operator_new(0x58);
    FUN_1004a9dc0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x14:
    pvVar2 = operator_new(0x40);
    FUN_10045adf0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x15:
    pvVar2 = operator_new(0x40);
    FUN_1004bdd10(pvVar2,param_1,param_2,param_3);
    break;
  case 0x16:
    pvVar2 = operator_new(0x40);
    FUN_1004c0370(pvVar2,param_1,param_2,param_3);
    break;
  case 0x17:
    pvVar2 = operator_new(0x48);
    FUN_1004c4410(pvVar2,param_1,param_2,param_3);
    break;
  case 0x18:
    pvVar2 = operator_new(0x40);
    FUN_1004c8cf0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x19:
    pvVar2 = operator_new(0x48);
    FUN_1004cd8a0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x1a:
    pvVar2 = operator_new(0x40);
    FUN_1004d12b0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x1b:
    pvVar2 = operator_new(0x40);
    FUN_1004d59a0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x1c:
    pvVar2 = operator_new(0x40);
    FUN_1004d7cf0(pvVar2,param_1,param_2,param_3);
    break;
  case 0x1d:
    pvVar2 = operator_new(0x40);
    FUN_1004b27a0(pvVar2,param_1,param_2,param_3);
    break;
  default:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: wrong dialog type.");
    return (void *)0x0;
  }
  FUN_10044e3a0(pvVar2);
  QFrame::setFrameShape(pvVar2,0);
  QFrame::setFrameShadow(pvVar2,0x10);
  return pvVar2;
}

