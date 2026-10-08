
void FUN_100537200(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long local_58;
  QVariant local_50;
  QVariant local_40;
  Data *local_30;
  undefined1 local_21;
  
  lVar1 = *(long *)(param_1 + 0x48);
  lVar2 = 0;
  if ((*(char **)(lVar1 + 0x28) != param_2) && (lVar2 = 1, *(char **)(lVar1 + 0x30) != param_2)) {
    if (*(char **)(lVar1 + 0x38) != param_2) {
      return;
    }
    lVar2 = (ulong)(*(char **)(lVar1 + 0x38) == param_2) * 2;
  }
  local_30 = (Data *)PTR_shared_null_1021e15e8;
  FUN_10053be20(&local_30,lVar1 + 0x28);
  FUN_10053be20(&local_30,*(long *)(param_1 + 0x48) + 0x30);
  FUN_10053be20(&local_30,*(long *)(param_1 + 0x48) + 0x38);
  if (DAT_102274218 == 0) {
    DAT_102274218 = FUN_10053bf90("QList<QRadioButton*>",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_40,DAT_102274218,&local_30,0);
  QObject::setProperty(param_2,(QVariant *)"buttonsWidgets");
  QVariant::~QVariant(&local_40);
  local_58 = lVar2;
  QVariant::QVariant(&local_50,4,&local_58,0);
  QObject::setProperty(param_2,(QVariant *)"buttonValue");
  QVariant::~QVariant(&local_50);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QListData::dispose(local_30);
  }
  return;
}

