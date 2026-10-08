
bool FUN_1003628c0(undefined8 param_1,double param_2,long param_3,undefined8 *param_4)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  QWidget *pQVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  long local_128;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  QArrayData *local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  QWidget local_c8 [48];
  QPointF local_98 [48];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  double local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar4 = FUN_10035da10(*(undefined8 *)(param_3 + 8));
  if (lVar4 == 0) {
    return false;
  }
  uVar5 = FUN_10035da40(*(undefined8 *)(param_3 + 8));
  uVar3 = FUN_100319790(uVar5,0);
  if (uVar3 < 2) {
    lVar7 = *(long *)(*(long *)(param_3 + 8) + 0x48);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != 0)) {
      pQVar6 = *(QWidget **)(*(long *)(param_3 + 8) + 0x50);
      goto LAB_100362975;
    }
  }
  else {
    FUN_100188480(&local_40,lVar4);
    pQVar6 = (QWidget *)FUN_100360930(&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100362975;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100362975:
    if (pQVar6 != (QWidget *)0x0) {
      lVar7 = FUN_100360500(pQVar6);
      if (lVar7 != 0) {
        local_68 = *param_4;
        uStack_60 = param_4[1];
        local_50 = WidgetUtils::mapFromGlobal(pQVar6,(QPointF *)&local_68);
        local_48 = param_2;
        WidgetUtils::getWidgetTransformMatrix(local_c8);
        QMatrix::inverted((bool *)local_98);
        dVar1 = (double)QMatrix::map(local_98);
        uVar5 = FUN_100325fd0(lVar7);
        local_d8 = (double)(int)uVar5 + dVar1;
        param_2 = (double)(int)((ulong)uVar5 >> 0x20) + param_2;
        local_d0 = param_2;
        uVar5 = FUN_10035da40(*(undefined8 *)(param_3 + 8));
        FUN_10031c930(&local_100,uVar5);
        auVar11 = QPolygon::boundingRect();
        local_f8 = (double)auVar11._0_4_;
        local_f0 = (double)auVar11._4_4_;
        local_e8 = (double)((1 - auVar11._0_4_) + auVar11._8_4_);
        local_e0 = (double)((1 - auVar11._4_4_) + auVar11._12_4_);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100362ae8;
          }
          QArrayData::deallocate(local_100,8,8);
        }
LAB_100362ae8:
        if ((local_d8 < local_f8) || (local_d0 < local_f0)) {
          local_d8 = (double)WidgetUtils::makePointInside((QRectF *)&local_f8,(QPointF *)&local_d8);
          local_d0 = param_2;
        }
        cVar2 = FUN_10035ddc0(*(undefined8 *)(param_3 + 8),2);
        if ((2 < DAT_10230ffd0) && (cVar2 == '\x01')) {
          if (0.0 <= local_d8) {
            iVar9 = (int)(local_d8 + DAT_100e110f0);
          }
          else {
            iVar9 = (int)((local_d8 - (double)(int)(DAT_100e110e0 + local_d8)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + local_d8);
          }
          if (0.0 <= local_d0) {
            iVar10 = (int)(local_d0 + DAT_100e110f0);
          }
          else {
            iVar10 = (int)((local_d0 - (double)(int)(DAT_100e110e0 + local_d0)) + DAT_100e110f0) +
                     (int)(DAT_100e110e0 + local_d0);
          }
          uVar3 = *(uint *)(param_4 + 6);
          FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                        "Sending mouse (abs): x=%d y=%d z=%d w=%d z120=%d w120=%d. Btns: left=%d right=%d middle=%d. Grabber=%p"
                        ,iVar9,iVar10,*(undefined4 *)(param_4 + 4),
                        *(undefined4 *)((long)param_4 + 0x24),*(undefined4 *)(param_4 + 5),
                        *(undefined4 *)((long)param_4 + 0x2c),uVar3 & 1,uVar3 >> 1 & 1,
                        uVar3 >> 2 & 1,pQVar6);
        }
        if (0.0 <= local_d8) {
          local_120 = (int)(local_d8 + DAT_100e110f0);
        }
        else {
          local_120 = (int)((local_d8 - (double)(int)(DAT_100e110e0 + local_d8)) + DAT_100e110f0) +
                      (int)(DAT_100e110e0 + local_d8);
        }
        if (0.0 <= local_d0) {
          local_11c = (int)(local_d0 + DAT_100e110f0);
        }
        else {
          local_11c = (int)((local_d0 - (double)(int)(DAT_100e110e0 + local_d0)) + DAT_100e110f0) +
                      (int)(DAT_100e110e0 + local_d0);
        }
        local_118 = *(undefined4 *)(param_4 + 4);
        local_114 = *(undefined4 *)(param_4 + 6);
        local_110 = *(undefined4 *)((long)param_4 + 0x24);
        local_10c = *(undefined4 *)(param_4 + 5);
        local_108 = *(undefined4 *)((long)param_4 + 0x2c);
        FUN_10018c250(&local_128,lVar4);
        iVar9 = _PrlDevMouse_Event(local_128,&local_120,0x1c,1);
        if (local_128 == 0) {
          return -1 < iVar9;
        }
        _PrlHandle_Free();
        return -1 < iVar9;
      }
      pcVar8 = "(!)Error: VM display instance is NULL. Can\'t send mouse to VM.";
      goto LAB_100362bc7;
    }
  }
  pcVar8 = "(!)Error: invalid mouse grabber";
LAB_100362bc7:
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,pcVar8);
  return false;
}

