
void FUN_100ad5870(long param_1,uint param_2)

{
  long lVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  QByteArray::QByteArray((QByteArray *)&local_28,0x50,'\0');
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_28 + 0x10);
  *(undefined4 *)(local_28 + lVar1) = 9;
  *(uint *)(local_28 + lVar1 + 0x28) = param_2 & 0xff;
  *(undefined4 *)(local_28 + lVar1 + 8) = 0x50;
  FUN_100ace620(*(undefined8 *)(param_1 + 0xf8),&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

