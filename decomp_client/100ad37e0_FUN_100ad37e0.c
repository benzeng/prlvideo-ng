
void FUN_100ad37e0(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *param_3;
  iVar1 = *(int *)(lVar2 + 8);
  if (*(int *)(lVar2 + 0xc) == iVar1) {
    FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),param_2);
    return;
  }
  if (iVar1 != *(int *)(lVar2 + 0xc)) {
    puVar3 = (undefined8 *)(lVar2 + 0x10 + (long)iVar1 * 8);
    do {
      FUN_100ace5e0(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)*puVar3,param_2);
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined8 *)(*param_3 + 0x10 + (long)*(int *)(*param_3 + 0xc) * 8));
  }
  return;
}

