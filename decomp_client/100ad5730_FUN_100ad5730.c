
void FUN_100ad5730(long param_1,int *param_2,uint param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  QByteArray::QByteArray((QByteArray *)&local_38,0x50,'\0');
  if ((1 < *(uint *)local_38) || (*(long *)(local_38 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_38,*(uint *)(local_38 + 4) + 1,*(uint *)(local_38 + 8) >> 0x1f);
  }
  lVar1 = *(long *)(local_38 + 0x10);
  *(undefined4 *)(local_38 + lVar1) = 7;
  *(uint *)(local_38 + lVar1 + 0x28) = param_3 & 0xff ^ 1;
  *(int *)(local_38 + lVar1 + 8) = *(int *)(*param_4 + 4) + 0x50;
  QByteArray::append((QByteArray *)&local_38);
  if (param_2[1] == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
    if (*param_2 == 0) {
      FUN_100ace620(uVar2,&local_38);
      goto LAB_100ad57db;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
  }
  FUN_100ace5e0(uVar2,*(undefined8 *)param_2,&local_38);
LAB_100ad57db:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,1,8);
  }
  return;
}

