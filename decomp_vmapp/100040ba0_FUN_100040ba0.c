
void FUN_100040ba0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  if (param_2 != 0) {
    lVar1 = _CFArrayGetTypeID();
    lVar2 = _CFGetTypeID(param_2);
    if ((lVar1 == lVar2) && (lVar1 = _CFArrayGetCount(param_2), 0 < lVar1)) {
      lVar2 = 0;
      do {
        lVar3 = _CFArrayGetValueAtIndex(param_2,lVar2);
        if (lVar3 != 0) {
          local_40 = (QArrayData *)QString::fromAscii_helper("CFBundleTypeExtensions",0x16);
          FUN_100040f00(lVar3,&local_40);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_32 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_100040cb7;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_100040cb7:
          FUN_100040aa0();
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < lVar1);
    }
  }
  return;
}

