
void FUN_1004b9cb0(long param_1,long param_2)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  pcVar3 = DAT_1011ccd98;
  uVar4 = (*DAT_1011ccc38)();
  iVar5 = (*pcVar3)(uVar4,*(undefined4 *)(param_2 + 8),&local_40);
  if (iVar5 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    iVar5 = *(int *)(lVar2 + 0x1c);
    dVar1 = *(double *)(lVar2 + 0x240);
    iVar6 = (int)((double)((int)local_40 - *(int *)(lVar2 + 0x18)) * dVar1);
    *(int *)(param_2 + 0x58) = iVar6;
    iVar5 = (int)((double)((int)local_38 - iVar5) * dVar1);
    *(int *)(param_2 + 0x5c) = iVar5;
    *(int *)(param_2 + 0x60) = (int)((double)(int)local_30 * dVar1 + (double)iVar6);
    *(int *)(param_2 + 100) = (int)((double)(int)local_28 * dVar1 + (double)iVar5);
  }
  return;
}

