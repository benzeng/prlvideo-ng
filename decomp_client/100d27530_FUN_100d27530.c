
undefined4 * FUN_100d27530(QString *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 local_64;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  cVar1 = QDomNode::isNull();
  if (cVar1 != '\0') {
    return (undefined4 *)0x0;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("enabled",7);
  cVar1 = QDomElement::hasAttribute(param_1);
  bVar2 = 1;
  if (cVar1 != '\0') {
    local_48 = (QArrayData *)QString::fromAscii_helper("enabled",7);
    local_50 = (QArrayData *)PTR_shared_null_1021e1288;
    QDomElement::attribute(&local_40,param_1);
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("true",4);
    bVar2 = operator==(&local_40,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d27609;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100d27609:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d27639;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100d27639:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d27669;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100d27669:
    bVar2 = bVar2 ^ 1;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100d2769d;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100d2769d:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d276cd;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100d276cd:
  puVar3 = (undefined4 *)0x0;
  if (bVar2 == 0) {
    local_60 = (QArrayData *)PTR_shared_null_1021e1288;
    cVar1 = FUN_100d25fb0(param_1,param_2,2,&local_60,&local_64);
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)0x0;
      if (2 < DAT_10230ffd0) {
        puVar3 = (undefined4 *)0x0;
        FUN_100df99c0("","VBoxVmModel",3,"Floppy image source not found");
      }
    }
    else {
      puVar3 = operator_new(0x18);
      *puVar3 = 0xffffffff;
      puVar3[1] = 0xffffffff;
      *(QArrayData **)(puVar3 + 2) = local_60;
      if (1 < *(int *)local_60 + 1U) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
      }
      puVar3[4] = local_64;
    }
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return puVar3;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
  return puVar3;
}

