
undefined8 FUN_1004a5e40(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar3 = FUN_1004a5f70(*(undefined8 *)(param_1 + 0x18),param_2,0x10,&local_28);
  uVar4 = 0xf0000003;
  if (cVar3 != '\0') {
    if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f)
      ;
    }
    lVar2 = *(long *)(local_28 + 0x10);
    uVar1 = *(uint *)(local_28 + 4);
    *(undefined4 *)(local_28 + lVar2) = 0x20000;
    *(undefined4 *)(local_28 + lVar2 + 4) = 10;
    *(undefined4 *)(local_28 + lVar2 + 8) = 0;
    *(uint *)(local_28 + lVar2 + 0xc) = uVar1;
    uVar4 = 0;
    FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,local_28 + lVar2,uVar1,
                  &DAT_1011ccb98,0);
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar4;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar4;
}

