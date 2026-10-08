
long FUN_100c56740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x6a;
  }
  else {
    FUN_100bf2780(9,0x1e,"eng_pkey.c",0x6d);
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_100bf2780(10,0x1e,"eng_pkey.c",0x6f);
      uVar2 = 0x75;
      uVar3 = 0x70;
    }
    else {
      FUN_100bf2780(10,0x1e,"eng_pkey.c",0x73);
      if (*(code **)(param_1 + 0x88) == (code *)0x0) {
        uVar2 = 0x7d;
        uVar3 = 0x76;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x88))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar2 = 0x80;
        uVar3 = 0x7c;
      }
    }
  }
  FUN_100c62ee0(0x26,0x96,uVar2,"eng_pkey.c",uVar3);
  return 0;
}

