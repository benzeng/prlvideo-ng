
long FUN_100864a50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  FUN_10081d010(9,0x21,"ec_key.c",0x20d);
  lVar1 = FUN_10085c030(*(undefined8 *)(param_1 + 0x30),param_3,param_4,param_5);
  if (lVar1 == 0) {
    FUN_10085b610(param_1 + 0x30,param_2,param_3,param_4,param_5);
  }
  FUN_10081d010(10,0x21,"ec_key.c",0x214);
  return lVar1;
}

