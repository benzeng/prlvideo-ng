
void FUN_1003a81a0(long param_1)

{
  int iVar1;
  Data *pDVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Data *pDVar7;
  Data *local_40;
  undefined1 local_32;
  
  lVar3 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  pvVar4 = operator_new(0x60);
  uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_1002880e0(pvVar4,uVar5,2,uVar6,&local_40);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1003a826f;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar7 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar7 != (void *)0x0) {
          operator_delete(*(void **)pDVar7);
        }
        pDVar7 = pDVar7 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1003a826f:
  CAbstractTask::execute();
  return;
}

