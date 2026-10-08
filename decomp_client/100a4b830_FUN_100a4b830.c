
undefined8 * FUN_100a4b830(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  QArrayData *pQVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  short sVar5;
  ulong uVar6;
  QArrayData *pQVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 != 8) {
    piVar2 = (int *)*param_2;
    *param_1 = piVar2;
    if (*piVar2 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    return param_1;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(uint *)local_58.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_58.field0_0x0 = *(uint *)local_58.field0_0x0 + 1;
    UNLOCK();
    local_40 = (QArrayData *)CONCAT71(local_40._1_7_,*(uint *)local_58.field0_0x0 != 0);
  }
  if ((1 < *(uint *)local_58.field0_0x0) || (*(long *)(local_58.field0_0x0 + 0x10) != 0x18)) {
    QString::reallocData((uint)&local_58,(bool)((char)*(uint *)(local_58.field0_0x0 + 4) + '\x01'));
  }
  uVar6 = (ulong)(int)*(uint *)(local_58.field0_0x0 + 4);
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    pQVar10 = (QArrayData *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10));
    pQVar1 = pQVar10 + uVar6 * 2;
    pQVar9 = (QArrayData *)(local_58.field0_0x0 + *(long *)(local_58.field0_0x0 + 0x10) + uVar6 * 2)
    ;
    do {
      if (*(short *)pQVar10 == 0x2f) {
        pQVar10 = pQVar10 + 2;
      }
      else {
        pQVar8 = pQVar1;
        pQVar7 = pQVar10;
        if (pQVar10 != pQVar1) {
          do {
            pQVar7 = pQVar7 + 2;
            pQVar8 = pQVar1;
            if (pQVar9 == pQVar7) break;
            pQVar8 = pQVar7;
          } while (*(short *)pQVar7 != 0x2f);
        }
        if ((long)pQVar8 - (long)pQVar10 != 0) {
          sVar5 = FUN_100a4cf30(*(short *)pQVar10);
          *(short *)pQVar10 = sVar5;
          pQVar4 = pQVar10 + 2;
          pQVar7 = pQVar10;
          while (pQVar3 = pQVar4, pQVar3 != pQVar8) {
            sVar5 = FUN_100a4cf30(*(short *)(pQVar7 + 2));
            *(short *)(pQVar7 + 2) = sVar5;
            pQVar4 = pQVar7 + 4;
            pQVar7 = pQVar3;
          }
          if (*(short *)(pQVar8 + -2) == 0x2e) {
            if ((2 < (ulong)((long)pQVar8 - (long)pQVar10 >> 1)) ||
               (sVar5 = *(short *)pQVar10, pQVar10 = pQVar8, sVar5 != 0x2e)) {
              *(short *)(pQVar8 + -2) = -0xfd7;
              pQVar10 = pQVar8;
            }
          }
          else {
            pQVar10 = pQVar8;
            if (*(short *)(pQVar8 + -2) == 0x20) {
              *(short *)(pQVar8 + -2) = -0xfd8;
            }
          }
        }
      }
    } while (pQVar10 != pQVar1);
  }
  local_40 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_48 = (QArrayData *)QString::fromAscii_helper("\\",1);
  QString::replace(&local_58,&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a4ba53;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100a4ba53:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a4ba83;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100a4ba83:
  QString::normalized(&local_50,&local_58,1,0);
  QString::operator=(&local_58,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a4bad4;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100a4bad4:
  *param_1 = local_58.field0_0x0;
  if (1 < *(int *)local_58.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
    local_31 = *(int *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      local_40 = (QArrayData *)CONCAT71(local_40._1_7_,*(int *)local_58.field0_0x0 != 0);
      if (*(int *)local_58.field0_0x0 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return param_1;
}

