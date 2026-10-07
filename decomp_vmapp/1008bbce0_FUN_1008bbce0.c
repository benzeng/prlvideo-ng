
undefined8
FUN_1008bbce0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100821870(param_2);
  if (lVar1 == 0) {
    FUN_100887ce0(0xb,0x72,0x6d,"x509name.c",0x139);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1008bba00(param_1,lVar1,param_3,param_4,param_5);
    FUN_100899890(lVar1);
  }
  return uVar2;
}

