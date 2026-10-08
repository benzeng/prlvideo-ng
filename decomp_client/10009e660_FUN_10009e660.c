
void FUN_10009e660(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  void *pvVar7;
  long lVar8;
  long *local_40;
  undefined8 local_38;
  
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x90) + 4) != 0) {
    local_38 = 0x30;
    pvVar7 = operator_new__(0x30,(nothrow_t *)PTR_nothrow_1021e1620);
    local_40 = operator_new(0x18);
    *(undefined4 *)(local_40 + 1) = 1;
    local_40[2] = (long)pvVar7;
    *local_40 = (long)&PTR_FUN_102282990;
    if (pvVar7 != (void *)0x0) {
      puVar2 = (undefined4 *)local_40[2];
      *puVar2 = 1;
      puVar2[1] = 3;
      puVar2[2] = 5;
      puVar2[3] = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 10) = param_2[2];
      uVar3 = *param_2;
      *(undefined8 *)(puVar2 + 8) = param_2[1];
      *(undefined8 *)(puVar2 + 6) = uVar3;
      cVar6 = FUN_10009fca0(param_1,&local_40,&local_38);
      uVar3 = local_38;
      if (cVar6 != '\0') {
        lVar4 = *(long *)(param_1 + 0x10);
        lVar5 = *(long *)(lVar4 + 0x90);
        if ((*(long *)(lVar5 + 0x10) != 0) && (lVar8 = *(long *)(lVar5 + 0x20), lVar8 != lVar5 + 8))
        {
          do {
            (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))
                      ((long *)(lVar4 + 0x28),*(undefined8 *)(lVar8 + 0x18),&local_40,uVar3);
            lVar8 = QMapNodeBase::nextNode();
          } while (lVar8 != *(long *)(lVar4 + 0x90) + 8);
        }
      }
    }
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  return;
}

