
long FUN_10050fcb0(undefined8 *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_30;
  undefined1 local_21;
  
  puVar1 = (uint *)*param_1;
  if (1 < *puVar1) {
    FUN_10050fe40(param_1);
    puVar1 = (uint *)*param_1;
  }
  if (*(long *)(puVar1 + 4) != 0) {
    lVar2 = *(long *)(puVar1 + 4);
    lVar3 = 0;
    do {
      while (lVar4 = lVar2, iVar5 = *(int *)(lVar4 + 0x18), iVar5 < *param_2) {
        lVar2 = *(long *)(lVar4 + 0x10);
        if (*(long *)(lVar4 + 0x10) == 0) {
          if (lVar3 == 0) goto LAB_10050fd2d;
          iVar5 = *(int *)(lVar3 + 0x18);
          lVar4 = lVar3;
          goto LAB_10050fd29;
        }
      }
      lVar2 = *(long *)(lVar4 + 8);
      lVar3 = lVar4;
    } while (*(long *)(lVar4 + 8) != 0);
LAB_10050fd29:
    if (iVar5 <= *param_2) {
      return lVar4 + 0x20;
    }
  }
LAB_10050fd2d:
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar2 = FUN_10050ffa0(param_1,param_2,&local_30);
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

