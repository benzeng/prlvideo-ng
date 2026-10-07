
void FUN_1002c7230(void)

{
  QArrayData *pQVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    FUN_100013180(&DAT_1011c5608 + lVar2);
    pQVar1 = *(QArrayData **)((long)&DAT_1011c5600 + lVar2);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1002c72a5;
        pQVar1 = *(QArrayData **)((long)&DAT_1011c5600 + lVar2);
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1002c72a5:
    pQVar1 = *(QArrayData **)((long)&DAT_1011c55f8 + lVar2);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1002c72dd;
        pQVar1 = *(QArrayData **)((long)&DAT_1011c55f8 + lVar2);
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
LAB_1002c72dd:
    lVar2 = lVar2 + -0x30;
    if (lVar2 == -0xb70) {
      return;
    }
  } while( true );
}

