
void FUN_10005b110(undefined8 *param_1,QString *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  long lVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  short sVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  ulong uVar7;
  QTypedArrayData<unsigned_short> *pQVar8;
  QTypedArrayData<unsigned_short> *pQVar9;
  QTypedArrayData<unsigned_short> *pQVar10;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar6 = param_2->field0_0x0;
  if ((1 < *(uint *)pQVar6) || (*(long *)(pQVar6 + 0x10) != 0x18)) {
    QString::reallocData((uint)param_2,(bool)((char)*(uint *)(pQVar6 + 4) + '\x01'));
    pQVar6 = param_2->field0_0x0;
  }
  uVar7 = (ulong)(int)*(uint *)(pQVar6 + 4);
  if ((uVar7 & 0x7fffffffffffffff) != 0) {
    lVar2 = *(long *)(pQVar6 + 0x10);
    pQVar10 = pQVar6 + lVar2;
    pQVar1 = pQVar10 + uVar7 * 2;
    do {
      if (*(short *)pQVar10 == 0x2f) {
        pQVar10 = pQVar10 + 2;
      }
      else {
        pQVar9 = pQVar1;
        pQVar8 = pQVar10;
        if (pQVar10 != pQVar1) {
          do {
            pQVar8 = pQVar8 + 2;
            pQVar9 = pQVar1;
            if (pQVar6 + lVar2 + uVar7 * 2 == pQVar8) break;
            pQVar9 = pQVar8;
          } while (*(short *)pQVar8 != 0x2f);
        }
        if ((long)pQVar9 - (long)pQVar10 != 0) {
          sVar5 = FUN_100541f30(*(short *)pQVar10);
          *(short *)pQVar10 = sVar5;
          pQVar4 = pQVar10 + 2;
          pQVar8 = pQVar10;
          while (pQVar3 = pQVar4, pQVar3 != pQVar9) {
            sVar5 = FUN_100541f30(*(short *)(pQVar8 + 2));
            *(short *)(pQVar8 + 2) = sVar5;
            pQVar4 = pQVar8 + 4;
            pQVar8 = pQVar3;
          }
          if (*(short *)(pQVar9 + -2) == 0x2e) {
            if ((2 < (ulong)((long)pQVar9 - (long)pQVar10 >> 1)) ||
               (sVar5 = *(short *)pQVar10, pQVar10 = pQVar9, sVar5 != 0x2e)) {
              *(short *)(pQVar9 + -2) = -0xfd7;
              pQVar10 = pQVar9;
            }
          }
          else {
            pQVar10 = pQVar9;
            if (*(short *)(pQVar9 + -2) == 0x20) {
              *(short *)(pQVar9 + -2) = -0xfd8;
            }
          }
        }
      }
    } while (pQVar10 != pQVar1);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_48 = (QArrayData *)QString::fromAscii_helper("\\",1);
  QString::replace(param_2,&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005b2f2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10005b2f2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10005b322;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10005b322:
  QString::normalized(&local_50,param_2,1,0);
  QString::operator=(param_2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) goto LAB_10005b373;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10005b373:
  pQVar6 = param_2->field0_0x0;
  *param_1 = pQVar6;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    UNLOCK();
  }
  return;
}

