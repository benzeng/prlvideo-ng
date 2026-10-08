
void FUN_1005b2700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  *(undefined4 *)(lVar1 + 0x50) = 2;
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar2,2);
  uVar2 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_1005b8750(uVar2);
  FUN_10083fee0(param_1,uVar3);
  return;
}

