
long FUN_100498bc0(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = (uint *)*param_1;
  if (1 < *puVar1) {
    FUN_100498ef0(param_1);
    puVar1 = (uint *)*param_1;
  }
  if (*(long *)(puVar1 + 4) != 0) {
    lVar2 = *(long *)(puVar1 + 4);
    lVar3 = 0;
    do {
      while (lVar4 = lVar2, uVar5 = *(uint *)(lVar4 + 0x18), uVar5 < *param_2) {
        lVar2 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          if (lVar3 == 0) goto LAB_100498c3d;
          uVar5 = *(uint *)(lVar3 + 0x18);
          lVar4 = lVar3;
          goto LAB_100498c39;
        }
      }
      lVar2 = *(long *)(lVar4 + 8);
      lVar3 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_100498c39:
    if (uVar5 <= *param_2) {
      return lVar4 + 0x20;
    }
  }
LAB_100498c3d:
  local_38 = 0;
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar2 = FUN_100499060(param_1,param_2,&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return lVar2 + 0x20;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return lVar2 + 0x20;
}

