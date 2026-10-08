
void FUN_10035b410(long param_1,QObject *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  QObject *pQVar6;
  char *pcVar7;
  long *plVar8;
  QObject *pQVar9;
  int *local_78;
  QObject *local_70;
  QVariant local_68;
  int *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  QObject::property((char *)&local_40);
  if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    QVariant::~QVariant(&local_40);
  }
  else {
    QObject::property((char *)&local_50);
    QVariant::~QVariant(&local_50);
    QVariant::~QVariant(&local_40);
    if ((local_50.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
      FUN_10006b440(&local_58,*(long *)(param_1 + 0x18) + 0x40);
      piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
      iVar1 = local_58[2];
      if (iVar1 == local_58[3]) {
        bVar3 = false;
      }
      else {
        plVar8 = (long *)(local_58 + (long)iVar1 * 2 + 4);
        lVar5 = (long)local_58[3] * 8 + (long)iVar1 * -8;
        do {
          lVar2 = *(long *)*plVar8;
          pQVar6 = (QObject *)0x0;
          if ((lVar2 != 0) && (pQVar6 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
            pQVar6 = (QObject *)((long *)*plVar8)[1];
          }
          pQVar9 = (QObject *)0x0;
          if ((piVar4 != (int *)0x0) && (pQVar9 = (QObject *)0x0, piVar4[1] != 0)) {
            pQVar9 = param_2;
          }
          bVar3 = true;
          if (pQVar6 == pQVar9) goto LAB_10035b52a;
          plVar8 = plVar8 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
        bVar3 = false;
      }
LAB_10035b52a:
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) {
          operator_delete(piVar4);
        }
      }
      if (!bVar3) {
        QWidget::grabGesture(param_2,5,0);
        QWidget::grabGesture(param_2,4,0);
        QVariant::QVariant(&local_68,true);
        QObject::setProperty((char *)param_2,(QVariant *)"wantsExtendedMouseMoves");
        QVariant::~QVariant(&local_68);
        QWidget::setAttribute(param_2,0x79,1);
        QWidget::setAttribute(param_2,0x7b,1);
        piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
        local_78 = piVar4;
        local_70 = param_2;
        FUN_10007b8d0(&local_58,&local_78);
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + -1;
          local_29 = *piVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar4);
          }
        }
        FUN_10035df20(*(undefined8 *)(param_1 + 0x18),&local_58);
        lVar5 = QWidget::focusProxy();
        if ((lVar5 != 0) && (pQVar6 = (QObject *)QWidget::focusProxy(), pQVar6 != param_2)) {
          pQVar6 = (QObject *)QWidget::focusProxy();
          QObject::installEventFilter(pQVar6);
        }
        QObject::installEventFilter(param_2);
        if (1 < DAT_10230ffd0) {
          if (*(undefined8 **)(*(long *)(param_2 + 8) + 0x10) == (undefined8 *)0x0) {
            pcVar7 = "Unknown";
          }
          else {
            (**(code **)**(undefined8 **)(*(long *)(param_2 + 8) + 0x10))();
            pcVar7 = (char *)QMetaObject::className();
          }
          FUN_100df99c0("[HID_CTL]","prl_client_app",2,"grabber %p Registered with parent %s",
                        param_2,pcVar7);
        }
      }
      if (*local_58 == -1) {
        return;
      }
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        UNLOCK();
        if (*local_58 != 0) {
          return;
        }
        local_29 = 0;
      }
      FUN_10006b5d0(&local_58,local_58);
      return;
    }
  }
  FUN_100df99c0("[HID_CTL]","prl_client_app",0,
                "(!)Error: can\'t register grabber since some of the required widget properties are absent."
               );
  return;
}

