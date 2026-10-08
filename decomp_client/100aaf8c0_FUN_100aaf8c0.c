
int * FUN_100aaf8c0(byte param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_1;
  piVar3 = *(int **)(&DAT_102311830 + uVar5 * 8);
  do {
    if (piVar3 == (int *)0x0) {
      piVar3 = operator_new(0x88);
      *piVar3 = 1;
      FUN_100aaf510(piVar3 + 2,uVar5,0);
      do {
        *(undefined8 *)(piVar3 + 0x20) = *(undefined8 *)(&DAT_102311830 + uVar5 * 8);
        lVar1 = *(long *)(piVar3 + 0x20);
        LOCK();
        lVar4 = *(long *)(&DAT_102311830 + uVar5 * 8);
        if (lVar1 == lVar4) {
          *(int **)(&DAT_102311830 + uVar5 * 8) = piVar3;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (lVar4 != *(long *)(piVar3 + 0x20));
      return piVar3;
    }
    if (*piVar3 == 0) {
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
        iVar2 = 0;
      }
      UNLOCK();
      if (iVar2 == 0) {
        return piVar3;
      }
    }
    piVar3 = *(int **)(piVar3 + 0x20);
  } while( true );
}

