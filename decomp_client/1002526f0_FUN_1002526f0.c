
void FUN_1002526f0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  QVariant local_38;
  
  if (param_2 < 0) goto LAB_1002527c1;
  lVar2 = QObject::sender();
  lVar2 = *(long *)(lVar2 + 0x28);
  QVariant::QVariant(&local_38,(QVariant *)(lVar2 + 0x18));
  iVar1 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  bVar3 = true;
  if (iVar1 == 0) {
LAB_10025277a:
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"New license registration result: %d",
                    *(undefined4 *)(lVar2 + 0x2c));
    }
  }
  else {
    if (1 < DAT_10230ffd0) {
      bVar3 = false;
      FUN_100df99c0("","prl_client_app",2,
                    "Failed to register new license: %d. Schedule manual registration.",iVar1);
      goto LAB_10025277a;
    }
    bVar3 = false;
  }
  if ((*(int *)(lVar2 + 0x2c) != 0) && (*(int *)(lVar2 + 0x2c) != -8)) {
    bVar3 = false;
  }
  if (bVar3) {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
LAB_1002527c1:
  FUN_100252810(param_1);
  return;
}

