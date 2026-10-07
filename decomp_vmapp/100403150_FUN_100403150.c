
undefined8 FUN_100403150(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff;
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(param_2 + 0x14);
    uVar2 = (iVar1 != 1) + 0x200;
    if (iVar1 != 0xd) {
      uVar2 = (uint)(iVar1 != 1);
    }
    if ((iVar1 - 1U < 2) || (iVar1 == 0xd)) {
      FUN_100403220();
      uVar3 = 0;
    }
    else {
      if (iVar1 == 0xb) {
        uVar3 = FUN_100403020(param_1,FUN_1004031e0,param_3,uVar2);
        return uVar3;
      }
      FUN_1008e3970("","HddUtils",0,"Unknown generic request type %u");
    }
  }
  return uVar3;
}

