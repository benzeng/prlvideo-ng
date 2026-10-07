
undefined8 FUN_100709c30(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_100709540(param_1,0);
  if (lVar1 == 0) {
    FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at Seek(uiOffset, uiMoveMethod)");
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (**(code **)(*(long *)param_1[2] + 0x60))((long *)param_1[2],param_2,param_3);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar2;
}

