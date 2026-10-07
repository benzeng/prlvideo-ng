
undefined8 FUN_10041b580(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  QArrayData *local_38;
  undefined1 local_2a;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 4) < 3) {
    return 0;
  }
  if (((*(int *)(lVar1 + 4) < 2) ||
      (bVar2 = *(char *)(*(long *)(lVar1 + 0x10) + 1 + lVar1) + 0xb9, 0x2c < bVar2)) ||
     ((0x104110000241U >> ((ulong)bVar2 & 0x3f) & 1) == 0)) {
    FUN_10041a500(param_1);
    return 1;
  }
  QByteArray::right((int)&local_38);
  uVar7 = 0;
  iVar4 = QByteArray::toInt((bool *)&local_38,0);
  iVar5 = 1;
  if (iVar4 != 0) {
    if (iVar4 == -1) {
      uVar6 = 1;
      FUN_100416cc0(param_1);
      goto LAB_10041b70a;
    }
    uVar6 = 0;
    if (iVar4 < 1) goto LAB_10041b70a;
    uVar7 = iVar4 - 1;
    iVar5 = iVar4;
  }
  uVar6 = 0;
  if (iVar5 <= *(int *)(param_1 + 0x9c)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),uVar7);
    iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if (iVar5 == 1) {
      QMutex::lock();
      iVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x50))();
      cVar3 = '\0';
      if (iVar5 != 0) {
        cVar3 = QWaitCondition::wait((QMutex *)(param_1 + 0x650),param_1 + 0x648);
      }
      QMutex::unlock();
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + 0x18 + (ulong)uVar7 * 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x14);
        (**(code **)(**(long **)(param_1 + 0x10) + 0x38))(*(long **)(param_1 + 0x10),uVar7);
        if (*(void **)(param_1 + 0x640) != (void *)0x0) {
          _free(*(void **)(param_1 + 0x640));
          *(undefined8 *)(param_1 + 0x640) = 0;
        }
      }
      uVar6 = 1;
      FUN_100416cc0(param_1);
    }
    else {
      uVar6 = 1;
      FUN_100416cc0(param_1);
    }
  }
LAB_10041b70a:
  if (*(int *)local_38 == -1) {
    return uVar6;
  }
  if (*(int *)local_38 != 0) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + -1;
    UNLOCK();
    if (*(int *)local_38 != 0) {
      return uVar6;
    }
    local_2a = 0;
  }
  QArrayData::deallocate(local_38,1,8);
  return uVar6;
}

