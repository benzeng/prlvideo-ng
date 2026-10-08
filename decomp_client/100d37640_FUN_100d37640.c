
undefined1 FUN_100d37640(long *param_1,QString *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  char *pcVar12;
  QString local_30;
  undefined1 local_21;
  
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 4) == 6) {
    lVar7 = *(long *)(lVar6 + 0x10);
    if ((byte)(*(char *)(lVar6 + lVar7) - 0x30U) < 10) {
      cVar1 = *(char *)(lVar7 + 1 + lVar6);
      if ((byte)(cVar1 - 0x30U) < 10) {
        cVar2 = *(char *)(lVar7 + 2 + lVar6);
        if ((byte)(cVar2 - 0x30U) < 10) {
          cVar3 = *(char *)(lVar7 + 3 + lVar6);
          if ((byte)(cVar3 - 0x30U) < 10) {
            cVar4 = *(char *)(lVar7 + 4 + lVar6);
            if ((byte)(cVar4 - 0x30U) < 10) {
              cVar5 = *(char *)(lVar7 + 5 + lVar6);
              if ((byte)(cVar5 - 0x30U) < 10) {
                if (*(char *)(lVar7 + 1 + lVar6) == cVar2) {
                  bVar9 = *(char *)(lVar6 + lVar7) == cVar1 | 2;
                }
                else {
                  bVar9 = 1;
                }
                if (bVar9 == 3) {
                  uVar10 = 0;
                }
                else {
                  if (*(char *)(lVar7 + 2 + lVar6) == cVar3) {
                    bVar9 = bVar9 + 1;
                  }
                  else {
                    bVar9 = 1;
                  }
                  if (bVar9 < 3) {
                    cVar1 = *(char *)(lVar7 + 3 + lVar6);
                    if ((cVar1 == cVar4) && (2 < (byte)(bVar9 + 1))) {
                      uVar10 = 0;
                    }
                    else if ((*(char *)(lVar7 + 4 + lVar6) == cVar5) && (cVar1 == cVar4)) {
                      uVar10 = 0;
                    }
                    else {
                      pcVar12 = (char *)(*(long *)(lVar6 + 0x10) + lVar6);
                      iVar11 = *(int *)(lVar6 + 4);
                      if ((pcVar12 != (char *)0x0) && (iVar11 == -1)) {
                        sVar8 = _strlen(pcVar12);
                        iVar11 = (int)sVar8;
                      }
                      local_30.field0_0x0 =
                           (QTypedArrayData<unsigned_short> *)
                           QString::fromLatin1_helper(pcVar12,iVar11);
                      QString::operator=(param_2,&local_30);
                      uVar10 = 1;
                      if (*(int *)local_30.field0_0x0 != -1) {
                        if (*(int *)local_30.field0_0x0 != 0) {
                          LOCK();
                          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
                          UNLOCK();
                          if (*(int *)local_30.field0_0x0 != 0) {
                            return 1;
                          }
                          local_21 = 0;
                        }
                        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
                      }
                    }
                  }
                  else {
                    uVar10 = 0;
                  }
                }
              }
              else {
                uVar10 = 0;
              }
            }
            else {
              uVar10 = 0;
            }
          }
          else {
            uVar10 = 0;
          }
        }
        else {
          uVar10 = 0;
        }
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

