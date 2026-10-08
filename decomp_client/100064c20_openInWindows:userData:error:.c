
/* Function Stack Size: 0x28 bytes */

void CServicesProvider::openInWindows_userData_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  int iVar1;
  Data *pDVar2;
  char cVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  Data *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  cVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (param_1,PTR_s_convertPastepoardDataToPaths_pat_102269b40,param_3,&local_38);
  if ((cVar3 == '\x01') && (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8))) {
    FUN_100a39820(1,&local_38);
  }
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2c = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar6 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100064ce0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_2b = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_2b) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100064ce0;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

