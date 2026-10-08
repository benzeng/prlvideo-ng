
void FUN_10005ff50(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_3 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar2 = *(long *)(lVar1 + 0x18);
    uVar4 = 0;
    if ((lVar2 != 0) && (uVar4 = 0, *(int *)(lVar2 + 4) != 0)) {
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
    }
    iVar3 = FUN_100060e10(uVar4);
    if (iVar3 != 3) {
      uVar4 = FUN_100152280();
      uVar4 = FUN_100152a20(uVar4,param_2);
      FUN_10005f5d0(param_1,uVar4);
      return;
    }
  }
  return;
}

