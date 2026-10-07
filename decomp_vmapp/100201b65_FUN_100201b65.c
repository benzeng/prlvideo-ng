
undefined4 FUN_100201b65(undefined8 param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined4 local_34;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
    local_34 = 0;
  }
  else if (param_2 == param_3) {
    uVar1 = FUN_1001e6bd7(param_2);
    FUN_1001ea46a(param_1,0xbc1,0,param_2,uVar1,"The definition is circular",0);
    local_34 = 0xbc1;
  }
  else if (((uint)param_3[0x16] >> 0x10 & 1) == 0) {
    param_3[0x16] = param_3[0x16] | 0x10000;
    local_34 = FUN_100201b65(param_1,param_2,*(undefined8 *)(param_3 + 0x1c));
    param_3[0x16] = param_3[0x16] ^ 0x10000;
  }
  else {
    local_34 = 0;
  }
  return local_34;
}

