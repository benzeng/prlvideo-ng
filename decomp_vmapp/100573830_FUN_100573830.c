
void FUN_100573830(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x11f8) != 0) {
    FUN_1005aa3b0(*(long *)(param_1 + 0x11f8),*param_2,param_2 + 10,*(uint *)(param_2 + 1) & 0x800);
  }
  if (*(int *)(param_1 + 0x12d0) != 0) {
    plVar4 = *(long **)(param_1 + 0x1200);
    if (plVar4 != (long *)(param_1 + 0x1200)) {
      uVar3 = *param_2;
      uVar1 = *(undefined4 *)(param_2 + 10);
      uVar2 = *(undefined4 *)(param_2 + 1);
      do {
        (**(code **)(plVar4[-1] + 0x10))(plVar4 + -1,uVar3,uVar1,uVar2);
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)(param_1 + 0x1200));
    }
  }
  return;
}

