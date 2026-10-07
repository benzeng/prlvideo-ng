
int FUN_1004880c0(long param_1,long *param_2,int param_3,QString *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  bool bVar8;
  uint local_4c;
  QString local_48;
  long local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QMutex::lock();
  bVar6 = true;
  iVar3 = -0x7ffcbfff;
  uVar5 = local_4c;
  if (0x10000 < *(uint *)(param_1 + 0x40)) {
    lVar4 = 0;
    if (*param_2 != 0) {
      lVar4 = *(long *)(*param_2 + 0x10);
    }
    lVar4 = FUN_10047e030(param_1,lVar4 + 0x10,&local_40);
    iVar3 = -0x7ffcbffe;
    uVar5 = local_4c;
    if (lVar4 != 0) {
      if (*(int *)(param_4->field0_0x0 + 4) != 0) {
        QString::operator=((QString *)(lVar4 + 8),param_4);
      }
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      QString::operator=(&local_48,(QString *)(local_40 + 0x10));
      bVar6 = false;
      QMutex::unlock();
      local_4c = 0;
      if ((param_3 == 3) || (param_3 == 6)) {
        lVar4 = *(long *)(*param_2 + 0x10);
        local_4c = *(uint *)(lVar4 + 0x8c);
      }
      else {
        lVar4 = *(long *)(*param_2 + 0x10);
      }
      lVar7 = 0;
      if (*(long *)(lVar4 + 0x80) != 0) {
        lVar7 = *(long *)(*(long *)(lVar4 + 0x80) + 0x10);
      }
      do {
        uVar2 = local_4c;
        iVar3 = FUN_100487ab0(param_1,lVar7,&local_4c,param_3,uVar1,&local_48);
        uVar5 = uVar2 - local_4c;
        if (iVar3 < 0) break;
        lVar7 = lVar7 + (ulong)local_4c;
        bVar8 = uVar2 != local_4c;
        local_4c = uVar5;
      } while (bVar8);
    }
  }
  local_4c = uVar5;
  if (bVar6) {
    QMutex::unlock();
  }
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return iVar3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return iVar3;
}

