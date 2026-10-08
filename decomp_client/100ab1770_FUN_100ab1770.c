
void FUN_100ab1770(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  undefined1 local_70 [64];
  
  FUN_100aafe50(local_70,param_1 + 200);
  if (*(int *)(param_1 + 0xd8) <= *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd4)) {
    do {
      if (*(long *)(param_1 + 0x38) == 0) {
        if ((*(char *)(param_1 + 0xf0) == '\0') || (*(int *)(param_1 + 0xd0) == 0)) break;
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
        FUN_100aafe00(local_70);
        LOCK();
        piVar1 = (int *)(param_1 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FUN_100ab19c0(param_1,0);
        }
        cVar7 = FUN_100aaf7f0(param_1 + 0x40);
        LOCK();
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        UNLOCK();
        FUN_100aafe30(local_70);
        *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        if ((cVar7 != '\0') && (*(long *)(param_1 + 0x38) == 0)) break;
      }
      else {
        uVar3 = *(ulong *)(param_1 + 0x30);
        lVar4 = (*(undefined8 **)(param_1 + 0x18))[uVar3 >> 8];
        lVar9 = (uVar3 & 0xff) * 0x10;
        plVar5 = *(long **)(lVar4 + lVar9);
        uVar6 = *(ulong *)(lVar4 + 8 + lVar9);
        *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + -1;
        *(ulong *)(param_1 + 0x30) = uVar3 + 1;
        if (0x1ff < uVar3 + 1) {
          operator_delete((void *)**(undefined8 **)(param_1 + 0x18));
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x100;
        }
        if ((uVar6 & 4) == 0) {
          if (((uVar6 & 1) != 0) &&
             (*(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1,
             *(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0x38))) {
            FUN_100ab10b0(param_1);
          }
        }
        else {
          *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
          if ((uVar6 & 1) != 0) {
            *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
          }
        }
        FUN_100aafe00(local_70);
        (**(code **)(*plVar5 + 0x20))(plVar5);
        uVar8 = (**(code **)(*plVar5 + 0x28))(plVar5);
        (**(code **)(*plVar5 + 8))(plVar5);
        FUN_100aafe30(local_70);
        if ((uVar6 & 1) != 0) {
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
        }
        if ((uVar8 & 2) != 0) {
          if (*(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0x38)) {
            FUN_100ab10b0(param_1);
          }
          break;
        }
      }
    } while (*(int *)(param_1 + 0xd8) <= *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd4));
  }
  piVar1 = (int *)(param_1 + 0xd8);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    FUN_100aaf5d0(*(long *)(param_1 + 0xb8) + 0x10);
  }
  FUN_100aafde0(local_70);
  return;
}

