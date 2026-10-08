
/* WARNING: Removing unreachable block (ram,0x0001004366d5) */
/* WARNING: Removing unreachable block (ram,0x0001004366e3) */
/* WARNING: Removing unreachable block (ram,0x0001004366ef) */

void FUN_100436390(QSize *param_1)

{
  QSize QVar1;
  QSize QVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int extraout_var;
  QSize *pQVar7;
  uint uVar8;
  bool bVar9;
  Data_conflict local_78;
  undefined4 local_70;
  undefined1 local_68;
  long local_58;
  long local_50;
  long local_48;
  QSize local_40;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  uVar6 = CVmCommonOptions::getOsVersion();
  if ((uVar6 < 0x806) || ((uVar6 & 0xffffff00) != 0x800)) {
    bVar3 = 1;
    goto LAB_1004364ef;
  }
  if (uVar6 != 0x807) {
    cVar5 = QAbstractButton::isChecked();
    bVar3 = 1;
    if (((cVar5 != '\0') || (cVar5 = QAbstractButton::isChecked(), cVar5 != '\0')) ||
       (cVar5 = QAbstractButton::isChecked(), cVar5 != '\0')) goto LAB_1004364ef;
    if (uVar6 - 0x809 < 8) {
LAB_100436477:
      cVar5 = QAbstractButton::isChecked();
      if (cVar5 != '\0') goto LAB_1004364ef;
    }
    else {
      uVar8 = (uVar6 >> 8) - 9;
      if (uVar8 < 8) {
        bVar4 = 0xc1U >> ((byte)uVar8 & 0x1f) & 1;
      }
      else {
        bVar4 = 0;
      }
      if ((uVar6 - 0x807 < 2) || (bVar4 != 0)) goto LAB_100436477;
    }
    if (uVar6 - 0x809 < 8) {
LAB_1004364a5:
      cVar5 = QAbstractButton::isChecked();
      if (cVar5 != '\0') goto LAB_1004364ef;
LAB_1004364bb:
      if ((0x806 < uVar6) && (uVar6 >> 8 == 8)) goto LAB_1004363ec;
    }
    else {
      uVar8 = (uVar6 >> 8) - 9;
      if (7 < uVar8) goto LAB_1004364bb;
      if ((0xc1U >> (uVar8 & 0x1f) & 1) != 0) goto LAB_1004364a5;
    }
    uVar6 = (uVar6 >> 8) - 9;
    if (7 < uVar6) {
      bVar3 = 0;
      goto LAB_1004364ef;
    }
    if ((0xc1U >> (uVar6 & 0x1f) & 1) == 0) {
      bVar3 = 0;
      goto LAB_1004364ef;
    }
  }
LAB_1004363ec:
  bVar3 = QAbstractButton::isChecked();
LAB_1004364ef:
  QVar1 = param_1[0xc];
  if ((ushort)bVar3 != (*(ushort *)(*(long *)(*(long *)((long)QVar1 + 0x88) + 0x28) + 10) & 1)) {
    QVar2 = param_1[0x2d];
    local_40 = QVar2;
    if (bVar3 == 0) {
      (**(code **)(**(long **)((long)QVar1 + 0x88) + 0x70))();
      local_40.field1_0x4 = extraout_var + QVar2.field1_0x4;
    }
    if ((*(byte *)((long)param_1[5] + 10) & 1) == 0) {
      pQVar7 = operator_new(0x88);
      CWindowResizeController::CWindowResizeController
                ((CWindowResizeController *)pQVar7,param_1,0,0);
      cVar5 = '\0';
      QObject::connect(&local_48,pQVar7,"2resized()",pQVar7,"1deleteLater()",0);
      if (local_48 != 0) {
        cVar5 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      if (bVar3 == 0) {
        QObject::connect(&local_50,pQVar7,"2resized()",*(undefined8 *)((long)param_1[0xc] + 0x88),
                         "1show()",0);
        bVar9 = cVar5 != '\0';
        cVar5 = '\0';
        if (bVar9) {
          if (local_50 == 0) {
            cVar5 = '\0';
          }
          else {
            cVar5 = QMetaObject::Connection::isConnected_helper();
          }
        }
        QMetaObject::Connection::~Connection((Connection *)&local_50);
      }
      else {
        QWidget::hide();
      }
      QObject::connect(&local_58,pQVar7,"2resized()",param_1,"1updateNotice()",0);
      if ((cVar5 != '\0') && (local_58 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      local_70 = 0x80000000;
      local_78.field7 = 0;
      local_68 = 1;
      CWindowResizeController::beginResize(pQVar7,(CSlotInfo *)&local_40);
      QVariant::~QVariant((QVariant *)&local_78);
    }
    else {
      QWidget::setHidden(SUB81(*(undefined8 *)((long)param_1[0xc] + 0x88),0));
      QWidget::setFixedSize(param_1);
    }
  }
  return;
}

