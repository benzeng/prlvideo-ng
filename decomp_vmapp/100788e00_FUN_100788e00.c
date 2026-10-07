
undefined8 FUN_100788e00(void)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_12;
  
  QString::toUtf8();
  if ((1 < *(uint *)local_20) || (*(long *)(local_20 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_20,*(uint *)(local_20 + 4) + 1,*(uint *)(local_20 + 8) >> 0x1f);
  }
  uVar1 = _CFStringCreateWithBytes
                    (*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,
                     local_20 + *(long *)(local_20 + 0x10),(long)(int)*(uint *)(local_20 + 4),
                     0x8000100,0);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,1,8);
  }
  return uVar1;
}

