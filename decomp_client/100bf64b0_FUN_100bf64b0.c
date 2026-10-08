
ulong FUN_100bf64b0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_1023160c8 != 0) {
    iVar1 = FUN_100c60800();
    if (*param_1 < iVar1) {
      puVar2 = (undefined8 *)FUN_100c60820(DAT_1023160c8);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      goto LAB_100bf64ed;
    }
  }
  uVar3 = FUN_100c60ae0(*(undefined8 *)(param_1 + 2));
LAB_100bf64ed:
  return (long)*param_1 ^ uVar3;
}

