
undefined8 FUN_1004013d0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1007da300("devices.hdd.aio",3);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 600))
                             (*(long **)(param_1 + 0x38),uVar1);
  uVar4 = 0xffffffff;
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar4 = 0;
    FUN_1008e3970("","HddUtils",0,"hdd: AioWorker mode: %s",uVar3);
    (**(code **)(*plVar2 + 0x28))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  return uVar4;
}

