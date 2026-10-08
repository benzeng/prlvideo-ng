
undefined1 FUN_1003463e0(long param_1,QGesture *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  CVmSettings *pCVar7;
  undefined1 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  Data *local_1a0;
  CVmSettings local_198 [359];
  undefined1 local_31;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar6 = FUN_100319390(uVar6);
  FUN_10018c2b0(uVar6);
  pCVar7 = (CVmSettings *)CVmConfiguration::getVmSettings();
  CVmSettings::CVmSettings(local_198,pCVar7);
  CVmSettings::getVmTools();
  CVmTools::getGestures();
  cVar1 = CVmGestures::isEnabled();
  if (cVar1 == '\0') {
    uVar8 = 0;
LAB_100346596:
    CVmSettings::~CVmSettings(local_198);
    return uVar8;
  }
  QGestureEvent::activeGestures();
  uVar9 = (ulong)(uint)(*(int *)(local_1a0 + 0xc) - *(int *)(local_1a0 + 8));
  uVar8 = 0;
  do {
    uVar9 = (ulong)(int)uVar9;
    do {
      if ((long)uVar9 < 1) {
        if (*(int *)local_1a0 == -1) goto LAB_100346596;
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100346596;
        }
        QListData::dispose(local_1a0);
        goto LAB_100346596;
      }
      iVar2 = QGesture::gestureType();
      uVar9 = uVar9 - 1;
      if (iVar2 == 4) {
        uVar3 = QGesture::state();
        uVar6 = QPinchGesture::rotationAngle();
        uVar10 = QPinchGesture::scaleFactor();
        FUN_1003466e0(uVar6,uVar10,param_1,uVar3);
        goto LAB_100346490;
      }
    } while (iVar2 != 5);
    uVar3 = QGesture::state();
    uVar4 = QSwipeGesture::horizontalDirection();
    uVar5 = QSwipeGesture::verticalDirection();
    FUN_100346610(param_1,uVar3,uVar4,uVar5);
LAB_100346490:
    QGestureEvent::accept(param_2);
    param_2[0x12] = (QGesture)((byte)param_2[0x12] | 4);
    uVar8 = 1;
  } while( true );
}

