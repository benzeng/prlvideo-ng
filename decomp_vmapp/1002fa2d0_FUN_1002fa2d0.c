
long FUN_1002fa2d0(long param_1,char param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x11938);
  if (param_2 != '\0') {
    puVar2 = (undefined8 *)(param_1 + 72000);
  }
  lVar1 = FUN_1002ad790(param_1,*puVar2);
  if (lVar1 == 0) {
    lVar1 = 0;
    FUN_1008e3970("","LocalDevices",0,"Failed to Create GL Context for GuestDX");
  }
  return lVar1;
}

