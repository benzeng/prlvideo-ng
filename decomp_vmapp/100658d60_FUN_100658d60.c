
void FUN_100658d60(long param_1,long param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_48;
  void *local_40;
  undefined1 local_31;
  
  if (param_2 != 0) {
    if (param_3 != (char *)0x0) {
      pcVar3 = _strdup(param_3);
      *(char **)(param_1 + 0x10) = pcVar3;
    }
    FUN_100038db0(param_1 + 8);
    iVar1 = _scandir_INODE64(param_2,&local_40,0,PTR__alphasort_INODE64_100ba2350);
    if (-1 < iVar1) {
      if (0 < iVar1) {
        lVar6 = 0;
        do {
          pcVar3 = (char *)(*(long *)((long)local_40 + lVar6 * 8) + 0x15);
          iVar2 = FUN_100658eb0(param_1,pcVar3);
          if (iVar2 != 0) {
            sVar4 = _strlen(pcVar3);
            pQVar5 = (QArrayData *)QString::fromAscii_helper(pcVar3,(int)sVar4);
            local_48 = pQVar5;
            FUN_10000c490(param_1 + 8,&local_48);
            if (*(int *)pQVar5 != -1) {
              if (*(int *)pQVar5 != 0) {
                LOCK();
                *(int *)pQVar5 = *(int *)pQVar5 + -1;
                local_31 = *(int *)pQVar5 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100658e3b;
              }
              QArrayData::deallocate(pQVar5,2,8);
            }
          }
LAB_100658e3b:
          _free(*(void **)((long)local_40 + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar1);
      }
      _free(local_40);
    }
    _free(*(void **)(param_1 + 0x10));
  }
  return;
}

