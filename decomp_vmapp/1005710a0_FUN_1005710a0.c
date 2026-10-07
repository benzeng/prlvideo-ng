
ulong FUN_1005710a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (param_1[0x225] == param_1[0x226]) {
    FUN_1008e3970("","vdisk",0,"Disk was not opened correctly!");
    uVar5 = 0x80019016;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (cVar1 == '\0') {
      lVar3 = FUN_1005f6150(3,param_1);
      if ((lVar3 != 0) &&
         (plVar4 = (long *)___dynamic_cast(lVar3,&PTR_vtable_100bc7fa0,&PTR_vtable_100bc7fe0,0),
         plVar4 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar4 + 0x120))(plVar4,param_2,param_3,param_4);
        if ((int)uVar2 < 0) {
          FUN_1008e3970("","vdisk",0,"Operation init failed, err = 0x%X",(ulong)uVar2);
          (**(code **)(*plVar4 + 0x58))(plVar4);
          return (ulong)uVar2;
        }
        param_1[0x239] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x000100571198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        return uVar5;
      }
      FUN_1008e3970("","vdisk",0,"Failed to create object");
      uVar5 = 0x80010013;
    }
    else {
      FUN_1008e3970("","vdisk",0,"SwitchToState() found uncommited operation");
      uVar5 = 0x80021062;
    }
  }
  return uVar5;
}

