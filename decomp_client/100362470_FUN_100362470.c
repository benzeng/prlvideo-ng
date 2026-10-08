
bool FUN_100362470(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  long local_100;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  QPointF local_c0 [48];
  QMatrix local_90 [48];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  
  cVar5 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
  if (cVar5 == '\0') {
    if (DAT_10230ffd0 < 1) {
      return false;
    }
    pcVar7 = "Failed to send mouse to VM: the mouse is not grabbed.";
    uVar8 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x48);
    if (((lVar2 == 0) || (*(int *)(lVar2 + 4) == 0)) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x50), lVar2 == 0)) {
      pcVar7 = "(!)Error: mouse grabber widget is NULL. Can\'t send mouse to VM.";
    }
    else {
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      WidgetUtils::getWidgetTransformMatrix((QWidget *)&local_60);
      QMatrix::QMatrix(local_90,local_60,local_58,local_50,local_48,0.0,0.0);
      QMatrix::inverted((bool *)local_c0);
      dVar11 = local_58;
      local_d8 = uVar8;
      uStack_d0 = uVar4;
      dVar3 = (double)QMatrix::map(local_c0);
      lVar6 = FUN_10035da10(*(undefined8 *)(param_1 + 8));
      if (lVar6 != 0) {
        cVar5 = FUN_10035ddc0(*(undefined8 *)(param_1 + 8),2);
        if ((2 < DAT_10230ffd0) && (cVar5 == '\x01')) {
          if (0.0 <= dVar3) {
            iVar9 = (int)(DAT_100e110f0 + dVar3);
          }
          else {
            iVar9 = (int)((dVar3 - (double)(int)(DAT_100e110e0 + dVar3)) + DAT_100e110f0) +
                    (int)(DAT_100e110e0 + dVar3);
          }
          if (0.0 <= dVar11) {
            iVar10 = (int)(DAT_100e110f0 + dVar11);
          }
          else {
            iVar10 = (int)((dVar11 - (double)(int)(DAT_100e110e0 + dVar11)) + DAT_100e110f0) +
                     (int)(DAT_100e110e0 + dVar11);
          }
          uVar1 = *(uint *)(param_2 + 0x30);
          FUN_100df99c0("[HID_CTL]","prl_client_app",3,
                        "Sending mouse (rel): dx=%d dy=%d z=%d w=%d z120=%d w120=%d. Btns: left=%d right=%d middle=%d. Grabber=%p"
                        ,iVar9,iVar10,*(undefined4 *)(param_2 + 0x20),
                        *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),
                        *(undefined4 *)(param_2 + 0x2c),uVar1 & 1,uVar1 >> 1 & 1,uVar1 >> 2 & 1,
                        lVar2);
        }
        if (0.0 <= dVar3) {
          local_f8 = (int)(dVar3 + DAT_100e110f0);
        }
        else {
          local_f8 = (int)((dVar3 - (double)(int)(DAT_100e110e0 + dVar3)) + DAT_100e110f0) +
                     (int)(DAT_100e110e0 + dVar3);
        }
        if (0.0 <= dVar11) {
          local_f4 = (int)(dVar11 + DAT_100e110f0);
        }
        else {
          local_f4 = (int)((dVar11 - (double)(int)(DAT_100e110e0 + dVar11)) + DAT_100e110f0) +
                     (int)(DAT_100e110e0 + dVar11);
        }
        local_f0 = *(undefined4 *)(param_2 + 0x20);
        local_ec = *(undefined4 *)(param_2 + 0x30);
        local_e8 = *(undefined4 *)(param_2 + 0x24);
        local_e4 = *(undefined4 *)(param_2 + 0x28);
        local_e0 = *(undefined4 *)(param_2 + 0x2c);
        FUN_10018c250(&local_100,lVar6);
        iVar9 = _PrlDevMouse_Event(local_100,&local_f8,0x1c,0);
        if (local_100 == 0) {
          return -1 < iVar9;
        }
        _PrlHandle_Free();
        return -1 < iVar9;
      }
      pcVar7 = "(!)Error: VM instance is invalid. Can\'t send mouse to VM.";
    }
    uVar8 = 0;
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",uVar8,pcVar7);
  return false;
}

