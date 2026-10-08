
/* WARNING: Type propagation algorithm not settling */

byte FUN_10069e1e0(undefined8 param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  QArrayData *pQVar6;
  bool bVar7;
  char local_61;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QArrayData *local_40;
  QVariant local_38;
  undefined1 local_21;
  
  QObject::property((char *)&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_58);
  bVar1 = false;
  bVar7 = false;
  if (*(int *)(local_48 + 4) != 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper("Mac",3);
    iVar4 = QString::indexOf(&local_48,&local_60,0,1);
    bVar7 = iVar4 != -1;
    bVar1 = true;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10069e293;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_10069e293:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10069e2c3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10069e2c3:
  if (!(bool)(bVar7 | !bVar1)) {
    return 0;
  }
  QObject::property((char *)&local_38);
  if ((local_38.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    bVar7 = true;
    cVar2 = '\0';
  }
  else {
    QVariant::toBitArray();
    lVar5 = *(long *)(local_40 + 0x10);
    iVar4 = 0;
    pQVar6 = local_40;
    if ((int)(char)local_40[lVar5] < *(int *)(local_40 + 4) * 8) {
      do {
        if (((byte)pQVar6[((iVar4 >> 3) + 1) + lVar5] >> ((byte)iVar4 & 7) & 1) != 0) {
          cVar2 = EnumUtils::testProduct(iVar4);
          pQVar6 = local_40;
          if (cVar2 != '\0') {
            iVar4 = 1;
            goto LAB_10069e36f;
          }
          lVar5 = *(long *)(local_40 + 0x10);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(pQVar6 + 4) * 8 - (int)(char)pQVar6[lVar5]);
      iVar4 = 0;
    }
LAB_10069e36f:
    cVar2 = (char)iVar4;
    if (*(int *)pQVar6 == -1) {
      bVar7 = false;
    }
    else {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_21 = *(int *)pQVar6 != 0;
        UNLOCK();
        pQVar6 = local_40;
        if ((bool)local_21) {
          bVar7 = false;
          goto LAB_10069e3a8;
        }
      }
      QArrayData::deallocate(pQVar6,1,8);
      bVar7 = false;
    }
  }
LAB_10069e3a8:
  QVariant::~QVariant(&local_38);
  if ((!bVar7) && (cVar2 == '\0')) {
    return 0;
  }
  local_61 = '\0';
  local_21 = 1;
  bVar3 = FUN_10069e570(param_1,"is%1Visible",&local_21,&local_61);
  return bVar3 | local_61 == '\0';
}

