
undefined8 * FUN_1003df0d0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  Data *pDVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  Data *pDVar8;
  long lVar9;
  Data *local_38;
  undefined1 local_29;
  
  if (DAT_1022743b8 == 0) {
    DAT_1022743b8 = FUN_1003df280("QList<PRL_ALLOWED_VM_COMMAND>",0xffffffffffffffff,1);
  }
  uVar3 = DAT_1022743b8;
  uVar6 = QVariant::userType();
  puVar2 = PTR_shared_null_1021e15e8;
  if (uVar3 == uVar6) {
    uVar7 = QVariant::constData();
    FUN_10012b980(param_1,uVar7);
  }
  else {
    local_38 = (Data *)PTR_shared_null_1021e15e8;
    cVar5 = QVariant::convert(param_2,(void *)(ulong)uVar3);
    if (cVar5 == '\0') {
      *param_1 = puVar2;
    }
    else {
      FUN_10012b980(param_1,&local_38);
    }
    pDVar4 = local_38;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      iVar1 = *(int *)(local_38 + 0xc);
      if (iVar1 != *(int *)(local_38 + 8)) {
        lVar9 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
        pDVar8 = local_38 + (long)iVar1 * 8 + 8;
        do {
          if (*(void **)pDVar8 != (void *)0x0) {
            operator_delete(*(void **)pDVar8);
          }
          pDVar8 = pDVar8 + -8;
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0);
      }
      QListData::dispose(pDVar4);
    }
  }
  return param_1;
}

