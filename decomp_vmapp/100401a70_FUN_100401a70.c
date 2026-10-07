
undefined8
FUN_100401a70(long param_1,undefined8 param_2,undefined4 param_3,long *param_4,undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_4 == (long *)0x0) {
    FUN_1008e3970("","HddUtils",0,"CHdd::Init Invalid parameters");
    uVar3 = 0xffffffff;
  }
  else {
    *(long **)(param_1 + 0x38) = param_4;
    *(undefined4 *)(param_1 + 0x40) = param_3;
    uVar3 = (**(code **)(*param_4 + 0x2e0))(param_4);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    uVar2 = FUN_1007da300("devices.hdd.aio",3);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
    plVar4 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 600))
                               (*(long **)(param_1 + 0x38),uVar2);
    uVar3 = 0xffffffff;
    if (plVar4 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
      uVar3 = 0;
      FUN_1008e3970("","HddUtils",0,"hdd: AioWorker mode: %s",uVar5);
      (**(code **)(*plVar4 + 0x28))(plVar4,*(undefined8 *)(param_1 + 0x18));
      cVar1 = (**(code **)(**(long **)(param_1 + 0x38) + 0x1d8))();
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x16c) = *(byte *)(param_1 + 0x16c) | 1;
      }
      FUN_1003ff1b0(param_1,param_5);
      FUN_1003ff450(param_1,param_2);
      FUN_100401460(param_1);
      FUN_100401970(param_1);
      if (*(long *)(param_1 + 0x48) == 0) {
        uVar3 = 0;
        FUN_1008e3970("","HddUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "m_logical_sector_size!=0","Hdd.cpp",0x245,"InitHdd");
      }
    }
  }
  return uVar3;
}

