
undefined8 * FUN_100478080(undefined8 param_1,long *param_2,uint *param_3,QString *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  QDateTime local_38 [8];
  
  puVar2 = (undefined8 *)FUN_100477f00(param_1,*param_2 + 8,1);
  uVar5 = *param_3;
  piVar3 = (int *)*puVar2;
  if (piVar3[0x16] == 0) {
    piVar4 = (int *)0x0;
    if ((piVar3 != (int *)0x0) && (piVar4 = piVar3, *piVar3 != 1)) {
      FUN_100031c40(puVar2);
      piVar4 = (int *)*puVar2;
    }
    uVar5 = uVar5 | 0x80;
    QString::operator=((QString *)(piVar4 + 0x18),param_4);
  }
  FUN_100478ec0(puVar2,param_2,param_3);
  uVar1 = *param_3;
  if ((uVar1 & 0x40) == 0) {
    QDateTime::currentDateTime();
    FUN_100479760(puVar2,local_38);
    uVar5 = uVar5 | 0x40;
    QDateTime::~QDateTime(local_38);
    uVar1 = *param_3;
  }
  if ((uVar1 & 0x20) == 0) {
    piVar3 = (int *)*puVar2;
    if (piVar3[0x16] != 1) {
      uVar5 = uVar5 | 0x20;
    }
    if (*piVar3 != 1) {
      FUN_100031c40(puVar2);
      piVar3 = (int *)*puVar2;
    }
    piVar3[0x16] = 1;
  }
  *param_3 = uVar5;
  FUN_1004781a0(param_1,puVar2,param_3);
  return puVar2;
}

