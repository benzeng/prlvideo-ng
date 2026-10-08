
void FUN_100d20950(void)

{
  QArrayData *pQVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    pQVar1 = *(QArrayData **)((long)&DAT_102318828 + lVar2);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100d209aa;
        pQVar1 = *(QArrayData **)((long)&DAT_102318828 + lVar2);
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_100d209aa:
    pQVar1 = *(QArrayData **)((long)&DAT_102318820 + lVar2);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100d209dc;
        pQVar1 = *(QArrayData **)((long)&DAT_102318820 + lVar2);
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_100d209dc:
    lVar2 = lVar2 + -0x10;
    if (lVar2 == -0x50) {
      return;
    }
  } while( true );
}

