
undefined8 FUN_1000b6ae0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x88))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000b89a0(lVar1);
  }
  return uVar2;
}

