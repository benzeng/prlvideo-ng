
undefined8 FUN_10041e880(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  size_t sVar5;
  QArrayData *pQVar6;
  QArrayData *local_40;
  undefined1 local_32;
  undefined1 local_31;
  
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  *(long *)(param_1 + 0x640) = param_2;
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  plVar4 = (long *)FUN_10041d810(param_1);
  if (plVar4 == (long *)0x0) goto LAB_10041e9ed;
  QByteArray::replace((char)plVar4,'\0');
  uVar1 = *(uint *)(param_2 + 0x1c);
  if ((uVar1 & 2) == 0) {
    QByteArray::append((char *)&local_40);
  }
  else {
    sVar5 = _strlen((char *)(*plVar4 + *(long *)(*plVar4 + 0x10)));
    QByteArray::resize((int)&local_40);
    lVar2 = *plVar4;
    lVar3 = *(long *)(lVar2 + 0x10);
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    FUN_10041fb90(lVar2 + lVar3,local_40 + *(long *)(local_40 + 0x10),(int)sVar5 + 1);
    QByteArray::prepend((char *)&local_40);
  }
  if (*(void **)(param_1 + 0x640) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x640));
    *(undefined8 *)(param_1 + 0x640) = 0;
  }
  pQVar6 = (QArrayData *)*plVar4;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10041e9c5;
      pQVar6 = (QArrayData *)*plVar4;
    }
    QArrayData::deallocate(pQVar6,1,8);
  }
LAB_10041e9c5:
  operator_delete(plVar4);
  if ((uVar1 & 1) == 0) {
    FUN_100419170(param_1,&local_40);
  }
  else {
    FUN_10041ce80(param_1,&local_40);
  }
LAB_10041e9ed:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 1;
      }
      local_32 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return 1;
}

