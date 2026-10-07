
undefined8 FUN_1000ba380(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 9) {
    FUN_1008e3970("","vm",0,"RTC alarm went off, resuming VM");
    uVar1 = FUN_10008fa70(param_1,0x4e21);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

