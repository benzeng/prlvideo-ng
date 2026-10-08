
void FUN_100c42e00(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = 0x40;
  if (lVar2 != 0) {
    uVar3 = FUN_100c6fc30(lVar2);
  }
  FUN_100c511a0(uVar3,param_4,param_5,param_2,param_3,uVar1);
  return;
}

