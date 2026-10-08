
undefined8 FUN_100ca4f90(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    lVar1 = FUN_100c9d950(param_1,param_2 + 1);
  }
  else {
    lVar1 = FUN_100c9f650(param_2);
  }
  if (lVar1 == 0) {
    FUN_100c62ee0(0x22,0x9c,0x96,"v3_crld.c",0x66);
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100ca1530(0,param_1,lVar1);
    if (*param_2 == '@') {
      FUN_100c9d9c0(param_1,lVar1);
    }
    else {
      FUN_100c60790(lVar1,FUN_100c9f0c0);
    }
  }
  return uVar2;
}

