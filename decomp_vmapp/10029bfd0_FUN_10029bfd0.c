
void FUN_10029bfd0(undefined4 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  QMutex::lock();
  iVar1 = *(int *)(param_2 + 0x50);
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      uVar2 = *(ulong *)(param_2 + 0x58);
      uVar3 = FUN_1007d87f0();
      if (uVar3 <= uVar2) {
LAB_10029c048:
        QMutex::unlock();
        return;
      }
      *(undefined4 *)(param_2 + 0x50) = 2;
    }
    else if (iVar1 != 2) goto LAB_10029c048;
    lVar4 = FUN_1007d87f0();
    *(long *)(param_2 + 0x58) = lVar4 + *(long *)(param_2 + 0x60);
  }
  QMutex::unlock();
                    /* WARNING: Could not recover jumptable at 0x00010029c046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x28) + 0x20))(param_1);
  return;
}

