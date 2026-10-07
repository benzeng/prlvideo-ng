
undefined8 FUN_100416e70(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar1 = *(long *)(param_1 + 0x640);
  uVar2 = *(uint *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x18 + (ulong)uVar2 * 4) = *(undefined4 *)(lVar1 + 0x14);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),(ulong)uVar2);
  FUN_100417920(param_1,lVar1);
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    iVar3 = *(int *)(param_1 + 0x18 + (ulong)uVar2 * 4);
  }
  if (iVar3 == 3) {
    QByteArray::operator=((QByteArray *)&local_30,"T05thread:");
    FUN_10041d140();
    FUN_10041e290();
    FUN_10041e290();
    FUN_10041e290();
  }
  else {
    QByteArray::operator=((QByteArray *)&local_30,"T05thread:");
    FUN_10041d140();
    FUN_10041e0e0();
    FUN_10041e0e0();
    FUN_10041e0e0();
  }
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_100419170(param_1,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,1,8);
  }
  return 1;
}

