
QPixmap * FUN_100a08080(QPixmap *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  double dVar5;
  QIcon local_a0 [8];
  undefined8 local_98;
  QPixmap local_90 [32];
  QPixmap local_70 [32];
  undefined8 local_50;
  QIcon local_48 [8];
  QIcon local_40 [8];
  QIcon local_38 [8];
  QIcon local_30 [8];
  QIcon local_28 [8];
  undefined8 local_20;
  
  QIcon::QIcon(local_28);
  switch(param_2) {
  case 0:
    plVar3 = (long *)QApplication::style();
    (**(code **)(*plVar3 + 0x100))(local_48,plVar3,9,0,0);
    QIcon::operator=(local_28,local_48);
    QIcon::~QIcon(local_48);
    break;
  case 1:
    plVar3 = (long *)QApplication::style();
    (**(code **)(*plVar3 + 0x100))(local_30,plVar3,0xb,0,0);
    QIcon::operator=(local_28,local_30);
    QIcon::~QIcon(local_30);
    break;
  case 2:
    plVar3 = (long *)QApplication::style();
    (**(code **)(*plVar3 + 0x100))(local_40,plVar3,0xb,0,0);
    QIcon::operator=(local_28,local_40);
    QIcon::~QIcon(local_40);
    break;
  case 3:
    plVar3 = (long *)QApplication::style();
    (**(code **)(*plVar3 + 0x100))(local_38,plVar3,0xc,0,0);
    QIcon::operator=(local_28,local_38);
    QIcon::~QIcon(local_38);
  }
  local_50 = 0x4000000040;
  QIcon::pixmap(local_70,local_28,&local_50,0,1);
  dVar5 = (double)(int)local_50 + (double)(int)local_50;
  if (0.0 <= dVar5) {
    iVar2 = (int)(dVar5 + DAT_100e110f0);
  }
  else {
    iVar2 = (int)((dVar5 - (double)(int)(DAT_100e110e0 + dVar5)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar5);
  }
  dVar5 = (double)local_50._4_4_ + (double)local_50._4_4_;
  if (0.0 <= dVar5) {
    iVar4 = (int)(dVar5 + DAT_100e110f0);
  }
  else {
    iVar4 = (int)((dVar5 - (double)(int)(DAT_100e110e0 + dVar5)) + DAT_100e110f0) +
            (int)(DAT_100e110e0 + dVar5);
  }
  local_98 = CONCAT44(iVar4,iVar2);
  QIcon::pixmap(local_90,local_28,&local_98,0,1);
  QPixmap::setHiDpiPixmap(local_70);
  QPixmap::~QPixmap(local_90);
  cVar1 = QPixmap::isNull();
  if (cVar1 == '\0') {
    QPixmap::QPixmap(param_1,local_70);
  }
  else {
    QApplication::windowIcon();
    local_20 = 0x4000000040;
    QIcon::pixmap(param_1,local_a0,&local_20,0,1);
    QIcon::~QIcon(local_a0);
  }
  QPixmap::~QPixmap(local_70);
  QIcon::~QIcon(local_28);
  return param_1;
}

