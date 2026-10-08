
void FUN_100643e70(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_a8 [72];
  long local_60 [2];
  undefined1 local_50 [40];
  QVariant local_28;
  
  QObject::property((char *)&local_28);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_28);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  uVar3 = FUN_10063f730(param_1);
  FUN_100676150(local_a8,uVar3);
  if (*(int *)(local_60[0] + 4) != 0) {
    FUN_10061e1d0(*(undefined8 *)(param_1[9] + 0x88),local_60);
  }
  uVar3 = FUN_10063f730(param_1);
  iVar2 = FUN_100676120(uVar3);
  if ((iVar2 == 1) || (*(int *)(local_60[0] + 4) != 0)) {
    FUN_10061e0f0(*(undefined8 *)(param_1[9] + 0x88),0);
    uVar3 = FUN_10063f730(param_1);
    FUN_10067e2c0(uVar3);
    FUN_100644010(param_1);
  }
  FUN_100252c80(local_50);
  FUN_100252e70(local_a8);
  return;
}

