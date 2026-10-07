
undefined4 FUN_10070a670(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(param_1[10] + 0x10) == -2) {
    lVar2 = FUN_100709540(param_1,0);
    if (lVar2 == 0) {
      FUN_1008e3970("","AbstractFile",0,"Can\'t open handle at SetHandle(Index, Hndl)");
      uVar1 = 0x80000004;
    }
    else {
      uVar1 = (**(code **)(*(long *)param_1[2] + 0xa8))((long *)param_1[2],param_2,param_3);
      (**(code **)(*param_1 + 0xd8))(param_1);
    }
  }
  else {
    FUN_1008e3970("","AbstractFile",0,
                  "Trying to set aio handle on non static handle abstraction (ID 0x%x)");
    uVar1 = 0x80000003;
  }
  return uVar1;
}

