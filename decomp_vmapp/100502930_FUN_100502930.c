
QListData * FUN_100502930(QListData *param_1,long *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  Data *pDVar4;
  undefined8 uVar5;
  Data *this;
  long lVar6;
  Data *local_38;
  undefined1 local_29;
  
  puVar2 = (uint *)*param_2;
  if (puVar2[3] != puVar2[2]) {
    puVar3 = *(uint **)param_1;
    if (puVar3[3] == puVar3[2]) {
      if (puVar3 != puVar2) {
        FUN_10005a020(&local_38,param_2);
        pDVar4 = *(Data **)param_1;
        *(Data **)param_1 = local_38;
        if (*(int *)pDVar4 != -1) {
          if (*(int *)pDVar4 != 0) {
            LOCK();
            *(int *)pDVar4 = *(int *)pDVar4 + -1;
            UNLOCK();
            if (*(int *)pDVar4 != 0) {
              return param_1;
            }
            local_29 = 0;
          }
          iVar1 = *(int *)(pDVar4 + 0xc);
          local_38 = pDVar4;
          if (iVar1 != *(int *)(pDVar4 + 8)) {
            lVar6 = (long)*(int *)(pDVar4 + 8) * 8 + (long)iVar1 * -8;
            this = pDVar4 + (long)iVar1 * 8 + 8;
            do {
              QFileInfo::~QFileInfo((QFileInfo *)this);
              this = this + -8;
              lVar6 = lVar6 + 8;
            } while (lVar6 != 0);
          }
          QListData::dispose(pDVar4);
        }
      }
    }
    else {
      if (*puVar3 < 2) {
        uVar5 = QListData::append(param_1);
      }
      else {
        uVar5 = FUN_1004df7d0(param_1,0x7fffffff);
      }
      FUN_10004e270(param_1,uVar5,
                    *(long *)param_1 + 0x10 + (long)*(int *)(*(long *)param_1 + 0xc) * 8,
                    *param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
    }
  }
  return param_1;
}

