
undefined8 FUN_100279bc0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x170) + 0x58))();
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "net_adapter %d:Failed to setup packet filtering options. Error %x",
                  *(undefined4 *)(param_1 + 0x150));
    uVar2 = 0x80000009;
  }
  return uVar2;
}

