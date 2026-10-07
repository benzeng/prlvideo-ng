
undefined8
FUN_10089da50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long local_30;
  
  local_30 = 0;
  iVar1 = FUN_1008a52d0(param_3,&local_30,param_1);
  uVar2 = 0;
  if (local_30 != 0) {
    uVar2 = 0;
    iVar1 = FUN_10088ad10(local_30,(long)iVar1,param_4,param_5,param_2,0);
    if (iVar1 != 0) {
      FUN_10081e1a0(local_30);
      uVar2 = 1;
    }
  }
  return uVar2;
}

