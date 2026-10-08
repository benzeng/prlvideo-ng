
undefined4 * FUN_100d267d0(QString *param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 *puVar9;
  QArrayData *pQVar10;
  char *pcVar11;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == (long *)0x0) {
    return (undefined4 *)0x0;
  }
  cVar3 = QDomNode::isNull();
  if (cVar3 == '\0') {
    local_40 = (QArrayData *)QString::fromAscii_helper("bus",3);
    cVar3 = QDomElement::hasAttribute(param_1);
    bVar4 = 1;
    if (cVar3 != '\0') {
      local_48 = (QArrayData *)QString::fromAscii_helper("hardDisk",8);
      bVar4 = QDomElement::hasAttribute(param_1);
      bVar4 = bVar4 ^ 1;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26886;
        }
        QArrayData::deallocate(local_48,2,8);
      }
    }
LAB_100d26886:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d268b6;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_100d268b6:
    if (bVar4 == 0) {
      pcVar1 = *(code **)(*param_2 + 0x10);
      local_58 = (QArrayData *)QString::fromAscii_helper("hardDisk",8);
      puVar2 = PTR_shared_null_1021e1288;
      local_60 = (QArrayData *)PTR_shared_null_1021e1288;
      QDomElement::attribute(&local_50,param_1);
      lVar8 = (*pcVar1)(param_2,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26969;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100d26969:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26999;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100d26999:
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d269c9;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100d269c9:
      if (lVar8 == 0) {
        pcVar11 = "VBox: Could not get disk descriptor";
        goto LAB_100d268d0;
      }
      puVar9 = operator_new(0x18);
      local_70 = (QArrayData *)QString::fromAscii_helper("bus",3);
      local_78 = (QArrayData *)puVar2;
      QDomElement::attribute(&local_68,param_1);
      uVar5 = FUN_100d239c0(&local_68);
      local_88 = (QArrayData *)QString::fromAscii_helper("channel",7);
      local_90 = (QArrayData *)puVar2;
      QDomElement::attribute(&local_80,param_1);
      uVar6 = QString::toInt((bool *)&local_80,0);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("device",6);
      QDomElement::attribute(&local_98,param_1);
      uVar7 = QString::toInt((bool *)&local_98,0);
      *puVar9 = uVar5;
      puVar9[1] = uVar6;
      puVar9[2] = uVar7;
      *(long *)(puVar9 + 4) = lVar8;
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26b1c;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_100d26b1c:
      if (*(int *)puVar2 != -1) {
        if (*(int *)puVar2 != 0) {
          LOCK();
          *(int *)puVar2 = *(int *)puVar2 + -1;
          local_31 = *(int *)puVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26b52;
        }
        QArrayData::deallocate((QArrayData *)puVar2,2,8);
      }
LAB_100d26b52:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26b92;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_100d26b92:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_31 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26bc4;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_100d26bc4:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26bfa;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100d26bfa:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26c2c;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_100d26c2c:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26c5e;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_100d26c5e:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d26c8e;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100d26c8e:
      if (*(int *)local_70 == -1) {
        return puVar9;
      }
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return puVar9;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_70,2,8);
      return puVar9;
    }
  }
  pcVar11 = "VBox: Wrong hard disk element";
LAB_100d268d0:
  FUN_100df99c0("","VBoxVmModel",0,pcVar11);
  return (undefined4 *)0x0;
}

