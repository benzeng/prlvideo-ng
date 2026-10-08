
void FUN_1005b28c0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = FUN_1005b87b0(uVar1);
  if (lVar2 != param_2) {
    return;
  }
  uVar1 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b8760(uVar1,0);
  FUN_10083fee0(param_1,0);
  return;
}

