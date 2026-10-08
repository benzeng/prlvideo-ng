
long * FUN_100b0cf40(long param_1,undefined4 param_2,undefined8 param_3,int *param_4,
                    undefined8 param_5)

{
  long *plVar1;
  int local_34;
  
  local_34 = 0;
  plVar1 = (long *)FUN_100b0cd70(*(undefined4 *)(param_1 + 0xc),param_5,&local_34);
  if (plVar1 != (long *)0x0) {
    local_34 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3);
    if (local_34 < 0) {
      FUN_100df99c0("","dimg",0,"Error 0x%x when creating the disk. Releasing image.");
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = (long *)0x0;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_34;
  }
  return plVar1;
}

