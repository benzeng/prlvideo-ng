
undefined8 FUN_100b32ee0(long param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong local_20;
  ulong local_18;
  
  FUN_100b26b80();
  uVar4 = 0;
  if (*(long *)(param_1 + 0x40) == 0) {
    local_18 = 0;
    local_20 = 0;
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0xa0))(*(long **)(param_1 + 8),0,0,0);
    cVar2 = FUN_100db7c20(uVar3,&local_18,&local_20);
    if (cVar2 == '\0') {
      FUN_100df99c0("","dimg",0,"Can\'t determine disk parameters");
      uVar4 = 0x80024003;
    }
    else {
      *(ulong *)(param_1 + 0x38) = local_20;
      uVar4 = 0;
      *(ulong *)(param_1 + 0x20) = local_18 / local_20;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_20;
      *(int *)(param_1 + 0x28) = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x100000)) / auVar1,0);
    }
  }
  return uVar4;
}

