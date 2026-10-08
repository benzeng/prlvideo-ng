
undefined8 FUN_100c43030(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _strcmp(param_2,"ec_paramgen_curve");
  if (iVar1 != 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_100bf76a0(param_3);
  if ((iVar1 == 0) && (iVar1 = FUN_100bf7790(param_3), iVar1 == 0)) {
    FUN_100c62ee0(0x10,0xc6,0x8d,"ec_pmeth.c",0xfb);
    return 0;
  }
  uVar2 = FUN_100c71a40(param_1,0x198,2,0x1001,iVar1,0);
  return uVar2;
}

