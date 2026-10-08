
long FUN_100c3fc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  FUN_100bf2780(9,0x21,"ec_key.c",0x20d);
  lVar1 = FUN_100c37230(*(undefined8 *)(param_1 + 0x30),param_3,param_4,param_5);
  if (lVar1 == 0) {
    FUN_100c36810(param_1 + 0x30,param_2,param_3,param_4,param_5);
  }
  FUN_100bf2780(10,0x21,"ec_key.c",0x214);
  return lVar1;
}

