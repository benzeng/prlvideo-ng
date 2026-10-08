
void FUN_10022cb60(CTaskGenericId *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  QVariant local_a8;
  int *local_98;
  QString local_90;
  int *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  uint local_40;
  undefined1 local_31;
  
  CTaskGenericId::CTaskGenericId(param_1,0x13);
  *(undefined ***)param_1 = &PTR_FUN_102271a50;
  FUN_10022cef0(&local_58,param_2);
  local_50 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 8) * 8);
  local_48 = (undefined8 *)(local_58 + 0x10 + (long)*(int *)(local_58 + 0xc) * 8);
  local_40 = 1;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      puVar1 = (undefined8 *)*local_50;
      local_98 = (int *)*puVar1;
      if (1 < *local_98 + 1U) {
        LOCK();
        *local_98 = *local_98 + 1;
        local_31 = *local_98 != 0;
        UNLOCK();
      }
      local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1[1];
      if (1 < *(int *)local_90.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
      }
      local_88 = (int *)puVar1[2];
      if (1 < *local_88 + 1U) {
        LOCK();
        *local_88 = *local_88 + 1;
        local_31 = *local_88 != 0;
        UNLOCK();
      }
      local_80 = puVar1[3];
      local_78 = puVar1[4];
      local_68 = (QArrayData *)puVar1[6];
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      local_60 = (QArrayData *)puVar1[7];
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
      local_70 = *(undefined4 *)(puVar1 + 5);
      if (local_40 != 0) {
        QVariant::QVariant(&local_a8,&local_90);
        CTaskGenericId::addParam((QVariant *)param_1);
        QVariant::~QVariant(&local_a8);
        local_40 = 0;
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10022cce1;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10022cce1:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10022cd11;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10022cd11:
      FUN_100086a10(&local_98);
      local_50 = local_50 + 1;
      uVar2 = local_40 ^ 1;
      bVar3 = local_40 != 1;
      local_40 = uVar2;
    } while ((bVar3) && (local_50 != local_48));
  }
  FUN_10022ca00(&local_58);
  return;
}

