
undefined4
FUN_100709fc0(long *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_100709540(param_1,0);
  if (lVar2 == 0) {
    FUN_1008e3970("","AbstractFile",0,
                  "Can\'t open handle at SetCachingMode(Index, rw, Offset, Size)");
    uVar1 = 0x80000004;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x88))
                      ((long *)param_1[2],param_2,param_3,param_4,param_5);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

