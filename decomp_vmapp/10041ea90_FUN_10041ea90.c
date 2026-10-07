
undefined8 FUN_10041ea90(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  QArrayData *local_38;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  *(long *)(param_1 + 0x640) = param_2;
  puVar2 = PTR_shared_null_100ba20d0;
  local_38 = (QArrayData *)PTR_shared_null_100ba20d0;
  uVar3 = *(uint *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18 + (ulong)uVar3 * 4) = *(undefined4 *)(param_2 + 0x14);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),(ulong)uVar3);
  FUN_100417920(param_1,param_2);
  iVar4 = *(int *)(param_1 + 0x98);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))();
    iVar4 = *(int *)(param_1 + 0x18 + (ulong)uVar3 * 4);
  }
  if (iVar4 == 3) {
    QByteArray::operator=((QByteArray *)&local_38,"T05");
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      QByteArray::append((char *)&local_38);
    }
    else if (cVar1 == '\x03') {
      QByteArray::append((char *)&local_38);
    }
    else if (cVar1 == '\x02') {
      QByteArray::append((char *)&local_38);
    }
    if ((byte)(*(char *)(param_2 + 0x18) - 1U) < 3) {
      FUN_10041e580();
    }
    QByteArray::append((char *)&local_38);
    FUN_10041d140();
    FUN_10041e290();
    FUN_10041e290();
    FUN_10041e290();
  }
  else {
    QByteArray::operator=((QByteArray *)&local_38,"T05");
    cVar1 = *(char *)(param_2 + 0x18);
    if (cVar1 == '\x01') {
      QByteArray::append((char *)&local_38);
    }
    else if (cVar1 == '\x03') {
      QByteArray::append((char *)&local_38);
    }
    else if (cVar1 == '\x02') {
      QByteArray::append((char *)&local_38);
    }
    if ((byte)(*(char *)(param_2 + 0x18) - 1U) < 3) {
      FUN_10041e440();
    }
    QByteArray::append((char *)&local_38);
    FUN_10041d140();
    FUN_10041e0e0();
    FUN_10041e0e0();
    FUN_10041e0e0();
  }
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  FUN_10041ce80(param_1,&local_38);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_2a = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10041ed2a;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10041ed2a:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return 1;
}

