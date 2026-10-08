
long FUN_10044ec60(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_38;
  undefined1 local_29;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_10044fcf0(param_1);
    puVar4 = (uint *)*param_1;
  }
  puVar3 = PTR_shared_null_1021e15d0;
  if (*(long *)(puVar4 + 4) != 0) {
    lVar5 = *(long *)(puVar4 + 4);
    lVar6 = 0;
    do {
      while (lVar7 = lVar5, uVar8 = *(ulong *)(lVar7 + 0x18), uVar8 < *param_2) {
        lVar5 = *(long *)(lVar7 + 0x10);
        if (*(long *)(lVar7 + 0x10) == 0) {
          if (lVar6 == 0) goto LAB_10044ecdf;
          uVar8 = *(ulong *)(lVar6 + 0x18);
          lVar7 = lVar6;
          goto LAB_10044ecda;
        }
      }
      lVar5 = *(long *)(lVar7 + 8);
      lVar6 = lVar7;
    } while (*(long *)(lVar7 + 8) != 0);
LAB_10044ecda:
    if (uVar8 <= *param_2) {
      return lVar7 + 0x20;
    }
  }
LAB_10044ecdf:
  local_38 = PTR_shared_null_1021e15d0;
  lVar5 = FUN_10044fc40(param_1,param_2,&local_38);
  iVar2 = *(int *)(puVar3 + 0x10);
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0x10);
      *piVar1 = *piVar1 + -1;
      local_29 = *piVar1 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return lVar5 + 0x20;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)PTR_shared_null_1021e15d0);
  }
  return lVar5 + 0x20;
}

