
void FUN_10035c310(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(int *)(lVar3 + 0x28) != 1) {
      if (*(int *)(lVar3 + 0x28) == 2) {
        lVar3 = FUN_10035bfc0(param_1);
        lVar2 = *(long *)(param_1 + 0x18);
        *(long *)(lVar2 + 0x38) = lVar3;
        *(long *)(lVar3 + 0x30) = lVar2;
        *(long *)(param_1 + 0x18) = lVar3;
        iVar4 = *(int *)(param_1 + 0x10);
      }
      *(undefined8 *)(param_1 + 0x20) = 0;
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)(lVar3 + 4) = iVar1;
      *(undefined4 *)(lVar3 + 0x1c) = 0xffffffff;
      *(int *)(lVar3 + 0x24) = iVar4;
      *(undefined4 *)(lVar3 + 0x28) = 1;
      if ((iVar1 - 3U < 3) && (*(int *)(lVar3 + 8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010035c38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_1011c56e0)(0x8914);
        return;
      }
    }
  }
  return;
}

