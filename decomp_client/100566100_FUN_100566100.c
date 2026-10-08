
long FUN_100566100(long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  Data *pDVar3;
  uint uVar4;
  undefined8 *puVar5;
  QKeySequence *this;
  long lVar6;
  Data *local_38;
  undefined1 local_29;
  
  puVar2 = (undefined8 *)*param_2;
  if ((*(int *)((long)puVar2 + 0x14) != 0) && (*(uint *)(puVar2 + 4) != 0)) {
    uVar4 = *(uint *)((long)puVar2 + 0x24) ^ *param_3;
    for (puVar5 = *(undefined8 **)(puVar2[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar2 + 4)) * 8);
        puVar5 != puVar2; puVar5 = (undefined8 *)*puVar5) {
      if ((*(uint *)(puVar5 + 1) == uVar4) && (*param_3 == *(uint *)((long)puVar5 + 0xc))) {
        if (puVar5 != puVar2) {
          FUN_1005607f0(param_1,puVar5 + 2);
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar5 + 3);
          return param_1;
        }
        break;
      }
    }
  }
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(param_1,&local_38,2);
  pDVar3 = local_38;
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
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_38 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return param_1;
}

