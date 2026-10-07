
void FUN_10047a860(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 < iVar1) {
    uStack_34 = (undefined4)((ulong)in_RAX >> 0x20);
    _local_38 = CONCAT44(uStack_34,0xffffffff);
    FUN_10047a3f0(param_1,*(undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8),&local_38);
    if (iVar1 + -1 != iVar2) {
      lVar3 = 1;
      do {
        _local_38 = CONCAT44(uStack_34,0xffffffff);
        FUN_10047a3f0(param_1,*(undefined8 *)
                               (*param_2 + 0x10 + (*(int *)(*param_2 + 8) + lVar3) * 8),&local_38);
        lVar3 = lVar3 + 1;
      } while (iVar1 - iVar2 != (int)lVar3);
    }
  }
  return;
}

