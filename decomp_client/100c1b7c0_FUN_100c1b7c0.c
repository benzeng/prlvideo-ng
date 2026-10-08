
undefined8 FUN_100c1b7c0(long param_1,int param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (((param_1 != 0) && (param_3 != 0)) &&
     ((param_2 == 0x80 || ((param_2 == 0xc0 || (uVar2 = 0xfffffffe, param_2 == 0x100)))))) {
    uVar1 = _Camellia_Ekeygen(param_2,param_1,param_3);
    *(undefined4 *)(param_3 + 0x110) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}

