
undefined8 FUN_100379f90(QEvent *param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  QObject *pQVar10;
  long lVar11;
  undefined1 auVar12 [16];
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar2 = *(ushort *)(param_2 + 0x10);
  if (0x49 < uVar2) {
    if (uVar2 == 0x4a) {
      QAbstractScrollArea::setVerticalScrollBarPolicy(param_1,0);
      QAbstractScrollArea::setHorizontalScrollBarPolicy(param_1,0);
    }
    goto LAB_10037a178;
  }
  if (0xd < uVar2) {
    if (uVar2 - 0x18 < 2) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
      if (((lVar9 == 0) || (*(int *)(lVar9 + 4) == 0)) ||
         (*(long *)(*(long *)(param_1 + 0x38) + 0x20) == 0)) {
        FUN_100df99c0("","prl_client_app",0,"(!)Error: invalid VM display instance.");
      }
      else {
        auVar12 = FUN_100323e00();
        sVar3 = *(short *)(param_2 + 0x10);
        FUN_100321ae0(auVar12._0_8_,sVar3 == 0x18,auVar12._8_8_,
                      CONCAT11((char)((ushort)sVar3 >> 8),sVar3 == 0x18));
      }
    }
    else if (uVar2 == 0xe) {
      lVar9 = *(long *)(param_1 + 0x38);
      if (*(char *)(lVar9 + 0x48) != '\0') {
        cVar1 = *(char *)(lVar9 + 0x66);
        cVar5 = MacUtils::isWindowInFullScreenTiling(*(QWidget **)(lVar9 + 0x10));
        *(char *)(lVar9 + 0x66) = cVar5;
        if (cVar1 != cVar5) {
          FUN_100378a30(lVar9);
        }
      }
    }
    else if (uVar2 == 0x15) {
      pQVar10 = (QObject *)QWidget::window();
      QObject::installEventFilter(pQVar10);
    }
    goto LAB_10037a178;
  }
  if (uVar2 != 6) goto LAB_10037a178;
  uVar4 = *(uint *)(param_2 + 0x28);
  uVar8 = FUN_100370280();
  lVar9 = *(long *)(param_1 + 0x38);
  lVar11 = *(long *)(lVar9 + 0x18);
  if (((lVar11 == 0) || (*(int *)(lVar11 + 4) == 0)) || (*(long *)(lVar9 + 0x20) == 0)) {
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_100323d90(&local_38);
    lVar9 = *(long *)(param_1 + 0x38);
    lVar11 = *(long *)(lVar9 + 0x18);
  }
  uVar6 = 0xffffffff;
  if (((lVar11 != 0) && (*(int *)(lVar11 + 4) != 0)) && (*(long *)(lVar9 + 0x20) != 0)) {
    uVar6 = FUN_100323e20();
  }
  iVar7 = FUN_100370f20(uVar8,&local_38,uVar6);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10037a124;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10037a124:
  if (((uVar4 & 0xfffffff8) == 0x1000010) && (iVar7 == 4)) {
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
    return 1;
  }
LAB_10037a178:
  uVar8 = QScrollArea::event(param_1);
  return uVar8;
}

