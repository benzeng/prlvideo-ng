
undefined4 FUN_10059c400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint in_EAX;
  undefined4 uVar1;
  long *plVar2;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  plVar2 = (long *)FUN_10059ac80(param_1,3,(long)&uStack_28 + 4);
  if (plVar2 == (long *)0x0) {
    FUN_1008e3970("","vdisk",0,"Error received at disk open: 0x%x",uStack_28._4_4_);
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,param_2,param_3);
    uStack_28 = CONCAT44(uVar1,(undefined4)uStack_28);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uStack_28._4_4_;
}

