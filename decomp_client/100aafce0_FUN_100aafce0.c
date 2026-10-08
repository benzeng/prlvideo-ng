
void FUN_100aafce0(undefined8 param_1,ulong *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = *param_2;
  uVar6 = uVar4 & 0xfffffffffffffffc;
  plVar1 = (long *)(uVar6 + 0x18);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 != 0) {
    return;
  }
  iVar5 = 0;
  do {
    if ((uVar4 & 3) == 1) {
      LOCK();
      uVar3 = *param_2;
      if (uVar4 == uVar3) {
        *param_2 = 3;
        uVar3 = uVar4;
      }
      UNLOCK();
      if (uVar3 == uVar4) {
        uVar4 = *(ulong *)(uVar6 + 0x28);
        if (uVar4 == 0) {
          LOCK();
          *param_2 = *(ulong *)(uVar6 + 0x20);
          UNLOCK();
          if (*(long *)(uVar6 + 0x38) == 0) {
            return;
          }
          FUN_100aaf5d0(*(long *)(uVar6 + 0x38) + 8);
          piVar2 = *(int **)(uVar6 + 0x38);
          if ((*piVar2 == 1) && ((piVar2[0x1e] & 1U) == 0)) {
            FUN_100aaf610(piVar2 + 2);
          }
          LOCK();
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          return;
        }
        *(undefined8 *)(uVar4 + 0x38) = *(undefined8 *)(uVar6 + 0x38);
        *(undefined4 *)(uVar4 + 0x10) = *(undefined4 *)(uVar6 + 0x14);
        *(undefined8 *)(uVar4 + 0x20) = *(undefined8 *)(uVar6 + 0x20);
        LOCK();
        *param_2 = uVar4 | 2;
        UNLOCK();
        if (*(int *)(uVar6 + 0x14) != 0) {
          return;
        }
        FUN_100aaf5d0(*(long *)(uVar4 + 0x30) + 8);
        return;
      }
    }
    if (iVar5 < 200) {
      iVar5 = iVar5 + 1;
      uVar4 = *param_2;
    }
    else {
      FUN_100ab04d0();
      uVar4 = *param_2;
      iVar5 = 0;
    }
  } while( true );
}

