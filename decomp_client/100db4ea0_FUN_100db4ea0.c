
undefined8 FUN_100db4ea0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100db4670(param_1,0);
  if (lVar1 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at GetSize()");
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[2] + 0x78))();
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar2;
}

