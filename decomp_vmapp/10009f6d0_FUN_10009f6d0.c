
undefined1 FUN_10009f6d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  if (DAT_1011c35c8 == 0) {
    uVar1 = 0;
    FUN_1008e3970("","vm",0,"Cannot set initiate guest resolution changing: DynResHost is NULL");
  }
  else {
    uVar1 = FUN_100031300(DAT_1011c35c8,param_3,param_2);
  }
  return uVar1;
}

