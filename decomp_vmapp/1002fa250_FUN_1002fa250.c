
long FUN_1002fa250(long param_1,char param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (param_4 < 300) {
    if (param_2 == '\0') {
      puVar1 = (undefined8 *)(param_1 + 0x11948);
    }
    else {
      puVar1 = (undefined8 *)(param_1 + 0x11950);
    }
  }
  else if (param_2 == '\0') {
    puVar1 = (undefined8 *)(param_1 + 0x11958);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x11960);
  }
  lVar2 = FUN_1002ad790(param_1,*puVar1);
  if (lVar2 == 0) {
    lVar2 = 0;
    FUN_1008e3970("","LocalDevices",0,"Failed to Create GL Context for GuestGL");
  }
  return lVar2;
}

