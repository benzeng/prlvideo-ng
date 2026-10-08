
undefined8 FUN_100cba6d0(int *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 == 2) {
    local_1c = 4;
    local_10 = 0;
    local_20 = param_3;
    local_18 = param_2;
    uVar1 = FUN_100c76bb0(&local_20,**(undefined8 **)(*(long *)(param_1 + 2) + 8));
  }
  else {
    FUN_100c62ee0(0x2e,0x8a,0x7b,"cms_env.c",0x1a5);
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

