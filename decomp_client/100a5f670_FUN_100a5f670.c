
undefined8 * FUN_100a5f670(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_40;
  undefined1 local_32;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = _TISCreateInputSourceList(0,0);
  if (lVar1 != 0) {
    lVar2 = _CFArrayGetCount(lVar1);
    if (0 < lVar2) {
      lVar4 = 0;
      do {
        uVar3 = _CFArrayGetValueAtIndex(lVar1,lVar4);
        FUN_100a61530(&local_40,uVar3);
        FUN_1000ee480(param_1,&local_40);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_100a5f711;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100a5f711:
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar2);
    }
    _CFRelease(lVar1);
  }
  return param_1;
}

