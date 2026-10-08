
void FUN_100ad1890(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  QArrayData *local_60 [2];
  undefined4 local_50;
  int iStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_100adc090(param_1 + 0x100,*(undefined4 *)(param_2 + 8),0);
  local_60[0] = (QArrayData *)PTR_shared_null_1021e1288;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (ulong)*(uint *)(param_1 + 0x910) << 0x20;
  lStack_70 = (ulong)CONCAT22(*(undefined2 *)(param_1 + 0x9b4),*(undefined2 *)(param_1 + 0x9b0)) <<
              0x20;
  if (*(int *)(PTR_shared_null_1021e1288 + 4) == 0) {
    FUN_100ad94b0(local_60,&local_88);
  }
  if ((1 < *(uint *)local_60[0]) || (*(long *)(local_60[0] + 0x10) != 0x18)) {
    QByteArray::reallocData
              (local_60,*(uint *)(local_60[0] + 4) + 1,*(uint *)(local_60[0] + 8) >> 0x1f);
  }
  lVar2 = *(long *)(local_60[0] + 0x10);
  if (*(int *)(local_60[0] + lVar2 + 8) == 0) {
    uStack_30 = 0;
    local_38 = 0x10;
    *(int *)(local_60[0] + lVar2) = *(int *)(local_60[0] + lVar2) + 0x10;
    *(int *)(local_60[0] + lVar2 + 8) = *(int *)(local_60[0] + lVar2 + 8) + 0x10;
    QByteArray::append((char *)local_60,(int)&local_38);
  }
  _local_50 = CONCAT44(*(int *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x4c));
  local_44 = *(undefined4 *)(param_2 + 0x50);
  local_48 = *(int *)(param_2 + 0x70) * 0x10 + 0x44 +
             (*(int *)(param_2 + 0x90) + *(int *)(param_2 + 0x80)) * 2;
  local_40 = 2;
  if (*(char *)(param_2 + 0x57) != '\0') {
    local_40 = 6;
  }
  QByteArray::append((char *)local_60,(int)&local_50);
  QByteArray::append((char *)local_60,(int)param_2 + 8);
  QByteArray::append((char *)local_60,(int)*(undefined8 *)(param_2 + 0x68));
  QByteArray::append((char *)local_60,(int)*(undefined8 *)(param_2 + 0x78));
  QByteArray::append((char *)local_60,(int)*(undefined8 *)(param_2 + 0x88));
  if ((1 < *(uint *)local_60[0]) || (*(long *)(local_60[0] + 0x10) != 0x18)) {
    QByteArray::reallocData
              (local_60,*(uint *)(local_60[0] + 4) + 1,*(uint *)(local_60[0] + 8) >> 0x1f);
  }
  lVar2 = *(long *)(local_60[0] + 0x10);
  uVar1 = *(uint *)(local_60[0] + lVar2 + 4);
  *(int *)(local_60[0] + lVar2) = *(int *)(local_60[0] + lVar2) + local_48;
  *(int *)(local_60[0] + lVar2 + 8) = *(int *)(local_60[0] + lVar2 + 8) + local_48;
  *(int *)(local_60[0] + (ulong)uVar1 + lVar2 + 0x20) =
       *(int *)(local_60[0] + (ulong)uVar1 + lVar2 + 0x20) + local_48;
  *(int *)(local_60[0] + (ulong)uVar1 + lVar2 + 0x24) =
       *(int *)(local_60[0] + (ulong)uVar1 + lVar2 + 0x24) + 1;
  FUN_100ace560(*(undefined8 *)(param_1 + 0xf8),*param_3,local_60);
  if (*(int *)local_60[0] != -1) {
    if (*(int *)local_60[0] != 0) {
      LOCK();
      *(int *)local_60[0] = *(int *)local_60[0] + -1;
      UNLOCK();
      _local_50 = CONCAT71(stack0xffffffffffffffb1,*(int *)local_60[0] != 0);
      if (*(int *)local_60[0] != 0) {
        return;
      }
    }
    QArrayData::deallocate(local_60[0],1,8);
  }
  return;
}

