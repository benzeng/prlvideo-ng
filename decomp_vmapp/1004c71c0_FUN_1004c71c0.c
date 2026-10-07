
void FUN_1004c71c0(long param_1,int param_2)

{
  undefined8 uVar1;
  QArrayData *local_20;
  undefined1 local_11;
  
  if (param_2 == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    local_20 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
    FUN_1004ec530(uVar1,&local_20);
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,2,8);
    }
  }
  return;
}

