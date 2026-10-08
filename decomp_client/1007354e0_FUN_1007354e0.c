
void FUN_1007354e0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  QPixmap local_78 [32];
  QImage local_58 [32];
  QImage local_38 [32];
  
  if ((((-1 < param_2) && (*(long *)(param_1 + 0x50) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) && (*(long *)(param_1 + 0x58) != 0)) {
    iVar1 = FUN_10018a9d0();
    if (iVar1 == 0x30000004) {
      QObject::sender();
      uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206c80);
      FUN_100293130(local_58,uVar2);
      QImage::convertToFormat(local_38,local_58,6,0);
      QImage::~QImage(local_58);
      QPixmap::fromImage(local_78,local_38,0);
      FUN_100734e30(param_1,local_78);
      QPixmap::~QPixmap(local_78);
      QImage::~QImage(local_38);
    }
  }
  return;
}

