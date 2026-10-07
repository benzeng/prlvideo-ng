
long FUN_10087b670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x43;
    uVar3 = 0x89;
  }
  else {
    FUN_10081d010(9,0x1e,"eng_pkey.c",0x8c);
    if (*(int *)(param_1 + 0xb0) == 0) {
      FUN_10081d010(10,0x1e,"eng_pkey.c",0x8e);
      uVar2 = 0x75;
      uVar3 = 0x8f;
    }
    else {
      FUN_10081d010(10,0x1e,"eng_pkey.c",0x92);
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        uVar2 = 0x7d;
        uVar3 = 0x94;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x90))(param_1,param_2,param_3,param_4);
        if (lVar1 != 0) {
          return lVar1;
        }
        uVar2 = 0x81;
        uVar3 = 0x9a;
      }
    }
  }
  FUN_100887ce0(0x26,0x97,uVar2,"eng_pkey.c",uVar3);
  return 0;
}

