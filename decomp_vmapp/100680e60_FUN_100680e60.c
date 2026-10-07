
undefined8
FUN_100680e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 local_2c;
  
  uVar1 = 0x8158018;
  if (*param_4 < 3) {
    local_2c = 0;
    uVar1 = FUN_10067d400(param_1,param_2,&local_2c,param_6);
    if ((int)uVar1 == 0x8000000) {
      uVar1 = FUN_100680c40(param_1,local_2c,param_3,param_4,param_5);
    }
  }
  return uVar1;
}

