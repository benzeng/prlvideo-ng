
void FUN_100478ec0(undefined8 *param_1,long *param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar4 = *param_3;
  if ((uVar4 & 1) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QString::operator=((QString *)(piVar5 + 2),(QString *)(*param_2 + 8));
    uVar4 = *param_3;
  }
  if ((uVar4 & 2) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QString::operator=((QString *)(piVar5 + 4),(QString *)(*param_2 + 0x10));
    uVar4 = *param_3;
  }
  if ((uVar4 & 4) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40();
      piVar5 = (int *)*param_1;
    }
    lVar2 = *param_2;
    *(undefined8 *)(piVar5 + 0xe) = *(undefined8 *)(lVar2 + 0x38);
    *(undefined8 *)(piVar5 + 0xc) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(piVar5 + 10) = *(undefined8 *)(lVar2 + 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(piVar5 + 8) = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(piVar5 + 6) = uVar3;
    uVar4 = *param_3;
  }
  if ((uVar4 & 8) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QString::operator=((QString *)(piVar5 + 0x10),(QString *)(*param_2 + 0x40));
    uVar4 = *param_3;
  }
  if ((uVar4 & 0x10) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QByteArray::operator=((QByteArray *)(piVar5 + 0x12),(QByteArray *)(*param_2 + 0x48));
    uVar4 = *param_3;
  }
  if ((uVar4 & 0x20) != 0) {
    iVar1 = *(int *)(*param_2 + 0x58);
    piVar6 = (int *)*param_1;
    if (*piVar6 != 1) {
      FUN_100031c40();
      piVar6 = (int *)*param_1;
      uVar4 = *param_3;
    }
    piVar6[0x16] = iVar1;
  }
  if ((uVar4 & 0x40) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QDateTime::operator=((QDateTime *)(piVar5 + 0x14),(QDateTime *)(*param_2 + 0x50));
    uVar4 = *param_3;
  }
  if ((uVar4 & 0x80) != 0) {
    piVar6 = (int *)*param_1;
    piVar5 = (int *)0x0;
    if ((piVar6 != (int *)0x0) && (piVar5 = piVar6, *piVar6 != 1)) {
      FUN_100031c40(param_1);
      piVar5 = (int *)*param_1;
    }
    QString::operator=((QString *)(piVar5 + 0x18),(QString *)(*param_2 + 0x60));
    uVar4 = *param_3;
  }
  if ((uVar4 & 0x100) != 0) {
    piVar6 = (int *)*param_1;
    if (*piVar6 != 1) {
      FUN_100031c40(param_1);
      piVar6 = (int *)*param_1;
    }
    piVar6[0x1a] = *(int *)(*param_2 + 0x68);
  }
  return;
}

