
undefined8
FUN_100d6c2d0(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.06:");
    uVar2 = 0x8158003;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4,param_5);
    if ((int)uVar2 == 0x8158014) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                        (*(long **)(param_1 + 0x10),param_2,param_3,param_4);
      if ((int)uVar2 != 0x8000000) {
        return uVar2;
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))
                        (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6);
    }
    if ((int)uVar2 == 0x8000000) {
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
      uVar2 = 0x8000000;
    }
  }
  return uVar2;
}

