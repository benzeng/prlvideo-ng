
void FUN_10046b6f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  lVar1 = FUN_100458c00();
  if ((lVar1 != 0) &&
     (lVar1 = ___dynamic_cast(lVar1,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1648,0), lVar1 != 0)) {
    uVar2 = FUN_10044b340(param_1);
    uVar2 = FUN_1003b0b00(uVar2);
    FUN_100459010(&local_38,param_1);
    FUN_1003ad9a0(uVar2,&local_38,lVar1);
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
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}

