
void FUN_10037a8f0(long param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  QPainter local_d0 [8];
  undefined8 local_c8;
  QImage local_c0 [32];
  QImage local_a0 [32];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  double local_30;
  
  if ((((*(char *)(param_1 + 0x41) == '\0') && (*(long *)(param_1 + 0x30) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) && (*(long *)(param_1 + 0x38) != 0)) {
    lVar7 = FUN_100323e00();
    if (lVar7 != 0) {
      uVar8 = 0;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
        uVar8 = 0;
        if (*(long *)(param_1 + 0x38) != 0) {
          uVar8 = FUN_100323e00(*(long *)(param_1 + 0x38));
        }
      }
      iVar5 = FUN_100319d30(uVar8);
      if (iVar5 == 1) {
        uVar8 = 0;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
          uVar8 = *(undefined8 *)(param_1 + 0x38);
        }
        FUN_1003536c0(local_80,uVar8);
        cVar4 = FUN_100353a90(local_80);
        if (cVar4 != '\0') {
          FUN_100353890(local_a0,local_80);
          cVar4 = QImage::isNull();
          if (cVar4 == '\0') {
            lVar7 = *(long *)(param_1 + 0x28);
            iVar5 = *(int *)(lVar7 + 0x1c);
            iVar11 = *(int *)(lVar7 + 0x20);
            iVar1 = *(int *)(lVar7 + 0x14);
            iVar2 = *(int *)(lVar7 + 0x18);
            uVar9 = QImage::size();
            uVar8 = 0;
            if ((*(long *)(param_1 + 0x30) != 0) &&
               (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
              uVar8 = *(undefined8 *)(param_1 + 0x38);
            }
            dVar12 = (double)FUN_1003277b0(uVar8);
            dVar3 = (double)(int)uVar9 / dVar12;
            if (0.0 <= dVar3) {
              iVar6 = (int)(dVar3 + DAT_100e110f0);
            }
            else {
              iVar6 = (int)((dVar3 - (double)(int)(DAT_100e110e0 + dVar3)) + DAT_100e110f0) +
                      (int)(DAT_100e110e0 + dVar3);
            }
            dVar12 = (double)(int)((ulong)uVar9 >> 0x20) / dVar12;
            if (0.0 <= dVar12) {
              iVar10 = (int)(dVar12 + DAT_100e110f0);
            }
            else {
              iVar10 = (int)((dVar12 - (double)(int)(DAT_100e110e0 + dVar12)) + DAT_100e110f0) +
                       (int)(DAT_100e110e0 + dVar12);
            }
            iVar5 = (iVar5 - iVar1) + 1;
            iVar11 = (iVar11 - iVar2) + 1;
            if ((iVar5 != iVar6) || (iVar11 != iVar10)) {
              local_c8 = CONCAT44(iVar11,iVar5);
              QImage::scaled(local_c0,local_a0,&local_c8,0,1);
              QImage::operator=(local_a0,local_c0);
              QImage::~QImage(local_c0);
            }
            QPainter::QPainter(local_d0,(QPaintDevice *)(param_1 + 0x10));
            local_38 = (double)iVar5;
            local_48 = 0;
            uStack_40 = 0;
            local_30 = (double)iVar11;
            iVar5 = QImage::width();
            iVar11 = QImage::height();
            local_58 = (double)iVar5;
            local_50 = (double)iVar11;
            local_68 = 0;
            uStack_60 = 0;
            QPainter::drawImage(local_d0,&local_48,local_a0,&local_68,0);
            QPainter::~QPainter(local_d0);
          }
          QImage::~QImage(local_a0);
        }
        FUN_100353880(local_80);
      }
    }
  }
  return;
}

