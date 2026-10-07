
undefined8
FUN_1006fe990(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1006fe8c0(param_1,param_3,param_4,param_5,param_7);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    *(undefined8 *)(*param_1 + 0x10) = param_2;
    uVar2 = 0;
  }
  return uVar2;
}

