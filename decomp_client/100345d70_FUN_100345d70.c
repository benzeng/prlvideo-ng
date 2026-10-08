
undefined1 FUN_100345d70(undefined8 param_1,double param_2,long param_3,int *param_4,long param_5)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  QWidget *pQVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  double extraout_XMM0_Qa;
  double dVar11;
  double dVar12;
  double local_78;
  double local_70;
  QWidget local_68 [48];
  undefined8 local_38;
  
  local_38 = 0;
  uVar3 = 0;
  if ((*(long *)(param_3 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_3 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_3 + 0x18);
  }
  uVar3 = FUN_100319c50(uVar3);
  cVar2 = FUN_100331100(uVar3,&local_38);
  lVar4 = *(long *)(param_3 + 0x10);
  if (cVar2 == '\0') {
    uVar3 = 0;
    if ((lVar4 != 0) && (uVar3 = 0, *(int *)(lVar4 + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_3 + 0x18);
    }
    lVar4 = FUN_100356ef0(param_4,uVar3);
    uVar10 = 0;
    if (lVar4 != 0) {
      lVar5 = FUN_100323e30(lVar4,0);
      if (lVar5 != 0) {
        pQVar6 = (QWidget *)FUN_100379860(lVar5);
        if (pQVar6 == (QWidget *)0x0) {
          uVar10 = 0;
        }
        else {
          uVar3 = FUN_100325fd0(lVar4);
          WidgetUtils::getWidgetTransformMatrix(local_68);
          uVar10 = 1;
          if (param_5 != 0) {
            do {
              *param_4 = *param_4 - (int)uVar3;
              param_4[1] = param_4[1] - (int)((ulong)uVar3 >> 0x20);
              uVar7 = QMatrix::map((QPoint *)local_68);
              local_78 = (double)(int)uVar7;
              local_70 = (double)(int)((ulong)uVar7 >> 0x20);
              dVar11 = (double)WidgetUtils::mapToGlobal(pQVar6,(QPointF *)&local_78);
              param_2 = param_2 + DAT_100e110f0;
              *(ulong *)param_4 = CONCAT44((int)param_2,(int)(dVar11 + DAT_100e110f0));
              param_4 = param_4 + 2;
              param_5 = param_5 + -1;
            } while (param_5 != 0);
            uVar10 = 1;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0;
    if ((lVar4 != 0) && (uVar3 = 0, *(int *)(lVar4 + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_3 + 0x18);
    }
    uVar3 = FUN_100319c50(uVar3);
    FUN_100331180(uVar3);
    dVar1 = DAT_100e110f0;
    dVar11 = DAT_100e110e0;
    uVar10 = 1;
    if (param_5 != 0) {
      param_4 = param_4 + 1;
      do {
        dVar12 = (double)param_4[-1] / extraout_XMM0_Qa;
        if (0.0 <= dVar12) {
          iVar8 = (int)(dVar12 + dVar1);
        }
        else {
          iVar8 = (int)(dVar12 + dVar11);
          iVar8 = (int)((dVar12 - (double)iVar8) + dVar1) + iVar8;
        }
        dVar12 = (double)*param_4 / extraout_XMM0_Qa;
        if (0.0 <= dVar12) {
          iVar9 = (int)(dVar12 + dVar1);
        }
        else {
          iVar9 = (int)(dVar12 + dVar11);
          iVar9 = (int)((dVar12 - (double)iVar9) + dVar1) + iVar9;
        }
        *(ulong *)(param_4 + -1) =
             CONCAT44((int)((double)(iVar9 + local_38._4_4_) + dVar1),
                      (int)((double)(iVar8 + (int)local_38) + dVar1));
        param_4 = param_4 + 2;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return uVar10;
}

