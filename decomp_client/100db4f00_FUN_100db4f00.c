
undefined4 FUN_100db4f00(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_100db4670(param_1,0);
  if (lVar2 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Can\'t open handle at Allocate(Start, Size)");
    uVar1 = 0x80000004;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x80))((long *)param_1[2],param_2,param_3);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

