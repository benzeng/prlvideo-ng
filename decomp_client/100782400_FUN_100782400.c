
void FUN_100782400(undefined8 param_1,byte *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  QDateTime local_50;
  QDateTime local_48;
  QDateTime local_40;
  Data_conflict local_38;
  undefined4 local_30;
  QDateTime local_28;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if ((*(int *)((long)puVar1 + 0x14) != 0) && (*(uint *)(puVar1 + 4) != 0)) {
    uVar4 = *(uint *)((long)puVar1 + 0x24) ^ 0x11;
    for (puVar6 = *(undefined8 **)(puVar1[1] + ((ulong)uVar4 % (ulong)*(uint *)(puVar1 + 4)) * 8);
        puVar6 != puVar1; puVar6 = (undefined8 *)*puVar6) {
      if ((*(uint *)(puVar6 + 1) == uVar4) && (*(int *)((long)puVar6 + 0xc) == 0x11)) {
        if (puVar6 != puVar1) {
          QVariant::QVariant((QVariant *)&local_38,(QVariant *)(puVar6 + 2));
          goto LAB_100782476;
        }
        break;
      }
    }
  }
  local_30 = 0x80000000;
  local_38.field7 = 0;
LAB_100782476:
  QVariant::toDateTime();
  QVariant::~QVariant((QVariant *)&local_38);
  QDateTime::currentDateTime();
  cVar2 = QDateTime::isValid();
  if (cVar2 != '\0') {
    cVar2 = QDateTime::operator<(&local_28,&local_40);
    if (cVar2 != '\0') {
      QDateTime::addMSecs((longlong)&local_48);
      cVar2 = QDateTime::operator<(&local_40,&local_48);
      bVar5 = 1;
      if (cVar2 != '\0') {
        bVar5 = (*param_2 & 0x20) >> 5;
      }
      QDateTime::~QDateTime(&local_48);
      if (bVar5 == 0) {
        FUN_1007821f0(param_1,1,0);
        QDateTime::addMSecs((longlong)&local_50);
        uVar3 = QDateTime::msecsTo(&local_40);
        FUN_1007821f0(param_1,0,uVar3);
        QDateTime::~QDateTime(&local_50);
        goto LAB_1007824fa;
      }
    }
  }
  FUN_1007821f0(param_1,0,0);
LAB_1007824fa:
  QDateTime::~QDateTime(&local_40);
  QDateTime::~QDateTime(&local_28);
  return;
}

