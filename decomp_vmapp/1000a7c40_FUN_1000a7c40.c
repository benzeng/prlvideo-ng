
void FUN_1000a7c40(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x1ab0);
  if ((uVar1 & 0x80) != 0) {
    (**(code **)(**(long **)(param_1 + 0x1950) + 0x38))();
    uVar1 = *(ulong *)(param_1 + 0x1ab0);
  }
  if ((uVar1 & 0x200) != 0) {
    iVar2 = *(int *)(param_1 + 0x1164);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x5d8);
      *(int *)(param_1 + 0x1164) = iVar2;
    }
    if (0 < iVar2) {
      lVar3 = (long)iVar2 + 0x301;
      do {
        iVar2 = iVar2 + -1;
        if (*(long *)(param_1 + lVar3 * 8) != 0) {
          FUN_1008e3970("","vm",0,"Terminating CPU #%u ...",iVar2);
          FUN_10008fa70(*(undefined8 *)(param_1 + lVar3 * 8),4);
        }
        lVar4 = lVar3 + -0x301;
        lVar3 = lVar3 + -1;
      } while (1 < lVar4);
    }
  }
  return;
}

