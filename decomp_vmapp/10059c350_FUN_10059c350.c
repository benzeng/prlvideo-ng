
undefined8 FUN_10059c350(undefined8 param_1,undefined4 *param_2)

{
  uint in_EAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  plVar1 = (long *)FUN_10059ac80(param_1,9,(long)&uStack_28 + 4);
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)FUN_100684400(param_1,1,2,(long)&uStack_28 + 4,0);
    if (plVar1 == (long *)0x0) {
      plVar1 = (long *)FUN_100684400(param_1,1,1,(long)&uStack_28 + 4,0);
      uVar2 = 0x61aa;
      if (plVar1 == (long *)0x0) goto LAB_10059c3e8;
    }
    (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    uVar2 = 0x61a9;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar2 = 25000;
  }
LAB_10059c3e8:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uStack_28._4_4_;
  }
  return uVar2;
}

