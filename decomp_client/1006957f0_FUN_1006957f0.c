
void FUN_1006957f0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QObject::property((char *)&local_48);
  if ((local_48.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    QVariant::toBitArray();
    iVar2 = *(int *)(local_50 + 4);
    if (iVar2 != 0) {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",3,"  Property array %s:",param_2);
        iVar2 = *(int *)(local_50 + 4);
      }
      if ((int)(char)local_50[*(long *)(local_50 + 0x10)] < iVar2 * 8) {
        iVar2 = 0;
        do {
          if ((2 < DAT_10230ffd0) &&
             (((uint)(byte)local_50[(long)((iVar2 >> 3) + 1) + *(long *)(local_50 + 0x10)] &
              1 << ((byte)iVar2 & 7)) != 0)) {
            uVar1 = QMetaEnum::valueToKey(param_3);
            FUN_100df99c0("[ACTION_MNG]","prl_client_app",3,"    %s",uVar1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_50 + 4) * 8 -
                         (int)(char)local_50[*(long *)(local_50 + 0x10)]);
      }
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100695934;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_100695934:
  QVariant::~QVariant(&local_48);
  return;
}

