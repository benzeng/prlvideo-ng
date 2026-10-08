
ulong FUN_100aaf9d0(ulong param_1,ulong *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  
  do {
    iVar6 = 0;
    while( true ) {
      uVar5 = *param_2;
      uVar4 = uVar5 & 3;
      if (uVar4 == 1) {
        plVar1 = (long *)((uVar5 & 0xfffffffffffffffc) + 0x18);
        *plVar1 = *plVar1 + -1;
        return 1;
      }
      if (uVar4 == 2) {
        LOCK();
        uVar4 = *param_2;
        if (uVar5 == uVar4) {
          *param_2 = uVar5 | 3;
          uVar4 = uVar5;
        }
        UNLOCK();
        if (uVar4 == uVar5) {
          uVar4 = uVar5 & 0xfffffffffffffffc;
          puVar3 = (ulong *)(uVar4 + 0x20);
          do {
            puVar8 = puVar3;
            uVar7 = *puVar8;
            puVar3 = (ulong *)(uVar7 + 0x10);
          } while (uVar7 != param_1);
          *puVar8 = *(ulong *)(param_1 + 0x10);
          piVar2 = (int *)(uVar4 + 0x10);
          *piVar2 = *piVar2 + -1;
          iVar6 = *piVar2;
          LOCK();
          uVar7 = *param_2;
          *param_2 = uVar5;
          UNLOCK();
          if (iVar6 != 0) {
            return uVar7;
          }
          uVar5 = FUN_100aaf5d0(*(long *)(uVar4 + 0x30) + 8);
          return uVar5;
        }
      }
      else if (uVar4 == 0) {
        LOCK();
        uVar4 = *param_2;
        if (uVar5 == uVar4) {
          *param_2 = uVar5 | 3;
          uVar4 = uVar5;
        }
        UNLOCK();
        if (uVar4 == uVar5) {
          uVar4 = uVar5;
          if (uVar5 != param_1) {
            do {
              uVar7 = uVar4;
              uVar4 = *(ulong *)(uVar7 + 0x10);
            } while (uVar4 != param_1);
            *(undefined8 *)(uVar7 + 0x10) = *(undefined8 *)(param_1 + 0x10);
            LOCK();
            uVar4 = *param_2;
            *param_2 = uVar5;
            UNLOCK();
            return uVar4;
          }
          LOCK();
          uVar5 = *param_2;
          *param_2 = *(ulong *)(param_1 + 0x10);
          UNLOCK();
          return uVar5;
        }
      }
      if (199 < iVar6) break;
      iVar6 = iVar6 + 1;
    }
    FUN_100ab04d0();
  } while( true );
}

