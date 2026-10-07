
long FUN_1008da900(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  if ((param_2 == 0) && (lVar2 = FUN_1008da710(param_1), lVar2 == 0)) {
    FUN_100887ce0(0x2e,0x6f,0x7f,"cms_lib.c",0x72);
  }
  else {
    uVar1 = FUN_100821ab0(*param_1);
    switch(uVar1) {
    case 0x15:
      return lVar2;
    case 0x16:
      lVar3 = FUN_1008dd290(param_1);
      break;
    case 0x17:
      lVar3 = FUN_1008de650(param_1);
      break;
    default:
      FUN_100887ce0(0x2e,0x6f,0x9c,"cms_lib.c",0x90);
      return 0;
    case 0x19:
      lVar3 = FUN_1008dd810(param_1);
      break;
    case 0x1a:
      lVar3 = FUN_1008df120(param_1);
    }
    if (lVar3 != 0) {
      lVar2 = FUN_10087dfb0(lVar3,lVar2);
      return lVar2;
    }
    if (param_2 != 0) {
      return 0;
    }
    FUN_10087d4e0(lVar2);
  }
  return 0;
}

