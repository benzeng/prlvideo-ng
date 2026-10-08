
void FUN_10098fd40(long param_1)

{
  int iVar1;
  ulong in_RAX;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  iVar1 = FUN_100993090(uVar3,(long)&uStack_18 + 7);
  if (iVar1 == 0x8000000) {
    uVar2 = (ulong)(uStack_18._7_1_ ^ 1) << 0x20 | 1;
    iVar1 = 0x8000000;
  }
  else {
    uVar2 = 0xffffffff00000000;
  }
  FUN_1009bdfb0(param_1,iVar1,uVar2);
  return;
}

