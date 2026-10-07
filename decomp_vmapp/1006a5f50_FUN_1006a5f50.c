
undefined8 FUN_1006a5f50(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1[0x3012] == 0) {
    FUN_1008e3970("","dimg",0,"Error: invalid parameter stored for block rollback");
    uVar2 = 0x80000003;
  }
  else {
    cVar1 = (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x70))();
    if (cVar1 == '\0') {
      FUN_1008e3970("","dimg",0,"Error: failed to truncate file at rollback new block creation");
      uVar2 = 0x80022002;
    }
    else {
      param_1[0x3012] = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

