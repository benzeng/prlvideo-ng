
void FUN_10055b220(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  Data *pDVar3;
  undefined8 uVar4;
  Data *pDVar5;
  long lVar6;
  undefined1 local_60 [12];
  undefined1 local_50 [12];
  Data *local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x28) != *param_2) {
    FUN_10055d1a0(&local_40);
    pDVar3 = (Data *)*puVar1;
    *puVar1 = local_40;
    local_40 = pDVar3;
    if (*(int *)pDVar3 != -1) {
      if (*(int *)pDVar3 != 0) {
        LOCK();
        *(int *)pDVar3 = *(int *)pDVar3 + -1;
        local_31 = *(int *)pDVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10055b2bf;
      }
      iVar2 = *(int *)(pDVar3 + 0xc);
      if (iVar2 != *(int *)(pDVar3 + 8)) {
        lVar6 = (long)*(int *)(pDVar3 + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = pDVar3 + (long)iVar2 * 8 + 8;
        do {
          if (*(void **)pDVar5 != (void *)0x0) {
            operator_delete(*(void **)pDVar5);
          }
          pDVar5 = pDVar5 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar3);
    }
  }
LAB_10055b2bf:
  local_50 = FUN_100715260(puVar1,2);
  lVar6 = *(long *)(param_1 + 0x18);
  FUN_10055b350(local_50,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x18),
                *(undefined8 *)(lVar6 + 0x28));
  local_60 = FUN_100715260(puVar1,4);
  lVar6 = *(long *)(param_1 + 0x18);
  FUN_10055b350(local_60,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x38),
                *(undefined8 *)(lVar6 + 0x48));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  FUN_1005a5f40(*(undefined8 *)(param_1 + 0x20));
  QWidget::setDisabled(SUB81(uVar4,0));
  return;
}

