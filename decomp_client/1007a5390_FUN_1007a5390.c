
undefined1 (*) [16] FUN_1007a5390(undefined1 (*param_1) [16],long param_2,undefined8 param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  QIODevice local_b8 [32];
  QArrayData *local_98;
  QImage local_90 [32];
  QPixmap local_70 [32];
  QBuffer local_50 [16];
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *param_1 = auVar7;
  param_1[1] = auVar7;
  *(undefined **)param_1[2] = puVar1;
  *(undefined **)param_1[3] = puVar1;
  uVar3 = FUN_10018f860(param_3);
  *(undefined4 *)(param_1[3] + 0xc) = uVar3;
  uVar3 = FUN_10018f890(param_3);
  *(undefined4 *)(param_1[3] + 8) = uVar3;
  QPixmap::QPixmap(local_70);
  uVar3 = FUN_10018a9d0(param_3);
  switch(uVar3) {
  case 0x30000001:
  case 0x30000002:
    *(undefined4 *)(param_1[2] + 8) = 0;
    break;
  case 0x30000004:
    *(undefined4 *)(param_1[2] + 8) = 1;
    break;
  case 0x30000005:
  case 0x3000000c:
  case 0x3000000d:
    *(undefined4 *)(param_1[2] + 8) = 2;
    break;
  case 0x30000006:
  case 0x30000009:
  case 0x30000010:
    *(undefined4 *)(param_1[2] + 8) = 3;
  }
  uVar6 = 0;
  if ((*(long *)(param_2 + 0x138) != 0) &&
     (uVar6 = 0, *(int *)(*(long *)(param_2 + 0x138) + 4) != 0)) {
    uVar6 = *(undefined8 *)(param_2 + 0x140);
  }
  FUN_100354220(local_90,uVar6);
  cVar2 = QImage::isNull();
  if (cVar2 != '\0') goto LAB_1007a55d8;
  QPixmap::fromImage(local_b8,local_90,0);
  local_40 = (QArrayData *)puVar1;
  QBuffer::QBuffer(local_50,(QByteArray *)&local_40,(QObject *)0x0);
  QBuffer::open(local_50,2);
  QPixmap::save(local_b8,(char *)local_50,0x1dbf6fd);
  QByteArray::toBase64();
  QBuffer::~QBuffer(local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a5510;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1007a5510:
  pQVar5 = local_98 + *(long *)(local_98 + 0x10);
  if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_98 + 4) != 0)) {
    lVar4 = 0;
    do {
      if (pQVar5[lVar4] == (QArrayData)0x0) break;
      lVar4 = lVar4 + 1;
    } while ((uint)lVar4 < *(uint *)(local_98 + 4));
    if ((int)lVar4 == -1) {
      _strlen((char *)pQVar5);
    }
  }
  QString::fromUtf8_helper((char *)&local_38,(int)pQVar5);
  QString::operator=((QString *)(param_1[1] + 8),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a5596;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007a5596:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007a55cc;
    }
    QArrayData::deallocate(local_98,1,8);
  }
LAB_1007a55cc:
  QPixmap::~QPixmap((QPixmap *)local_b8);
LAB_1007a55d8:
  QImage::~QImage(local_90);
  QPixmap::~QPixmap(local_70);
  return param_1;
}

