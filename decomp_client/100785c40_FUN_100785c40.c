
undefined8 * FUN_100785c40(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1007857f0(*(undefined8 *)(param_2 + 0x10),param_3);
  if (lVar1 == 0) {
    *param_1 = PTR_shared_null_1021e15d0;
  }
  else {
    uVar2 = FUN_1007878c0(lVar1);
    FUN_100787290(param_1,uVar2);
  }
  return param_1;
}

