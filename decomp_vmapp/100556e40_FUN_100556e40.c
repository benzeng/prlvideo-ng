
void FUN_100556e40(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_1 + 0x60);
  lVar6 = (long)param_2 * 0x10;
  iVar1 = *(int *)(lVar3 + 4 + lVar6);
  if ((long)iVar1 < 0) {
    puVar5 = (undefined4 *)0x0;
    if (iVar1 == -1) {
      puVar5 = (undefined4 *)(param_1 + 0x88);
    }
  }
  else {
    puVar5 = (undefined4 *)((long)iVar1 * 0x10 + lVar3);
  }
  *puVar5 = *(undefined4 *)(lVar3 + lVar6);
  iVar2 = *(int *)(lVar3 + lVar6);
  if ((long)iVar2 < 0) {
    lVar4 = 0;
    if (iVar2 == -1) {
      lVar4 = param_1 + 0x88;
    }
  }
  else {
    lVar4 = lVar3 + (long)iVar2 * 0x10;
  }
  *(int *)(lVar4 + 4) = iVar1;
  *(int *)(lVar3 + lVar6) = -2;
  *(undefined4 *)(lVar3 + 4 + lVar6) = 0xfffffffe;
  return;
}

