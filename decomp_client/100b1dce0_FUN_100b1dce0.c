
undefined8 FUN_100b1dce0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1[0x3012] == 0) {
    FUN_100df99c0("","dimg",0,"Invalid parameter stored for block rollback.");
    uVar5 = 0x80000003;
  }
  else {
    cVar3 = (**(code **)(**(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1) + 0x70))();
    if (cVar3 == '\0') {
      FUN_100df99c0("","dimg",0,"Failed to truncate file at rollback new block creation");
      uVar5 = 0x80022002;
    }
    else {
      uVar4 = param_1[0x3012] - 0x200;
      uVar1 = *(ulong *)(*(long *)(*param_1 + -0x18) + 0x38 + (long)param_1);
      if (uVar4 % uVar1 != 0) {
        uVar4 = -uVar1 & param_1[0x3012] + -0x201 + uVar1;
      }
      plVar2 = *(long **)(*(long *)(*param_1 + -0x18) + 8 + (long)param_1);
      uVar5 = 0;
      cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2,param_1 + 0x3060,0x200,0,uVar4);
      if (cVar3 == '\0') {
        FUN_100df99c0("","dimg",0,"Failed to write footer at rollback new block creation");
        uVar5 = 0x80021027;
      }
      else {
        param_1[0x3012] = 0;
      }
    }
  }
  return uVar5;
}

