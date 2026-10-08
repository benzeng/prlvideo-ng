
undefined4 FUN_10098dac0(long *param_1,long *param_2,QByteArray *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  QArrayData *local_38;
  char *local_30;
  int local_28;
  undefined1 local_21;
  
  local_28 = 0;
  local_30 = (char *)0x0;
  lVar1 = *param_2;
  lVar2 = *param_1;
  uVar3 = _SecKeychainFindGenericPassword
                    (0,*(undefined4 *)(lVar1 + 4),lVar1 + *(long *)(lVar1 + 0x10),
                     *(undefined4 *)(lVar2 + 4),lVar2 + *(long *)(lVar2 + 0x10),&local_28,&local_30,
                     param_4);
  if (param_3 != (QByteArray *)0x0) {
    QByteArray::QByteArray((QByteArray *)&local_38,local_30,local_28);
    QByteArray::operator=(param_3,(QByteArray *)&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10098db64;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_10098db64:
  _SecKeychainItemFreeContent(0,local_30);
  return uVar3;
}

