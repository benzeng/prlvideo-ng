
undefined1 FUN_100709d10(long *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_100709540(param_1,0);
  if (lVar2 == 0) {
    uVar1 = 0;
    FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at Truncate(uSize)");
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x70))((long *)param_1[2],param_2);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

