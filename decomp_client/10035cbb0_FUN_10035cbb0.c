
undefined1 FUN_10035cbb0(QObject *param_1,QEvent *param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  long lVar6;
  QObject *pQVar7;
  uint uVar8;
  uint *puVar9;
  QObject *pQVar10;
  QObject *pQVar11;
  bool bVar12;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  uint *local_40;
  undefined1 local_31;
  
  if ((param_2 == (QEvent *)0x0) || ((*(byte *)(*(long *)(param_2 + 8) + 0x20) & 1) == 0)) {
    FUN_100df99c0("[HID_CTL]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","0 != grabber"
                  ,"VmDesktop/HIDController/CHIDController.cpp",0x20a,"eventFilter");
    bVar2 = true;
    pQVar11 = (QObject *)0x0;
  }
  else {
    bVar2 = false;
    pQVar11 = (QObject *)param_2;
  }
  FUN_10006b440(&local_40,*(long *)(param_1 + 0x18) + 0x40);
  piVar5 = (int *)0x0;
  if (!bVar2) {
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
  }
  uVar8 = local_40[2];
  if (uVar8 == local_40[3]) {
    bVar2 = false;
  }
  else {
    puVar9 = local_40 + (long)(int)uVar8 * 2 + 4;
    lVar6 = (long)(int)local_40[3] * 8 + (long)(int)uVar8 * -8;
    do {
      lVar1 = **(long **)puVar9;
      pQVar10 = (QObject *)0x0;
      if ((lVar1 != 0) && (pQVar10 = (QObject *)0x0, *(int *)(lVar1 + 4) != 0)) {
        pQVar10 = (QObject *)(*(long **)puVar9)[1];
      }
      pQVar7 = (QObject *)0x0;
      if ((piVar5 != (int *)0x0) && (pQVar7 = (QObject *)0x0, piVar5[1] != 0)) {
        pQVar7 = pQVar11;
      }
      bVar2 = true;
      if (pQVar10 == pQVar7) goto LAB_10035ccba;
      puVar9 = puVar9 + 2;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
    bVar2 = false;
  }
LAB_10035ccba:
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_31 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar5);
    }
  }
  if (bVar2) {
LAB_10035ce80:
    if ((*(ushort *)(param_3 + 0x10) & 0xfffe) == 10) {
      uVar3 = QObject::eventFilter(param_1,param_2);
    }
    else {
      cVar4 = FUN_100365640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30),pQVar11,param_3);
      uVar3 = 1;
      if (cVar4 == '\0') {
        uVar3 = QObject::eventFilter(param_1,param_2);
      }
    }
  }
  else {
    if ((param_3 != 0) &&
       (lVar6 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1650,0), lVar6 != 0
       )) {
      FUN_10006b440(&local_60,&local_40);
      local_58 = local_60 + (long)local_60[2] * 2 + 4;
      local_50 = local_60 + (long)local_60[3] * 2 + 4;
      local_48 = 1;
      if (local_60[2] == local_60[3]) {
        bVar2 = false;
      }
      else {
        bVar2 = false;
        do {
          piVar5 = (int *)**(undefined8 **)local_58;
          pQVar10 = (QObject *)(*(undefined8 **)local_58)[1];
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          if (local_48 != 0) {
            if ((((piVar5 != (int *)0x0) && (pQVar10 != (QObject *)0x0)) && (piVar5[1] != 0)) &&
               (pQVar7 = (QObject *)QWidget::focusProxy(), pQVar7 == pQVar11)) {
              pQVar11 = (QObject *)0x0;
              if (piVar5[1] != 0) {
                pQVar11 = pQVar10;
              }
              bVar2 = true;
            }
            local_48 = 0;
          }
          if (piVar5 != (int *)0x0) {
            LOCK();
            *piVar5 = *piVar5 + -1;
            local_31 = *piVar5 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              operator_delete(piVar5);
            }
          }
          local_58 = local_58 + 2;
          uVar8 = local_48 ^ 1;
          bVar12 = local_48 != 1;
          local_48 = uVar8;
        } while ((bVar12) && (local_58 != local_50));
      }
      if (*local_60 != -1) {
        if (*local_60 != 0) {
          LOCK();
          *local_60 = *local_60 + -1;
          local_31 = *local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10035ce36;
        }
        FUN_10006b5d0(&local_60,local_60);
      }
LAB_10035ce36:
      if (bVar2) goto LAB_10035ce80;
    }
    if (3 < DAT_10230ffd0) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Catched event for non-registered grabber %p.",
                    pQVar11);
    }
    uVar3 = QObject::eventFilter(param_1,param_2);
  }
  if (*local_40 != 0xffffffff) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 - 1;
      UNLOCK();
      if (*local_40 != 0) {
        return uVar3;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
  return uVar3;
}

