
QString * FUN_10053adc0(QString *param_1,long param_2,long *param_3)

{
  QArrayData *pQVar1;
  int iVar2;
  long lVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  QArrayData *pQVar5;
  QArrayData *pQVar6;
  char cVar7;
  short sVar8;
  ulong uVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  QArrayData *pQVar13;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  QMutex::lock();
  if (((*(int *)(*param_3 + 4) != 0) && (*(int *)(*(long *)(param_2 + 0x58) + 4) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x48) + 4) != 0)) {
    cVar7 = QString::startsWith(param_3,(long *)(param_2 + 0x48),1);
    if (cVar7 != '\0') {
      iVar2 = *(int *)(*(long *)(param_2 + 0x48) + 4);
      lVar3 = *param_3;
      if (((*(int *)(lVar3 + 4) <= iVar2) ||
          (sVar8 = *(short *)(lVar3 + *(long *)(lVar3 + 0x10) + (long)iVar2 * 2), sVar8 == 0x2f)) ||
         (sVar8 == 0x5c)) {
        QString::mid((int)&local_40,(int)param_3);
        sVar8 = QDir::separator();
        if (sVar8 == 0x2f) {
          if ((1 < *(uint *)local_40.field0_0x0) || (*(long *)(local_40.field0_0x0 + 0x10) != 0x18))
          {
            QString::reallocData
                      ((uint)&local_40,(bool)((char)*(uint *)(local_40.field0_0x0 + 4) + '\x01'));
          }
          uVar9 = (ulong)(int)*(uint *)(local_40.field0_0x0 + 4);
          if ((uVar9 & 0x7fffffffffffffff) != 0) {
            pQVar13 = (QArrayData *)(local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10));
            pQVar1 = pQVar13 + uVar9 * 2;
            pQVar10 = (QArrayData *)
                      (local_40.field0_0x0 + *(long *)(local_40.field0_0x0 + 0x10) + uVar9 * 2);
            do {
              if (*(short *)pQVar13 == 0x2f) {
                pQVar13 = pQVar13 + 2;
              }
              else {
                pQVar12 = pQVar1;
                pQVar11 = pQVar13;
                if (pQVar13 != pQVar1) {
                  do {
                    pQVar11 = pQVar11 + 2;
                    pQVar12 = pQVar1;
                    if (pQVar10 == pQVar11) break;
                    pQVar12 = pQVar11;
                  } while (*(short *)pQVar11 != 0x2f);
                }
                if ((long)pQVar12 - (long)pQVar13 != 0) {
                  sVar8 = FUN_100541f30(*(short *)pQVar13);
                  *(short *)pQVar13 = sVar8;
                  pQVar6 = pQVar13 + 2;
                  pQVar11 = pQVar13;
                  while (pQVar5 = pQVar6, pQVar5 != pQVar12) {
                    sVar8 = FUN_100541f30(*(short *)(pQVar11 + 2));
                    *(short *)(pQVar11 + 2) = sVar8;
                    pQVar6 = pQVar11 + 4;
                    pQVar11 = pQVar5;
                  }
                  if (*(short *)(pQVar12 + -2) == 0x2e) {
                    if ((2 < (ulong)((long)pQVar12 - (long)pQVar13 >> 1)) ||
                       (sVar8 = *(short *)pQVar13, pQVar13 = pQVar12, sVar8 != 0x2e)) {
                      *(short *)(pQVar12 + -2) = -0xfd7;
                      pQVar13 = pQVar12;
                    }
                  }
                  else {
                    pQVar13 = pQVar12;
                    if (*(short *)(pQVar12 + -2) == 0x20) {
                      *(short *)(pQVar12 + -2) = -0xfd8;
                    }
                  }
                }
              }
            } while (pQVar13 != pQVar1);
          }
          local_48 = (QArrayData *)QString::fromAscii_helper("/",1);
          local_50 = (QArrayData *)QString::fromAscii_helper("\\",1);
          QString::replace(&local_40,&local_48,&local_50,1);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10053b077;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_10053b077:
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10053b0a7;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_10053b0a7:
          QString::normalized(&local_58,&local_40,1,0);
          QString::operator=(&local_40,&local_58);
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10053b0f8;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
        }
LAB_10053b0f8:
        pQVar4 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x58);
        param_1->field0_0x0 = pQVar4;
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_31 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        QString::append(param_1);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10053ae94;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
        goto LAB_10053ae94;
      }
    }
  }
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
LAB_10053ae94:
  QMutex::unlock();
  return param_1;
}

