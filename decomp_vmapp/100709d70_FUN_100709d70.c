
undefined8 FUN_100709d70(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100709540(param_1,0);
  if (lVar1 == 0) {
    FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at GetSize()");
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[2] + 0x78))();
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar2;
}

