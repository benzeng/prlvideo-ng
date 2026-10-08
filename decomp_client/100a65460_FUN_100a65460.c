
undefined1
FUN_100a65460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_100a653c0();
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100a64be0(plVar2,param_3,param_4);
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return uVar1;
}

