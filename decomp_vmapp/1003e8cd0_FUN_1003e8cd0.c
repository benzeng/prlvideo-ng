
undefined1 FUN_1003e8cd0(undefined4 *param_1,long *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined4 local_34;
  long *local_30;
  
  local_30 = (long *)0x0;
  local_34 = 0;
  uVar1 = *param_1;
  uVar4 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0x97,0xab,0xcf,0x2c,0x23,0xcc,0x11,0xd5,0xa0,0xe8,0,0x30,0x65,0x70,0x48,0x66)
  ;
  uVar5 = _CFUUIDGetConstantUUIDWithBytes
                    (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,0x42,0x6f)
  ;
  iVar3 = _IOCreatePlugInInterfaceForService(uVar1,uVar4,uVar5,&local_30,&local_34);
  plVar6 = local_30;
  if (iVar3 == 0) {
    pcVar2 = *(code **)(*local_30 + 8);
    uVar4 = _CFUUIDGetConstantUUIDWithBytes
                      (0,0x1f,0x65,0x11,6,0x23,0xcc,0x11,0xd5,0xbb,0xdb,0,0x30,0x65,0x70,0x48,0x66);
    auVar7 = _CFUUIDGetUUIDBytes(uVar4);
    iVar3 = (*pcVar2)(plVar6,auVar7._0_8_,auVar7._8_8_,param_2);
    (**(code **)(*local_30 + 0x18))();
    if ((iVar3 == 0) && ((long *)*param_2 != (long *)0x0)) {
      plVar6 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
      *param_3 = plVar6;
      if (plVar6 == (long *)0x0) {
        FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] Can not obtain SCSI interface");
      }
      else {
        iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
        if (iVar3 == 0) {
          return 1;
        }
        (**(code **)(*(long *)*param_3 + 0x18))();
      }
      (**(code **)(*(long *)*param_2 + 0x18))();
    }
    else {
      FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] Can not obtain MMC interface");
    }
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] IOCreatePlugInInterfaceForService failed");
  }
  return 0;
}

