
void FUN_1005aa0c0(void)

{
  QArrayData *pQVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    pQVar1 = *(QArrayData **)((long)&DAT_10111e018 + lVar2);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1005aa11f;
        pQVar1 = *(QArrayData **)((long)&DAT_10111e018 + lVar2);
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1005aa11f:
    lVar2 = lVar2 + -8;
    if (lVar2 == -0x60) {
      return;
    }
  } while( true );
}

