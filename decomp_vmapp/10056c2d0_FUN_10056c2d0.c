
ulong FUN_10056c2d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x1128) == *(long *)(param_1 + 0x1130)) {
    FUN_1008e3970("","vdisk",0,"Disk was not opened correctly!");
    uVar4 = 0x80019016;
  }
  else {
    lVar2 = FUN_1005f6150(0xd,param_1);
    if ((lVar2 != 0) &&
       (plVar3 = (long *)___dynamic_cast(lVar2,&PTR_vtable_100bc7fa0,&PTR_vtable_100bc8060,0),
       plVar3 != (long *)0x0)) {
      uVar1 = (**(code **)(*plVar3 + 0x120))(plVar3,param_2,param_3);
      if ((int)uVar1 < 0) {
        FUN_1008e3970("","vdisk",0,"Operation init failed, err = 0x%X",(ulong)uVar1);
        (**(code **)(*plVar3 + 0x58))(plVar3);
        return (ulong)uVar1;
      }
      *(long **)(param_1 + 0x11c8) = plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010056c35b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      return uVar4;
    }
    FUN_1008e3970("","vdisk",0,"Failed to create object");
    uVar4 = 0x80010013;
  }
  return uVar4;
}

