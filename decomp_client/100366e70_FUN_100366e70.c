
undefined8 FUN_100366e70(long param_1,QPoint *param_2,long param_3)

{
  double dVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  cVar3 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar3 != '\0') {
    lVar8 = *(long *)(param_2 + 0x28);
    local_38 = CONCAT44(*(int *)(lVar8 + 0x20) - *(int *)(lVar8 + 0x18),
                        *(int *)(lVar8 + 0x1c) - *(int *)(lVar8 + 0x14));
    local_40 = 0;
    dVar1 = *(double *)(param_3 + 0x30);
    if (0.0 <= dVar1) {
      iVar4 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar4 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
              (int)(DAT_100e110e0 + dVar1);
    }
    dVar1 = *(double *)(param_3 + 0x38);
    if (0.0 <= dVar1) {
      iVar11 = (int)(dVar1 + DAT_100e110f0);
    }
    else {
      iVar11 = (int)((dVar1 - (double)(int)(DAT_100e110e0 + dVar1)) + DAT_100e110f0) +
               (int)(DAT_100e110e0 + dVar1);
    }
    local_50 = CONCAT44(iVar11,iVar4);
    local_48 = QWidget::mapFromGlobal(param_2);
    cVar3 = QRect::contains((QPoint *)&local_40,SUB81(&local_48,0));
    if (cVar3 != '\0') {
      lVar8 = MacUtils::currentCGEvent();
      if (lVar8 != 0) {
        iVar4 = _CGEventGetIntegerValueField(lVar8,0xb);
        iVar11 = _CGEventGetIntegerValueField(lVar8,0xc);
        lVar9 = _CGEventGetIntegerValueField(lVar8,0x58);
        iVar5 = 0;
        iVar6 = 0;
        if (lVar9 != 0) {
          iVar5 = _CGEventGetIntegerValueField(lVar8,0x60);
          iVar6 = _CGEventGetIntegerValueField(lVar8,0x61);
        }
        if ((iVar5 == 0 && iVar4 == 0) || (*(int *)(param_3 + 0x54) != 1)) {
          lVar8 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
          local_5c = iVar6;
          if (lVar8 != 0) {
            uVar10 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
            iVar7 = FUN_10018f860(uVar10);
            if ((iVar7 == 7) && (cVar3 = MacUtils::isScrollWheelInverted(), cVar3 != '\0')) {
              iVar4 = -iVar4;
              iVar11 = -iVar11;
              iVar5 = -iVar5;
              local_5c = -iVar6;
            }
          }
          plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x28);
          local_88 = (double)(int)*(double *)(param_3 + 0x30);
          local_80 = (double)(int)*(double *)(param_3 + 0x38);
          local_70 = 0;
          local_78 = 0;
          local_58 = 0;
          local_68 = iVar4;
          local_64 = iVar11;
          local_60 = iVar5;
          (**(code **)(*plVar2 + 0xd0))(plVar2,&local_88,0);
        }
      }
    }
  }
  return 1;
}

