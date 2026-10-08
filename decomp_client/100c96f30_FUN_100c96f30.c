
undefined4 FUN_100c96f30(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_R9D;
  undefined4 in_stack_00000008;
  
  lVar2 = FUN_100c96f80(0);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100c97050(param_1,lVar2,in_R9D,in_stack_00000008);
    FUN_100c7c190(lVar2);
  }
  return uVar1;
}

