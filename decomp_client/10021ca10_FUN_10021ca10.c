
undefined8 FUN_10021ca10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  QVariant local_48;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80000009;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return 0x80000009;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0x80000009;
  }
  uVar2 = FUN_100152280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_28,uVar4);
  lVar3 = FUN_1001547d0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10021caa9;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10021caa9:
  if (lVar3 != 0) {
    uVar4 = FUN_10016f500(lVar3);
    FUN_10061abe0(&local_38,uVar4,0);
    iVar1 = QVariant::toInt((bool *)&local_38);
    if (iVar1 == 0) {
      QVariant::~QVariant(&local_38);
      return 0;
    }
    uVar4 = FUN_10016f500(lVar3);
    FUN_10061abe0(&local_48,uVar4,0);
    iVar1 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_38);
    if (iVar1 == -0x7ffeefa8) {
      return 0;
    }
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Invalid license status.");
    }
  }
  return 0x80000009;
}

