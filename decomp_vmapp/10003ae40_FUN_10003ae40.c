
void FUN_10003ae40(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  Data *local_40;
  undefined1 local_31;
  
  if (param_2 == 3) {
    local_40 = (Data *)PTR_shared_null_100ba2188;
    QMutex::lock();
    FUN_10003b790(&local_40,param_1 + 0x48);
    FUN_10003b790(&local_40,param_1 + 0x50);
    FUN_100036f60(param_1 + 0x48);
    FUN_100036f60(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x40);
    uVar2 = (ulong)*(int *)(lVar3 + 8);
    lVar5 = (long)*(int *)(lVar3 + 0xc) - uVar2;
    if (0 < (int)lVar5) {
      lVar6 = 0;
      while( true ) {
        FUN_100036f00(&local_40,*(undefined8 *)(lVar3 + 0x10 + ((int)uVar2 + lVar6) * 8));
        lVar6 = lVar6 + 1;
        if (lVar5 <= lVar6) break;
        lVar3 = *(long *)(param_1 + 0x40);
        uVar2 = (ulong)*(uint *)(lVar3 + 8);
      }
    }
    FUN_10003b120((long *)(param_1 + 0x40));
    QMutex::unlock();
    iVar1 = *(int *)(local_40 + 8);
    iVar4 = *(int *)(local_40 + 0xc) - iVar1;
    if (iVar1 < *(int *)(local_40 + 0xc)) {
      lVar3 = 0;
      while( true ) {
        FUN_1004c07d0(param_1 + 0x10,*(undefined8 *)(local_40 + (iVar1 + lVar3) * 8 + 0x10),
                      0xf0000020);
        lVar3 = lVar3 + 1;
        if (iVar4 == (int)lVar3) break;
        iVar1 = *(int *)(local_40 + 8);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QListData::dispose(local_40);
    }
  }
  return;
}

