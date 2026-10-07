
undefined8
FUN_1003d9b80(uint *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(&DAT_100b3f714 + (ulong)*param_1 * 8) & 4) != 0) &&
     ((*(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8) & 4) == 0)) {
    if ((*(uint *)(&DAT_100b3f714 + (ulong)*param_3 * 8) & 0x40) == 0) {
      if (param_5 == 2) {
        FUN_1003d8b70();
      }
      else {
        if (param_5 != 1) {
          return 0;
        }
        FUN_1003d87a0();
      }
    }
    else if (param_5 == 2) {
      FUN_1003d9600();
    }
    else {
      if (param_5 != 1) {
        return 0;
      }
      FUN_1003d9200();
    }
    uVar1 = 1;
  }
  return uVar1;
}

