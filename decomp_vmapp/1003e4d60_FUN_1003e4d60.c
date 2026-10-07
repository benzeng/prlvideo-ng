
long FUN_1003e4d60(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_28;
  ulong local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (DAT_101119890 != 0) {
    lVar3 = FUN_1003e3310(param_1);
    return lVar3;
  }
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x98))();
  uVar4 = 0;
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))(*(long **)(param_1 + 0x30),0,0,0);
    FUN_100762380(uVar2,&local_20,&local_28);
    uVar4 = local_20;
  }
  uVar4 = uVar4 / *(ulong *)(param_1 + 0xd0);
  lVar3 = uVar4 - 1;
  if (0xfffffffe < uVar4) {
    lVar3 = 0xfffffffe;
  }
  return lVar3;
}

