
QDataStream * FUN_100713da0(QDataStream *param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  char cVar3;
  Data *pDVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int local_3c;
  uint local_38;
  undefined1 local_31;
  
  FUN_100274820(param_2);
  QDataStream::operator>>(param_1,(int *)&local_38);
  puVar1 = (uint *)*param_2;
  if ((int)puVar1[1] < (int)local_38) {
    if (*puVar1 < 2) {
      QListData::realloc((int)param_2);
    }
    else {
      uVar7 = puVar1[2];
      pDVar4 = (Data *)QListData::detach((int)param_2);
      lVar2 = *param_2;
      lVar5 = (long)*(int *)(lVar2 + 8);
      if ((puVar1 + (long)(int)uVar7 * 2 != (uint *)(lVar2 + lVar5 * 8)) &&
         (lVar6 = *(int *)(lVar2 + 0xc) - lVar5, lVar6 != 0 && lVar5 <= *(int *)(lVar2 + 0xc))) {
        _memcpy((void *)(lVar2 + 0x10 + lVar5 * 8),puVar1 + (long)(int)uVar7 * 2 + 4,lVar6 * 8);
      }
      if (*(int *)pDVar4 != -1) {
        if (*(int *)pDVar4 != 0) {
          LOCK();
          *(int *)pDVar4 = *(int *)pDVar4 + -1;
          local_31 = *(int *)pDVar4 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100713e48;
        }
        QListData::dispose(pDVar4);
      }
    }
  }
LAB_100713e48:
  if (local_38 != 0) {
    uVar7 = 1;
    do {
      QDataStream::operator>>(param_1,&local_3c);
      FUN_100129840(param_2,&local_3c);
      cVar3 = QDataStream::atEnd();
      if (local_38 <= uVar7) {
        return param_1;
      }
      uVar7 = uVar7 + 1;
    } while (cVar3 != '\x01');
  }
  return param_1;
}

