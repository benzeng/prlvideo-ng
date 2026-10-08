
void FUN_1007355e0(QObject *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  QPixmap local_40 [32];
  
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (*(long *)(param_1 + 0x58) != 0)) {
    iVar2 = FUN_10018a9d0();
    if (iVar2 == 0x30000009) {
      cVar1 = QImage::isNull();
      if (cVar1 == '\0') {
        QPixmap::fromImage(local_40,param_2,0);
        FUN_100734e30(param_1,local_40);
        QPixmap::~QPixmap(local_40);
        uVar3 = 0;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x58);
        }
        uVar3 = FUN_10018c280(uVar3);
        pQVar4 = (QObject *)FUN_1003192a0(uVar3,*(undefined4 *)(param_1 + 0x20));
        QObject::disconnect(pQVar4,"2suspendedScreenImageUpdated(QImage)",param_1,(char *)0x0);
      }
    }
  }
  return;
}

