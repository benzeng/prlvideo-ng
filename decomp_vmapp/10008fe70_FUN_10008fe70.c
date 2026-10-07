
undefined1 FUN_10008fe70(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined1 uVar14;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar15 = 1;
    FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","NULL == m_pCurCmd",
                  "StateMachine.cpp",0x1fb,"stateGetEvent");
  }
  plVar1 = (long *)(param_1 + 0xd0);
  bVar6 = true;
  if (*(int *)(*(long *)(param_1 + 0xa8) + 0x28) != 0) {
    if (((long *)*plVar1 == plVar1) && (*(long *)(param_1 + 0xc0) == param_1 + 0xc0)) {
      return 1;
    }
    bVar6 = false;
  }
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0xd0);
  if (plVar3 == plVar1) {
    if (*(long *)(param_1 + 0xc0) != param_1 + 0xc0) {
      iVar7 = FUN_1007d8850();
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0xc0) + -0x10;
      piVar12 = (int *)(*(long *)(param_1 + 0xc0) + -4);
      *piVar12 = *piVar12 + (*(int *)(param_1 + 0x58) - iVar7);
      *(int *)(param_1 + 0x58) = iVar7;
      if (!bVar6 && 0 < *(int *)(*(long *)(param_1 + 0x40) + 0xc)) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        goto LAB_100090092;
      }
    }
    if (*(char *)(param_1 + 0x5c) == '\0') {
      QWaitCondition::wait((QMutex *)(param_1 + 0xb8),param_1 + 0xb0);
    }
    *(undefined1 *)(param_1 + 0x5c) = 0;
    iVar7 = FUN_1007d8850();
    if (*(long *)(param_1 + 0x40) != 0) {
      piVar12 = (int *)(*(long *)(param_1 + 0x40) + 0xc);
      *piVar12 = *piVar12 + (*(int *)(param_1 + 0x58) - iVar7);
      *(int *)(param_1 + 0x58) = iVar7;
      lVar10 = *(long *)(param_1 + 0x40);
      if (*(int *)(lVar10 + 0xc) < 1) {
        lVar5 = *(long *)(lVar10 + 0x10);
        plVar1 = *(long **)(lVar10 + 0x18);
        *(long **)(lVar5 + 8) = plVar1;
        *plVar1 = lVar5;
        *(undefined8 *)(lVar10 + 0x10) = 0x112233;
        *(undefined1 **)(lVar10 + 0x18) = &DAT_00445566;
        QMutex::unlock();
        puVar9 = *(undefined8 **)(param_1 + 0x40);
        iVar7 = *(int *)(puVar9 + 4);
        if (iVar7 < 0) {
          *(int *)(puVar9 + 4) = iVar7 + -1;
          lVar10 = *(long *)(param_1 + 0x40);
        }
        else {
          iVar2 = *(int *)(*(undefined8 **)(param_1 + 0xa8) + 6);
          iVar13 = iVar2 % 0x10;
          if ((iVar13 < 1) || (iVar13 <= DAT_1011b55f8)) {
            FUN_1008e3970("","vm",iVar2,"%s state(%s): fired \'%s\' timer",param_1 + 0x81,
                          **(undefined8 **)(param_1 + 0xa8),*puVar9);
            puVar9 = *(undefined8 **)(param_1 + 0x40);
            iVar7 = *(int *)(puVar9 + 4);
          }
          *(int *)(puVar9 + 4) = iVar7 + -1;
          lVar10 = *(long *)(param_1 + 0x40);
          if (1 < iVar7) {
            FUN_10008f1c0(param_1,*(undefined4 *)(lVar10 + 8),(long)*(int *)(lVar10 + 0x24),
                          *(undefined4 *)(lVar10 + 0x20),1);
            return 1;
          }
        }
        if (-1 < *(int *)(lVar10 + 0x20)) {
          return 1;
        }
        FUN_10008f1c0(param_1,*(undefined4 *)(lVar10 + 8),(long)*(int *)(lVar10 + 0x24),
                      *(int *)(lVar10 + 0x20),0);
        return 1;
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    QMutex::unlock();
    uVar14 = 0;
  }
  else {
    *(long **)(param_1 + 0x48) = plVar3;
    lVar10 = *plVar3;
    plVar1 = (long *)plVar3[1];
    *(long **)(lVar10 + 8) = plVar1;
    *plVar1 = lVar10;
    *plVar3 = 0x112233;
    plVar3[1] = (long)&DAT_00445566;
    if (3 < DAT_1011b55f8) {
      uVar4 = **(undefined8 **)(param_1 + 0xa8);
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
      if ((ulong)*(uint *)(param_1 + 0x38) != 0) {
        uVar11 = 0;
        piVar12 = *(int **)(param_1 + 0x30);
        do {
          if (*piVar12 == iVar7) {
            uVar8 = *(undefined8 *)(*(int **)(param_1 + 0x30) + uVar11 * 4 + 2);
            goto LAB_100090063;
          }
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 < *(uint *)(param_1 + 0x38));
      }
      uVar8 = FUN_1007d5980();
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x14);
LAB_100090063:
      FUN_1008e3970("","vm",4,"%s state(%s): received \'%s\'(%u) command",param_1 + 0x81,uVar4,uVar8
                    ,CONCAT44(uVar15,iVar7));
    }
LAB_100090092:
    QMutex::unlock();
    uVar14 = 1;
  }
  return uVar14;
}

