
undefined8
FUN_1002f4d80(long param_1,undefined8 param_2,long param_3,undefined4 *param_4,long param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x28);
  uVar2 = 0xffffffff;
  if (plVar3 != (long *)0x0) {
    if (param_5 == 0) {
      uVar2 = (**(code **)(*plVar3 + 0xf0))(plVar3,param_3);
    }
    else {
      if (0 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"AsyncRequest(%p)",param_5);
        plVar3 = *(long **)(param_1 + 0x28);
      }
      uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3,param_3,FUN_1002f5830,param_5);
    }
    if ((int)uVar2 == 0) {
      uVar1 = 0xffffffff;
      if (param_5 == 0) {
        uVar1 = *(undefined4 *)(param_3 + 0x10);
      }
      *param_4 = uVar1;
      uVar2 = 0;
    }
  }
  return uVar2;
}

