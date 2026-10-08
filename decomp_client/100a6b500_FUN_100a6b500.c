
void FUN_100a6b500(long param_1,char *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar7 = (**(code **)(**(long **)(param_2 + 8) + 0x78))();
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar12 = (int)param_1;
  iVar5 = QDataStream::readRawData(param_2,iVar12);
  if (iVar5 != 0x52) {
    (**(code **)(**(long **)(param_2 + 8) + 0x88))(*(long **)(param_2 + 8),uVar7);
    uVar7 = ___cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,&PTR_vtable_1022813c0,0);
  }
  uVar2 = *(uint *)(param_1 + 0x4c);
  uVar8 = (ulong)uVar2;
  if (uVar8 != 0) {
    if (uVar2 < 2) {
      iVar12 = iVar12 + 0x88;
      uVar8 = 1;
    }
    else {
      iVar12 = iVar12 + 0x80 + uVar2 * 8;
    }
    uVar6 = QDataStream::readRawData(param_2,iVar12);
    uVar2 = *(uint *)(param_1 + 0x4c);
    uVar11 = 8;
    if (1 < (ulong)uVar2) {
      uVar11 = (ulong)uVar2 * 8;
    }
    if (uVar6 != uVar11) {
      (**(code **)(**(long **)(param_2 + 8) + 0x88))(*(long **)(param_2 + 8),uVar7);
      uVar7 = ___cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar7,&PTR_vtable_1022813c0,0);
    }
    if (uVar2 != 0) {
      lVar13 = 0;
      do {
        uVar2 = *(uint *)(param_1 + 0x84 + uVar8 * 8 + lVar13 * 8);
        pvVar9 = operator_new__((ulong)uVar2);
        plVar10 = operator_new(0x18);
        *(undefined4 *)(plVar10 + 1) = 1;
        plVar10[2] = (long)pvVar9;
        *plVar10 = (long)&PTR_FUN_102282990;
        uVar6 = QDataStream::readRawData(param_2,(int)pvVar9);
        if (uVar6 != uVar2) {
          (**(code **)(**(long **)(param_2 + 8) + 0x88))(*(long **)(param_2 + 8),uVar7);
          uVar7 = ___cxa_allocate_exception(1);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(uVar7,&PTR_vtable_1022813c0,0);
        }
        if ((int)lVar13 != 0) {
          *(undefined8 *)(param_1 + 0x80 + lVar13 * 8) = 0;
        }
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        plVar3 = *(long **)(param_1 + 0x80 + lVar13 * 8);
        *(long **)(param_1 + 0x80 + lVar13 * 8) = plVar10;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)(*plVar3 + 0x10))();
          }
        }
        LOCK();
        plVar3 = plVar10 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar10 + 0x10))();
        }
        lVar13 = lVar13 + 1;
      } while ((uint)lVar13 < *(uint *)(param_1 + 0x4c));
    }
  }
  return;
}

