
void FUN_100099240(long param_1)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  CHwPrinter *this;
  long *plVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  CHwPrinter *pCVar10;
  long *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  plVar6 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  iVar5 = FUN_1007da300("devices.printer.pdf",1);
  if (iVar5 == 0) {
    return;
  }
  this = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
  pCVar10 = (CHwPrinter *)0x0;
  if (this != (CHwPrinter *)0x0) {
    CHwPrinter::CHwPrinter(this);
    pCVar10 = this;
  }
  plVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar6 == (long *)0x0) {
    bVar3 = true;
    plVar6 = (long *)0x0;
    if (pCVar10 != (CHwPrinter *)0x0) {
      (**(code **)(*(long *)pCVar10 + 0x88))(pCVar10);
      plVar6 = (long *)0x0;
    }
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = (long)pCVar10;
    *plVar6 = (long)&PTR_FUN_100bef8f0;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  plVar8 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar6;
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (!bVar3) {
    LOCK();
    plVar8 = plVar6 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  if (plVar6 == (long *)0x0) {
    return;
  }
  pcVar2 = *(code **)(*plVar6 + 0xa0);
  local_38 = (QArrayData *)QString::fromAscii_helper("Print to PDF (Mac Desktop)",0x1a);
  (*pcVar2)(plVar6,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000993c5;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000993c5:
  plVar6 = (long *)0x0;
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  }
  pcVar2 = *(code **)(*plVar6 + 0xb0);
  local_40 = (QArrayData *)QString::fromAscii_helper("Parallels Virtual PDF Printer",0x1d);
  (*pcVar2)(plVar6,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009942d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10009942d:
  puVar7 = operator_new(0x10,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar9 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
    lVar4 = *(long *)(param_1 + 0x38);
    *(long *)(puVar7 + 2) = lVar4;
    puVar9 = puVar7;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  local_48 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (local_48 == (long *)0x0) {
    if (puVar9 != (undefined4 *)0x0) {
      plVar6 = *(long **)(puVar9 + 2);
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar8 = plVar6 + 1;
        lVar4 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      operator_delete(puVar9);
    }
  }
  else {
    *(undefined4 *)(local_48 + 1) = 1;
    local_48[2] = (long)puVar9;
    *local_48 = (long)&PTR_FUN_100bef918;
    if (puVar9 != (undefined4 *)0x0) {
      plVar6 = operator_new(0x18);
      *plVar6 = param_1;
      plVar6[1] = param_1 + 8;
      *(undefined4 *)(plVar6 + 2) = 0;
      QMutex::lock();
      *(undefined4 *)(plVar6 + 2) = 1;
      plVar8 = (long *)FUN_10009f2a0(plVar6);
      FUN_10009e600(*(undefined8 *)(plVar8[2] + 8),&local_48);
      LOCK();
      plVar6 = plVar8 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (local_48 != (long *)0x0) {
      LOCK();
      plVar6 = local_48 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  return;
}

