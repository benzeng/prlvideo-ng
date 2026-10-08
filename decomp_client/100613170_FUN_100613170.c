
long FUN_100613170(undefined8 *param_1,QString *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_38;
  undefined1 local_2a;
  
  puVar5 = (uint *)*param_1;
  if (1 < *puVar5) {
    FUN_1006148d0(param_1);
    puVar5 = (uint *)*param_1;
  }
  lVar6 = *(long *)(puVar5 + 4);
  lVar8 = 0;
  if (*(long *)(puVar5 + 4) != 0) {
    do {
      while (lVar7 = lVar6, cVar4 = operator<((QString *)(lVar7 + 0x18),param_2), cVar4 == '\0') {
        lVar6 = *(long *)(lVar7 + 8);
        lVar8 = lVar7;
        if (*(long *)(lVar7 + 8) == 0) goto LAB_1006131e6;
      }
      lVar6 = *(long *)(lVar7 + 0x10);
    } while (*(long *)(lVar7 + 0x10) != 0);
    lVar7 = lVar8;
    if (lVar8 != 0) {
LAB_1006131e6:
      cVar4 = operator<(param_2,(QString *)(lVar7 + 0x18));
      if (cVar4 == '\0') {
        return lVar7 + 0x20;
      }
    }
  }
  puVar3 = PTR_shared_null_1021e15d0;
  local_38 = PTR_shared_null_1021e15d0;
  lVar6 = FUN_1006147f0(param_1,param_2,&local_38);
  iVar2 = *(int *)(puVar3 + 0x10);
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_2a = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_2a) {
        return lVar6 + 0x20;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
  }
  return lVar6 + 0x20;
}

