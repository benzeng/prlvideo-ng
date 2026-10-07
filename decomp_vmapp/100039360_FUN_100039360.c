
void FUN_100039360(long param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 0xc);
  iVar2 = *(int *)(lVar3 + 8);
  if (iVar2 < iVar1) {
    FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(lVar3 + 0x10 + (long)iVar2 * 8),param_3);
    if (iVar1 + -1 != iVar2) {
      lVar3 = 1;
      do {
        FUN_1004c07d0(param_1 + 0x10,
                      *(undefined8 *)(*param_2 + 0x10 + (*(int *)(*param_2 + 8) + lVar3) * 8),
                      param_3);
        lVar3 = lVar3 + 1;
      } while (iVar1 - iVar2 != (int)lVar3);
    }
  }
  return;
}

