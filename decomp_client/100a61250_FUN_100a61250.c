
undefined8 * FUN_100a61250(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  QArrayData *local_40;
  undefined1 local_32;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar2 = _TISCreateInputSourceList(0,0);
  if (lVar2 != 0) {
    lVar3 = _CFArrayGetCount(lVar2);
    if (0 < lVar3) {
      uVar1 = *(undefined8 *)PTR__kTISPropertyInputSourceID_1021e1bc8;
      lVar6 = 0;
      do {
        uVar4 = _CFArrayGetValueAtIndex(lVar2,lVar6);
        lVar5 = _TISGetInputSourceProperty(uVar4,uVar1);
        if (lVar5 == 0) {
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("","LayoutSyncCommon",1,"Failed to get input source Id for %p",uVar4);
          }
          local_40 = (QArrayData *)PTR_shared_null_1021e1288;
        }
        else {
          FUN_100a613e0(&local_40,lVar5);
        }
        FUN_1000ee480(param_1,&local_40);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_100a61358;
          }
          QArrayData::deallocate(local_40,1,8);
        }
LAB_100a61358:
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar3);
    }
    _CFRelease(lVar2);
  }
  return param_1;
}

