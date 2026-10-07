
undefined8 FUN_1000d6a70(undefined8 param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    cVar1 = FUN_1000d6450(param_1,param_2,param_3,param_4);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"SaReFileWriteOption Failed. OptId 0x%x uOptLen %u Data ptr %p",
                    param_2,param_4,param_3);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

