
long FUN_100c78220(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100c26e20(*(undefined8 *)(param_1 + 2),*param_1,param_2);
  if (lVar1 == 0) {
    FUN_100c62ee0(0xd,0x71,0x69,"a_enum.c",0xb1);
  }
  else if (param_1[1] == 0x10a) {
    FUN_100c27430(lVar1,1);
  }
  return lVar1;
}

