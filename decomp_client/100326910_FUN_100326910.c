
void FUN_100326910(long param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QImage local_88 [32];
  QPixmap local_68 [32];
  QImage local_48 [32];
  
  if (param_2 == 0x30000006) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_10037a2d0(local_68);
    cVar1 = QPixmap::isNull();
    if (cVar1 == '\0') {
      QPixmap::toImage();
      FUN_100326b80(param_1,local_88);
      QImage::~QImage(local_88);
    }
    QPixmap::~QPixmap(local_68);
    return;
  }
  if (param_2 == 0x30000009) {
switchD_100326994_caseD_30000009:
    FUN_100326d00(param_1);
    goto switchD_100326994_caseD_30000002;
  }
  if (param_2 == 0x30000010) {
LAB_100326a2e:
    if (param_3 == 0x30000009) {
      return;
    }
    goto switchD_100326994_caseD_30000009;
  }
  QImage::QImage(local_48);
  FUN_100326b80(param_1,local_48);
  QImage::~QImage(local_48);
  if (0x3000000f < (int)param_2) {
    if (param_2 != 0x30000010) goto switchD_100326994_caseD_30000002;
    goto LAB_100326a2e;
  }
  switch(param_2) {
  case 0x30000001:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
    }
    uVar3 = 1;
    break;
  default:
    goto switchD_100326994_caseD_30000002;
  case 0x30000004:
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    if (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar2 = FUN_100319d30();
    if (iVar2 != 1) {
      return;
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
    }
    FUN_1003231d0(uVar4);
    if ((((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
        (param_3 == 0x3000000d)) && (*(long **)(param_1 + 0x78) != (long *)0x0)) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x70))();
    }
    goto switchD_100326994_caseD_30000002;
  case 0x30000005:
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x90) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x90) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x98);
    }
    uVar3 = 0;
    break;
  case 0x30000009:
    goto switchD_100326994_caseD_30000009;
  }
  FUN_100322e30(uVar4,uVar3);
switchD_100326994_caseD_30000002:
  if ((param_2 & 0xfffffff7) == 0x30000001) {
    DisplayGamma::setGamma(param_1 + 200,(ulong)*(uint *)(param_1 + 0x30) | 0x100000000,0,0);
  }
  return;
}

