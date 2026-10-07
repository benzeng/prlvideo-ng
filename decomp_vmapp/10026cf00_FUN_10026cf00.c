
void FUN_10026cf00(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 4);
    uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
    if ((uVar3 & 0x10) != 0) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
      if (((bVar1 & 3) == 2) && (iVar2 != 0)) {
        FUN_10026b7f0(param_1,1,1);
        FUN_10025c290(*(undefined8 *)(param_1 + 8));
        return;
      }
    }
  }
  return;
}

