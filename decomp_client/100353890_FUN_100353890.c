
QImage * FUN_100353890(QImage *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar9;
  QImage local_68 [32];
  long local_48;
  undefined4 local_3c;
  long local_38;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  lVar6 = *param_2;
  if (((lVar6 != 0) && (*(int *)(lVar6 + 4) != 0)) && (param_2[1] != 0)) {
    local_38 = 0;
    local_3c = 0;
    lVar5 = 0;
    if (*(int *)(lVar6 + 4) != 0) {
      lVar5 = param_2[1];
    }
    FUN_100323d50(&local_48,lVar5);
    lVar5 = local_48;
    lVar6 = 0;
    if ((*param_2 != 0) && (lVar6 = 0, *(int *)(*param_2 + 4) != 0)) {
      lVar6 = param_2[1];
    }
    uVar1 = FUN_100323e20(lVar6);
    iVar2 = _PrlDevSecondaryDisplay_GetScreenBuffer(lVar5,uVar1,&local_38,&local_3c);
    if (local_48 != 0) {
      _PrlHandle_Free();
    }
    if ((-1 < iVar2) && (local_38 != 0)) {
      lVar6 = 0;
      if ((*param_2 != 0) && (lVar6 = 0, *(int *)(*param_2 + 4) != 0)) {
        lVar6 = param_2[1];
      }
      auVar8 = FUN_1003261e0(lVar6);
      iVar2 = auVar8._0_4_;
      iVar7 = auVar8._8_4_;
      if (iVar2 <= iVar7) {
        iVar4 = auVar8._4_4_;
        iVar3 = auVar8._12_4_;
        if (iVar4 <= iVar3) {
          if (DAT_10230ffd0 < 4) {
            iVar2 = (iVar7 + 1) - iVar2;
            iVar4 = (iVar3 + 1) - iVar4;
          }
          else {
            lVar6 = 0;
            if ((*param_2 != 0) && (lVar6 = 0, *(int *)(*param_2 + 4) != 0)) {
              lVar6 = param_2[1];
            }
            uVar1 = FUN_100323e20(lVar6);
            iVar2 = (iVar7 + 1) - iVar2;
            iVar4 = (iVar3 + 1) - iVar4;
            FUN_100df99c0("","prl_client_app",4,"GOT IMAGE FOR DISPLAY %d, SIZE %dx%d",uVar1,iVar2,
                          CONCAT44(uVar9,iVar4));
          }
          QImage::QImage(local_68,local_38,iVar2,iVar4,local_3c,4,0,0);
          QImage::convertToFormat(param_1,local_68,6,0);
          QImage::~QImage(local_68);
          return param_1;
        }
      }
    }
  }
  QImage::QImage(param_1);
  return param_1;
}

