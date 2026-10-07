
void FUN_1002e40c0(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getSharedCamera();
  cVar2 = CVmSharedCamera::isEnabled();
  if (cVar2 != '\0') {
    if (DAT_101116b58 == 2) {
      FUN_100256dc0(&local_38,0,0);
      if (*(int *)(local_38 + 8) < *(int *)(local_38 + 0xc)) {
        lVar3 = 0;
        do {
          FUN_1000915f0(DAT_1011c3698);
          QString::toUtf8();
          FUN_1002bacc0(0,7,local_40 + *(long *)(local_40 + 0x10));
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_29 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_29) goto LAB_1002e41a4;
            }
            QArrayData::deallocate(local_40,1,8);
          }
LAB_1002e41a4:
          lVar3 = lVar3 + 1;
        } while (lVar3 < (long)*(int *)(local_38 + 0xc) - (long)*(int *)(local_38 + 8));
      }
      if (*(int *)local_38 != -1) {
        if (*(int *)local_38 != 0) {
          LOCK();
          *(int *)local_38 = *(int *)local_38 + -1;
          UNLOCK();
          if (*(int *)local_38 != 0) {
            return;
          }
          local_29 = 0;
        }
        iVar1 = *(int *)(local_38 + 0xc);
        if (iVar1 != *(int *)(local_38 + 8)) {
          lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
          pDVar4 = local_38 + (long)iVar1 * 8 + 8;
          do {
            pQVar5 = *(QArrayData **)pDVar4;
            if (*(int *)pQVar5 == 0) {
LAB_1002e4230:
              QArrayData::deallocate(pQVar5,2,8);
            }
            else if (*(int *)pQVar5 != -1) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_29 = *(int *)pQVar5 != 0;
              UNLOCK();
              if (!(bool)local_29) {
                pQVar5 = *(QArrayData **)pDVar4;
                goto LAB_1002e4230;
              }
            }
            pDVar4 = pDVar4 + -8;
            lVar3 = lVar3 + 8;
          } while (lVar3 != 0);
        }
        QListData::dispose(local_38);
      }
    }
    else if (DAT_101116b58 == 0) {
      FUN_1000915f0(DAT_1011c3698);
      FUN_1002bacc0(0,7,"test-1");
      FUN_1000915f0(DAT_1011c3698);
      FUN_1002bacc0(0,7,"test-2");
      return;
    }
  }
  return;
}

