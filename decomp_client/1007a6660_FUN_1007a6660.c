
void FUN_1007a6660(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  QByteArray::QByteArray((QByteArray *)&local_38,"pressedOpacity",-1);
  FUN_1007a67b0(0,DAT_100e11208,param_1,uVar1,(QByteArray *)&local_38,200,param_1 + 200,param_2);
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

