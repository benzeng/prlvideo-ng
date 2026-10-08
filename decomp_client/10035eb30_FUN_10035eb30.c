
void FUN_10035eb30(QCursor *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  QCursor local_78 [8];
  QPixmap local_70 [32];
  QImage local_50 [32];
  
  QCursor::QCursor(param_1,10);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x3ff0000000000000;
  param_1[0x18] = (QCursor)0x1;
  lVar4 = *param_2;
  if ((*(int *)(lVar4 + 4) != 0) && (lVar3 = *(long *)(lVar4 + 0x10), lVar4 + lVar3 != 0)) {
    *(ulong *)(param_1 + 8) =
         CONCAT44(*(undefined4 *)(lVar4 + 4 + lVar3),*(undefined4 *)(lVar4 + lVar3));
    iVar1 = *(int *)(lVar4 + 8 + lVar3);
    iVar2 = *(int *)(lVar4 + 0xc + lVar3);
    QImage::QImage(local_50,lVar4 + 0x18 + lVar3,*(undefined4 *)(lVar4 + 0x10 + lVar3),
                   *(undefined4 *)(lVar4 + 0x14 + lVar3),5,0,0);
    QPixmap::fromImage(local_70,local_50,3);
    QCursor::QCursor(local_78,local_70,iVar1,iVar2);
    QCursor::operator=(param_1,local_78);
    QCursor::~QCursor(local_78);
    lVar4 = FUN_100356ef0(param_1 + 8,param_3);
    if (lVar4 != 0) {
      FUN_1003277b0(lVar4);
      FUN_10035ecb0(param_1);
    }
    param_1[0x18] = (QCursor)0x0;
    QPixmap::~QPixmap(local_70);
    QImage::~QImage(local_50);
  }
  return;
}

