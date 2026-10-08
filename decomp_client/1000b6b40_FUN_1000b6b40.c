
undefined8 FUN_1000b6b40(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000b89b0(lVar1,param_2);
  }
  return uVar2;
}

