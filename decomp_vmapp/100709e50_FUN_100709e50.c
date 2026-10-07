
undefined4 FUN_100709e50(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_100709540(param_1,0);
  if (lVar2 == 0) {
    FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at GetError()");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0xb0))();
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

