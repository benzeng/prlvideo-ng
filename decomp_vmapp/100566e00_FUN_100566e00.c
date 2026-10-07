
undefined1 FUN_100566e00(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  QArrayData *pQVar3;
  short sVar4;
  int iVar5;
  QArrayData *pQVar6;
  undefined1 uVar7;
  uint uVar8;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toLatin1();
  QByteArray::fromBase64((QByteArray *)&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100566e5c;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100566e5c:
  pQVar3 = local_40;
  iVar1 = *(int *)(local_40 + 4);
  if (iVar1 < 0x20) {
    uVar7 = 0;
    FUN_1008e3970("","StatesUtils",0,"Invalid bc state buffer size %d",iVar1);
  }
  else {
    lVar2 = *(long *)(local_40 + 0x10);
    iVar5 = _strncmp((char *)(local_40 + lVar2),"BCSPND  ",8);
    if (iVar5 == 0) {
      pQVar6 = pQVar3 + lVar2 + 0x20;
      sVar4 = qChecksum((char *)pQVar6,iVar1 - 0x20U);
      if (sVar4 == *(short *)(pQVar3 + lVar2 + 0x14)) {
        if (*(int *)(pQVar3 + lVar2 + 0x10) * 0x50 == iVar1 - 0x20U) {
          FUN_1005679b0(param_1 + 2);
          *param_1 = *(undefined4 *)(pQVar3 + lVar2 + 8);
          param_1[1] = *(undefined4 *)(pQVar3 + lVar2 + 0xc);
          uVar7 = 1;
          if (*(int *)(pQVar3 + lVar2 + 0x10) != 0) {
            uVar8 = 0;
            do {
              FUN_100567690(param_1 + 2,pQVar6);
              uVar8 = uVar8 + 1;
              pQVar6 = pQVar6 + 0x50;
            } while (uVar8 < *(uint *)(pQVar3 + lVar2 + 0x10));
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 0;
          FUN_1008e3970("","StatesUtils",0,"Invalid bc state buffer body size");
        }
      }
      else {
        uVar7 = 0;
        FUN_1008e3970("","StatesUtils",0,"Invalid bc state buffer checksum");
      }
    }
    else {
      uVar7 = 0;
      FUN_1008e3970("","StatesUtils",0,"Invalid bc state buffer sign");
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar7;
}

