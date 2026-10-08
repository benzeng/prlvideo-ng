
undefined4 FUN_10035bc20(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  QArrayData *pQVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  QObject *pQVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  QObject *pQVar11;
  QObject *pQVar12;
  QArrayData *local_50;
  QArrayData *local_48;
  int *local_40;
  undefined1 local_31;
  
  pQVar7 = (QObject *)FUN_100360b60();
  if (pQVar7 != (QObject *)0x0) {
    FUN_10006b440(&local_40,*(long *)(param_1 + 0x18) + 0x40);
    piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
    iVar1 = local_40[2];
    bVar3 = true;
    if (iVar1 != local_40[3]) {
      plVar10 = (long *)(local_40 + (long)iVar1 * 2 + 4);
      lVar9 = (long)local_40[3] * 8 + (long)iVar1 * -8;
      do {
        lVar2 = *(long *)*plVar10;
        pQVar11 = (QObject *)0x0;
        if ((lVar2 != 0) && (pQVar11 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
          pQVar11 = (QObject *)((long *)*plVar10)[1];
        }
        pQVar12 = (QObject *)0x0;
        if ((piVar8 != (int *)0x0) && (pQVar12 = (QObject *)0x0, piVar8[1] != 0)) {
          pQVar12 = pQVar7;
        }
        if (pQVar11 == pQVar12) {
          bVar3 = false;
          break;
        }
        plVar10 = plVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    if (*local_40 != -1) {
      if (*local_40 != 0) {
        LOCK();
        *local_40 = *local_40 + -1;
        local_31 = *local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10035bd20;
      }
      FUN_10006b5d0(&local_40,local_40);
    }
LAB_10035bd20:
    if (!bVar3) {
      uVar6 = FUN_10035bec0(param_1,pQVar7,param_2);
      return uVar6;
    }
  }
  EnumUtils::enumToString(&local_50,param_2);
  QString::toLocal8Bit();
  pQVar4 = local_48;
  lVar9 = *(long *)(local_48 + 0x10);
  uVar5 = FUN_10035dcf0(*(undefined8 *)(param_1 + 0x18),2);
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                "Failed to grab input with grabber %p for reason: <%s>. with vtd attribute %d There are no valid grabbers."
                ,pQVar7,pQVar4 + lVar9,uVar5);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10035bdba;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10035bdba:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return 3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return 3;
}

